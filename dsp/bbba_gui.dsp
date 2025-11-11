//   ____  _         ____  _              ____       _   _                                _ _       
//  |  _ \(_)       |  _ \| |            |  _ \     | | | |                /\            | (_)      
//  | |_) |_  __ _  | |_) | |_   _  ___  | |_) | ___| |_| |_ ___ _ __     /  \  _   _  __| |_  ___  
//  |  _ <| |/ _` | |  _ <| | | | |/ _ \ |  _ < / _ \ __| __/ _ \ '__|   / /\ \| | | |/ _` | |/ _ \ 
//  | |_) | | (_| | | |_) | | |_| |  __/ | |_) |  __/ |_| ||  __/ |     / ____ \ |_| | (_| | | (_) |
//  |____/|_|\__, | |____/|_|\__,_|\___| |____/ \___|\__|\__\___|_|    /_/    \_\__,_|\__,_|_|\___/ 
//            __/ |                                                                                 
//           |___/                                                                                  

// -*-Faust-*-

// from 0.15 on bbba needs rnnoise for controlling VAD
// 0.17 looses all internal VAD (minimum tracking, expanders)

declare name "bbba";
declare version "0.17";             
declare author "Klaus Scheuermann";
declare license "GPLv3";

import("stdfaust.lib");


// INIT VALUES

Nch = 1;                            // bbba is mono
Nbands = 8;                         // number of bands of the multiband processing and the spectral ballancer
maxSR = 48000;                      // maximum samplerate

lev_target_init = -22;
lev_maxboost_init = 30;
lev_maxcut_init = 30;
lev_brake_threshold_init = -22;
lev_speed_init = 80;
lev_scale_init =100;

sb_strength_init = 50;
sb_target_spectrum_init = -10, -5, -5, -8, -9, -10, -7, -3;


// GUI

gui_main(x) = hgroup("main",x);
gui_mb(x) = gui_main(hgroup("mbExpComp",x));
gui_leveler(x) = gui_main(hgroup("leveler",x));

bypass = gui_main(checkbox("[0]bypass[symbol:bypass]"));    // global bypass

preGainSlider = gui_main(vslider("[1][unit:dB]PreGain[symbol:pre_gain", 0, -20, 20, 0.1));
postGainSlider = gui_main(vslider("[9][unit:dB]PostGain[symbol:post_gain]", 0, -20, 20, 0.1));

preFilter_hp_freq = gui_main(vslider("preLowcut_freq[scale:log][symbol:pre_lowcut]",42,1,400,1));

target = gui_leveler(vslider("[1][unit:dB]target[symbol:leveler_target]", lev_target_init, -60, 0, 1));
lev_limit_pos = lev_maxboost_init;
lev_limit_neg = lev_maxcut_init : ma.neg;
lev_scale = gui_leveler(vslider("leveler_scale[symbol:leveler_scale]", 1, 0, 1,0.1)); //lev_scale_init / 100; 
lev_speed = lev_speed_init / 100;
lev_brake_thresh = lev_brake_threshold_init + target;


sbmb_strength = gui_main(vslider("[2]sbmb_strength[symbol:sbmb_strength]",100,0,100,1)) /100;      // strength of spectral ballancer and multiband compressor


sb_strength = vslider("h:[1]Spectral Ballancer/h:Parameters/[1][unit:%]sb_strength[symbol:sb_strength]", sb_strength_init,0,100,1) : _/100;    // strength of the spectral ballancer
sb_target_spectrum = par(i,Nbands, vslider("h:[1]Spectral Ballancer/h:Target Curve/spec %i[symbol:sb_target_spectrum_%i]", (sb_target_spectrum_init : ba.selector(i,Nbands)),-20,0,1));


mb_strength = gui_mb(vslider("mb_strength[symbol:mb_strength]", 100,0,100,1)) / 100 : _*sbmb_strength;


// METERS

lev_meter_gain = _ <: attach(_,gui_leveler(vbargraph("[8][unit:dB]gain[symbol:leveler_gain]",-50,50)));

sb_meter(i) = _ <: attach(_, vbargraph("h:[1]Spectral Ballancer/h:[2]loudness normalized spectrum/[1][unit:dB]band %2i[symbol:sb_meter_%2i]",-40,40));
sb_gainmeter(i) = _ <: attach(_, (ba.linear2db:vbargraph("h:[1]Spectral Ballancer/h:[3]resulting gain/[1]sb_gain %2i[symbol:sb_gain_%2i]",-12,12)));

compressor_meter(i) = _ <: attach(_,ba.linear2db:gui_mb(vbargraph("[2]MBgr%2i[unit:dB][symbol:mb_comp_gain%2i]",-6,6)));


// external VAD from RNNOISE

vad_ext = gui_main(vslider("[3]vad_ext[symbol:vad_ext]",1,0,1,0.001));


// MAIN

process = si.bus(Nch) 
        : bp1(bypass,
              pregain(1)
            : preFilter

            : (leveler_sc(target) 
            : ballancer 
            <: par(i,Nbands*2,_) :    (par(i,Nbands,_):>_) , par(i,Nbands,_) ) ~_  : (!,par(i,Nbands,_))    
            
            : mbExpComp
            
            : limiter_mono
        );




//        _   _ _ _ _         
//       | | (_) (_) |        
//  _   _| |_ _| |_| |_ _   _ 
// | | | | __| | | | __| | | |
// | |_| | |_| | | | |_| |_| |
//  \__,_|\__|_|_|_|\__|\__, |
//                       __/ |
//                      |___/ 


// pre and post gain

pregain(n) = par(i,n,gain) with {
    gain = _ * (preGainSlider : ba.db2linear : si.smoo);
};

postgain(n) = par(i,n,gain) with {
    gain = _ * (postGainSlider : ba.db2linear : si.smoo);
};

// Stereo bypass with smooth fading
bp2(sw,pr) = _,_ <: _,_,pr : (_*sm,_*sm),(_*(1-sm),_*(1-sm)) :> _,_ with {
    sm = sw : si.smoo;
};

// Mono bypass with smooth fading
bp1(sw,pr) = _ <: _,pr : (_*sm),(_*(1-sm)) :> _ with {
    sm = sw : si.smoo;
};

// ratio2strength
ratio2strength(ratio) = 1-(1/ratio);

// PRE FILTER
preFilter = preFilter_hp with {

    preFilter_hp = fi.highpass(1,preFilter_hp_freq);

};

// CROSSOVER for spectral ballancer (and multiband compressor)

crossover = fi.crossover8LR4(100,200,400,800,1600,3200,6400);


// LIMITER MONO

limiter_mono = co.limiter_lad_mono(lad, ceiling, att, hold, rel) with {
    lad = 0.005;
    ceiling = -1 : ba.db2linear;
    att = 0.002;
    hold = 0.01;
    rel = 0.01;
};


// LIMITER with LOOKAHEAD

Latency_limiter = 0.01; // in ms
limiter_thresh = -1 : ba.db2linear;

limiter_lookahead = limiter_lad_stereo(Latency_limiter,limiter_thresh, Latency_limiter/twopi, .1, 1/twopi)
with {
    twopi = 2 * ma.PI;
};

limiter_lad_stereo(LD) = limiter_lad_N(2, LD);

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
           limiter_meter = _ <: attach(_,abs : ba.linear2db : gui_mb(vbargraph("[99]LimiterGR",-12,0)));
      };



 


//   _                    _           
//  | |                  | |          
//  | |     _____   _____| | ___ _ __ 
//  | |    / _ \ \ / / _ \ |/ _ \ '__|
//  | |___|  __/\ V /  __/ |  __/ |   
//  |______\___| \_/ \___|_|\___|_|   

//  Leveler GUI

basefreq =
  it.interpolate_linear(lev_speed:pow(2), 0.01, 0.2);

sensitivity =
  it.interpolate_linear(lev_speed:pow(0.5), 0.00000025, 0.0000025);

lk2_fixed(Tg)= kfilter : zi : 4.342944819 * log(max(1e-12)) : -(0.691) with {
  sump(n) = ba.slidingSump(n, Tg*maxSR)/max(n,ma.EPSILON);
  envelope(period, x) = x * x :  sump(rint(period * ma.SR));
  zi = envelope(Tg); // mean square: average power = energy/Tg = integral of squared signal / Tg
};

kfilter = fi.itu_r_bs_1770_4_kfilter;
   
leveler_sc(target,fl,l) =
                calc(lk2_fixed(0.01,fl))
                <: (_*l)
                    with {
                        calc(lufs) = FB(lufs)~_: ba.db2linear;
                        FB(lufs,prev_gain) =
                            (target - lufs)
                            +(prev_gain )
                            : limit(lev_limit_neg,lev_limit_pos)
                            : dynamicSmoothing(  sensitivity * vad_ext,  basefreq * vad_ext  )
                            
                            * lev_scale
                            : lev_meter_gain;

                        limit(lo,hi) = min(hi) : max(lo);


};




// DYNAMIC SMOOTHING (attribution!)

PI = ma.PI;
SR = ma.SR;
NY = SR / 2.0;
T = 1.0 / SR;
PIT = PI * T;

SVF(Q, CF, x) = f ~ si.bus(2) : ! , ! , si.bus(3)
    with {
        g = tan(CF * PIT);
        R2 = 1.0 / Q;
        gPlusR2 = g + R2;
        f(s0, s1) = u0 , u1 , BP , HP , LP
            with {
                HP = (x - s0 * gPlusR2 - s1) / (1.0 + g * gPlusR2);
                v0 = HP * g;
                BP = s0 + v0;
                v1 = BP * g;
                LP = s1 + v1;
                u0 = v0 + BP;
                u1 = v1 + LP;
            };
    };

dynamicSmoothing(sensitivity, baseCF, x) = f ~ _ : ! , ! , _
    with {
        f(s) = SVF(.5, CF, x)
            with {
                CF = min(NY * .25, baseCF + sensitivity * abs(s) * NY);
            };
    };





//             _     ______             _____                      
//            | |   |  ____|           / ____|                     
//   _ __ ___ | |__ | |__  __  ___ __ | |     ___  _ __ ___  _ __  
//  | '_ ` _ \| '_ \|  __| \ \/ / '_ \| |    / _ \| '_ ` _ \| '_ \ 
//  | | | | | | |_) | |____ >  <| |_) | |___| (_) | | | | | | |_) |
//  |_| |_| |_|_.__/|______/_/\_\ .__/ \_____\___/|_| |_| |_| .__/ 
//                              | |                         | |    
//                              |_|                         |_|    

mbExpComp = 
    
    compressor8
    :> si.bus(1)

    with {

        xo1 = 100;
        xo2 = 200;
        xo3 = 400;
        xo4 = 800;
        xo5 = 1600;
        xo6 = 3200;
        xo7 = 6400;


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
                                    :compressor_meter(i)
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

/*
   _____                 _             _   ____        _ _                           
  / ____|               | |           | | |  _ \      | | |                          
 | (___  _ __   ___  ___| |_ _ __ __ _| | | |_) | __ _| | | __ _ _ __   ___ ___ _ __ 
  \___ \| '_ \ / _ \/ __| __| '__/ _` | | |  _ < / _` | | |/ _` | '_ \ / __/ _ \ '__|
  ____) | |_) |  __/ (__| |_| | | (_| | | | |_) | (_| | | | (_| | | | | (_|  __/ |   
 |_____/| .__/ \___|\___|\__|_|  \__,_|_| |____/ \__,_|_|_|\__,_|_| |_|\___\___|_|   
        | |                                                                          
        |_|                                                                        */


//----------------------- Ballancer Section -----------------------

ballancer(l) = l <: 
        (measure_full <:                                // split input in 2 for FULLRANGE measurement and crossover split
        
        par(i,Nbands,_)),                                // multiply FULLRANGE measurement by Nbands
        
        (_ : (xoverbank                                 // filterbank split
        
        : par(i,Nbands,(_<: ((measure_bp),_))))          // duplicate each filtered band and measure the first one
        
        : ro.interleave(2,Nbands))                       // swap for subtraction
    
        : sb_target_spectrum, par(i,Nbands*3,_)          // get target spectrum
        : ro.interleave(Nbands,4)                        // rearrange
        
        : par(i,Nbands,(_,(ro.cross(2)                   // cross
        :(_-_)                                          // subract from fullrange loudness
        :sb_meter(i)),_))                               // meter (incoming frequency spectrum loudness-normalized)
        
        : par(i,Nbands,(((((_-_)                         // substract target spectrum
        : sb_envelope(i)                                // gainchange smoothing (dependent on frequency band)
        : sb_limit                                      // limit gainchange
        : _*sb_strength                                 // apply strength
        : _*sbmb_strength                               // apply overall strength
        : _* vad_ext : ba.db2linear)     )              // multiply with external VAD (voice activity detection)
        : sb_gainmeter(i)),_))                          // meter the gainchange
        : par(i,Nbands,gainchange(l))                    // do the actual gainchange to each band
        
        with {
        
            xoverbank = crossover;
            sb_limitUP = 12;
            sb_limitDOWN = 12;
            sb_limit = max(ma.neg(sb_limitDOWN)) : min(sb_limitUP);
        
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





