
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
// Version: 0.22
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
    kParameter_sb_target_spectrum_0,
    kParameter_sb_target_spectrum_1,
    kParameter_sb_target_spectrum_2,
    kParameter_sb_target_spectrum_3,
    kParameter_sb_target_spectrum_4,
    kParameter_sb_target_spectrum_5,
    kParameter_sb_target_spectrum_6,
    kParameter_sb_target_spectrum_7,
    kParameter_bypass,
    kParameter_pre_gain,
    kParameter_sbmb_strength,
    kParameter_vad_ext,
    kParameter_leveler_target,
    kParameter_leveler_scale,
    kParameter_mb_strength,
    kParameter_pre_lowcut,
    
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

static constexpr const char* kParameterNames[19] = {
    // inputs
    "sb_strength",
    "spec 0",
    "spec 1",
    "spec 2",
    "spec 3",
    "spec 4",
    "spec 5",
    "spec 6",
    "spec 7",
    "bypass",
    "PreGain",
    "sbmb_strength",
    "vad_ext",
    "target",
    "leveler_scale",
    "mb_strength",
    "preLowcut_freq",
    
    // ouputs
    "LimiterGR",
    "vad_meter",
    
};

static constexpr const struct { float def, min, max; } kParameterRanges[19] = {
    // inputs
    { 50.0, 0.0, 100.0 },
    { -10.0, -20.0, 0.0 },
    { -5.0, -20.0, 0.0 },
    { -5.0, -20.0, 0.0 },
    { -8.0, -20.0, 0.0 },
    { -9.0, -20.0, 0.0 },
    { -10.0, -20.0, 0.0 },
    { -7.0, -20.0, 0.0 },
    { -4.0, -20.0, 0.0 },
    { 0, 0, 1 },
    { 0.0, -20.0, 20.0 },
    { 80.0, 0.0, 100.0 },
    { 1.0, 0.0, 1.0 },
    { -23.0, -60.0, 0.0 },
    { 1.0, 0.0, 1.0 },
    { 80.0, 0.0, 100.0 },
    { 42.0, 1.0, 400.0 },
    
    // ouputs
    { 0, -12.0, 0.0 },
    { 0, 0.0, 1.0 },
    
};

static constexpr const char* kParameterSymbols[19] = {
    // inputs
    "sb_strength",
    "sb_target_spectrum_0",
    "sb_target_spectrum_1",
    "sb_target_spectrum_2",
    "sb_target_spectrum_3",
    "sb_target_spectrum_4",
    "sb_target_spectrum_5",
    "sb_target_spectrum_6",
    "sb_target_spectrum_7",
    "bypass",
    "pre_gain",
    "sbmb_strength",
    "vad_ext",
    "leveler_target",
    "leveler_scale",
    "mb_strength",
    "pre_lowcut",
    
    // ouputs
    "limiter_gain",
    "vad_meter",
    
};

static constexpr const char* kParameterUnits[19] = {
    // inputs
    "%",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "dB",
    "",
    "",
    "dB",
    "",
    "",
    "",
    
    // ouputs
    "",
    "",
    
};


