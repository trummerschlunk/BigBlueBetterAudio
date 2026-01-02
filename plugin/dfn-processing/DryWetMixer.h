#pragma once

#include <vector>
#include <atomic>
#include <cstddef>

class DryWetMixer {
public:
    void prepare(size_t latency_samples, size_t max_block_size);

    void push_dry(const float* input, size_t num_samples);
    void mix_wet(float* wet_buffer, size_t num_samples);

    void set_mix(float mix);

private:
    std::atomic<float> m_mix {1.0f};
    std::vector<float> m_delay_line;
    std::vector<float> m_dry_buffer;
    size_t m_delay_write_pos {0};
    size_t m_latency {0};
};

