// Copyright 2025 Filipe Coelho <falktx@falktx.com>
// SPDX-License-Identifier: ISC

// known constants
const nominalBufferSize = 128;

// function to setup wasm + emscripten module options for offline fetch
const createWasmOpts = (wasmBlob, postRunCallback, errorCallback) => {
    return {
        // override to use previously retrieved blob data, as `fetch` is not allowed in worklets
        instantiateWasm: (imports, successCallback) => {
            // console.log("instantiateWasm 1", imports)
            // console.log("instantiateWasm 2")
            // console.log("instantiateWasm 3", instance);
            // console.log(instance);
            // receiveInstance(instance, wasmBlob);
            // return instance.exports;

            console.log("instantiateWasm test 1")
            // AudioWorkletGlobalScope
            globalThis.navigator = {
                appCodeName: "Mozilla",
                appName: "Netscape",
                appVersion: "5.0 (X11)",
                buildID: "20181001000000",
                cookieEnabled: true,
                doNotTrack: "1",
                globalPrivacyControl: true,
                hardwareConcurrency: 8,
                language: "en-US",
                languages: [ "en-US", "en" ],
                maxTouchPoints: 0,
                onLine: true,
                oscpu: "Linux x86_64",
                pdfViewerEnabled: true,
                platform: "Linux x86_64",
                product: "Gecko",
                productSub: "20100101",
                userAgent: "Mozilla/5.0 (X11; Linux x86_64; rv:140.0) Gecko/20100101 Firefox/140.0",
                vendor: "",
                vendorSub: "",
                webdriver: false,
            };
            console.log("instantiateWasm test 2")
            console.log("instantiateWasm test 3")
            WebAssembly.instantiate(wasmBlob, imports).then(output => {
                // var instance = new WebAssembly.Instance(output.module, imports);

                // console.log("instantiateWasm then 1", output.instance, output.module, instance, instance.exports)
                // console.log("instantiateWasm then 2", instance, instance.exports)

                console.log("instantiateWasm test then 1")
                console.log(globalThis)
                console.log("instantiateWasm test then 2")

                // try {
                successCallback(output.instance, output.module);
                console.log("instantiateWasm test then 3")
                // } catch (aee) {
                    // console.log(aee)
                // }
            })
            // .catch((error, error2) => {
            //     console.log("instantiateWasm catch 1")
            //     console.log("instantiateWasm catch 1b", typeof(error))
            //     console.log("instantiateWasm catch 1c", error)
            //     console.log("instantiateWasm catch 2a", typeof(error2))
            //     console.log("instantiateWasm catch 2b", error2)
            //     console.log("--")
            //     console.log('not')
            //     console.log("--")
            //     console.log(error2)
            //     console.log("--")
            //     errorCallback('not');
            //     console.log("instantiateWasm catch 2")
            // });

            return {};
        },
        postRun: postRunCallback,
    };
};

// class that holds a mono audio plugin instance
// see https://github.com/DISTRHO/MAPI for the API used here
class MapiProcessorInstance {
    constructor(port, module) {
        this.port = port;
        this.module = module;
        this.handle = module._mapi_create(sampleRate);
        this.enabled = true;
        this.monitor_param = -1;
        this.monitor_value = null;

        this.audioData = module._malloc(module.HEAPF32.BYTES_PER_ELEMENT * nominalBufferSize);
        this.audioPtrs = module._malloc(module.HEAPU32.BYTES_PER_ELEMENT);
        module.HEAPU32[this.audioPtrs + (0 << 2) >> 2] = this.audioData;
    }

    param(index, value) {
        this.module._mapi_set_parameter(this.handle, index, value);
    }

    monitor(index) {
        this.monitor_param = index;
        this.monitor_value = this.module._mapi_get_parameter(this.handle, index);
    }

    process(buffer, bufferSize, bufferOffset) {
        if (! this.enabled)
            return;

        for (let i = 0; i < bufferSize; ++i)
            this.module.HEAPF32[this.audioData + (i << 2) >> 2] = buffer[bufferOffset + i];

        this.module._mapi_process(this.handle, this.audioPtrs, this.audioPtrs, bufferSize);

        for (let i = 0; i < bufferSize; ++i)
            buffer[bufferOffset + i] = this.module.HEAPF32[this.audioData + (i << 2) >> 2];

        if (this.monitor_param != -1) {
            const value = this.module._mapi_get_parameter(this.handle, this.monitor_param);
            if (this.monitor_value != value) {
                this.monitor_value = value;
                // TODO report value changed, can't be done from within process?
                // this.port.postMessage({ type: 'monitor', value: value });
            }
        }
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
            case 'monitor':
                this.monitor(event.data);
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
        console.log("mapi-proc init 1");
        const jsfn_bbba = new Function(data.js + 'return mapi_bbba;');
        console.log("mapi-proc init 2");
        const create_module_bbba = jsfn_bbba.call();
        console.log("mapi-proc init 3");

        // create wasm opts for offline loading
        const opts = createWasmOpts(data.wasm,
            (module) => {
                console.log("mapi-proc init opts 1", this, this.port);
                this.bbba = new MapiProcessorInstance(this.port, module);
                console.log("mapi-proc init opts 2");
                this.port.postMessage({ type: 'loaded' });
                console.log("mapi-proc init opts 3");
            },
            (error) => {
                console.log("mapi-proc init err 1");
                this.port.postMessage({ type: 'error', error: error });
                console.log("mapi-proc init err 2", error);
            },
        );
        console.log("mapi-proc init 4");

        // create the wasm module and instance
        create_module_bbba(opts);
        console.log("mapi-proc init 5");
    }

    enable(data) {
        if (!this.bbba) {
            console.error('BBBA wasm is not loaded yet!');
            return;
        }

        this.bbba.enabled = !!data.enable;
    }

    monitor(data) {
        if (!this.bbba) {
            console.error('BBBA wasm is not loaded yet!');
            return;
        }

        this.bbba.monitor(data.index);
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
