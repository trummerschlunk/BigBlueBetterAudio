// Copyright 2025 Filipe Coelho <falktx@falktx.com>
// SPDX-License-Identifier: ISC

// known constants
const nominalBufferSize = 128;
const sizeof_float = 4;
const sizeof_ptr = 4;

// function to setup wasm + emscripten module options for offline fetch
const createWasmOpts = (wasmBlob, postRunCallback) => {
    return {
        // override to use previously retrieved blob data, as `fetch` is not allowed in worklets
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

        this.audioData = module._malloc(sizeof_float * nominalBufferSize);
        this.audioPtrs = module._malloc(sizeof_ptr);
        module.HEAPU32[this.audioPtrs + (0 << 2) >> 2] = this.audioData;
    }

    param(index, value) {
        this.module._mapi_set_parameter(this.handle, index, value);
    }

    process(buffer, bufferSize, bufferOffset) {
        if (! this.enabled)
            return;

        for (let i = 0; i < bufferSize; ++i)
            this.module.HEAPF32[this.audioData + (i << 2) >> 2] = buffer[bufferOffset + i];

        this.module._mapi_process(this.handle, this.audioPtrs, this.audioPtrs, bufferSize);

        for (let i = 0; i < bufferSize; ++i)
            buffer[bufferOffset + i] = this.module.HEAPF32[this.audioData + (i << 2) >> 2];
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

        // workaround for Chromium-based browsers, return true in `process` until disconnected
        this.disconnected = false;

        // MAPI processor instance
        this.bbba = null;

        // bi-directional port communication
        this.port.onmessage = event => {
            switch (event.data.type)
            {
            case 'init':
                this.init(event.data);
                break;
            case 'enable':
                this.enable(event.data);
                break;
            case 'param':
                this.param(event.data);
                break;
            case 'destroy':
                this.destroy();
                break;
            }
        };
    }

    init(data) {
        // execute JS to expose the emscripten load module function
        const jsfn_bbba = new Function(data.js + 'return mapi_bbba;');
        const create_module_bbba = jsfn_bbba.call();

        // create wasm opts for offline loading
        const opts = createWasmOpts(data.wasm, (module) => {
            this.bbba = new MapiProcessorInstance(module);
            this.port.postMessage({ type: 'loaded' });
        });

        // create the wasm module and instance
        create_module_bbba(opts);
    }

    enable(data) {
        if (!this.bbba) {
            console.error('BBBA wasm is not loaded yet!');
            return;
        }

        this.bbba.enabled = !!data.enable;
        console.log('BBBA status changed:', this.bbba.enabled);
    }

    param(data) {
        if (!this.bbba) {
            console.error('BBBA wasm is not loaded yet!');
            return;
        }

        this.bbba.param(data.index, data.value);
    }

    destroy() {
        this.disconnected = true;
        this.bbba = null;
    }

    process(inputs, outputs, parameters) {
        if (this.disconnected)
            return false;
        if (!this.bbba)
            return true;

        const input = inputs[0];
        const output = outputs[0];

        // IO check, can be zero if stream is not connected yet
        if (input.length == 0 || output.length == 0)
            return true;

        // use in-place processing
        const buffer = output[0];
        buffer.set(input[0]);

        for (let offset = 0; offset < buffer.length; offset += nominalBufferSize)
            this.bbba.process(buffer, Math.min(nominalBufferSize, buffer.length - offset), offset);

        // reuse mono buffer if stereo
        if (output.length == 2)
            output[1].set(buffer);

        return true;
    }
};

registerProcessor("mapi-proc", MapiWorkletProcessor);
