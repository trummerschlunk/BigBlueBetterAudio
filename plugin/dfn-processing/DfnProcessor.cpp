#include "dfn-processing/DfnProcessor.h"

constexpr unsigned int m_num_threads = 1;

DfnProcessor::DfnProcessor():
    m_context_config(m_num_threads),
    m_inference_config(getDfnConfig()),
    m_custom_processor(m_inference_config),
    m_pre_post_processor(m_inference_config),
    m_inference_handler(m_pre_post_processor, m_inference_config, m_custom_processor, m_context_config)
{

}

void DfnProcessor::prepare(double sample_rate, size_t num_samples)
{
    anira::HostConfig host_config = {
        static_cast<float>(num_samples),
        static_cast<float>(sample_rate),
        false
    };

    m_inference_handler.prepare(host_config);
    m_inference_handler.set_inference_backend(anira::InferenceBackend::CUSTOM);

    size_t latency = m_inference_handler.get_latency(0);
    m_dry_wet_mixer.prepare(latency, num_samples);
}

void DfnProcessor::process(float* const* buffer, size_t numChannels, size_t numSamples)
{
    m_dry_wet_mixer.push_dry(buffer[0], numSamples);
    m_inference_handler.process(buffer, numSamples, 0);
    m_dry_wet_mixer.mix_wet(buffer[0], numSamples);

    for (size_t ch = 1; ch < numChannels; ++ch) {
        std::copy_n(buffer[0], numSamples, buffer[ch]);
    }
}

void DfnProcessor::set_attenuation_limit(float limit)
{
    m_custom_processor.set_attenuation_limit(limit);
}

void DfnProcessor::set_dry_wet(float mix)
{
    m_dry_wet_mixer.set_mix(mix);
}

