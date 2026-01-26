// Copyright 2025-2026 Filipe Coelho <falktx@falktx.com>
// SPDX-License-Identifier: GPL-3.0-or-later

#include "DistrhoPlugin.hpp"
#include "DistrhoPluginInfo.h"
#include "extra/RingBuffer.hpp"
#include "extra/ScopedDenormalDisable.hpp"
#include "extra/ValueSmoother.hpp"

// faustpp generated plugin template
#ifdef SIMPLIFIED_MAPI_BUILD
#include "pregen/FaustPluginInfo.h"
#include "pregen/FaustPlugin.cpp"
#else
#include "pregen-gui/FaustPluginInfo.h"
#include "pregen-gui/FaustPlugin.cpp"
#endif

#include "rnnoise.h"
#include "../src/denoise.h"

// checks to ensure things are still as we expect them to be from faust dsp side
#ifdef SIMPLIFIED_MAPI_BUILD
static_assert(DISTRHO_PLUGIN_NUM_INPUTS == 1, "has 1 audio input");
static_assert(DISTRHO_PLUGIN_NUM_OUTPUTS == 1, "has 1 audio output");
#else
static_assert(DISTRHO_PLUGIN_NUM_INPUTS == 2, "has 2 audio inputs");
static_assert(DISTRHO_PLUGIN_NUM_OUTPUTS == 2, "has 2 audio outputs");
#endif

START_NAMESPACE_DISTRHO

// --------------------------------------------------------------------------------------------------------------------

class BBBAudioPlugin : public FaustGeneratedPlugin
{
    // denoise block size
    static constexpr const uint32_t denoiseFrameSize = FRAME_SIZE;
    static constexpr const uint32_t denoiseFrameSizeF = denoiseFrameSize * sizeof(float);

    // denoise handle, keep it const so we never modify it
    DenoiseState* const denoise = rnnoise_create(nullptr);
   #ifndef SIMPLIFIED_MAPI_BUILD
    DenoiseState* const denoise2 = rnnoise_create(nullptr);
   #endif

    // buffers for latent processing
    float* bufferIn;
    float* bufferOut;
    // TODO use pointer swap instead of always copying
    float* bufferPrevIn;
    float* bufferOldPrevIn;
    HeapRingBuffer ringBufferDry;
    HeapRingBuffer ringBufferOut;
    uint32_t bufferInPos;
   #ifndef SIMPLIFIED_MAPI_BUILD
    // stereo variant
    float* bufferIn2;
    float* bufferOut2;
    float* bufferPrevIn2;
    float* bufferOldPrevIn2;
    HeapRingBuffer ringBufferDry2;
    HeapRingBuffer ringBufferOut2;
   #endif

    // whether we received enough latent audio frames
    bool processing;

    // smooth mute/unmute
    static constexpr const float kMuteAttack = 0.005f;
    static constexpr const float kMuteRelease = 0.1f;
    LinearValueSmoother muteValue;

    // translate Grace Period param (ms) into frames
    // updated when param changes
    uint32_t gracePeriodInFrames = 0;

    // assigned to gracePeriodInFrames when going mute
    uint32_t numFramesUntilGracePeriodOver = 0;

    // intensity and bypass smoothing
   #ifndef SIMPLIFIED_MAPI_BUILD
    LinearValueSmoother globalDryValue;
   #endif
    LinearValueSmoother denoiserDryValue;

    // cached parameter values
    float extraParameters[kExtraParamCount] = {};

   #ifndef SIMPLIFIED_MAPI_BUILD
    // denoise statistics
    // mostly just for testing
    struct {
        float vads[200];
        float avg, min, max;
        int pos;
        bool enabled = false;
        bool running;

        void store(const float vad)
        {
            vads[pos++] = vad;

            if (pos == ARRAY_SIZE(vads))
            {
                pos = 0;
                running = true;
            }

            if (running)
            {
                avg = 0.f;
                min = 1.f;
                max = 0.f;

                for (uint32_t i = 0; i < ARRAY_SIZE(vads); ++i)
                {
                    if (vads[i] < min)
                        min = vads[i];
                    if (vads[i] > max)
                        max = vads[i];

                    avg += vads[i];
                }

                avg /= ARRAY_SIZE(vads);
            }
        }

        void reset()
        {
            avg = 0.f;
            min = 1.f;
            max = 0.f;
            pos = 0;
            running = false;
        }
    } stats;
   #endif

public:
   /**
      Plugin class constructor.
      You must set all parameter values to their defaults, matching ParameterRanges::def.
    */
    BBBAudioPlugin()
        : FaustGeneratedPlugin(kExtraParamCount)
    {
        muteValue.setTimeConstant(kMuteRelease);
        muteValue.setTargetValue(0.f);

       #ifndef SIMPLIFIED_MAPI_BUILD
        globalDryValue.setTimeConstant(0.02f);
        globalDryValue.setTargetValue(0.f);
       #endif

        denoiserDryValue.setTimeConstant(0.02f);
        denoiserDryValue.setTargetValue(0.f);

        extraParameters[kExtraParamIntensity] = 100.f;
       #ifndef SIMPLIFIED_MAPI_BUILD
        extraParameters[kExtraParamThreshold] = 50.f;
        extraParameters[kExtraParamEnableVoiceIsolation] = 1.f;
        extraParameters[kExtraParamGracePeriod] = 1000.f;
       #endif

        // initial sample rate setup
        sampleRateChanged(getSampleRate());
    }

   /**
      Destructor.
    */
    ~BBBAudioPlugin()
    {
        rnnoise_destroy(denoise);
       #ifndef SIMPLIFIED_MAPI_BUILD
        rnnoise_destroy(denoise2);
       #endif
    }

protected:
   /* -----------------------------------------------------------------------------------------------------------------
    * Init */

    void initAudioPort(const bool input, const uint32_t index, AudioPort& port) override
    {
        // always mono
        port.groupId = kPortGroupMono;

        // everything else is as default
        Plugin::initAudioPort(input, index, port);
    }

   /**
      Initialize the parameter @a index.
      This function will be called once, shortly after the plugin is created.
    */
    void initParameter(uint32_t index, Parameter& parameter) override
    {
        // special case, not intended for the host
        if (index == kParameter_vad_ext)
        {
            parameter.hints  = kParameterIsOutput|kParameterIsHidden;
            parameter.name   = "vad_ext";
            parameter.symbol = "vad_ext";
            return;
        }

        if (index < kParameterCount)
        {
            FaustGeneratedPlugin::initParameter(index, parameter);

            switch (index)
            {
            // some custom properties
            case kParameter_sbmb_strength:
                parameter.name   = "Voice Optimization";
                parameter.symbol = "voice_optimization";
                break;
            // hide some unused parameters
           #ifndef SIMPLIFIED_MAPI_BUILD
            case kParameter_sb_target_spectrum_0:
            case kParameter_sb_target_spectrum_1:
            case kParameter_sb_target_spectrum_2:
            case kParameter_sb_target_spectrum_3:
            case kParameter_sb_target_spectrum_4:
            case kParameter_sb_target_spectrum_5:
            case kParameter_sb_target_spectrum_6:
            case kParameter_sb_target_spectrum_7:
           #endif
            case kParameter_pre_lowcut:
           #ifndef SIMPLIFIED_MAPI_BUILD
            case kParameter_sb_meter__0:
            case kParameter_sb_meter__1:
            case kParameter_sb_meter__2:
            case kParameter_sb_meter__3:
            case kParameter_sb_meter__4:
            case kParameter_sb_meter__5:
            case kParameter_sb_meter__6:
            case kParameter_sb_meter__7:
           #endif
                parameter.hints |= kParameterIsHidden;
                break;
            }
            return;
        }

        parameter.hints = kParameterIsAutomatable;

        switch (index - kParameterCount)
        {
       #ifndef SIMPLIFIED_MAPI_BUILD
        case kExtraParamGlobalBypass:
            parameter.initDesignation(kParameterDesignationBypass);
            break;
        case kExtraParamEnableVoiceIsolation:
            parameter.hints |= kParameterIsBoolean | kParameterIsInteger;
            parameter.name   = "Voice Isolation";
            parameter.symbol = "voice_isolation";
            parameter.ranges.def = 1.f;
            parameter.ranges.min = 0.f;
            parameter.ranges.max = 1.f;
            break;
       #endif
        case kExtraParamIntensity:
            parameter.hints |= kParameterIsInteger;
            parameter.name   = "Intensity";
            parameter.symbol = "intensity";
            parameter.unit   = "%";
            parameter.ranges.def = 100.f;
            parameter.ranges.min = 0.f;
            parameter.ranges.max = 100.f;
            break;
       #ifndef SIMPLIFIED_MAPI_BUILD
        case kExtraParamThreshold:
            parameter.hints |= kParameterIsInteger;
            parameter.name   = "Threshold";
            parameter.symbol = "threshold";
            parameter.unit   = "%";
            parameter.ranges.def = 50.f;
            parameter.ranges.min = 0.f;
            parameter.ranges.max = 100.f;
            break;
        case kExtraParamGracePeriod:
            parameter.hints |= kParameterIsInteger;
            parameter.name   = "Grace Period";
            parameter.symbol = "grace_period";
            parameter.unit   = "ms";
            parameter.ranges.def = 1000.f;
            parameter.ranges.min = 0.f;
            parameter.ranges.max = 2000.f;
            break;
        case kExtraParamEnableStats:
            parameter.hints |= kParameterIsBoolean | kParameterIsInteger;
            parameter.name   = "Enable Stats";
            parameter.symbol = "stats";
            parameter.ranges.def = 0.f;
            parameter.ranges.min = 0.f;
            parameter.ranges.max = 1.f;
            break;
        case kExtraParamCurrentVAD:
            parameter.hints |= kParameterIsOutput;
            parameter.name   = "Current VAD";
            parameter.symbol = "cur_vad";
            parameter.unit   = "%";
            parameter.ranges.def = 0.f;
            parameter.ranges.min = 0.f;
            parameter.ranges.max = 100.f;
            break;
        case kExtraParamAverageVAD:
            parameter.hints |= kParameterIsOutput;
            parameter.name   = "Average VAD";
            parameter.symbol = "avg_vad";
            parameter.unit   = "%";
            parameter.ranges.def = 0.f;
            parameter.ranges.min = 0.f;
            parameter.ranges.max = 100.f;
            break;
        case kExtraParamMinimumVAD:
            parameter.hints |= kParameterIsOutput;
            parameter.name   = "Minimum VAD";
            parameter.symbol = "min_vad";
            parameter.unit   = "%";
            parameter.ranges.def = 0.f;
            parameter.ranges.min = 0.f;
            parameter.ranges.max = 100.f;
            break;
        case kExtraParamMaximumVAD:
            parameter.hints |= kParameterIsOutput;
            parameter.name   = "Maximum VAD";
            parameter.symbol = "max_vad";
            parameter.unit   = "%";
            parameter.ranges.def = 0.f;
            parameter.ranges.min = 0.f;
            parameter.ranges.max = 100.f;
            break;
       #endif
        }
    }

   /**
      Get the current value of a parameter.
      The host may call this function from any context, including realtime processing.
    */
    float getParameterValue(uint32_t index) const override
    {
        if (index < kParameterCount)
            return FaustGeneratedPlugin::getParameterValue(index);

        return extraParameters[index - kParameterCount];
    }

   /**
      Change a parameter value.
      The host may call this function from any context, including realtime processing.
      When a parameter is marked as automatable, you must ensure no non-realtime operations are performed.
      @note This function will only be called for parameter inputs.
    */
    void setParameterValue(uint32_t index, float value) override
    {
        if (index < kParameterCount)
            return FaustGeneratedPlugin::setParameterValue(index, value);

        index -= kParameterCount;
        extraParameters[index] = value;

        switch (index)
        {
       #ifdef SIMPLIFIED_MAPI_BUILD
        case kExtraParamIntensity:
            denoiserDryValue.setTargetValue(1.f - value * 0.01f);
            break;
       #else
        case kExtraParamGlobalBypass:
            globalDryValue.setTargetValue(value);
            break;
        case kExtraParamEnableVoiceIsolation:
            denoiserDryValue.setTargetValue(value > 0.5f ? 1.f - extraParameters[kExtraParamIntensity] * 0.01f : 1.f);
            break;
        case kExtraParamIntensity:
            denoiserDryValue.setTargetValue(extraParameters[kExtraParamEnableVoiceIsolation] > 0.5f ? 1.f - value * 0.01f : 1.f);
            break;
        case kExtraParamGracePeriod:
            gracePeriodInFrames = d_roundToUnsignedInt(value * getSampleRate() / 1000.0);
            break;
       #endif
        }
    }

   /* -----------------------------------------------------------------------------------------------------------------
    * Audio/MIDI Processing */

   /**
      Activate this plugin.
    */
    void activate() override
    {
        const uint32_t ringBufferSize = denoiseFrameSizeF * 2;
        ringBufferDry.createBuffer(ringBufferSize);
        ringBufferOut.createBuffer(ringBufferSize);

        bufferIn = new float[denoiseFrameSize];
        bufferOut = new float[denoiseFrameSize];
        bufferPrevIn = new float[denoiseFrameSize];
        bufferOldPrevIn = new float[denoiseFrameSize];
        bufferInPos = 0;
        processing = false;

        std::memset(bufferPrevIn, 0, denoiseFrameSizeF);
        std::memset(bufferOldPrevIn, 0, denoiseFrameSizeF);

        muteValue.setTimeConstant(kMuteRelease);
        muteValue.setTargetValue(0.f);
        muteValue.clearToTargetValue();

        denoiserDryValue.clearToTargetValue();

       #ifndef SIMPLIFIED_MAPI_BUILD
        ringBufferDry2.createBuffer(ringBufferSize);
        ringBufferOut2.createBuffer(ringBufferSize);
        bufferIn2 = new float[denoiseFrameSize];
        bufferOut2 = new float[denoiseFrameSize];
        bufferPrevIn2 = new float[denoiseFrameSize];
        bufferOldPrevIn2 = new float[denoiseFrameSize];

        std::memset(bufferPrevIn2, 0, denoiseFrameSizeF);
        std::memset(bufferOldPrevIn2, 0, denoiseFrameSizeF);

        extraParameters[kExtraParamCurrentVAD] = 0.f;
        extraParameters[kExtraParamAverageVAD] = 0.f;
        extraParameters[kExtraParamMinimumVAD] = 0.f;
        extraParameters[kExtraParamMaximumVAD] = 0.f;

        globalDryValue.clearToTargetValue();

        stats.reset();
       #endif
    }

   /**
      Deactivate this plugin.
    */
    void deactivate() override
    {
        delete[] bufferIn;
        delete[] bufferOut;
        delete[] bufferPrevIn;
        delete[] bufferOldPrevIn;

        ringBufferDry.deleteBuffer();
        ringBufferOut.deleteBuffer();

       #ifndef SIMPLIFIED_MAPI_BUILD
        delete[] bufferIn2;
        delete[] bufferOut2;
        delete[] bufferPrevIn2;
        delete[] bufferOldPrevIn2;

        ringBufferDry2.deleteBuffer();
        ringBufferOut2.deleteBuffer();
       #endif
    }

   /**
      Run/process function for plugins without MIDI input.
      @note Some parameters might be null if there are no audio inputs or outputs.
    */
    void run(const float** const inputs, float** const outputs, const uint32_t frames) override
    {
       #ifdef SIMPLIFIED_MAPI_BUILD
        // optimize for non-denormal usage
        for (uint32_t i = 0; i < frames; ++i)
        {
            if (!std::isfinite(inputs[0][i]))
                __builtin_unreachable();
            if (!std::isfinite(outputs[0][i]))
                __builtin_unreachable();
        }

        // pass this threshold to unmute
        static constexpr const float threshold = 0.5f;
       #else
        // optimize for non-denormal usage
        const ScopedDenormalDisable sdd;
        for (uint32_t c = 0; c < DISTRHO_PLUGIN_NUM_INPUTS; ++c)
        {
            for (uint32_t i = 0; i < frames; ++i)
            {
                if (!std::isfinite(inputs[c][i]))
                    __builtin_unreachable();
                if (!std::isfinite(outputs[c][i]))
                    __builtin_unreachable();
            }
        }

        // reset stats if enabled status changed
        const bool statsEnabled = extraParameters[kExtraParamEnableStats] > 0.5f;
        if (stats.enabled != statsEnabled)
        {
            stats.enabled = statsEnabled;

            if (statsEnabled)
                stats.reset();
        }

        // pass this threshold to unmute
        const float threshold = extraParameters[kExtraParamThreshold] * 0.01f;
       #endif

        float dry, wet;

        // process audio a few frames at a time, so it always fits nicely into denoise blocks
        for (uint32_t offset = 0; offset != frames;)
        {
            const uint32_t framesCycle = std::min(denoiseFrameSize - bufferInPos, frames - offset);
            const uint32_t framesCycleF = framesCycle * sizeof(float);

            // copy input data into buffer
            std::memcpy(bufferIn + bufferInPos, inputs[0] + offset, framesCycleF);
           #ifndef SIMPLIFIED_MAPI_BUILD
            std::memcpy(bufferIn2 + bufferInPos, inputs[1] + offset, framesCycleF);
           #endif

            // run denoise once input buffer is full
            if ((bufferInPos += framesCycle) == denoiseFrameSize)
            {
                bufferInPos = 0;

                // store old dry signal so we can do smooth bypass later
                ringBufferDry.writeCustomData(bufferOldPrevIn, denoiseFrameSizeF);
                ringBufferDry.commitWrite();

                // run denoise
                float vad = rnnoise_process_frame(denoise, bufferOut, bufferIn);

               #ifndef SIMPLIFIED_MAPI_BUILD
                // stereo
                ringBufferDry2.writeCustomData(bufferOldPrevIn2, denoiseFrameSizeF);
                ringBufferDry2.commitWrite();

                vad = std::max(vad, rnnoise_process_frame(denoise2, bufferOut2, bufferIn2));
               #endif

                // unmute according to threshold
                if (vad >= threshold)
                {
                    muteValue.setTimeConstant(kMuteAttack);
                    muteValue.setTargetValue(1.f);
                    numFramesUntilGracePeriodOver = gracePeriodInFrames;
                }
                else if (gracePeriodInFrames == 0)
                {
                    muteValue.setTimeConstant(kMuteRelease);
                    muteValue.setTargetValue(0.f);
                }

                // apply mute as needed
                for (uint32_t i = 0; i < denoiseFrameSize; ++i)
                {
                    if (numFramesUntilGracePeriodOver != 0 && --numFramesUntilGracePeriodOver == 0)
                    {
                        muteValue.setTimeConstant(kMuteRelease);
                        muteValue.setTargetValue(0.f);
                    }

                    const float muteNextValue = muteValue.next();
                    bufferOut[i] *= muteNextValue;
                   #ifndef SIMPLIFIED_MAPI_BUILD
                    bufferOut2[i] *= muteNextValue;
                   #endif
                }

               #ifndef SIMPLIFIED_MAPI_BUILD
                // stats are a bit expensive, so they are optional
                if (stats.enabled)
                {
                    stats.store(vad);
                    extraParameters[kExtraParamCurrentVAD] = vad * 100.f;
                    extraParameters[kExtraParamAverageVAD] = stats.avg * 100.f;
                    extraParameters[kExtraParamMinimumVAD] = stats.min * 100.f;
                    extraParameters[kExtraParamMaximumVAD] = stats.max * 100.f;
                }
               #endif

                // denoiser intensity
                for (uint32_t i = 0; i < denoiseFrameSize; ++i)
                {
                    dry = denoiserDryValue.next();
                    wet = 1.f - dry;
                    bufferOut[i] = bufferOut[i] * wet + bufferOldPrevIn[i] * dry;
                   #ifndef SIMPLIFIED_MAPI_BUILD
                    bufferOut2[i] = bufferOut2[i] * wet + bufferOldPrevIn2[i] * dry;
                   #endif
                }

                // keep hold of current dry signal for next cycle
                std::memcpy(bufferOldPrevIn, bufferPrevIn, denoiseFrameSizeF);
                std::memcpy(bufferPrevIn, bufferIn, denoiseFrameSizeF);
               #ifndef SIMPLIFIED_MAPI_BUILD
                std::memcpy(bufferOldPrevIn2, bufferPrevIn2, denoiseFrameSizeF);
                std::memcpy(bufferPrevIn2, bufferIn2, denoiseFrameSizeF);
               #endif

                // process denoise output on faust side, reuse input buffers as not allocate memory here
                float* ins[2];
                float* outs[2];
                ins[0] = bufferOut;
                outs[0] = bufferIn;
               #ifndef SIMPLIFIED_MAPI_BUILD
                ins[1] = bufferOut2;
                outs[1] = bufferIn2;
               #endif

                FaustGeneratedPlugin::setParameterValue(kParameter_vad_ext, vad);

                dsp->compute(denoiseFrameSize, ins, outs);

                // write output into ringbuffer
                ringBufferOut.writeCustomData(outs[0], denoiseFrameSizeF);
                ringBufferOut.commitWrite();
               #ifndef SIMPLIFIED_MAPI_BUILD
                ringBufferOut2.writeCustomData(outs[1], denoiseFrameSizeF);
                ringBufferOut2.commitWrite();
               #endif
            }

            // we have enough audio frames in the ring buffer, can give back audio to host
            if (processing)
            {
                // copy processed buffer directly into output
                ringBufferOut.readCustomData(outputs[0] + offset, framesCycleF);
               #ifndef SIMPLIFIED_MAPI_BUILD
                ringBufferOut2.readCustomData(outputs[1] + offset, framesCycleF);
               #endif

                // retrieve dry buffer (bufferIn is being used elsewhere, so use bufferOut instead)
                ringBufferDry.readCustomData(bufferOut, framesCycleF);
               #ifndef SIMPLIFIED_MAPI_BUILD
                ringBufferDry2.readCustomData(bufferOut2, framesCycleF);

                for (uint32_t i = 0; i < framesCycle; ++i)
                {
                    dry = globalDryValue.next();
                    wet = 1.f - dry;
                    outputs[0][i + offset] = outputs[0][i + offset] * wet + bufferOut[i] * dry;
                   #ifndef SIMPLIFIED_MAPI_BUILD
                    outputs[1][i + offset] = outputs[1][i + offset] * wet + bufferOut2[i] * dry;
                   #endif
                }
               #endif
            }
            // capture more audio frames until it fits 1 denoise block
            else
            {
                // mute output while still capturing audio frames
                std::memset(outputs[0] + offset, 0, framesCycleF);
               #ifndef SIMPLIFIED_MAPI_BUILD
                std::memset(outputs[1] + offset, 0, framesCycleF);
               #endif

                if (ringBufferOut.getReadableDataSize() >= denoiseFrameSizeF)
                    processing = true;
            }

            offset += framesCycle;
        }
    }

   /**
      Optional callback to inform the plugin about a sample rate change.
      This function will only be called when the plugin is deactivated.
    */
    void sampleRateChanged(const double sampleRate) override
    {
       #ifdef SIMPLIFIED_MAPI_BUILD
        static constexpr const float gracePeriod = 500.f;
       #else
        const float gracePeriod = extraParameters[kExtraParamGracePeriod];
        globalDryValue.setSampleRate(sampleRate);
       #endif
        denoiserDryValue.setSampleRate(sampleRate);
        muteValue.setSampleRate(sampleRate);

        // update internal value that depends on sample rate
        gracePeriodInFrames = d_roundToUnsignedInt(gracePeriod * sampleRate / 1000.0);

        // report latency to host
        setLatency(denoiseFrameSize * 3 + d_roundToUnsignedInt(sampleRate * 0.005));
    }

    // ----------------------------------------------------------------------------------------------------------------

    DISTRHO_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(BBBAudioPlugin)
};

// --------------------------------------------------------------------------------------------------------------------

Plugin* createPlugin()
{
    return new BBBAudioPlugin();
}

// --------------------------------------------------------------------------------------------------------------------

END_NAMESPACE_DISTRHO

