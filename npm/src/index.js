// Copyright 2026 Filipe Coelho <falktx@falktx.com>
// SPDX-License-Identifier: GPL-3.0-or-later

const mapiWasmBlob = new Uint8Array(@BBBA_WASM_BLOB@);
const mapiWasmJs = atob('@BBBA_WASM_JS@');
const mapiNoSimdWasmJs = new Uint8Array(@BBBA_NOSIMD_WASM_BLOB@);
const mapiNoSimdWasmBlob = atob('@BBBA_NOSIMD_WASM_JS@');
const mapiProcJs = atob('@MAPI_PROC_JS@');

const previouslyLoaded = false;

// create audio worklet or script processor
// we rely on script processor because worklets must run at 128 block size, which is not possible on low-spec machines
const createWasmProcessor = (audioContext, properties) => {
    return new Promise((resolve, reject) => {
        if (typeof(WebAssembly) === 'undefined') {
            reject('WebAssembly unsupported');
            return;
        }
        if (! WebAssembly.validate(new Uint8Array([0,97,115,109,1,0,0,0,2,8,1,1,97,1,98,3,127,1,6,6,1,127,1,65,0,11,7,5,1,1,97,3,1]))) {
            reject('Importable/Exportable mutable globals unsupported');
            return;
        }

        const simdSupported = WebAssembly.validate(new Uint8Array([0,97,115,109,1,0,0,0,1,5,1,96,0,1,123,3,2,1,0,10,10,1,8,0,65,0,253,15,253,98,11]));
        const wasmBlob = simdSupported ? mapiWasmBlob : mapiNoSimdWasmBlob;
        const wasmJs = simdSupported ? mapiWasmJs : mapiNoSimdWasmJs;

        const intensity = /*typedef(properties.intensity) === 'undefined' ? 100 :*/ properties.intensity;

        if (! navigator.userAgent.match(/Android/i)) {
            console.log("la-call: using audio worklet");

            const moduleLoaded = () => {
                previouslyLoaded = true;

                const options = {
                    channelCount: 1,
                    numberOfInputs: 1,
                    numberOfOutputs: 1,
                    outputChannelCount: [1],
                };
                const processor = new AudioWorkletNode(audioContext, 'mapi-proc', options);
                processor.port.onmessage = event => {
                    if (event.data.type == 'loaded') {
                        processor.port.postMessage({ type: 'param', symbol: "intensity", value: intensity });
                        resolve(processor);
                    }
                    else if (event.data.type == 'error') {
                        reject(event.data.error);
                    }
                };
                processor.port.postMessage({ type: 'init', wasm: wasmBlob, js: wasmJs });
            };

            if (previouslyLoaded) {
                moduleLoaded();
            } else {
                const processorBlob = new Blob([mapiProcJs], { type: 'text/javascript' });
                const processorURL = URL.createObjectURL(processorBlob);

                audioContext.audioWorklet.addModule(processorURL)
                .then(moduleLoaded)
                .catch(reject);
            }
            return;
        }

        // NOTE fallback with createScriptProcessor follows here
        console.log("la-call: using script processor");

        // execute JS to expose the emscripten load module function
        const jsfn_bbba = new Function(wasmJs + 'return mapi_bbba;');
        const create_module_bbba = jsfn_bbba.call();

        const bufferSize = 4096;
        const numberOfInputs = 1;
        const numberOfOutputs = 1;
        const processor = audioContext.createScriptProcessor(bufferSize, numberOfInputs, numberOfOutputs);

        // create the wasm module and instance
        create_module_bbba({
            instantiateWasm: (imports, successCallback) => {
                WebAssembly.instantiate(wasmBlob, imports)
                .then(output => {
                    successCallback(output.instance, output.module);
                })
                .catch(reject);
                return {};
            },
            postRun: function(module) {
                const handle = module._mapi_create(audioContext.sampleRate, bufferSize);

                const audioData = module._malloc(module.HEAPF32.BYTES_PER_ELEMENT * bufferSize);
                const audioPtrs = module._malloc(module.HEAPU32.BYTES_PER_ELEMENT);
                module.HEAPU32[audioPtrs + (0 << 2) >> 2] = audioData;

                const maxSymbolLength = 255;
                const csymbolData = module._malloc(maxSymbolLength);
                const csymbol = (symbol) => {
                    const len = Math.min(maxSymbolLength, module.lengthBytesUTF8(symbol) + 1);
                    module.stringToUTF8(symbol, csymbolData, len);
                    return csymbolData;
                }

                module._mapi_set_parameter(handle, csymbol("intensity"), intensity);

                let enabled = true;
                processor.onaudioprocess = function (e) {
                    if (! enabled) {
                        e.outputBuffer.copyToChannel(e.inputBuffer.getChannelData(0), 0);
                        return;
                    }

                    let buffer = e.inputBuffer.getChannelData(0);

                    for (let i = 0; i < bufferSize; ++i)
                        module.HEAPF32[audioData + (i << 2) >> 2] = buffer[i];

                    module._mapi_process(handle, audioPtrs, audioPtrs, bufferSize);

                    buffer = e.outputBuffer.getChannelData(0);
                    for (let i = 0; i < bufferSize; ++i)
                        buffer[i] = module.HEAPF32[audioData + (i << 2) >> 2];
                };

                // use same API as worklet for pushing changes
                processor.port = {
                    postMessage: (data) => {
                        switch (data.type)
                        {
                            case 'enable':
                                enabled = !!data.enable;
                                break;
                            case 'param':
                                module._mapi_set_parameter(handle, csymbol(data.symbol), data.value);
                                break;
                            case 'destroy':
                                break;
                        }
                    },
                };

                resolve(processor);
            },
        });
    });
};

export { createWasmProcessor };
