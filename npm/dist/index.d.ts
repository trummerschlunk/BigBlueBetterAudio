// Copyright 2026 Filipe Coelho <falktx@falktx.com>
// SPDX-License-Identifier: GPL-3.0-or-later

interface WasmProcessorProperties {
    intensity: number;
}

declare const createWasmProcessor: (audioContext: AudioContext, properties: WasmProcessorProperties) => Promise<AudioNode>;

export { createWasmProcessor }
