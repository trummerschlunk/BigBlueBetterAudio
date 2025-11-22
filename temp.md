### What does this PR do?





This pull request introduces BigBlueBetterAudio, a  powerful speech enhancement audio processor for BigBlueButton (BBB). The solution runs entirely on the client, utilizing a WASM AudioWorklet  inserted into the BBB client’s audio chain.

Features:

- Noise Suppression: Leverages RNNoise, a machine learning model for effective real-time background noise reduction.
- Vocal Enhancement: Utilizes a custom-designed vocal enhancement process, crafted by an experienced mix and mastering  engineer with over 25 years of expertise in creating great vocal sound. This algorithm shapes the audio to make speech more natural, pleasant, and intelligible, while reducing distractions.

The result is significantly improved speech clarity and listening experience for all participants.

Further details: https://github.com/trummerschlunk/BigBlueBetterAudio

https://github.com/user-attachments/assets/b2b0f877-6a1b-4818-80a6-0fa2671cb418

### Closes Issue(s)
none

### Motivation
I'm trying to make the world sound a little better ;)
From my experience, the sound of a speech performance an important layer beneath it's content.
Some studies show that poor audio causes our brains to work up to 35% harder to interpret information.


### How to test



### More
<!-- Anything else we should know when reviewing? -->
- [ ] Added/updated documentation
