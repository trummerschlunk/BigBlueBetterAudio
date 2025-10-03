
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
// Version: 0.11
//------------------------------------------------------------------------------






#pragma once

#define DISTRHO_PLUGIN_NAME "bbba"
#define DISTRHO_PLUGIN_URI  "https://github.com/trummerschlunk/BigBlueBetterAudio"

#define DISTRHO_PLUGIN_HAS_UI          0
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
    kParameter_leveler_target,
    kParameter_leveler_scale,
    kParameter_leveler_expander_offset,
    kParameter_pre_lowcut,
    
    // outputs
    kParameter_sb_expander,
    kParameter_sb_meter__0,
    kParameter_sb_meter__1,
    kParameter_sb_meter__2,
    kParameter_sb_meter__3,
    kParameter_sb_meter__4,
    kParameter_sb_meter__5,
    kParameter_sb_meter__6,
    kParameter_sb_meter__7,
    kParameter_sb_gain__0,
    kParameter_sb_gain__1,
    kParameter_sb_gain__2,
    kParameter_sb_gain__3,
    kParameter_sb_gain__4,
    kParameter_sb_gain__5,
    kParameter_sb_gain__6,
    kParameter_sb_gain__7,
    kParameter_leveler_brake,
    kParameter_leveler_gain,
    kParameter_leveler_meter_minimum,
    
    // terminator
    kParameterCount
};

enum Programs {
    kProgramCount
};

enum States {
    kStateCount
};

static constexpr const char* kParameterNames[34] = {
    // inputs
    "strength",
    "spec 0",
    "spec 1",
    "spec 2",
    "spec 3",
    "spec 4",
    "spec 5",
    "spec 6",
    "spec 7",
    "bypass",
    "target",
    "leveler_scale",
    "thresh offset",
    "preLowcut_freq",
    
    // ouputs
    "sb_expander",
    "band  0",
    "band  1",
    "band  2",
    "band  3",
    "band  4",
    "band  5",
    "band  6",
    "band  7",
    "sb_gain  0",
    "sb_gain  1",
    "sb_gain  2",
    "sb_gain  3",
    "sb_gain  4",
    "sb_gain  5",
    "sb_gain  6",
    "sb_gain  7",
    "brake",
    "gain",
    "min_track",
    
};

static constexpr const struct { float def, min, max; } kParameterRanges[34] = {
    // inputs
    { 50.0, 0.0, 100.0 },
    { -10.0, -20.0, 0.0 },
    { -5.0, -20.0, 0.0 },
    { -5.0, -20.0, 0.0 },
    { -8.0, -20.0, 0.0 },
    { -9.0, -20.0, 0.0 },
    { -10.0, -20.0, 0.0 },
    { -7.0, -20.0, 0.0 },
    { -3.0, -20.0, 0.0 },
    { 0, 0, 1 },
    { -23.0, -60.0, 0.0 },
    { 1.0, 0.0, 1.0 },
    { 6.0, 0.0, 40.0 },
    { 80.0, 1.0, 400.0 },
    
    // ouputs
    { 0, 0.0, 1.0 },
    { 0, -40.0, 40.0 },
    { 0, -40.0, 40.0 },
    { 0, -40.0, 40.0 },
    { 0, -40.0, 40.0 },
    { 0, -40.0, 40.0 },
    { 0, -40.0, 40.0 },
    { 0, -40.0, 40.0 },
    { 0, -40.0, 40.0 },
    { 0, -12.0, 12.0 },
    { 0, -12.0, 12.0 },
    { 0, -12.0, 12.0 },
    { 0, -12.0, 12.0 },
    { 0, -12.0, 12.0 },
    { 0, -12.0, 12.0 },
    { 0, -12.0, 12.0 },
    { 0, -12.0, 12.0 },
    { 0, 0.0, 100.0 },
    { 0, -50.0, 50.0 },
    { 0, -100.0, 0.0 },
    
};

static constexpr const char* kParameterSymbols[34] = {
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
    "leveler_target",
    "leveler_scale",
    "leveler_expander_offset",
    "pre_lowcut",
    
    // ouputs
    "sb_expander",
    "sb_meter__0",
    "sb_meter__1",
    "sb_meter__2",
    "sb_meter__3",
    "sb_meter__4",
    "sb_meter__5",
    "sb_meter__6",
    "sb_meter__7",
    "sb_gain__0",
    "sb_gain__1",
    "sb_gain__2",
    "sb_gain__3",
    "sb_gain__4",
    "sb_gain__5",
    "sb_gain__6",
    "sb_gain__7",
    "leveler_brake",
    "leveler_gain",
    "leveler_meter_minimum",
    
};

static constexpr const char* kParameterUnits[34] = {
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
    "",
    
    // ouputs
    "",
    "dB",
    "dB",
    "dB",
    "dB",
    "dB",
    "dB",
    "dB",
    "dB",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "%",
    "dB",
    "",
    
};


