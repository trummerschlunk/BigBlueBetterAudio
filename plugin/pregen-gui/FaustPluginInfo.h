
//------------------------------------------------------------------------------
// This file was generated using the Faust compiler (https://faust.grame.fr),
// and the Faust post-processor (https://github.com/jpcima/faustpp).
//
// Source: bbba_gui.dsp
// Name: bbba
// Description: 
// Author: Klaus Scheuermann
// Copyright: 
// License: GPLv3+
// Version: 0.24
//------------------------------------------------------------------------------






#pragma once

#define DISTRHO_PLUGIN_NAME "bbba"
#define DISTRHO_PLUGIN_URI  "https://github.com/trummerschlunk/BigBlueBetterAudio"

#define DISTRHO_PLUGIN_IS_RT_SAFE      1
#define DISTRHO_PLUGIN_NUM_INPUTS      2
#define DISTRHO_PLUGIN_NUM_OUTPUTS     2

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
    kParameter_limiter_gain,
    kParameter_input_peak_channel_0,
    kParameter_input_peak_channel_1,
    kParameter_lufs_out_meter,
    kParameter_output_peak_channel_0,
    kParameter_output_peak_channel_1,
    kParameter_leveler_gain,
    kParameter_mb_comp_gain_0,
    kParameter_mb_comp_gain_1,
    kParameter_mb_comp_gain_2,
    kParameter_mb_comp_gain_3,
    kParameter_mb_comp_gain_4,
    kParameter_mb_comp_gain_5,
    kParameter_mb_comp_gain_6,
    kParameter_mb_comp_gain_7,
    
    // terminator
    kParameterCount
};

enum Programs {
    kProgramCount
};

enum States {
    kStateCount
};

static constexpr const char* kParameterNames[48] = {
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
    "LimiterGR",
    "In 0",
    "In 1",
    "lufs_out",
    "Out 0",
    "Out 1",
    "gain",
    "MBgr 0",
    "MBgr 1",
    "MBgr 2",
    "MBgr 3",
    "MBgr 4",
    "MBgr 5",
    "MBgr 6",
    "MBgr 7",
    
};

static constexpr const struct { float def, min, max; } kParameterRanges[48] = {
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
    { 100.0, 0.0, 100.0 },
    { 1.0, 0.0, 1.0 },
    { -23.0, -60.0, 0.0 },
    { 1.0, 0.0, 1.0 },
    { 80.0, 0.0, 100.0 },
    { 42.0, 1.0, 400.0 },
    
    // ouputs
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
    { 0, -12.0, 0.0 },
    { 0, -70.0, 0.0 },
    { 0, -70.0, 0.0 },
    { 0, -70.0, 0.0 },
    { 0, -70.0, 0.0 },
    { 0, -70.0, 0.0 },
    { 0, -50.0, 50.0 },
    { 0, -12.0, 12.0 },
    { 0, -12.0, 12.0 },
    { 0, -12.0, 12.0 },
    { 0, -12.0, 12.0 },
    { 0, -12.0, 12.0 },
    { 0, -12.0, 12.0 },
    { 0, -12.0, 12.0 },
    { 0, -12.0, 12.0 },
    
};

static constexpr const char* kParameterSymbols[48] = {
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
    "limiter_gain",
    "input_peak_channel_0",
    "input_peak_channel_1",
    "lufs_out_meter",
    "output_peak_channel_0",
    "output_peak_channel_1",
    "leveler_gain",
    "mb_comp_gain_0",
    "mb_comp_gain_1",
    "mb_comp_gain_2",
    "mb_comp_gain_3",
    "mb_comp_gain_4",
    "mb_comp_gain_5",
    "mb_comp_gain_6",
    "mb_comp_gain_7",
    
};

static constexpr const char* kParameterUnits[48] = {
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
    "",
    "",
    "",
    "dB",
    "",
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
    
};


