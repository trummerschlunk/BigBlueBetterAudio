
//------------------------------------------------------------------------------
// This file was generated using the Faust compiler (https://faust.grame.fr),
// and the Faust post-processor (https://github.com/jpcima/faustpp).
//
// Source: bbba.dsp
// Name: bbba
// Description: 
// Author: Klaus Scheuermann
// Copyright: 
// License: GPLv3+
// Version: 0.27
//------------------------------------------------------------------------------






#pragma once

#define DISTRHO_PLUGIN_NAME "bbba"
#define DISTRHO_PLUGIN_URI  "https://github.com/trummerschlunk/BigBlueBetterAudio"

#define DISTRHO_PLUGIN_IS_RT_SAFE      1
#define DISTRHO_PLUGIN_NUM_INPUTS      1
#define DISTRHO_PLUGIN_NUM_OUTPUTS     1

enum Parameters {
    // inputs
    kParameter_sb_strength,
    kParameter_voice_isolation_intensity,
    kParameter_bypass,
    kParameter_pre_gain,
    kParameter_vad_ext,
    kParameter_post_gain,
    kParameter_leveler_target,
    kParameter_leveler_scale,
    kParameter_exp_strength,
    kParameter_mb_strength,
    kParameter_pre_lowcut,
    kParameter_vad_gate_thresh,
    kParameter_vad_smoothing_time,
    
    // outputs
    kParameter_limiter_gain,
    kParameter_vad_meter,
    
    // terminator
    kParameterCount
};

enum Programs {
    kProgramCount
};

enum States {
    kStateCount
};

static constexpr const char* kParameterNames[15] = {
    // inputs
    "sb_strength",
    "VIintense",
    "bypass",
    "PreGain",
    "vad_ext",
    "PostGain",
    "target",
    "leveler_scale",
    "exp_strength",
    "mb_strength",
    "preLowcut_freq",
    "vad_g_thr",
    "vad_smoo_t",
    
    // ouputs
    "LimiterGR",
    "vad_meter",
    
};

static constexpr const struct { float def, min, max; } kParameterRanges[15] = {
    // inputs
    { 50, 0, 100 },
    { 1, 0, 1 },
    { 0, 0, 1 },
    { 0, -20, 20 },
    { 1, 0, 1 },
    { 0, -20, 20 },
    { -18, -60, 0 },
    { 1, 0, 1 },
    { 100, 0, 100 },
    { 50, 0, 100 },
    { 42, 10, 400 },
    { 0.89999998, 0, 1 },
    { 50, 0, 1000 },
    
    // ouputs
    { 0, -12, 0 },
    { 0, 0, 1 },
    
};

static constexpr const char* kParameterSymbols[15] = {
    // inputs
    "sb_strength",
    "voice_isolation_intensity",
    "bypass",
    "pre_gain",
    "vad_ext",
    "post_gain",
    "leveler_target",
    "leveler_scale",
    "exp_strength",
    "mb_strength",
    "pre_lowcut",
    "vad_gate_thresh",
    "vad_smoothing_time",
    
    // ouputs
    "limiter_gain",
    "vad_meter",
    
};

static constexpr const char* kParameterUnits[15] = {
    // inputs
    "%",
    "",
    "",
    "dB",
    "",
    "dB",
    "dB",
    "",
    "%",
    "",
    "",
    "",
    "ms",
    
    // ouputs
    "",
    "",
    
};



