// Copyright 2025 Filipe Coelho <falktx@falktx.com>
// SPDX-License-Identifier: ISC

// known constants
const maxBufferSize = 2048;
const sizeof_float = 4;
const sizeof_ptr = 4;

// function to setup wasm + emscripten module options for offline fetch
const createWasmOpts = (wasmBlob, postRunCallback) => {
    return {
        // override instantiateWasm to use previously retrieved data, `fetch` is not allowed here
        instantiateWasm: (imports, successCallback) => {
            WebAssembly.instantiate(wasmBlob, imports).then(output => {
                // Taken from emscripten example:
                // When overriding instantiateWasm, in asan builds, we also need
                // to take care of creating the WasmOffsetConverter
                if (typeof WasmOffsetConverter != "undefined") {
                    wasmOffsetConverter = new WasmOffsetConverter(wasmBlob, output.module);
                }

                successCallback(output.instance, output.module);
            }).catch(error => {
                console.log('Failed to instantiate:', error);
            });

            return {};
        },
        postRun: postRunCallback,
    };
};

// class that holds a mono audio plugin instance
// see https://github.com/DISTRHO/MAPI for the API used here
class MapiProcessorInstance {
    constructor(module) {
        this.module = module;
        this.handle = module._mapi_create(sampleRate);
        this.enabled = true;

        this.audioData = module._malloc(sizeof_float * maxBufferSize);
        this.audioPtrs = module._malloc(sizeof_ptr);
        module.HEAPU32[this.audioPtrs + (0 << 2) >> 2] = this.audioData;
    }

    destroy() {
        console.log("MapiProcessorInstance::destroy start");
        // this.module._free(this.audioData);
        // this.module._free(this.audioPtrs);
        this.module._mapi_destroy(this.handle);
        console.log("MapiProcessorInstance::destroy done");
    }

    param(index, value) {
        this.module._mapi_set_parameter(this.handle, index, value);
    }

    process(buffer) {
        if (! this.enabled)
            return;

        for (var i = 0; i < buffer.length; ++i)
            this.module.HEAPF32[this.audioData + (i << 2) >> 2] = buffer[i];

        this.module._mapi_process(this.handle, this.audioPtrs, this.audioPtrs, buffer.length);

        for (var i = 0; i < buffer.length; ++i)
            buffer[i] = this.module.HEAPF32[this.audioData + (i << 2) >> 2];
    }
};

// worklet processor implementation
class MapiWorkletProcessor extends AudioWorkletProcessor {
    constructor(options) {
        super(options);

        // validity checks
        if (options.numberOfInputs != options.numberOfOutputs)
            throw Error('Mis-matching IO, number of inputs must match outputs');
        if (options.numberOfInputs != 1)
            throw Error('Invalid IO, must be mono');

        // helper for chromium-based browsers that destroy worklets once their `process` return false
        this.destroyed = false;

        // instances of audio plugins (chain of FX)
        this.instances = {};

        // bi-directional port communication
        this.port.onmessage = event => {
            switch (event.data.type)
            {
            case 'init':
                this.init(event.data);
                break;
            case 'destroy':
                this.destroy();
                break;
            case 'enabled':
                this.enabled(event.data);
                break;
            case 'param':
                this.param(event.data);
                break;
            }
        };
    }

    destroy() {
        console.log("MapiWorkletProcessor::destroy");
        if (this.instances.bbba) {
            this.instances.bbba.destroy();
        }
        if (this.instances.renooice) {
            this.instances.renooice.destroy();
        }
        this.instances = {};
        this.destroyed = true;
    }

    init(data) {
        // execute JS to expose the emscripten module functions
        const jsfn_bbba = new Function(data.bbba.js + 'return mapi_bbba;');
        const jsfn_renooice = new Function(data.renooice.js + 'return mapi_renooice;');

        const create_module_bbba = jsfn_bbba.call();
        const create_module_renooice = jsfn_renooice.call();

        // create wasm opts
        const opts_bbba = createWasmOpts(data.bbba.wasm, (module) => {
            this.instances.bbba = new MapiProcessorInstance(module);
            if (this.instances.renooice)
                this.port.postMessage({ type: 'loaded' });
        });
        const opts_renooice = createWasmOpts(data.renooice.wasm, (module) => {
            this.instances.renooice = new MapiProcessorInstance(module);
            if (this.instances.bbba)
                this.port.postMessage({ type: 'loaded' });
        });

        // create the wasm modules and instances
        create_module_bbba(opts_bbba);
        create_module_renooice(opts_renooice);
    }

    enabled(data) {
        if (!this.instances[data.module]) {
            console.error('invalid module, possible choices:', Object.keys(this.instances));
            return;
        }

        this.instances[data.module].enabled = !!data.enabled;
        console.log('module status changed:', data.module, this.instances[data.module].enabled);
    }

    param(data) {
        if (!this.instances.bbba)
            return;

        this.instances.bbba.param(data.index, data.value);
    }

    process(inputs, outputs, parameters) {
        if (this.destroyed) {
            console.log("asked to be destroyed");
            return false;
        }

        if (!this.instances.bbba || !this.instances.renooice)
            return true;

        const input = inputs[0];
        const output = outputs[0];

        // IO check
        if (input.length == 0 || output.length == 0)
            // can be zero if stream is not connected yet
            return true;

        // use in-place processing
        const buffer = output[0];
        // TODO use something like output.copyFrom(input);
        for (var i = 0; i < buffer.length; ++i)
            buffer[i] = input[0][i];

        this.instances.renooice.process(buffer);
        this.instances.bbba.process(buffer);

        return true;
    }
};

registerProcessor("mapi-proc", MapiWorkletProcessor);
