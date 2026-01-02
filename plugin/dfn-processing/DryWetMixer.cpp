#include "DryWetMixer.h"

void DryWetMixer::prepare(size_t latency_samples, size_t max_block_size)
{
    m_latency = latency_samples;
    m_delay_line.resize(m_latency, 0.0f);
    m_delay_write_pos = 0;
    m_dry_buffer.resize(max_block_size);
}

void DryWetMixer::push_dry(const float* input, size_t num_samples)
{
    for (size_t i = 0; i < num_samples; ++i) {
        m_dry_buffer[i] = m_delay_line[m_delay_write_pos];
        m_delay_line[m_delay_write_pos] = input[i];
        m_delay_write_pos = (m_delay_write_pos + 1) % m_latency;
    }
}

void DryWetMixer::mix_wet(float* wet_buffer, size_t num_samples)
{
    float wet = m_mix.load(std::memory_order_acquire);
    float dry = 1.0f - wet;

    for (size_t i = 0; i < num_samples; ++i) {
        wet_buffer[i] = m_dry_buffer[i] * dry + wet_buffer[i] * wet;
    }
}

void DryWetMixer::set_mix(float mix)
{
    m_mix.store(mix, std::memory_order_release);
}
