#pragma once

#include "DfnOnnxRuntimeProcessor.h"
#include "DryWetMixer.h"

class DfnProcessor {
public:
    DfnProcessor();
    ~DfnProcessor() = default;

    void prepare(double sample_rate, size_t num_samples);
    void process(float* const* buffer, size_t numChannels, size_t numSamples);

    void set_attenuation_limit(float limit);
    void set_dry_wet(float mix);

private:
    anira::ContextConfig m_context_config;
    anira::InferenceConfig m_inference_config;
    DfnOnnxRuntimeProcessor m_custom_processor;
    anira::PrePostProcessor m_pre_post_processor;

    anira::InferenceHandler m_inference_handler;

    DryWetMixer m_dry_wet_mixer;
};
