// Copyright 2025 Filipe Coelho <falktx@falktx.com>
// SPDX-License-Identifier: ISC

// known constants
const maxBufferSize = 2048;
const sizeof_float = 4;
const sizeof_ptr = 4;

// class that holds a mono audio plugin instance
class MapiProcessorInstance {
    constructor(module) {
        this.module = module;
        this.handle = module._mapi_create(sampleRate);

        this.audioData = module._malloc(sizeof_float * maxBufferSize);
        this.audioPtrs = module._malloc(sizeof_ptr);
        module.HEAPU32[this.audioPtrs + (0 << 2) >> 2] = this.audioData;
    }

    destructor() {
        module._free(this.audioData);
        module._free(this.audioPtrs);
        module._mapi_destroy(this.handle);
    }

    process(input, output, channelOffset) {
        // copy audio input into wasm buffers
        let buffer = input[channelOffset];
        for (var i = 0; i < buffer.length; ++i) {
            this.module.HEAPF32[this.audioData + (i << 2) >> 2] = buffer[i];
        }

        // process wasm module
        this.module._mapi_process(this.handle, this.audioPtrs, this.audioPtrs, buffer.length);

        // copy wasm output to auto output
        buffer = output[channelOffset];
        for (var i = 0; i < buffer.length; ++i) {
            buffer[i] = this.module.HEAPF32[this.audioData + (i << 2) >> 2];
        }
    }
};

// worklet processor implementation
class MapiWorkletProcessor extends AudioWorkletProcessor {
    constructor(options) {
        super(options);

        // save for future use
        this.numIO = Math.min(options.numberOfInputs, options.numberOfOutputs);

        // the emscripten module
        this.module = null;

        // instances of audio plugins
        this.instances = [];

        // bi-directional port communication
        this.port.onmessage = event => {
            switch (event.data.type)
            {
            case 'init':
                this.init(event.data);
                break;
            case 'param':
                this.param(event.data);
                break;
            }
        };
    }

    init(data) {
        // execute JS to expose the emscripten module function
        const jsfn = new Function(data.js + 'return mapi_bbba;');
        const create_module = jsfn.call();

        // create the wasm module
        create_module({
            // override instantiateWasm to use previously retrieved data, `fetch` is not allowed here
            instantiateWasm: (imports, successCallback) => {
                WebAssembly.instantiate(data.wasm, imports).then(output => {
                    // Taken from emscripten example:
                    // When overriding instantiateWasm, in asan builds, we also need
                    // to take care of creating the WasmOffsetConverter
                    if (typeof WasmOffsetConverter != "undefined") {
                        wasmOffsetConverter = new WasmOffsetConverter(bytes, output.module);
                    }

                    successCallback(output.instance, output.module);
                }).catch(error => {
                    console.log('Failed to instantiate:', error);
                });

                return {};
            },
            postRun: module => {
                this.module = module;

                for (let i = 0; i < this.numIO; ++i) {
                    this.instances.push(new MapiProcessorInstance(module));
                }
            },
        });
    }

    param(data) {
        if (!this.module) {
            return;
        }

        for (let instance in this.instances) {
            this.module._mapi_set_parameter(instance.handle, data.index, data.value);
        }
    }

    process(inputs, outputs, parameters) {
        if (!this.module) {
            return false;
        }

        const input = inputs[0];
        const output = outputs[0];

        // IO check
        if (input.length == 0) {
            // can be zero if stream is not connected yet
            return false;
        }

        for (var i = 0; i < this.numIO; ++i) {
            this.instances[i].process(input, output, i);
        }

        return true;
    }
};

registerProcessor("mapi-proc", MapiWorkletProcessor);
