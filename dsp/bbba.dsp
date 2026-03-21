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
// [symbol:preLowcut_freq]          Lowcut Frequency 10Hz - 400Hz  


// INIT VALUES

Nch = 1;                            // bbba is mono
Nbands = 8;                         // number of bands of the multiband processing and the spectral Balancer
maxSR = 48000;                      // maximum samplerate

pre_gain_init = 0;
post_gain_init = 0;

lev_target_init = -18;

sb_strength_init = 50;
sb_target_spectrum_init = -10, -5, -5, -8, -9, -10, -7, -4;

mb_strength_init = 50;



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



// MAIN

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

spectral_balancer(l) = l <: 
        (measure_full <:                                // split input in 2 for FULLRANGE measurement and crossover split
        
        par(i,Nbands,_)),                               // multiply FULLRANGE measurement by Nbands
        
        (_ : (xoverbank                                 // filterbank split
        
        : par(i,Nbands,(_<: ((measure_bp),_))))         // duplicate each filtered band and measure the first one
        
        : ro.interleave(2,Nbands))                      // swap for subtraction
    
        : sb_target_spectrum, par(i,Nbands*3,_)         // get target spectrum
        : ro.interleave(Nbands,4)                       // rearrange
        
        : par(i,Nbands,(_,(ro.cross(2)                  // cross
        :(_-_)                                          // subract from fullrange loudness
        :sb_meter(i)),_))                               // meter (incoming frequency spectrum loudness-normalized)
        
        : par(i,Nbands,(((((_-_)                        // substract target spectrum
        : sb_limit(i)                                   // limit gainchange
        : _*sb_strength                                 // apply strength
        : _* vad_ext                                    // multiply with external VAD detection from RNNoise
        : sb_envelope(i)                                // gainchange smoothing (dependent on frequency band)

        : ba.db2linear)     )                           // convert to linear
        : sb_gainmeter(i)),_))                          // meter the gainchange
        : par(i,Nbands,gainchange(l))                   // do the actual gainchange to each band
        
        with {
        
            xoverbank = crossover;
            sb_limitUP = 6, 9, 12, 12, 12, 12, 9, 6;
            sb_limitDOWN = 12;
            sb_limit(i) = max(ma.neg(sb_limitDOWN)) : min(sb_limitUP : ba.selector(i,Nbands));
        
            sb_envelope(i) = si.smooth(ba.tau2pole(tau)) with{
                tau = 0.2 * ((Nbands-i) / Nbands);
            };
            
            gainchange(in) = (_)*(_);


            measure_full =  fi.itu_r_bs_1770_4_kfilter
                            : an.amp_follower_ud(0.01,0.1) 
                            : max(-90:ba.db2linear) 
                            : ba.linear2db;

            measure_bp =    _ * ba.db2linear(12)                    // boost the bands for measuring by +18dB
                            : fi.itu_r_bs_1770_4_kfilter            // k-weighting
                            : an.amp_follower_ud(0.01,0.1)          // actual measuring with separate up/down time constants
                            : max(-90:ba.db2linear)                 // limit floor to -70dB (in linear domain)
                            : ba.linear2db;

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
                                (l:co.peak_compression_gain_mono(
                                    ratio2strength(ratio : ba.selector(i,Nbands)),
                                    target + (thresh : ba.selector(i,Nbands)),
                                    att : ba.selector(i,Nbands) : _*0.001,
                                    rel : ba.selector(i,Nbands) : _*0.001,
                                    knee,
                                    prePost)
                                    : ba.linear2db + mb_makeup : ba.db2linear
                                    : scale_by_mb_strength
                                    : compressor_meter(i)
                                );
            ratio = 4,4,4,4,4,4,4,4;
            thresh = -6,-6,-7,-8,-11,-12,-12,-13;
            att = 30,25,20,15,10,5,3,2;
            rel = 100,80,60,40,20,15,15,15;
            knee = 1;
            prePost= 1;

            scale_by_mb_strength = ba.linear2db : _ * mb_strength : ba.db2linear;

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
           limiter_meter = _ <: attach(_,abs : ba.linear2db : gui_main(vbargraph("[99][symbol:limiter_gain]LimiterGR",-12,0)));
      };


