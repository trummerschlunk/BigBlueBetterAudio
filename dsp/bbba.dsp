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
// 0.23 return of the expander, SB: limit pos on edge bands
// 0.24 modified vad for spectral ballancer
// 0.25 intro of * voice_isolation_intensity
// 0.26 add lowpass filter


declare name "bbba";
declare version "0.26";             
declare author "Klaus Scheuermann";
declare license "GPLv3";

import("stdfaust.lib");


// INIT VALUES

Nch = 1;                            // bbba is mono
Nbands = 8;                         // number of bands of the multiband processing and the spectral ballancer
maxSR = 48000;                      // maximum samplerate

sbmb_strength_init = 80;

lev_target_init = -23;
lev_maxboost_init = 30;
lev_maxcut_init = 30;
lev_brake_threshold_init = -22;
lev_speed_init = 80;
lev_scale_init =100;

sb_strength_init = 50;
sb_target_spectrum_init = -10, -5, -5, -8, -9, -10, -7, -4;

mb_strength_init = 50;

mb_exp_strength_init = 100;
mb_exp_thresh_init = 6;

meters_minimum = -70;


// GUI

gui_main(x) = hgroup("main",x);
gui_mb(x) = gui_main(hgroup("mbExpComp",x));
gui_leveler(x) = gui_main(hgroup("leveler",x));

bypass = gui_main(checkbox("[0]bypass[symbol:bypass]"));    // global bypass

preGainSlider = gui_main(vslider("[1][unit:dB]PreGain[symbol:pre_gain]", 0, -20, 20, 0.1));
postGainSlider = gui_main(vslider("[9][unit:dB]PostGain[symbol:post_gain]", 0, -20, 20, 0.1));

preFilter_hp_freq = gui_main(vslider("preLowcut_freq[scale:log][symbol:pre_lowcut]",42,1,400,1));

target = gui_leveler(vslider("[1][unit:dB]target[symbol:leveler_target]", lev_target_init, -60, 0, 1));
lev_limit_pos = lev_maxboost_init;
lev_limit_neg = lev_maxcut_init : ma.neg;
lev_scale = gui_leveler(vslider("leveler_scale[symbol:leveler_scale]", 1, 0, 1,0.1)); //lev_scale_init / 100; 
lev_speed = lev_speed_init / 100;
lev_brake_thresh = lev_brake_threshold_init + target;


sbmb_strength = gui_main(vslider("[2]sbmb_strength[symbol:sbmb_strength]",sbmb_strength_init,0,100,1)) /100;      // strength of spectral ballancer and multiband compressor


sb_strength = vslider("h:[1]Spectral Ballancer/h:Parameters/[1][unit:%]sb_strength[symbol:sb_strength]", sb_strength_init,0,100,1) : _/100;    // strength of the spectral ballancer
sb_target_spectrum = par(i,Nbands, vslider("h:[1]Spectral Ballancer/h:Target Curve/spec %i[symbol:sb_target_spectrum_%i]", (sb_target_spectrum_init : ba.selector(i,Nbands)),-20,0,1));


mb_strength = gui_mb(vslider("mb_strength[symbol:mb_strength]", mb_strength_init,0,100,1)) / 100 : _*sbmb_strength;

mb_exp_thresh = mb_exp_thresh_init; //gui_main(vslider("mb_exp_thresh[unit:dB][symbol:mb_exp_thresh]",0,-12,12,1));
mb_exp_strength = mb_exp_strength_init : _*sbmb_strength; //gui_mb(vslider("mb_exp_strength[unit:%][symbol:mb_exp_strength]", mb_exp_strength_init,0,100,1)) / 100;

voice_isolation_intensity = gui_main(vslider("VIintense[symbol:voice_isolation_intensity]",1,0,1,0.01));


// METERS

lev_meter_gain = _;//_ <: attach(_,gui_leveler(vbargraph("[8][unit:dB]gain[symbol:leveler_gain]",-50,50)));

sb_meter(i) = _;//_ <: attach(_, vbargraph("h:[1]Spectral Ballancer/h:[2]loudness normalized spectrum/[1][unit:dB]band %2i[symbol:sb_meter_%2i]",-40,40));
sb_gainmeter(i) = _;//_ <: attach(_, (ba.linear2db:vbargraph("h:[1]Spectral Ballancer/h:[3]resulting gain/[1]sb_gain %2i[symbol:sb_gain_%2i]",-12,12)));

compressor_meter(i) = _;//_ <: attach(_,ba.linear2db:gui_mb(vbargraph("[2]MBgr%2i[unit:dB][symbol:mb_comp_gain%2i]",-12,12)));


// external VAD from RNNOISE

vad_ext = gui_main(vslider("[3]vad_ext[symbol:vad_ext]",1,0,1,0.001));
vad_meter = _<: attach(_, gui_main(vbargraph("[symbol:vad_meter]vad_meter",0,1)));


// VAD smoothing and gating

vad = vad_ext : vad_smoothing : vad_smoothing_meter : vad_gate : vad_meter;

vad_gate(x) = x * (x > vad_gate_thresh);
vad_gate_thresh = gui_main(vslider("vad_g_thr[symbol:vad_gate_thresh]",vad_gate_thresh_init,0,1,0.01));
vad_gate_thresh_init = 0.9;

vad_smoothing = si.smooth(ba.tau2pole(vad_smoothing_time));
vad_smoothing_time = gui_main(vslider("vad_smoo_t[unit:ms][symbol:vad_smoothing_time]",vad_smoothing_time_init,0,1000,10)) / 1000;
vad_smoothing_time_init = 50;
vad_smoothing_meter = _;//_<: attach(_, gui_main(vbargraph("vad_smoo[symbol:vad_smoothing_meter]",0,1)));





// MAIN

process = si.bus(Nch) 
        : bp1(bypass,
              pregain(1)
            : preFilter

            : (leveler_sc(target) 
            : ballancer 
            <: par(i,Nbands*2,_) :    (par(i,Nbands,_):>_) , par(i,Nbands,_) ) ~_  : (!,par(i,Nbands,_))    
            
            : mbExpComp

            : postHighcut
            
            //: limiter_mono
            : limiter_lookahead

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

// lowpass
postHighcut = fi.lowpass(3,postHighcut_freq);
postHighcut_freq = 12000; // gui_main(vslider("postHighcut_freq[scale:log][symbol:postHighcut_freq]",12000,5000,22000,1));



// LIMITER MONO

limiter_mono = co.limiter_lad_mono(lad, ceiling, att, hold, rel) with {
    lad = 0.005;
    ceiling = -1 : ba.db2linear;
    att = 0.002;
    hold = 0.01;
    rel = 0.01;
};


// LIMITER with LOOKAHEAD

Latency_limiter = 0.01; // in s
limiter_thresh = -1 : ba.db2linear;

limiter_lookahead = limiter_lad_mono(Latency_limiter,limiter_thresh, Latency_limiter/twopi, .01, 1/twopi)
with {
    twopi = 2 * ma.PI;
};

limiter_lad_mono(LD) = limiter_lad_N(1, LD);

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
                            : dynamicSmoothing(  sensitivity * vad,  basefreq * vad  )
                            
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
        : sb_limit(i)                                      // limit gainchange
        : _*sb_strength                                 // apply strength
        : _*sbmb_strength                               // apply overall strength
        : _* vad_ext
        : sb_envelope(i)                                // gainchange smoothing (dependent on frequency band)

        : ba.db2linear)     )                 // multiply with external VAD (voice activity detection)
        : sb_gainmeter(i)),_))                          // meter the gainchange
        : par(i,Nbands,gainchange(l))                    // do the actual gainchange to each band
        
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
    : expander8
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

        expander8 = par(i,Nbands,
            co.expander_N_chan(
                ratio2strength(ratio_array : ba.selector(i,Nbands)) * mb_exp_strength * (1-voice_isolation_intensity) * (1-(vad/2)), // strength is reduced by half, when VAD is 1
                target + mb_exp_thresh + (thresh_array : ba.selector(i,Nbands)),
                range_array : ba.selector(i,Nbands),
                (att_array : ba.selector(i,Nbands)) /1000,
                hold,
                (rel_array : ba.selector(i,Nbands)) /1000,
                knee,
                prePost,
                link,meter(i),maxHold,1)) with {
            ratio_array = 4,4,4,4,4,4,4,4;
            thresh_array = -12,-12,-12,-12,-13,-13,-14,-15;
            range_array = -12,-12,-12,-12,-12,-12,-12,-12;
            att_array = 8,7,6,5,4,3,2,1;
            hold = 0.001;
            rel_array = 200,200,200,200,160,120,80,50;
            knee = 6;
            prePost = 1;
            link = 0.25;
            meter(i) = _; //mb_exp_meter(i);
            maxHold = 1000;
        };

    };






