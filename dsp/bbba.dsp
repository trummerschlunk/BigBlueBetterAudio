//   ____  _         ____  _              ____       _   _                                _ _       
//  |  _ \(_)       |  _ \| |            |  _ \     | | | |                /\            | (_)      
//  | |_) |_  __ _  | |_) | |_   _  ___  | |_) | ___| |_| |_ ___ _ __     /  \  _   _  __| |_  ___  
//  |  _ <| |/ _` | |  _ <| | | | |/ _ \ |  _ < / _ \ __| __/ _ \ '__|   / /\ \| | | |/ _` | |/ _ \ 
//  | |_) | | (_| | | |_) | | |_| |  __/ | |_) |  __/ |_| ||  __/ |     / ____ \ |_| | (_| | | (_) |
//  |____/|_|\__, | |____/|_|\__,_|\___| |____/ \___|\__|\__\___|_|    /_/    \_\__,_|\__,_|_|\___/ 
//            __/ |                                                                                 
//           |___/                                                                                  
//
// BBBA is a voice optimization processor for open source video conferencing platforms.
// This Faust code is the post voice-isolation DSP part.
// https://github.com/trummerschlunk/BigBlueBetterAudio

// -*-Faust-*-

// 0.29 cleanup

declare name "bbba";
declare version "0.29";             
declare author "Klaus Scheuermann";
declare license "GPLv3";

import("stdfaust.lib");

// SYMBOLS FOR PARAMETERS
// [symbol:bypass]                  Global Enable 0/1 (or 1/0 ???)
// [symbol:pre_gain]                Input Gain -20/+20 dB
// [symbol:sb_strength]             Spectral Balancer Strength 0/100 %
// [symbol:mb_strength]             Multiband Dynamics Strength 0/100 %
// [symbol:post_gain]               Output Gain before Limiter -20/+20 dB


// INIT VALUES

Nch = 1;                            // bbba is mono
Nbands = 8;                         // number of bands of the multiband processing and the spectral Balancer
maxSR = 48000;                      // maximum samplerate

pre_gain_init = 2;
post_gain_init = 0;

lev_target_init = -18;

sb_strength_init = 60;
sb_target_spectrum_init = -10, -5, -5, -8, -9, -10, -7, -4;

// Analysis layer. Not exposed as plugin parameters - they shape how the
// balancer decides, not what the user reaches for.
sb_levelneutral = 1;    // 1 = corrections sum to zero, so the balancer changes
                        //     tonal balance only and never overall loudness.
                        //     0 = legacy behaviour.
sb_bandrange = 18;      // dB. A band sitting further than this below the
                        //     average band holds no programme - a band-limited
                        //     source, or a band RNNoise has emptied out - and is
                        //     neither corrected nor counted in the mean. Stops
                        //     the balancer boosting denoiser artefacts.
sb_tolerance = 1;       // dB deadband. Deviations smaller than this are left
                        //     alone rather than chased.
sb_threshold = -50;     // dBFS. Fullrange level below which nothing is
                        //     corrected. Scales the gains after the ballistics,
                        //     so it does not have to wait for the release.
sb_gateknee = 6;        // dB, soft knee of both gates.

mb_strength_init = 60;



// GUI

gui_main(x) = hgroup("main",x);
gui_sb(x) = gui_main(hgroup("spectral_balancer",x));
gui_mb(x) = gui_main(hgroup("multiband_compressor",x));
gui_leveler(x) = gui_main(hgroup("leveler",x));

bypass = gui_main(checkbox("[0]bypass[symbol:bypass]"));

preGainSlider = gui_main(vslider("[1][unit:dB]preGain[symbol:pre_gain]", pre_gain_init, -20, 20, 0.1));
postGainSlider = gui_main(vslider("[9][unit:dB]postGain[symbol:post_gain]", post_gain_init, -20, 20, 0.1));

preFilter_hp_freq = gui_main(vslider("preLowcut_freq[scale:log][symbol:pre_lowcut]",42,10,400,1));

target = gui_leveler(vslider("[1][unit:dB]target[symbol:leveler_target]", lev_target_init, -60, 0, 1));

sb_strength = gui_sb(vslider("[1][unit:%]sb_strength[symbol:sb_strength]", sb_strength_init,0,100,1)) : _/100;
sb_target_spectrum = sb_target_spectrum_init;

mb_strength = gui_mb(vslider("mb_strength[symbol:mb_strength]", mb_strength_init,0,100,1)) / 100;



// METERS

sb_meter(i) = _;
sb_gainmeter(i) = _;

compressor_meter(i) = _;



// external VAD from RNNOISE

vad_ext = gui_main(vslider("[3]vad_ext[symbol:vad_ext]",1,0,1,0.001));



//   __  __       _       
//  |  \/  |     (_)      
//  | \  / | __ _ _ _ __  
//  | |\/| |/ _` | | '_ \ 
//  | |  | | (_| | | | | |
//  |_|  |_|\__,_|_|_| |_|
                       
process = si.bus(Nch) 
            : preGain(1)
            : preHighpass
            : spectral_balancer 
            : multiband_compressor
            : postLowpass
            : postGain(1)
            : limiter_lookahead
        ;



//        _   _ _ _ _         
//       | | (_) (_) |        
//  _   _| |_ _| |_| |_ _   _ 
// | | | | __| | | | __| | | |
// | |_| | |_| | | | |_| |_| |
//  \__,_|\__|_|_|_|\__|\__, |
//                       __/ |
//                      |___/ 
//

// dB CONVERSION
// 10^(x/20) == e^(x*ln10/20) and 20*log10(x) == ln(x)*20/ln10, so exp/log can
// replace pow/log10 with identical results to float precision. powf is much
// more expensive than expf on the wasm/emscripten target in particular.
lin2db(x) = log(max(ma.MIN, x)) * 8.685889638065035;    // 20/ln(10)
db2lin(x) = exp(x * 0.11512925464970229);               // ln(10)/20

// co.peak_compression_gain_mono_db with lin2db substituted for ba.linear2db
comp_gain_db(strength,thresh,att,rel,knee,prePost) =
    abs : ba.bypass1(prePost,si.onePoleSwitching(att,rel)) : lin2db
        : gain_computer(strength,thresh,knee)
        : ba.bypass1((prePost != 1),si.onePoleSwitching(rel,att))
with {
    gain_computer(strength,thresh,knee,level) =
        select3((level>(thresh-(knee/2)))+(level>(thresh+(knee/2))),
                0,
                ((level-thresh+(knee/2)) : pow(2)/(2*max(ma.EPSILON,knee))),
                (level-thresh))
        : max(0)*-strength;
};

// ratio2strength
ratio2strength(ratio) = 1-(1/ratio);

// pre and post gain

preGain(n) = par(i,n,gain) with {
    gain = _ * (preGainSlider : ba.db2linear);
};

postGain(n) = par(i,n,gain) with {
    gain = _ * (postGainSlider : ba.db2linear);
};



//   ______ _ _ _            
//  |  ____(_) | |           
//  | |__   _| | |_ ___ _ __ 
//  |  __| | | | __/ _ \ '__|
//  | |    | | | ||  __/ |   
//  |_|    |_|_|\__\___|_|   
//                  
                          
// PRE FILTER
preHighpass = fi.highpass(1,preHighpass_freq);
preHighpass_freq = 42;

// POST FILTER
postLowpass = fi.lowpass(3,postLowpass_freq);
postLowpass_freq = 12000;

// CROSSOVER for spectral balancer and multiband compressor
crossover = fi.crossover8LR4(100,200,400,800,1600,3200,6400);



//    _____                 _             _   ____        _                           
//   / ____|               | |           | | |  _ \      | |                          
//  | (___  _ __   ___  ___| |_ _ __ __ _| | | |_) | __ _| | __ _ _ __   ___ ___ _ __ 
//   \___ \| '_ \ / _ \/ __| __| '__/ _` | | |  _ < / _` | |/ _` | '_ \ / __/ _ \ '__|
//   ____) | |_) |  __/ (__| |_| | | (_| | | | |_) | (_| | | (_| | | | | (_|  __/ |   
//  |_____/| .__/ \___|\___|\__|_|  \__,_|_| |____/ \__,_|_|\__,_|_| |_|\___\___|_|   
//         | |                                                                        
//         |_|                                                                        

spectral_balancer = _ <: (gains, crossover) : pairUp(Nbands) : par(i,Nbands, *)

        with {

            xoverbank = crossover;
            sb_limitUP = 6, 9, 12, 12, 12, 12, 9, 6;
            sb_limitDOWN = 12;
            sb_limit(i) = max(ma.neg(sb_limitDOWN)) : min(sb_limitUP : ba.selector(i,Nbands));

            sb_envelope(i) = si.smooth(ba.tau2pole(tau)) with{
                tau = 0.2 * ((Nbands-i) / Nbands);
            };

            sb_target(i) = sb_target_spectrum : ba.selector(i,Nbands);

            // ---- routing helpers -------------------------------------------
            // Interleave two n-buses into n pairs.
            pairUp(n) = route(2*n, 2*n, par(i, n, ((i+1, 2*i+1), (n+i+1, 2*i+2))));
            // Lay a copy of one scalar beside every signal on an n-bus.
            withScalar(n) = route(n+1, 2*n, (par(i, n, (i+1, 2*i+1)),
                                             par(i, n, (n+1, 2*i+2))));

            // ---- measurement -----------------------------------------------
            // Level-normalised spectrum: each band relative to the fullrange
            // level, so the curve is the *shape* of the spectrum, not its level.
            // Both envelopes share their time constants, so a decay cancels.
            curveBus = _ <: ((xoverbank : par(i,Nbands, measure_bp(i))),
                             (measure_full <: si.bus(Nbands)))
                     : pairUp(Nbands)
                     : par(i,Nbands, (_-_) : sb_meter(i));

            // ---- band gate --------------------------------------------------
            // 1 while the band sits within sb_bandrange of the average band,
            // fading out below that. Measured against the plain, unweighted mean
            // so the gate cannot chase its own output. Normalising against the
            // fullrange level cancels here, so this reads pure spectral shape.
            weights = si.bus(Nbands) <: (si.bus(Nbands),
                                         (si.bus(Nbands) :> _ : /(Nbands)))
                    : withScalar(Nbands) : par(i,Nbands, weightOf)
            with {
                weightOf(c, mean) = (c - mean + sb_bandrange)/sb_gateknee : clamp01;
            };

            // ---- level neutrality -------------------------------------------
            // Weighted mean of the deviation, taken out of every band so the
            // corrections always sum to zero: a uniform offset between curve and
            // target is a level difference, not a balance problem.
            devMean = si.bus(2*Nbands) : pairUp(Nbands) <: (wSum, dSum) : ratio
            with {
                wSum = par(i,Nbands, (!,_)) :> _ : max(ma.EPSILON);
                dSum = par(i,Nbands, devOf(i)) :> _;
                devOf(i, c, w) = (sb_target(i) - c) * w;
                ratio(w, d) = d / w;
            };

            // ---- fullrange gate ---------------------------------------------
            // Multiplies the gains *after* the ballistics: inside the smoother it
            // could only take effect as fast as the release allowed.
            levelGate = measure_full : _-sb_threshold : _/sb_gateknee : clamp01 : si.smoo;

            // ---- the wanted correction --------------------------------------
            toWant = si.bus(2*Nbands) <: (si.bus(2*Nbands), devMean)
                   : spread : par(i,Nbands, wantOf(i))
            with {
                spread = route(2*Nbands+1, 3*Nbands,
                           par(i, Nbands, ((i+1,          3*i+1),
                                           (Nbands+i+1,   3*i+2),
                                           (2*Nbands+1,   3*i+3))));
                wantOf(i, c, w, dMean) =
                      ((sb_target(i) - c) - dMean*sb_levelneutral)
                    : deadband(sb_tolerance)                // ignore the last dB
                    : sb_limit(i)                           // limit gainchange
                    : _*sb_strength                         // apply strength
                    : _*vad_ext                             // external VAD from RNNoise
                    : _*w;                                  // band gate
            };

            gains = _ <: (curveBus <: (si.bus(Nbands), weights) : toWant), levelGate
                  : withScalar(Nbands)
                  : par(i,Nbands, applyGain(i))
            with {
                applyGain(i, want, gate) = want
                    : sb_envelope(i)                       // gainchange smoothing
                    : _*gate                               // fullrange gate, after the ballistics
                    : db2lin
                    : sb_gainmeter(i);
            };

            // ---- helpers -----------------------------------------------------
            clamp01 = max(0.0) : min(1.0);
            deadband(t, x) = ma.signum(x) * max(0.0, abs(x) - t);

            measure_full =  fi.itu_r_bs_1770_4_kfilter : detect;

            // Inside a single band above 100 Hz the K-weighting curve is flat to
            // within ~0.15 dB regardless of the signal spectrum, so bands 1..7
            // use a measured constant offset instead of a full k-filter (saves
            // 14 biquads). Band 0 keeps the real filter: the BS.1770 highpass
            // sits at 38 Hz, inside band 0's passband, so there the offset is
            // strongly signal-dependent (-3.8 dB white .. -5.3 dB pink).
            kw_offset = 0, -1.31, -0.84, -0.53, 0.55, 2.61, 3.25, 3.34;

            measure_bp(0) = _ * ba.db2linear(12)                    // boost the bands for measuring by +12dB
                            : fi.itu_r_bs_1770_4_kfilter            // k-weighting
                            : detect;
            measure_bp(i) = _ * ba.db2linear(12 + (kw_offset : ba.selector(i,Nbands)))
                            : detect;                               // k-weighting folded into the constant

            detect =        an.amp_follower_ud(0.01,0.1)            // separate up/down time constants
                            : max(-90:ba.db2linear)                 // limit floor to -90dB (in linear domain)
                            : lin2db;

        };




//   __  __       _ _   _ _                     _    _____                                                   
//  |  \/  |     | | | (_) |                   | |  / ____|                                                  
//  | \  / |_   _| | |_ _| |__   __ _ _ __   __| | | |     ___  _ __ ___  _ __  _ __ ___  ___ ___  ___  _ __ 
//  | |\/| | | | | | __| | '_ \ / _` | '_ \ / _` | | |    / _ \| '_ ` _ \| '_ \| '__/ _ \/ __/ __|/ _ \| '__|
//  | |  | | |_| | | |_| | |_) | (_| | | | | (_| | | |___| (_) | | | | | | |_) | | |  __/\__ \__ \ (_) | |   
//  |_|  |_|\__,_|_|\__|_|_.__/ \__,_|_| |_|\__,_|  \_____\___/|_| |_| |_| .__/|_|  \___||___/___/\___/|_|   
//                                                                       | |                                 
//                                                                       |_|                                 
//

multiband_compressor = 
    
    compressor8
    :> si.bus(1)

    with {

        mb_makeup = 1.5;
        
        compressor8 = par (i,8, compressor8_mono(i)) with {
            compressor8_mono(i,l) = l * 
                                (l:comp_gain_db(
                                    ratio2strength(ratio : ba.selector(i,Nbands)),
                                    target + (thresh : ba.selector(i,Nbands)),
                                    att : ba.selector(i,Nbands) : _*0.001,
                                    rel : ba.selector(i,Nbands) : _*0.001,
                                    knee,
                                    prePost)
                                    // stay in dB: (gain_dB + makeup) * strength,
                                    // one conversion instead of two round trips
                                    : +(mb_makeup) : *(mb_strength) : db2lin
                                    : compressor_meter(i)
                                );
            ratio = 4,4,4,4,4,4,4,4;
            thresh = -6,-6,-7,-8,-11,-12,-12,-13;
            att = 30,25,20,15,10,5,3,2;
            rel = 100,80,60,40,20,15,15,15;
            knee = 1;
            prePost= 1;

        };


    };



//   _      _           _ _            
//  | |    (_)         (_) |           
//  | |     _ _ __ ___  _| |_ ___ _ __ 
//  | |    | | '_ ` _ \| | __/ _ \ '__|
//  | |____| | | | | | | | ||  __/ |   
//  |______|_|_| |_| |_|_|\__\___|_|   
                                    
// Lookahead time and ceiling
Latency_limiter = 0.01;
limiter_thresh = -1 : ba.db2linear;

// abstraction
limiter_lookahead = limiter_lad_mono(Latency_limiter,limiter_thresh, Latency_limiter/twopi, .01, 1/twopi)
with {
    twopi = 2 * ma.PI;
};

// mono version
limiter_lad_mono(LD) = limiter_lad_N(1, LD);

// N-channel version
limiter_lad_N(N, LD, ceiling, attack, hold, release) = 
      si.bus(N) <: par(i, N, @(LD * ma.SR)), 
                   (scaling <: si.bus(N)) : ro.interleave(N, 2) : par(i, N, *)
      with {
           scaling = ceiling / max(amp_profile, ma.EPSILON) : min(1) : limiter_meter;
           amp_profile = par(i, N, abs) : maxN(N) : ba.peakholder(hold * ma.SR) :
               att_smooth(attack) : rel_smooth(release);
           att_smooth(time, in) = si.smooth(ba.tau2pole(time), in);
           rel_smooth(time, in) = an.peak_envelope(time, in);
           maxN(1) = _;
           maxN(2) = max;
           maxN(N) = max(maxN(N - 1));
           limiter_meter = _ <: attach(_,abs : lin2db : gui_main(vbargraph("[99][symbol:limiter_gain]LimiterGR",-12,0)));
      };


