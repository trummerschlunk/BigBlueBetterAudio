
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
// Version: 0.06
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
    kParameter_timbre_strength,
    kParameter_spec_0,
    kParameter_spec_1,
    kParameter_spec_2,
    kParameter_spec_3,
    kParameter_spec_4,
    kParameter_spec_5,
    kParameter_spec_6,
    kParameter_spec_7,
    kParameter__0,
    kParameter__1,
    kParameter__2,
    kParameter__3,
    
    // outputs
    kParameter__4,
    kParameter__5,
    kParameter__6,
    kParameter__7,
    kParameter__8,
    kParameter__9,
    kParameter__0,
    kParameter__1,
    kParameter__2,
    kParameter_spectral_ballancer_gain_band__0,
    kParameter_spectral_ballancer_gain_band__1,
    kParameter_spectral_ballancer_gain_band__2,
    kParameter_spectral_ballancer_gain_band__3,
    kParameter_spectral_ballancer_gain_band__4,
    kParameter_spectral_ballancer_gain_band__5,
    kParameter_spectral_ballancer_gain_band__6,
    kParameter_spectral_ballancer_gain_band__7,
    kParameter__1,
    kParameter__2,
    kParameter__3,
    kParameter__4,
    kParameter__5,
    kParameter__6,
    kParameter__7,
    kParameter__8,
    kParameter__9,
    kParameter__0,
    kParameter__1,
    kParameter__2,
    kParameter__3,
    kParameter__4,
    kParameter__5,
    kParameter__6,
    kParameter__7,
    kParameter__8,
    kParameter__9,
    
    // terminator
    kParameterCount
};

enum Programs {
    kProgramCount
};

enum States {
    kStateCount
};

static constexpr const char* kParameterNames[49] = {
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
    "thresh offset",
    "preLowcut_freq",
    
    // ouputs
    "expander",
    "band 0",
    "band 1",
    "band 2",
    "band 3",
    "band 4",
    "band 5",
    "band 6",
    "band 7",
    "gr  0",
    "gr  1",
    "gr  2",
    "gr  3",
    "gr  4",
    "gr  5",
    "gr  6",
    "gr  7",
    "brake",
    "gain",
    "min_track",
    "hbargraph0",
    "hbargraph1",
    "hbargraph2",
    "hbargraph3",
    "hbargraph4",
    "hbargraph5",
    "hbargraph6",
    "hbargraph7",
    "hbargraph8",
    "hbargraph9",
    "hbargraph10",
    "hbargraph11",
    "hbargraph12",
    "hbargraph13",
    "hbargraph14",
    "hbargraph15",
    
};

static constexpr const struct { float def, min, max; } kParameterRanges[49] = {
    // inputs
    { 50, 0, 100 },
    { -10, -20, 0 },
    { -5, -20, 0 },
    { -5, -20, 0 },
    { -8, -20, 0 },
    { -9, -20, 0 },
    { -10, -20, 0 },
    { -7, -20, 0 },
    { -3, -20, 0 },
    { 0, 0, 1 },
    { -23, -60, 0 },
    { 6, 0, 40 },
    { 80, 1, 400 },
    
    // ouputs
    { 0, 0, 1 },
    { 0, -40, 40 },
    { 0, -40, 40 },
    { 0, -40, 40 },
    { 0, -40, 40 },
    { 0, -40, 40 },
    { 0, -40, 40 },
    { 0, -40, 40 },
    { 0, -40, 40 },
    { 0, -12, 12 },
    { 0, -12, 12 },
    { 0, -12, 12 },
    { 0, -12, 12 },
    { 0, -12, 12 },
    { 0, -12, 12 },
    { 0, -12, 12 },
    { 0, -12, 12 },
    { 0, 0, 100 },
    { 0, -50, 50 },
    { 0, -100, 0 },
    { 0, -12, 12 },
    { 0, -12, 12 },
    { 0, -12, 12 },
    { 0, -12, 12 },
    { 0, -12, 12 },
    { 0, -12, 12 },
    { 0, -12, 12 },
    { 0, -12, 12 },
    { 0, -6, 0 },
    { 0, -6, 0 },
    { 0, -6, 0 },
    { 0, -6, 0 },
    { 0, -6, 0 },
    { 0, -6, 0 },
    { 0, -6, 0 },
    { 0, -6, 0 },
    
};

static constexpr const char* kParameterSymbols[49] = {
    // inputs
    "timbre_strength",
    "spec_0",
    "spec_1",
    "spec_2",
    "spec_3",
    "spec_4",
    "spec_5",
    "spec_6",
    "spec_7",
    "lv2_port_11",
    "lv2_port_12",
    "lv2_port_13",
    "lv2_port_14",
    
    // ouputs
    "lv2_port_15",
    "lv2_port_16",
    "lv2_port_17",
    "lv2_port_18",
    "lv2_port_19",
    "lv2_port_20",
    "lv2_port_21",
    "lv2_port_22",
    "lv2_port_23",
    "spectral_ballancer_gain_band__0",
    "spectral_ballancer_gain_band__1",
    "spectral_ballancer_gain_band__2",
    "spectral_ballancer_gain_band__3",
    "spectral_ballancer_gain_band__4",
    "spectral_ballancer_gain_band__5",
    "spectral_ballancer_gain_band__6",
    "spectral_ballancer_gain_band__7",
    "lv2_port_32",
    "lv2_port_33",
    "lv2_port_34",
    "lv2_port_35",
    "lv2_port_36",
    "lv2_port_37",
    "lv2_port_38",
    "lv2_port_39",
    "lv2_port_40",
    "lv2_port_41",
    "lv2_port_42",
    "lv2_port_43",
    "lv2_port_44",
    "lv2_port_45",
    "lv2_port_46",
    "lv2_port_47",
    "lv2_port_48",
    "lv2_port_49",
    "lv2_port_50",
    
};

static constexpr const char* kParameterUnits[49] = {
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
    "dB",
    "dB",
    "dB",
    "dB",
    "dB",
    "dB",
    "dB",
    "dB",
    "dB",
    "dB",
    "dB",
    "dB",
    "dB",
    "dB",
    "dB",
    "dB",
    
};



