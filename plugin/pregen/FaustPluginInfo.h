
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
// Version: 0.29
//------------------------------------------------------------------------------






#pragma once

#define DISTRHO_PLUGIN_NAME "bbba"
#define DISTRHO_PLUGIN_URI  "https://github.com/trummerschlunk/BigBlueBetterAudio"

#define DISTRHO_PLUGIN_IS_RT_SAFE      1
#define DISTRHO_PLUGIN_NUM_INPUTS      1
#define DISTRHO_PLUGIN_NUM_OUTPUTS     1

enum Parameters {
    // inputs
    kParameter_pre_gain,
    kParameter_vad_ext,
    kParameter_post_gain,
    kParameter_leveler_target,
    kParameter_mb_strength,
    kParameter_sb_strength,
    
    // outputs
    kParameter_limiter_gain,
    
    // terminator
    kParameterCount
};

enum Programs {
    kProgramCount
};

enum States {
    kStateCount
};

static constexpr const char* kParameterNames[7] = {
    // inputs
    "preGain",
    "vad_ext",
    "postGain",
    "target",
    "mb_strength",
    "sb_strength",
    
    // ouputs
    "LimiterGR",
    
};

static constexpr const struct { float def, min, max; } kParameterRanges[7] = {
    // inputs
    { 2, -20, 20 },
    { 1, 0, 1 },
    { 0, -20, 20 },
    { -18, -60, 0 },
    { 60, 0, 100 },
    { 60, 0, 100 },
    
    // ouputs
    { 0, -12, 0 },
    
};

static constexpr const char* kParameterSymbols[7] = {
    // inputs
    "pre_gain",
    "vad_ext",
    "post_gain",
    "leveler_target",
    "mb_strength",
    "sb_strength",
    
    // ouputs
    "limiter_gain",
    
};

static constexpr const char* kParameterUnits[7] = {
    // inputs
    "dB",
    "",
    "dB",
    "dB",
    "",
    "%",
    
    // ouputs
    "",
    
};



