// Copyright 2025 Filipe Coelho <falktx@falktx.com>
// SPDX-License-Identifier: GPL-3.0-or-later

#include "DistrhoPlugin.hpp"
#include "DistrhoPluginInfo.h"
#include "extra/RingBuffer.hpp"
#include "extra/ScopedDenormalDisable.hpp"
#include "extra/ValueSmoother.hpp"

// faustpp generated plugin template
#include "pregen/FaustPlugin.cpp"

#include "pregen/FaustPluginInfo.h"
#include "rnnoise.h"

// checks to ensure things are still as we expect them to be from faust dsp side
static_assert(DISTRHO_PLUGIN_NUM_INPUTS == 1, "has 1 audio input");
static_assert(DISTRHO_PLUGIN_NUM_OUTPUTS == 1, "has 1 audio output");

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

    // buffers for latent processing
    float* bufferIn;
    float* bufferOut;
    HeapRingBuffer ringBufferDry;
    HeapRingBuffer ringBufferOut;
    uint32_t bufferInPos;

    // whether we received enough latent audio frames
    bool processing;

   #ifndef SIMPLIFIED_NOOICE
    // translate Grace Period param (ms) into 48kHz frames
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
       #ifndef SIMPLIFIED_NOOICE
        dryValue.setTimeConstant(0.02f);
        dryValue.setTargetValue(0.f);

        muteValue.setTimeConstant(kMuteRelease);
        muteValue.setTargetValue(0.f);

        extraParameters[kExtraParamThreshold] = 60.f;
        extraParameters[kExtraParamMinimumVAD] = 100.f;
       #endif

        // initial sample rate setup
        sampleRateChanged(getSampleRate());

        // set parameters matching defaults
        setParameterValue(kParameterCount + kExtraParamThreshold, 0.f);
        setParameterValue(kParameterCount + kExtraParamGracePeriod, 1000.f);
    }

   /**
      Destructor.
    */
    ~BBBAudioPlugin()
    {
        rnnoise_destroy(denoise);
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

   #ifndef SIMPLIFIED_NOOICE
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
            return FaustGeneratedPlugin::initParameter(index, parameter);

        parameter.hints = kParameterIsAutomatable;

        switch (index - kParameterCount)
        {
        case kExtraParamBypass:
            parameter.initDesignation(kParameterDesignationBypass);
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
        case kExtraParamBypass:
            dryValue.setTargetValue(value);
            break;
        case kExtraParamGracePeriod:
            // 48 frames = 1ms (48000 kHz [1s] / 1000)
            gracePeriodInFrames = d_roundToUnsignedInt(value * 48.f);
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

       #ifndef SIMPLIFIED_NOOICE
        extraParameters[kExtraParamCurrentVAD] = 0.f;
        extraParameters[kExtraParamAverageVAD] = 0.f;
        extraParameters[kExtraParamMinimumVAD] = 100.f;
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
    }

   /**
      Run/process function for plugins without MIDI input.
      @note Some parameters might be null if there are no audio inputs or outputs.
    */
    void run(const float** const inputs, float** const outputs, const uint32_t frames) override
    {
        const float* input = inputs[0];
        /* */ float* output = outputs[0];

        // optimize for non-denormal usage
        const ScopedDenormalDisable sdd;
        for (uint32_t i = 0; i < frames; ++i)
        {
            if (!std::isfinite(input[i]))
                __builtin_unreachable();
            if (!std::isfinite(output[i]))
                __builtin_unreachable();
        }

       #ifndef SIMPLIFIED_NOOICE
        // reset stats if enabled status changed
        const bool statsEnabled = extraParameters[kExtraParamEnableStats] > 0.5f;
        if (stats.enabled != statsEnabled)
        {
            stats.reset();
            stats.enabled = statsEnabled;
        }

        // pass this threshold to unmute
        const float threshold = extraParameters[kExtraParamThreshold] * 0.01f;
       #endif

        // process audio a few frames at a time, so it always fits nicely into denoise blocks
        for (uint32_t offset = 0; offset != frames;)
        {
            const uint32_t framesCycle = std::min(denoiseFrameSize - bufferInPos, frames - offset);
            const uint32_t framesCycleF = framesCycle * sizeof(float);

            // copy input data into buffer
            std::memcpy(bufferIn + bufferInPos, input, framesCycleF);

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
                const float vad = rnnoise_process_frame(denoise, bufferOut, bufferIn);

               #ifdef SIMPLIFIED_NOOICE
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

                    bufferOut[i] *= kDenoiseScalingInv;
                    bufferOut[i] *= muteValue.next();
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
                std::memcpy(bufferIn, bufferOut, denoiseFrameSizeF);
                FaustGeneratedPlugin::setParameterValue(kParameter_vad_ext, vad);
                dsp->compute(denoiseFrameSize, &bufferIn, &bufferOut);

                // write output into ringbuffer
                ringBufferOut.writeCustomData(bufferOut, denoiseFrameSizeF);
                ringBufferOut.commitWrite();
            }

            // we have enough audio frames in the ring buffer, can give back audio to host
            if (processing)
            {
               #ifndef SIMPLIFIED_NOOICE
                // apply smooth bypass
                if (d_isNotEqual(dryValue.getCurrentValue(), dryValue.getTargetValue()))
                {
                    // copy processed buffer directly into output
                    ringBufferOut.readCustomData(output, framesCycleF);

                    // retrieve dry buffer
                    ringBufferDry.readCustomData(bufferOut, framesCycleF);

                    for (uint32_t i = 0; i < framesCycle; ++i)
                    {
                        const float dry = dryValue.next();
                        const float wet = 1.f - dry;
                        output[i] = output[i] * wet + bufferOut[i] * dry;
                    }
                }
                // disable (bypass on)
                else if (d_isNotZero(dryValue.getTargetValue()))
                {
                    // copy dry buffer directly into output
                    ringBufferDry.readCustomData(output, framesCycleF);

                    // retrieve processed buffer (doing nothing with it)
                    ringBufferOut.readCustomData(bufferOut, framesCycleF);
                }
                // enabled (bypass off)
                else
               #endif
                {
                    // copy processed buffer directly into output
                    ringBufferOut.readCustomData(output, framesCycleF);

                    // retrieve dry buffer (doing nothing with it)
                    ringBufferDry.readCustomData(bufferOut, framesCycleF);
                }
            }
            // capture more audio frames until it fits 1 denoise block
            else
            {
                // mute output while still capturing audio frames
                std::memset(output, 0, framesCycleF);

                if (ringBufferOut.getReadableDataSize() >= denoiseFrameSizeF)
                    processing = true;
            }

            offset += framesCycle;
            input += framesCycle;
            output += framesCycle;
        }
    }

   /**
      Optional callback to inform the plugin about a sample rate change.
      This function will only be called when the plugin is deactivated.
    */
    void sampleRateChanged(const double sampleRate) override
    {
       #ifndef SIMPLIFIED_NOOICE
        dryValue.setSampleRate(sampleRate);
        muteValue.setSampleRate(sampleRate);
       #endif
        setLatency(d_roundToUnsignedInt(sampleRate / 48000.0 * denoiseFrameSize));
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

