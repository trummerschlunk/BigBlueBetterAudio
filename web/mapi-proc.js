// Copyright 2025 Filipe Coelho <falktx@falktx.com>
// SPDX-License-Identifier: ISC

class MapiProcessor extends AudioWorkletProcessor {
    constructor(options) {
        super(options);

        // the emscripten module
        this.module = null;

        // instance of an audio plugin
        this.handle = null;

        // wasm memory
        this.mem = {
            audioData: null,
            audioPtrs: null,
        };

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
                this.handle = module._mapi_create(sampleRate);

                const maxBufferSize = 512;
                const sizeof_float = 4;
                const sizeof_ptr = 4;

                this.mem.audioData = module._malloc(sizeof_float * maxBufferSize);
                this.mem.audioPtrs = module._malloc(sizeof_ptr);
                module.HEAPU32[this.mem.audioPtrs + (0 << 2) >> 2] = this.mem.audioData;
            },
        });
    }

    param(data) {
        if (!this.module || !this.handle) {
            return;
        }

        this.module._mapi_set_parameter(this.handle, data.index, data.value);
    }

    process(inputs, outputs, parameters) {
        if (!this.module || !this.handle) {
            return true;
        }

        const input = inputs[0];
        const output = outputs[0];

        // IO check
        if (input.length != 1) {
            // can be zero if stream is not connected yet
            return false;
        }
        if (output.length != 1) {
            console.error('invalid number of output channels!', output.length);
            return false;
        }

        // buffer size check
        let bufferSize = 0;
        for (var i = 0; i < input.length; ++i) {
            var buffer = input[i];
            if (bufferSize == 0) {
                bufferSize = buffer.length;
            } else if (bufferSize != buffer.length) {
                console.error('inconsistent buffer size!', buffer.length, bufferSize);
                return false;
            }
        }
        for (var i = 0; i < output.length; ++i) {
            var buffer = output[i];
            if (bufferSize == 0) {
                bufferSize = buffer.length;
            } else if (bufferSize != buffer.length) {
                console.error('inconsistent buffer size!', buffer.length, bufferSize);
                return false;
            }
        }
        if (bufferSize == 0) {
            console.error('nothing to process!');
            return false;
        }

        const module = this.module;
        const handle = this.handle;
        const mem = this.mem;

        // copy audio input into wasm buffers
        for (var i = 0; i < input.length; ++i) {
            var buffer = input[i];
            var offset = buffer.length * i;
            for (var j = 0; j < buffer.length; ++j)
                module.HEAPF32[mem.audioData + ((offset + j) << 2) >> 2] = buffer[j];
        }

        // process wasm module
        module._mapi_process(handle, mem.audioPtrs, mem.audioPtrs, bufferSize);

        // copy wasm output to system output
        for (var i = 0; i < output.length; ++i) {
            var buffer = output[i];
            var offset = buffer.length * i;
            for (var j = 0; j < buffer.length; ++j) {
                buffer[j] = module.HEAPF32[mem.audioData + ((offset + j) << 2) >> 2];
            }
        }

        return true;
    }
};

registerProcessor("mapi-proc", MapiProcessor);
