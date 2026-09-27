// Regression tests for linked gain and independent stereo audio paths.
#include "src/DistrhoPluginInternal.hpp"
#include <algorithm>
#include <array>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <vector>

using namespace DISTRHO;
using Audio = std::array<std::vector<float>, 2>;

static void setParameter(PluginExporter& plugin, const char* symbol, float value)
{
    for (uint32_t i = 0; i < plugin.getParameterCount(); ++i)
        if (plugin.getParameterSymbol(i) == symbol)
        {
            plugin.setParameterValue(i, value);
            return;
        }
    std::fprintf(stderr, "Missing parameter: %s\n", symbol);
    std::exit(1);
}

static Audio render(const Audio& input, bool isolation, uint32_t block)
{
    PluginExporter plugin(nullptr, nullptr, nullptr, nullptr);
    for (bool in : {false, true})
        for (uint32_t c = 0; c < 2; ++c)
            if (plugin.getAudioPort(in, c).groupId != kPortGroupStereo)
                std::exit(1);
    setParameter(plugin, "voice_isolation", isolation ? 1.f : 0.f);
    setParameter(plugin, "threshold", 0.f);
    // Drive the dynamics and limiter, including strong asymmetric inputs.
    setParameter(plugin, "pre_gain", 12.f);
    Audio output{std::vector<float>(input[0].size()), std::vector<float>(input[0].size())};
    plugin.activate();
    for (uint32_t offset = 0; offset < input[0].size();)
    {
        const uint32_t count = std::min<uint32_t>(block, input[0].size() - offset);
        const float* ins[] = {input[0].data() + offset, input[1].data() + offset};
        float* outs[] = {output[0].data() + offset, output[1].data() + offset};
        plugin.run(ins, outs, count);
        offset += count;
    }
    plugin.deactivate();
    return output;
}

int main()
{
    d_nextBufferSize = 4096;
    d_nextSampleRate = 48000;
    const uint32_t length = 24000;
    Audio input{std::vector<float>(length), std::vector<float>(length)};
    bool ok = true;
    for (bool isolation : {false, true})
    {
        // Exact proportionality must survive every shared time-varying gain,
        // including opposite polarity and a completely silent channel.
        for (float ratio : {0.f, 0.25f, -1.f, 1.f})
        {
            for (uint32_t i = 0; i < length; ++i)
            {
                const float t = i / 48000.f;
                input[0][i] = (0.3f + 0.2f * std::sin(19.f*t)) *
                    (std::sin(1200.f*t) + 0.3f*std::sin(4100.f*t) + 0.1f*std::sin(27000.f*t));
                input[1][i] = ratio * input[0][i];
            }
            const Audio output = render(input, isolation, 137);
            double energy = 0, error = 0;
            for (uint32_t i = 0; i < length; ++i)
            {
                ok &= std::isfinite(output[0][i]) && std::isfinite(output[1][i]);
                energy += double(output[0][i])*output[0][i];
                const double e = output[1][i] - ratio * output[0][i];
                error += e*e;
            }
            const bool linked = energy > 1e-8 && error < energy * 1e-10;
            ok &= linked;
            std::printf("%s stereo ratio=%g isolation=%d energy=%g relativeError=%g\n",
                        linked ? "PASS" : "FAIL", ratio, isolation, energy, error / std::max(energy, 1e-30));
        }

        // Unrelated L/R signals must be symmetric under swapping channels,
        // independent of the host's block size.
        for (uint32_t i = 0; i < length; ++i)
            input[1][i] = 0.1f * std::sin(i * 0.131f);
        const Audio normal = render(input, isolation, 64);
        std::swap(input[0], input[1]);
        const Audio swapped = render(input, isolation, 512);
        double error = 0, energy = 0;
        for (uint32_t i = 0; i < length; ++i)
            for (uint32_t c = 0; c < 2; ++c)
            {
                const double e = normal[c][i] - swapped[1-c][i];
                error += e*e;
                energy += double(normal[c][i])*normal[c][i];
            }
        const bool symmetric = energy > 1e-8 && error < energy * 1e-10;
        ok &= symmetric;
        std::printf("%s channel swap/block size isolation=%d relativeError=%g\n",
                    symmetric ? "PASS" : "FAIL", isolation, error / std::max(energy, 1e-30));
    }
    return ok ? 0 : 1;
}
