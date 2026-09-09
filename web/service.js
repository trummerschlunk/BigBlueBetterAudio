
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

// global audio processor so we can communicate with it
let audioProcessor = null;

// Graph endpoints, so the processor can be taken out of the signal path
// entirely rather than just told to pass samples through.
//   inserted:  source -> processor -> sinks
//   removed:   source -------------> sinks
// The node object survives either way, so its DSP state is kept and
// re-inserting is immediate.
let audioGraph = { source: null, sinks: [], inserted: false };

// One AudioContext for the lifetime of the page.
//
// It used to be created per stream restart, inside the getUserMedia .then().
// That caused two problems:
//  - Firefox does not treat code after an await as running in the user gesture,
//    so the context stayed 'suspended' and nothing was heard until the user
//    happened to click somewhere else on the page.
//  - Nothing ever closed the old contexts, so every restart (device change or
//    constraint toggle) leaked a running context. Browsers cap these at around
//    six per page, after which the page simply stops working.
//
// Pinned to 48 kHz because rnnoise is a 48 kHz model with a fixed 480-sample
// frame and there is no resampler in the build; the browser resamples the input
// for us. Without this the context follows the output device, which is 44.1 kHz
// on plenty of hardware.
let sharedAudioContext = null;

// Whether to pin the context to 48 kHz. rnnoise needs it, but pinning forces
// the browser to resample both the mic in and the speakers out when the device
// runs at another rate, and Firefox cannot be asked for a 48 kHz capture at all
// (sampleRate is absent from its getSupportedConstraints). Exposed so the two
// can be compared by ear.
let force48k = true;

const setForce48k = (on) => { force48k = !!on; };

// Must be called synchronously from a user gesture the first time.
const ensureAudioContext = () => {
    // an existing context cannot change rate, so rebuild if the wish changed
    if (sharedAudioContext && sharedAudioContext.state !== 'closed') {
        const is48 = sharedAudioContext.sampleRate === 48000;
        if (force48k && !is48) {
            sharedAudioContext.close().catch(() => {});
            sharedAudioContext = null;
        } else if (! force48k && sharedAudioContext.__pinned) {
            sharedAudioContext.close().catch(() => {});
            sharedAudioContext = null;
        }
    }

    if (! sharedAudioContext || sharedAudioContext.state === 'closed') {
        if (force48k) {
            try {
                sharedAudioContext = new AudioContext({ sampleRate: 48000 });
                sharedAudioContext.__pinned = true;
            } catch (err) {
                console.warn('48 kHz context refused, falling back to default rate', err);
                sharedAudioContext = new AudioContext();
            }
        } else {
            sharedAudioContext = new AudioContext();
        }
        if (sharedAudioContext.sampleRate !== 48000)
            console.warn('AudioContext is running at ' + sharedAudioContext.sampleRate +
                         ' Hz; rnnoise expects 48000 Hz and will be degraded');
    }
    if (sharedAudioContext.state === 'suspended')
        sharedAudioContext.resume().catch(err => console.warn('resume failed', err));
    return sharedAudioContext;
};

// What the browser actually gave us, as opposed to what was asked for.
const describeAudioConfig = () => {
    const out = { context: null, contextPinned: false, track: {}, supported: {} };
    if (sharedAudioContext) {
        out.context = sharedAudioContext.sampleRate;
        out.contextPinned = !!sharedAudioContext.__pinned;
        out.state = sharedAudioContext.state;
    }
    if (navigator.mediaDevices && navigator.mediaDevices.getSupportedConstraints)
        out.supported = navigator.mediaDevices.getSupportedConstraints();
    if (typeof gumStream !== 'undefined' && gumStream) {
        const t = gumStream.getAudioTracks()[0];
        if (t) { out.track = t.getSettings(); out.label = t.label; }
    }
    return out;
};

// Connect a node downstream of the processor. Use this instead of
// audioProcessor.connect(node), so the node is re-routed correctly when the
// processor is taken out of the chain.
const connectWasmProcessorTo = (node) => {
    if (! audioGraph.sinks.includes(node))
        audioGraph.sinks.push(node);
    const from = audioGraph.inserted ? audioProcessor : audioGraph.source;
    if (from)
        from.connect(node);
};

// Insert or remove the wasm processor from the audio graph. Unlike
// setWasmProcessorEnabled below, this changes the routing: when removed the
// node is not connected at all, so none of its latency, buffering or state is
// in the path and the signal is the raw source.
const setWasmProcessorInserted = (inserted) => {
    inserted = !!inserted;
    if (! audioProcessor || ! audioGraph.source)
        return;
    if (audioGraph.inserted === inserted)
        return;

    const source = audioGraph.source;
    source.disconnect();
    audioProcessor.disconnect();

    if (inserted) {
        source.connect(audioProcessor);
        audioGraph.sinks.forEach(node => audioProcessor.connect(node));
    } else {
        audioGraph.sinks.forEach(node => source.connect(node));
    }

    audioGraph.inserted = inserted;
    console.log(inserted ? "wasm processor inserted into the chain"
                         : "wasm processor removed from the chain");
};

// global functions for testing purposes
// NOTE this only tells the processor to pass samples through; the node stays in
// the graph, keeping its ~35 ms of latency. Use setWasmProcessorInserted to
// take it out of the path completely.
const setWasmProcessorEnabled = (enabled) => {
    if (audioProcessor) {
        audioProcessor.port.postMessage({type: 'enable', enable: enabled});
    }
};

// index, not name - see the note in mapi-proc.js
const setWasmProcessorParameter = (index, value) => {
    if (audioProcessor) {
        audioProcessor.port.postMessage({type: 'param', index: index, value: value});
    }
};

// create audio worklet or script processor
// we rely on script processor because worklets must run at 128 block size, which is not possible on low-spec machines
// Firefox implements createMediaStreamTrackSource, which taps the track
// directly instead of going through the stream-level plumbing that
// createMediaStreamSource uses. On Firefox that path is the better behaved one
// for a live capture; Chrome does not implement it, so fall back there.
const createSourceNode = (audioContext, stream) => {
    const track = stream.getAudioTracks()[0];
    if (track && typeof audioContext.createMediaStreamTrackSource === 'function') {
        try {
            return audioContext.createMediaStreamTrackSource(track);
        } catch (err) {
            console.warn('createMediaStreamTrackSource failed, using stream source', err);
        }
    }
    return audioContext.createMediaStreamSource(stream);
};

const createWasmProcessor = (audioContext, stream) => {
    return new Promise((resolve, reject) => {
        const contextSource = createSourceNode(audioContext, stream);
        const contextDestination = audioContext.createMediaStreamDestination();

        if (! navigator.userAgent.match(/Android/i)) {
            console.log("Using Audio Worklet");

            // addModule re-runs the worklet script, and registerProcessor throws
            // NotSupportedError on a duplicate name. The context is shared across
            // restarts now, so only add it once.
            const addModuleOnce = () => {
                if (audioContext.__mapiModuleAdded)
                    return Promise.resolve();
                const processorBlob = new Blob([loadedFiles.worklet], { type: 'text/javascript' });
                const processorURL = URL.createObjectURL(processorBlob);
                return audioContext.audioWorklet.addModule(processorURL).then(() => {
                    audioContext.__mapiModuleAdded = true;
                    URL.revokeObjectURL(processorURL);
                });
            };

            addModuleOnce()
            .then(() => {
                const options = {
                    channelCount: 1,
                    numberOfInputs: 1,
                    numberOfOutputs: 1,
                    outputChannelCount: [1],
                };
                const processor = new AudioWorkletNode(audioContext, 'mapi-proc', options);
                processor.port.onmessage = event => {
                    if (event.data?.type == 'loaded') {
                        audioProcessor = processor;
                        audioGraph = { source: contextSource,
                                       sinks: [contextDestination],
                                       inserted: true };
                        contextSource.connect(audioProcessor);
                        audioProcessor.connect(contextDestination);
                        resolve(contextDestination.stream);
                    }
                    else if (event.data?.type == 'error') {
                        reject(event.data.error);
                    }
                };
                processor.port.postMessage({ type: 'init', wasm: loadedFiles.wasmBlob, js: loadedFiles.wasmJS });
            })
            .catch(reject);
            return;
        }

        // NOTE fallback with createScriptProcessor follows here
        console.log("Using Script Processor");

        // execute JS to expose the emscripten load module function
        const jsfn_bbba = new Function(loadedFiles.wasmJS + 'return mapi_bbba;');
        const create_module_bbba = jsfn_bbba.call();

        const bufferSize = 4096;
        const numberOfInputs = 1;
        const numberOfOutputs = 1;
        const processor = audioContext.createScriptProcessor(bufferSize, numberOfInputs, numberOfOutputs);

        // create the wasm module and instance
        create_module_bbba({
            instantiateWasm: (imports, successCallback) => {
                WebAssembly.instantiate(loadedFiles.wasmBlob, imports)
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
                            module._mapi_set_parameter(handle, data.index, data.value);
                            break;
                        case 'destroy':
                            break;
                        }
                    },
                };

                audioProcessor = processor;
                audioGraph = { source: contextSource,
                               sinks: [contextDestination],
                               inserted: true };
                contextSource.connect(audioProcessor);
                audioProcessor.connect(contextDestination);
                resolve(contextDestination.stream);
            },
        });
    });
};

// create an audio processor on top of a stream, trigger Promise resolve with a processed stream
// Disconnect and release everything from a previous run. The context is reused,
// so anything left connected would keep running and keep feeding the speakers.
const teardownWasmProcessor = () => {
    if (audioGraph.source) {
        try { audioGraph.source.disconnect(); } catch (err) {}
    }
    audioGraph.sinks.forEach(node => { try { node.disconnect(); } catch (err) {} });
    if (audioProcessor) {
        try { audioProcessor.disconnect(); } catch (err) {}
        try { audioProcessor.port.postMessage({type: 'destroy'}); } catch (err) {}
    }
    audioProcessor = null;
    audioGraph = { source: null, sinks: [], inserted: false };
};

const createWasmProcessorStream = (stream) => {
    teardownWasmProcessor();

    return new Promise((resolve, reject) => {
        const audioContext = ensureAudioContext();

        const loadAudioWorklet = () => {
            console.log("loadAudioWorklet start");
            createWasmProcessor(audioContext, stream)
            .then((stream) => {
                console.log("loadAudioWorklet done, triggering callback");
                resolve([stream, audioProcessor, audioContext]);
            })
            .catch(reject);
        };

        // The context should already be running, because ensureAudioContext was
        // called from the click handler. Keep the fallback for the case where a
        // browser still suspends it, but do not depend on it.
        if (audioContext.state === 'running') {
            loadAudioWorklet();
            return;
        }

        audioContext.resume().then(() => {
            if (audioContext.state === 'running') {
                loadAudioWorklet();
                return;
            }
            const resume = () => {
                document.removeEventListener('click', resume);
                audioContext.resume().then(loadAudioWorklet).catch(reject);
            };
            console.warn('audio context still suspended, waiting for a click');
            document.addEventListener('click', resume);
        }).catch(reject);
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
