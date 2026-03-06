
// files loaded during loadWasmProcessorFiles
const loadedFiles = {
    // store first caught error
    error: null,
    // BBBA-mapi.wasm
    wasmBlob: null,
    // BBBA-mapi.js
    wasmJS: null,
    // mapi-proc.js
    worklet: null,
};

// function to setup wasm + emscripten module options for offline fetch
const createWasmOpts = (wasmBlob, postRunCallback, errorCallback) => {
    console.log("here 000xa");
    return {
        // override to use previously retrieved blob data, as `fetch` is not allowed in worklets
        instantiateWasm: (imports, successCallback) => {
            console.log("here 000ba");
            WebAssembly.instantiate(wasmBlob, imports).then(output => {
                console.log("here 000ca");
                successCallback(output.instance, output.module);
            }).catch(error => {
                errorCallback(error);
            });

            return {};
        },
        postRun: postRunCallback,
    };
};

// global audio processor so we can communicate with it
let audioProcessor = null;

// global functions for testing purposes
const setWasmProcessorEnabled = (enabled) => {
    if (audioProcessor) {
        // audioProcessor.port.postMessage({type: 'enable', enable: enabled});
    }
};

const setWasmProcessorParameter = (symbol, value) => {
    if (audioProcessor) {
        // audioProcessor.port.postMessage({type: 'param', symbol: symbol, value: value});
    }
};

// create an audio processor on top of a stream, trigger Promise resolve with a processed stream
const createWasmProcessorStream = (stream) => {
    // cleanup old processor
    if (audioProcessor) {
        audioProcessor.port.postMessage({type: 'destroy'});
        audioProcessor = null;
    }

    return new Promise((resolve, reject) => {
        // create audio context first
        const audioContext = new AudioContext();

        // function to load audio worklet, called once audio context is running
        const loadAudioWorklet = async () => {
            console.log("---------------------------------------------------------------- loadAudioWorklet start");
            const processorBlob = new Blob([loadedFiles.worklet], { type: 'text/javascript' });
            const processorURL = URL.createObjectURL(processorBlob);

            audioContext.audioWorklet.addModule(processorURL).then(() => {
                const contextSource = audioContext.createMediaStreamSource(stream);
                const contextDestination = audioContext.createMediaStreamDestination();

                const audioProcessorOptions = {
                    channelCount: 1,
                    numberOfInputs: 1,
                    numberOfOutputs: 1,
                    outputChannelCount: [1],
                };
                if (true) {
                    console.log("here 0001");

                    // execute JS to expose the emscripten load module function
                    const jsfn_bbba = new Function(loadedFiles.wasmJS + 'return mapi_bbba;');
                    const create_module_bbba = jsfn_bbba.call();
                    console.log("here 0002");

                    const bufferSize = 2048;
                    audioProcessor = audioContext.createScriptProcessor(bufferSize, 1, 1);
                    console.log("here 0003");

                    // create wasm opts for offline loading
                    const opts = createWasmOpts(loadedFiles.wasmBlob,
                        (module) => {
                            console.log("here 0003a");
                            const handle = module._mapi_create(48000, bufferSize);
                            console.log("here 0003b");

                            const audioData = module._malloc(module.HEAPF32.BYTES_PER_ELEMENT * bufferSize);
                            const audioPtrs = module._malloc(module.HEAPU32.BYTES_PER_ELEMENT);
                            module.HEAPU32[audioPtrs + (0 << 2) >> 2] = audioData;

                            console.log("here 0004");
                            audioProcessor.onaudioprocess = function (e) {

                                var buffer = e.inputBuffer.getChannelData(0);
                                for (let i = 0; i < bufferSize; ++i)
                                    module.HEAPF32[audioData + (i << 2) >> 2] = buffer[i];

                                module._mapi_process(handle, audioPtrs, audioPtrs, bufferSize);

                                buffer = e.outputBuffer.getChannelData(0);
                                for (let i = 0; i < bufferSize; ++i)
                                    buffer[i] = module.HEAPF32[audioData + (i << 2) >> 2];
                            };
                            console.log("here 0005");
                        },
                        (error) => {
                            // this.port.postMessage({ type: 'error', error: error });
                        },
                    );

                    // create the wasm module and instance
                    create_module_bbba(opts);
                } else {
                    audioProcessor = new AudioWorkletNode(audioContext, 'mapi-proc', audioProcessorOptions);
                    audioProcessor.port.onmessage = event => {
                        if (event.data?.type == 'loaded') {
                            console.log("audioProcessor has been loaded, triggering callback now");
                            resolve([contextDestination.stream, audioProcessor, audioContext]);
                        }
                        else if (event.data?.type == 'error') {
                            reject(event.data.error);
                        }
                    };
                    audioProcessor.port.postMessage({ type: 'init', wasm: loadedFiles.wasmBlob, js: loadedFiles.wasmJS });
                }

                contextSource.connect(audioProcessor);

                audioProcessor.connect(audioContext.destination);
                // audioProcessor.connect(contextDestination);

                console.log("---------------------------------------------------------------- loadAudioWorklet ok!");
            }).catch(reject);
        };

        audioContext.resume().then(loadAudioWorklet).catch((err) => {
            // chrome does not allow to load worklet while audio context is suspended
            // resuming audio context requires user interaction
            if (audioContext.state === 'suspended') {
                const resume = () => {
                    console.log("---------------------------------- clicked document, trying to resume audio context");
                    audioContext.resume().then(loadAudioWorklet).catch(reject);
                    document.removeEventListener('click', resume);
                };
                document.addEventListener('click', resume);
            } else {
                reject(err);
            }
        });
    });
};

// load processor files, trigger Promise resolve when all done
const loadWasmProcessorFiles = () => {
    return new Promise((resolve, reject) => {
        // early checks
        if (typeof(AudioContext) === 'undefined') {
            reject('AudioContext unsupported');
            return;
        }
        if (typeof(WebAssembly) === 'undefined') {
            reject('WebAssembly unsupported');
            return;
        }
        if (! WebAssembly.validate(new Uint8Array([0,97,115,109,1,0,0,0,2,8,1,1,97,1,98,3,127,1,6,6,1,127,1,65,0,11,7,5,1,1,97,3,1]))) {
            reject('Importable/Exportable mutable globals unsupported');
            return;
        }

        console.log("---------------------------------- loadWasmProcessor start");
        const checkResolved = () => {
            if (loadedFiles.wasmBlob && loadedFiles.wasmJS && loadedFiles.worklet) {
                resolve(true);
                return true;
            }
            if (loadedFiles.error) {
                reject(loadedFiles.error);
                return true;
            }
            return false;
        };
        const catchHandler = (error) => {
            // only reject Promise once
            if (loadedFiles.error) {
                loadedFiles.error = error;
                reject(loadedFiles.error);
            }
        };

        // try again in case of previous error
        loadedFiles.error = null;

        // return early if already loaded before
        if (checkResolved()) {
            console.log("---------------------------------- loadWasmProcessor end early");
            return;
        }

        // load wasm files and worklet
        fetch('BBBA-mapi.wasm').then(function(resp) {
            resp.arrayBuffer().then(function(bytes) {
                loadedFiles.wasmBlob = bytes;
                checkResolved();
            }).catch(catchHandler);
        }).catch(catchHandler);
        fetch('BBBA-mapi.js').then(function(resp) {
            resp.text().then(function(text) {
                loadedFiles.wasmJS = text;
                checkResolved();
            }).catch(catchHandler);
        }).catch(catchHandler);
        fetch('mapi-proc.js').then(function(resp) {
            resp.text().then(function(text) {
                loadedFiles.worklet = text;
                checkResolved();
            }).catch(catchHandler);
        }).catch(catchHandler);

        console.log("---------------------------------- loadWasmProcessor end");
    });
};
