
// globals, assigned during loadWasmProcessor
const loadedFiles = {};
let workletFilesLoaded = false;
let workletModuleLoaded = false;

// global audio context
let audioContext = null;
let audioProcessor = null;

// global functions for testing purposes
const set_wasm_enabled = (enable) => {
    if (audioProcessor) {
        audioProcessor.port.postMessage({type: 'enable', enable: enable});
    }
};

const set_wasm_param = (index, value) => {
    if (audioProcessor) {
        audioProcessor.port.postMessage({type: 'param', index: index, value: value});
    }
};

// create an audio processor on top of a stream, returns a processed stream
const createWasmProcessorStream = (stream) => {
    const contextSource = audioContext.createMediaStreamSource(stream);
    const contextDestination = audioContext.createMediaStreamDestination();

    // cleanup old processor
    if (audioProcessor) {
        audioProcessor.port.postMessage({type: 'destroy'});
        audioProcessor = null;
    }

    const maybeCreateProcessor = () => {
        if (! workletModuleLoaded) {
            setTimeout(maybeCreateProcessor, 1000);
            return;
        }

        const audioProcessorOptions = {
            numberOfInputs: 1,
            numberOfOutputs: 1,
            channels: 1,
        };
        audioProcessor = new AudioWorkletNode(audioContext, 'mapi-proc', audioProcessorOptions);
        audioProcessor.port.postMessage({ type: 'init', ...loadedFiles });

        contextSource.connect(audioProcessor);
        audioProcessor.connect(contextDestination);
    };
    maybeCreateProcessor();

    console.log("---------------------------------------------------------------- createWasmProcessorStream ok!");
    return contextDestination.stream;
};

// load processor files, trigger Promise resolve when all done
const loadWasmProcessor = () => {
    return new Promise((resolve, reject) => {
        const checkResolved = () => {
            if (loadedFiles.js && loadedFiles.wasm && workletFilesLoaded) {
                resolve(true);
                return true;
            }
            return false;
        };
        console.log("---------------------------------- loadWasmProcessor start");

        // return early if already loaded before
        if (checkResolved()) {
            console.log("---------------------------------- loadWasmProcessor end early");
            return;
        }

        // create audio context if needed
        if (!audioContext) {
            audioContext = new AudioContext();
        }

        // load audio worklet
        fetch('mapi-proc.js').then(function(resp) {
            resp.text().then(function(text) {
                // NOTE it's not quite loaded yet,
                // but we cannot wait for `audioWorklet.addModule` as that requires use interaction
                workletFilesLoaded = true;
                checkResolved();

                // function to load audio worklet
                const loadAudioWorklet = () => {
                    // some browsers fail to add worklet module, force things here
                    // see https://stackoverflow.com/questions/52760219/use-audioworklet-within-electron-domexception-the-user-aborted-a-request/
                    const processorBlob = new Blob([text], { type: 'text/javascript' });
                    const processorURL = URL.createObjectURL(processorBlob);
                    audioContext.audioWorklet.addModule(processorURL);
                    workletModuleLoaded = true;
                };

                // can't load worklet while audio context is suspended
                // resuming audio context requires user interaction
                if (audioContext.state === 'suspended') {
                    const resume = () => {
                        console.log("---------------------------------- clicked document, trying to resume audio context");
                        audioContext.resume().then(loadAudioWorklet).catch(reject);
                        document.removeEventListener('click', resume);
                    };
                    document.addEventListener('click', resume);
                } else {
                    loadAudioWorklet();
                }
            }).catch(reject);
        }).catch(reject);

        // load wasm files
        fetch('BBBA-mapi.wasm').then(function(resp) {
            resp.arrayBuffer().then(function(bytes) {
                loadedFiles.wasm = bytes;
                checkResolved();
            }).catch(reject);
        }).catch(reject);
        fetch('BBBA-mapi.js').then(function(resp) {
            resp.text().then(function(text) {
                loadedFiles.js = text;
                checkResolved();
            }).catch(reject);
        }).catch(reject);

        console.log("---------------------------------- loadWasmProcessor end");
    });
};
