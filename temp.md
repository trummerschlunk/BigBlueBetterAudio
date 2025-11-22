### What does this PR do?

This pull request introduces BigBlueBetterAudio, a  powerful speech enhancement audio processor for BigBlueButton (BBB). The solution runs entirely on the client, utilizing a WASM AudioWorklet  inserted into the BBB client’s audio chain.

Features:

- Voice Isolation: Leverages RNNoise, a machine learning model for effective real-time background noise reduction.
- Voice Optimization: Utilizes a custom-designed vocal enhancement process, crafted by an experienced mix and mastering  engineer with over 25 years of expertise in creating great vocal sound. This algorithm shapes the audio to make speech more natural, pleasant, and intelligible, while reducing distractions.

The result is significantly improved speech clarity and listening experience for all participants.

Further details: https://github.com/trummerschlunk/BigBlueBetterAudio

https://github.com/user-attachments/assets/b2b0f877-6a1b-4818-80a6-0fa2671cb418

### Closes Issue(s)
none

### Motivation
We're trying to make the world sound a little better ;)



### How to test

#### in BBB
Assuming you have a 3.1. BBB server with LiveKit in development mode, you can deploy the html5-client with our modifications. The connecting clients will have `Big Blue Better Audio` enabled by default. In `settings` you can switch back to `Standard Audio Filters` and compare.

#### live audio on the web
We set up a litte test page: https://bbba.4ohm.de

You can hear yourself talking through Big Blue Better Audio.

Please use a headset or headphones to avoid feedbacks.


### Technical details

The BBBA processing works by modifying `doGUM` and inject a audio worklet after the microphone stream, then returning the processed stream.  
This allows to reduce the code changes to BBB, but has the caveat that dynamic `applyConstraints` no longer works (the returned stream has no constraints), so we have disabled it on this PR if the wasm processing is available.

Ideally some deeper integration with BBB would be done, allowing to fetch the microphone stream along-side the `doGUM` returned stream (or similar ideas) so we could do `applyConstraints` on that initial microphone stream.  
This work is not part of this PR because:

- Chrome-based browsers (the most popular of all) currently do not do the dynamic `applyConstraints`, so the "regression" is minimal
- Deeper integration in BBB is tricky as we don't feel confident enough to do it right now
- BBB currently has 3 different audio systems (sip, sfu, livekit) and would be best to only do implementation once rather than for these 3

For compatibility with some old browsers that support Web-Assembly but not its SIMD feature (see [caniuse.com/wasm-simd](https://caniuse.com/wasm-simd)) we build a SIMD-optimized and a non-optimized version of BBBA, and automatically detect at run-time if SIMD is supported so we can use it.

### More on the BBBA and wasm

The audio processing part of BBBA comes in the form of a wasm (Web Assembly) blob, added in this PR for convenience.  
Typically it is not a good idea to add binary files directly into a git repo, but there is precedence in `pu` and we considered the BBBA wasm files to be the final version.  
If one wants to change the wasm files the setup is documented in [github.com/trummerschlunk/BigBlueBetterAudio/web](https://github.com/trummerschlunk/BigBlueBetterAudio/tree/main/web).  
A build script is available in [github.com/trummerschlunk/BigBlueBetterAudio/build-for-wasm.sh](https://github.com/trummerschlunk/BigBlueBetterAudio/blob/main/build-for-wasm.sh) which can be used for easy builds, also present as Github Actions CI to test each commit and provide downloadable artifacts.
