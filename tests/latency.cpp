// Exercise the actual DSP through DPF's host-facing exporter.
#include "src/DistrhoPluginInternal.hpp"
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <vector>

using namespace DISTRHO;

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

static bool check(PluginExporter& plugin, double rate, uint32_t block, bool bypass)
{
    plugin.setSampleRate(rate, true);
    setParameter(plugin, "dpf_bypass", bypass ? 1.f : 0.f);
    setParameter(plugin, "voice_isolation", 0.f);
    const uint32_t latency = plugin.getLatency();
    const uint32_t impulse = 4096;
    const uint32_t length = impulse + latency + 4096;
    std::vector<float> input(length, 0.f), inputRight(length, 0.f), left(length, 0.f), right(length, 0.f);
    input[impulse] = 0.01f;
    inputRight[impulse] = 0.005f;
    plugin.activate();
    for (uint32_t offset = 0; offset < length;)
    {
        // block=0 exercises changing host block sizes within one stream.
        const uint32_t count = std::min(block ? block : 1 + offset % 997, length - offset);
        const float* ins[] = {input.data() + offset, inputRight.data() + offset};
        float* outs[] = {left.data() + offset, right.data() + offset};
        plugin.run(ins, outs, count);
        offset += count;
    }
    plugin.deactivate();
    uint32_t onset = 0;
    while (onset < length && left[onset] == 0.f)
        ++onset;
    bool ok = onset == impulse + latency;
    for (uint32_t i = 0; i < length; ++i)
    {
        ok &= std::isfinite(left[i]) && std::isfinite(right[i]);
        if (bypass)
        {
            ok &= left[i] == (i >= latency ? input[i - latency] : 0.f);
            ok &= right[i] == (i >= latency ? inputRight[i - latency] : 0.f);
        }
        else
            ok &= std::abs(right[i] - 0.5f * left[i]) < 1e-6f;
    }
    std::printf("%s rate=%.0f block=%u bypass=%d reported=%u measured=%d\n",
                ok ? "PASS" : "FAIL", rate, block, bypass, latency, int(onset) - int(impulse));
    return ok;
}

int main()
{
    d_nextBufferSize = 4096;
    d_nextSampleRate = 48000;
    bool ok = true;
    // Construct at 48 kHz, then change rate through the host callback. Reuse
    // each instance for the bypass test to exercise deactivation/reactivation.
    for (double rate : {48000., 44100., 22050., 96000., 192000.})
        for (uint32_t block : {1u, 64u, 137u, 480u, 512u, 4096u, 0u})
        {
            PluginExporter plugin(nullptr, nullptr, nullptr, nullptr);
            for (bool bypass : {false, true})
                ok = check(plugin, rate, block, bypass) && ok;
        }
    return ok ? 0 : 1;
}
