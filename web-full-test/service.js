
// globals, assigned during loadWasmProcessor
const loadedFiles = {
    bbba: {},
    renooice: {},
};
let workletLoaded = false;

// global audio context
let audioContext = null;
let audioProcessor = null;

// global function for testing purposes
const set_wasm_enabled = (module, enabled) => {
    if (audioProcessor) {
        audioProcessor.port.postMessage({type: 'enabled', module: module, enabled: enabled});
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

    const audioProcessorOptions = {
        numberOfInputs: 1,
        numberOfOutputs: 1,
        channels: 1,
    };
    audioProcessor = new AudioWorkletNode(audioContext, 'mapi-proc', audioProcessorOptions);
    audioProcessor.port.postMessage({ type: 'init', ...loadedFiles });
    // audioProcessor.port.postMessage({type: 'param', index: 9, value: isWasmProcessingEnabled() ? 0.0 : 1.0 });

    contextSource.connect(audioProcessor);
    audioProcessor.connect(contextDestination);

    console.log("---------------------------------------------------------------- createWasmProcessorStream ok!");
    return contextDestination.stream;
};

// const destroyWasmProcessor(stream) => {
// };

// load processor files, trigger Promise resolve when all done
const loadWasmProcessor = () => {
    return new Promise((resolve, reject) => {
        const checkResolved = () => {
            if (loadedFiles.bbba.js && loadedFiles.bbba.wasm &&
                loadedFiles.renooice.js && loadedFiles.renooice.wasm /*&& workletLoaded*/) {
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

        // function to load audio worklet
        const loadAudioWorklet = () => {
            // some browsers fail to add worklet module, force things here
            // see https://stackoverflow.com/questions/52760219/use-audioworklet-within-electron-domexception-the-user-aborted-a-request/
            fetch('mapi-proc.js').then(function(resp) {
                resp.text().then(function(text) {
                    const processorBlob = new Blob([text], { type: 'text/javascript' });
                    const processorURL = URL.createObjectURL(processorBlob);
                    audioContext.audioWorklet.addModule(processorURL).then(function() {
                        workletLoaded = true;
                        checkResolved();
                    }).catch(reject);
                }).catch(reject);
            }).catch(reject);
        };

        // create audio context if needed
        if (!audioContext) {
            audioContext = new AudioContext();

            // can't load worklet until audio is resumed
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
        }

        // load wasm files
        const loadWasmFiles = (basename, prop) => {
            fetch(basename + '-mapi.wasm').then(function(resp) {
                resp.arrayBuffer().then(function(bytes) {
                    loadedFiles[prop].wasm = bytes;
                    checkResolved();
                }).catch(reject);
            }).catch(reject);
            fetch(basename + '-mapi.js').then(function(resp) {
                resp.text().then(function(text) {
                    loadedFiles[prop].js = text;
                    checkResolved();
                }).catch(reject);
            }).catch(reject);
        };
        loadWasmFiles('BBBA', 'bbba');
        loadWasmFiles('ReNooice', 'renooice');

        console.log("---------------------------------- loadWasmProcessor end");
    });
};
