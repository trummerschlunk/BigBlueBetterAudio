# BigBlueBetterAudio - Documentaion
definition

## Faust and c++
made with Faust and preexisting DSP code (RNNoise)

## WASM Module
what's WASM

## Audio Flow
image

### RNNoise Voice Isolation
info

### preGain
A simple gain / attenuator control to adjust the input level of the audio. It ranges from -20dB to +20dB

### Highpass Filter
A 6dB fixed highpass filter at 42Hz to get rid of any subsonic or DC content.

### crossover
Linkwitz-Riley 4th-order 8-way crossover. Crossover frequencies are (Hz): 100,200,400,800,1600,3200,6400

### Spectral Balancer
A custom built DSP process to smooth the frequency spectrum of the audio. Simply put, it makes thin voices sound warmer and dull voices fresher. And everything in between.

Each of the 8 frequency bands's loudness is continuously compared to the loudness of the full range signal. This results in a temporary loudness-normalised frequency curve of the audio. This curve is compared to a predefined target curve and the loudness of the bands is nudged to its direction.

These adjustments are time-smoothed and only applied when voice activity is detected by RNNoise.

The spectral balancing process results in a smoothed out frequency responce of any incoming voices. Thin voices sound warner, dull voices sound fresher.

### Multiband Compressor
The 8 frequency bands are passed on to a custom coded 8-band multiband compressor which shapes the audio esthetically to result in a smoother sound.

The time constants and values are carefully chosen to provide a consistant but natural vocal sound.

The bands are recombined to a mono signal.

### Lowpass Filter
A 18dB fixed lowpass filter at 12kHz to roll off any ultra high audio content which is not needed for speech and could cause artifacts in data compression.

### Post Gain
A simple gain / attenuator control to adjust the output level of the audio. It ranges from -20dB to +20dB

### Lookahead Limiter
A safety lookahead limiter to protect the audio from clipping on the output. Output ceiling is -1dbfs, lookahead time is 10ms.