// Copyright 2025-2026 Filipe Coelho <falktx@falktx.com>
// SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

// faustpp generated plugin template
#ifdef SIMPLIFIED_MAPI_BUILD
#include "pregen/FaustPluginInfo.h"
#else
#include "pregen-gui/FaustPluginInfo.h"
#endif

/**
   Extra parameters not part of faust dsp.
   Stored in a common header file for convenience
 */
enum ExtraParameters {
    kExtraParamGlobalBypass,
    kExtraParamIntensity,
   #ifndef SIMPLIFIED_MAPI_BUILD
    kExtraParamEnableVoiceIsolation,
    kExtraParamThreshold,
    kExtraParamGracePeriod,
    kExtraParamEnableStats,
    kExtraParamCurrentVAD,
    kExtraParamAverageVAD,
    kExtraParamMinimumVAD,
    kExtraParamMaximumVAD,
   #endif
    kExtraParamCount,
};

/**
   Whether the plugin has a custom UI.
   */
#ifdef SIMPLIFIED_MAPI_BUILD
#define DISTRHO_PLUGIN_HAS_UI 0
#else
#define DISTRHO_PLUGIN_HAS_UI 1
#endif

/**
   Whether the plugin introduces latency during audio or midi processing.
   @see Plugin::setLatency(uint32_t)
 */
#define DISTRHO_PLUGIN_WANT_LATENCY 1

/**
   Default UI width to use when creating initial and temporary windows.
   Setting this macro allows to skip a temporary UI from being created in certain VST2 and VST3 hosts.
   (which would normally be done for knowing the UI size before host creates a window for it)

   Value must match 1x scale factor.

   When this macro is defined, the companion DISTRHO_UI_DEFAULT_HEIGHT macro must be defined as well.
 */
#define DISTRHO_UI_DEFAULT_WIDTH 830

/**
   Default UI height to use when creating initial and temporary windows.
   Setting this macro allows to skip a temporary UI from being created in certain VST2 and VST3 hosts.
   (which would normally be done for knowing the UI size before host creates a window for it)

   Value must match 1x scale factor.

   When this macro is defined, the companion DISTRHO_UI_DEFAULT_WIDTH macro must be defined as well.
 */
#define DISTRHO_UI_DEFAULT_HEIGHT 630

/**
   Whether the UI uses NanoVG for drawing instead of the default raw OpenGL calls.
   When enabled your UI instance will subclass @ref NanoTopLevelWidget instead of @ref TopLevelWidget.
 */
#define DISTRHO_UI_USE_NANOVG 1

/**
   Whether the UI is resizable to any size by the user.
   By default this is false, and resizing is only allowed under the plugin UI control,
   Enabling this options makes it possible for the user to resize the plugin UI at anytime.
   @see UI::setGeometryConstraints(uint, uint, bool, bool)
 */
#define DISTRHO_UI_USER_RESIZABLE 0

/**
   A 4-character symbol that identifies a brand or manufacturer, with at least one non-lower case character.
   Plugins from the same brand should use the same symbol.
   @note This macro is required when building AU plugins, and used for VST3 if present
   @note Setting this macro will change the uid of a VST3 plugin.
         If you already released a DPF-based VST3 plugin make sure to also enable DPF_VST3_DONT_USE_BRAND_ID
 */
#define DISTRHO_PLUGIN_BRAND_ID KlSc

/**
   A 4-character symbol which identifies a plugin.
   It must be unique within at least a set of plugins from the brand.
   @note This macro is required when building AU plugins
 */
#define DISTRHO_PLUGIN_UNIQUE_ID BBBa

/**
   Custom LV2 category for the plugin.
   This is a single string, and can be one of the following values:

      - lv2:AllpassPlugin
      - lv2:AmplifierPlugin
      - lv2:AnalyserPlugin
      - lv2:BandpassPlugin
      - lv2:ChorusPlugin
      - lv2:CombPlugin
      - lv2:CompressorPlugin
      - lv2:ConstantPlugin
      - lv2:ConverterPlugin
      - lv2:DelayPlugin
      - lv2:DistortionPlugin
      - lv2:DynamicsPlugin
      - lv2:EQPlugin
      - lv2:EnvelopePlugin
      - lv2:ExpanderPlugin
      - lv2:FilterPlugin
      - lv2:FlangerPlugin
      - lv2:FunctionPlugin
      - lv2:GatePlugin
      - lv2:GeneratorPlugin
      - lv2:HighpassPlugin
      - lv2:InstrumentPlugin
      - lv2:LimiterPlugin
      - lv2:LowpassPlugin
      - lv2:MIDIPlugin
      - lv2:MixerPlugin
      - lv2:ModulatorPlugin
      - lv2:MultiEQPlugin
      - lv2:OscillatorPlugin
      - lv2:ParaEQPlugin
      - lv2:PhaserPlugin
      - lv2:PitchPlugin
      - lv2:ReverbPlugin
      - lv2:SimulatorPlugin
      - lv2:SpatialPlugin
      - lv2:SpectralPlugin
      - lv2:UtilityPlugin
      - lv2:WaveshaperPlugin

   See http://lv2plug.in/ns/lv2core for more information.
 */
#define DISTRHO_PLUGIN_LV2_CATEGORY "lv2:FilterPlugin"

/**
   Custom VST3 categories for the plugin.
   This is a single concatenated string of categories, separated by a @c |.

   Each effect category can be one of the following values:

      - Fx
      - Fx|Ambisonics
      - Fx|Analyzer
      - Fx|Delay
      - Fx|Distortion
      - Fx|Dynamics
      - Fx|EQ
      - Fx|Filter
      - Fx|Instrument
      - Fx|Instrument|External
      - Fx|Spatial
      - Fx|Generator
      - Fx|Mastering
      - Fx|Modulation
      - Fx|Network
      - Fx|Pitch Shift
      - Fx|Restoration
      - Fx|Reverb
      - Fx|Surround
      - Fx|Tools

   Each instrument category can be one of the following values:

      - Instrument
      - Instrument|Drum
      - Instrument|External
      - Instrument|Piano
      - Instrument|Sampler
      - Instrument|Synth
      - Instrument|Synth|Sampler

   And extra categories possible for any plugin type:

      - Mono
      - Stereo
 */
#define DISTRHO_PLUGIN_VST3_CATEGORIES "Fx|Filter|Stereo"

/**
   Custom CLAP features for the plugin.
   This is a list of features defined as a string array body, without the terminating @c , or nullptr.

   A top-level category can be set as feature and be one of the following values:

      - instrument
      - audio-effect
      - note-effect
      - analyzer

   The following sub-categories can also be set:

      - synthesizer
      - sampler
      - drum
      - drum-machine

      - filter
      - phaser
      - equalizer
      - de-esser
      - phase-vocoder
      - granular
      - frequency-shifter
      - pitch-shifter

      - distortion
      - transient-shaper
      - compressor
      - limiter

      - flanger
      - chorus
      - delay
      - reverb

      - tremolo
      - glitch

      - utility
      - pitch-correction
      - restoration

      - multi-effects

      - mixing
      - mastering

   And finally the following audio capabilities can be set:

      - mono
      - stereo
      - surround
      - ambisonic
*/
#define DISTRHO_PLUGIN_CLAP_FEATURES "audio-effect", "filter", "stereo"

/**
   The plugin id when exporting in CLAP format, in reverse URI form.
   @note This macro is required when building CLAP plugins
*/
#define DISTRHO_PLUGIN_CLAP_ID "trummerschlunk.bbba"
