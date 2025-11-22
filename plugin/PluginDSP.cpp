// Copyright 2025 Filipe Coelho <falktx@falktx.com>
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
    // scaling used for denoise processing
    static constexpr const uint32_t kDenoiseScaling = std::numeric_limits<short>::max();
    static constexpr const float kDenoiseScalingInv = 1.f / kDenoiseScaling;

    // denoise block size
    const uint32_t denoiseFrameSize = static_cast<uint32_t>(rnnoise_get_frame_size());
    const uint32_t denoiseFrameSizeF = denoiseFrameSize * sizeof(float);

    // denoise handle, keep it const so we never modify it
    DenoiseState* const denoise = rnnoise_create(nullptr);
   #ifndef SIMPLIFIED_MAPI_BUILD
    DenoiseState* const denoise2 = rnnoise_create(nullptr);
   #endif

    // buffers for latent processing
    float* bufferIn;
    float* bufferOut;
    HeapRingBuffer ringBufferDry;
    HeapRingBuffer ringBufferOut;
    uint32_t bufferInPos;
   #ifndef SIMPLIFIED_MAPI_BUILD
    // stereo variant
    float* bufferIn2;
    float* bufferOut2;
    HeapRingBuffer ringBufferDry2;
    HeapRingBuffer ringBufferOut2;
   #endif

    // whether we received enough latent audio frames
    bool processing;

   #ifndef SIMPLIFIED_MAPI_BUILD
    // translate Grace Period param (ms) into frames
    // updated when param changes
    uint32_t gracePeriodInFrames = 0;

    // assigned to gracePeriodInFrames when going mute
    uint32_t numFramesUntilGracePeriodOver = 0;

    // smooth bypass
    LinearValueSmoother dryValue;

    // smooth mute/unmute
    static constexpr const float kMuteAttack = 0.005f;
    static constexpr const float kMuteRelease = 0.1f;
    LinearValueSmoother muteValue;

    // cached parameter values
    float extraParameters[kExtraParamCount] = {};

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
       #ifndef SIMPLIFIED_MAPI_BUILD
        dryValue.setTimeConstant(0.02f);
        dryValue.setTargetValue(0.f);

        muteValue.setTimeConstant(kMuteRelease);
        muteValue.setTargetValue(0.f);

        extraParameters[kExtraParamThreshold] = 0.f;
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

   #ifndef SIMPLIFIED_MAPI_BUILD
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
                parameter.name   = "Sound Shaping Enable";
                parameter.symbol = "enable_soundshaping";
                break;
            // hide some unused parameters
            case kParameter_bypass:
            case kParameter_sb_target_spectrum_0:
            case kParameter_sb_target_spectrum_1:
            case kParameter_sb_target_spectrum_2:
            case kParameter_sb_target_spectrum_3:
            case kParameter_sb_target_spectrum_4:
            case kParameter_sb_target_spectrum_5:
            case kParameter_sb_target_spectrum_6:
            case kParameter_sb_target_spectrum_7:
            case kParameter_vad_ext:
            case kParameter_pre_lowcut:
            case kParameter_sb_meter__0:
            case kParameter_sb_meter__1:
            case kParameter_sb_meter__2:
            case kParameter_sb_meter__3:
            case kParameter_sb_meter__4:
            case kParameter_sb_meter__5:
            case kParameter_sb_meter__6:
            case kParameter_sb_meter__7:
                parameter.hints |= kParameterIsHidden;
                break;
            }
            return;
        }

        parameter.hints = kParameterIsAutomatable;

        switch (index - kParameterCount)
        {
        case kExtraParamGlobalBypass:
            parameter.initDesignation(kParameterDesignationBypass);
            break;
        case kExtraParamDenoiseEnable:
            parameter.hints |= kParameterIsBoolean | kParameterIsInteger;
            parameter.name   = "Noise Reduction Enable";
            parameter.symbol = "enable_denoise";
            parameter.ranges.def = 1.f;
            parameter.ranges.min = 0.f;
            parameter.ranges.max = 1.f;
            break;
        case kExtraParamThreshold:
            parameter.hints |= kParameterIsInteger;
            parameter.name   = "Threshold";
            parameter.symbol = "threshold";
            parameter.unit   = "%";
            parameter.ranges.def = 0.f;
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
            parameter.ranges.def = 100.f;
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
        case kExtraParamGlobalBypass:
            dryValue.setTargetValue(value);
            break;
        case kExtraParamGracePeriod:
            gracePeriodInFrames = d_roundToUnsignedInt(value * getSampleRate() / 1000.0);
            break;
        }
    }
   #endif

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
        bufferInPos = 0;
        processing = false;

       #ifndef SIMPLIFIED_MAPI_BUILD
        ringBufferDry2.createBuffer(ringBufferSize);
        ringBufferOut2.createBuffer(ringBufferSize);
        bufferIn2 = new float[denoiseFrameSize];
        bufferOut2 = new float[denoiseFrameSize];

        extraParameters[kExtraParamCurrentVAD] = 0.f;
        extraParameters[kExtraParamAverageVAD] = 0.f;
        extraParameters[kExtraParamMinimumVAD] = 0.f;
        extraParameters[kExtraParamMaximumVAD] = 0.f;

        dryValue.clearToTargetValue();

        muteValue.setTimeConstant(kMuteRelease);
        muteValue.setTargetValue(0.f);
        muteValue.clearToTargetValue();

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

        ringBufferDry.deleteBuffer();
        ringBufferOut.deleteBuffer();

       #ifndef SIMPLIFIED_MAPI_BUILD
        delete[] bufferIn2;
        delete[] bufferOut2;

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
        const float* input = inputs[0];
        /* */ float* output = outputs[0];

        // optimize for non-denormal usage
        for (uint32_t i = 0; i < frames; ++i)
        {
            if (!std::isfinite(input[i]))
                __builtin_unreachable();
            if (!std::isfinite(output[i]))
                __builtin_unreachable();
        }
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

        const bool denoiseEnabled = extraParameters[kExtraParamGlobalBypass] < 0.5f &&
                                    extraParameters[kExtraParamDenoiseEnable] >= 0.5f;

        // pass this threshold to unmute
        const float threshold = extraParameters[kExtraParamThreshold] * 0.01f;
       #endif

        // process audio a few frames at a time, so it always fits nicely into denoise blocks
        for (uint32_t offset = 0; offset != frames;)
        {
            const uint32_t framesCycle = std::min(denoiseFrameSize - bufferInPos, frames - offset);
            const uint32_t framesCycleF = framesCycle * sizeof(float);

            // copy input data into buffer
           #ifdef SIMPLIFIED_MAPI_BUILD
            std::memcpy(bufferIn + bufferInPos, input, framesCycleF);
           #else
            std::memcpy(bufferIn + bufferInPos, inputs[0] + offset, framesCycleF);
            std::memcpy(bufferIn2 + bufferInPos, inputs[1] + offset, framesCycleF);
           #endif

            // run denoise once input buffer is full
            if ((bufferInPos += framesCycle) == denoiseFrameSize)
            {
                bufferInPos = 0;

                // keep hold of dry signal so we can do smooth bypass
                ringBufferDry.writeCustomData(bufferIn, denoiseFrameSizeF);
                ringBufferDry.commitWrite();

                // scale audio input for denoise
                for (uint32_t i = 0; i < denoiseFrameSize; ++i)
                    bufferIn[i] *= kDenoiseScaling;

                // run denoise
                float vad = rnnoise_process_frame(denoise, bufferOut, bufferIn);

               #ifndef SIMPLIFIED_MAPI_BUILD
                // stereo
                ringBufferDry2.writeCustomData(bufferIn2, denoiseFrameSizeF);
                ringBufferDry2.commitWrite();
                for (uint32_t i = 0; i < denoiseFrameSize; ++i)
                    bufferIn2[i] *= kDenoiseScaling;

                vad = std::max(vad, rnnoise_process_frame(denoise2, bufferOut2, bufferIn2));
               #endif

               #ifdef SIMPLIFIED_MAPI_BUILD
                // scale back down to regular audio level
                for (uint32_t i = 0; i < denoiseFrameSize; ++i)
                    bufferOut[i] *= kDenoiseScalingInv;
               #else
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

                // scale back down to regular audio level, also apply mute as needed
                for (uint32_t i = 0; i < denoiseFrameSize; ++i)
                {
                    if (numFramesUntilGracePeriodOver != 0 && --numFramesUntilGracePeriodOver == 0)
                    {
                        muteValue.setTimeConstant(kMuteRelease);
                        muteValue.setTargetValue(0.f);
                    }

                    const float muteNextValue = muteValue.next();
                    bufferOut[i] *= kDenoiseScalingInv;
                    bufferOut[i] *= muteNextValue;
                   #ifndef SIMPLIFIED_MAPI_BUILD
                    bufferOut2[i] *= kDenoiseScalingInv;
                    bufferOut2[i] *= muteNextValue;
                   #endif
                }

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

                // process denoise output on faust side
                FaustGeneratedPlugin::setParameterValue(kParameter_vad_ext, vad);

                float* ins[2];
                float* outs[2];

               #ifdef SIMPLIFIED_MAPI_BUILD
                // we previously wrote to bufferOut, so use that as faust input
                ins[0] = bufferOut;
                outs[0] = bufferIn;
               #else
                if (denoiseEnabled)
                {
                    // we previously wrote to bufferOut, so use that as faust input
                    ins[0] = bufferOut;
                    ins[1] = bufferOut2;
                    outs[0] = bufferIn;
                    outs[1] = bufferIn2;
                }
                else
                {
                    // scale audio down from denoise
                    for (uint32_t i = 0; i < denoiseFrameSize; ++i)
                    {
                        bufferIn[i] *= kDenoiseScalingInv;
                        bufferIn2[i] *= kDenoiseScalingInv;
                    }

                    // use dry input as faust input, behaving as if denoise was bypassed
                    ins[0] = bufferIn;
                    ins[1] = bufferIn2;
                    outs[0] = bufferOut;
                    outs[1] = bufferOut2;
                }
               #endif
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
               #ifdef SIMPLIFIED_MAPI_BUILD
                // copy processed buffer directly into output
                ringBufferOut.readCustomData(output, framesCycleF);

                // retrieve dry buffer (doing nothing with it)
                ringBufferDry.readCustomData(bufferOut, framesCycleF);
               #else
                // apply smooth bypass
                if (d_isNotEqual(dryValue.getCurrentValue(), dryValue.getTargetValue()))
                {
                    // copy processed buffer directly into output
                    ringBufferOut.readCustomData(outputs[0] + offset, framesCycleF);
                    ringBufferOut2.readCustomData(outputs[1] + offset, framesCycleF);

                    // retrieve dry buffer
                    ringBufferDry.readCustomData(bufferOut, framesCycleF);
                    ringBufferDry2.readCustomData(bufferOut2, framesCycleF);

                    for (uint32_t i = 0; i < framesCycle; ++i)
                    {
                        const float dry = dryValue.next();
                        const float wet = 1.f - dry;
                        outputs[0][i + offset] = outputs[0][i + offset] * wet + bufferOut[i] * dry;
                        outputs[1][i + offset] = outputs[1][i + offset] * wet + bufferOut2[i] * dry;
                    }
                }
                // disable (bypass on)
                else if (d_isNotZero(dryValue.getTargetValue()))
                {
                    // copy dry buffer directly into output
                    ringBufferDry.readCustomData(outputs[0] + offset, framesCycleF);
                    ringBufferDry2.readCustomData(outputs[1] + offset, framesCycleF);

                    // retrieve processed buffer (doing nothing with it)
                    ringBufferOut.readCustomData(bufferOut, framesCycleF);
                    ringBufferOut2.readCustomData(bufferOut2, framesCycleF);
                }
                // enabled (bypass off)
                else
                {
                    // copy processed buffer directly into output
                    ringBufferOut.readCustomData(outputs[0] + offset, framesCycleF);
                    ringBufferOut2.readCustomData(outputs[1] + offset, framesCycleF);

                    // retrieve dry buffer (doing nothing with it)
                    ringBufferDry.readCustomData(bufferOut, framesCycleF);
                    ringBufferDry2.readCustomData(bufferOut2, framesCycleF);
                }
               #endif
            }
            // capture more audio frames until it fits 1 denoise block
            else
            {
                // mute output while still capturing audio frames
               #ifdef SIMPLIFIED_MAPI_BUILD
                std::memset(output, 0, framesCycleF);
               #else
                std::memset(outputs[0] + offset, 0, framesCycleF);
                std::memset(outputs[1] + offset, 0, framesCycleF);
               #endif

                if (ringBufferOut.getReadableDataSize() >= denoiseFrameSizeF)
                    processing = true;
            }

            offset += framesCycle;
           #ifdef SIMPLIFIED_MAPI_BUILD
            input += framesCycle;
            output += framesCycle;
           #endif
        }
    }

   /**
      Optional callback to inform the plugin about a sample rate change.
      This function will only be called when the plugin is deactivated.
    */
    void sampleRateChanged(const double sampleRate) override
    {
       #ifndef SIMPLIFIED_MAPI_BUILD
        dryValue.setSampleRate(sampleRate);
        muteValue.setSampleRate(sampleRate);
        // update internal value that depends on sample rate
        setParameterValue(kParameterCount + kExtraParamGracePeriod, extraParameters[kExtraParamGracePeriod]);
       #endif
        setLatency(denoiseFrameSize + d_roundToUnsignedInt(sampleRate * 0.005));
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

