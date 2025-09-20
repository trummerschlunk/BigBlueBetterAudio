//   ____  _         ____  _              ____       _   _                                _ _       
//  |  _ \(_)       |  _ \| |            |  _ \     | | | |                /\            | (_)      
//  | |_) |_  __ _  | |_) | |_   _  ___  | |_) | ___| |_| |_ ___ _ __     /  \  _   _  __| |_  ___  
//  |  _ <| |/ _` | |  _ <| | | | |/ _ \ |  _ < / _ \ __| __/ _ \ '__|   / /\ \| | | |/ _` | |/ _ \ 
//  | |_) | | (_| | | |_) | | |_| |  __/ | |_) |  __/ |_| ||  __/ |     / ____ \ |_| | (_| | | (_) |
//  |____/|_|\__, | |____/|_|\__,_|\___| |____/ \___|\__|\__\___|_|    /_/    \_\__,_|\__,_|_|\___/ 
//            __/ |                                                                                 
//           |___/                                                                                  

// -*-Faust-*-

declare name "bbba";
declare version "0.06";
declare author "Klaus Scheuermann";
declare license "GPLv3";

import("stdfaust.lib");

Nch = 1;                            // bbba is mono
NBands = 8;                         // number of bands of the multiband processing
SB_bands = 8;                       // number of bands of the spectral ballancer
maxSR = 48000;                      // maximum samplerate
Sliding_window_max = 480000;        // maximum size of the sliding window for noisefloor tracking



init_leveler_target = -23;
init_leveler_maxboost = 20;
init_leveler_maxcut = 20;
init_leveler_brake_threshold = -22;
init_leveler_speed = 60;
init_leveler_scale =100;

meters_minimum = -70;

target_spectrum_init = -10, -5, -5, -8, -9, -10, -7, -3;
target_spectrum = par(i,SB_bands, vslider("h:[1]Spectral Ballancer/h:Target Curve/spec %i[symbol:spec_%i]", (target_spectrum_init : ba.selector(i,SB_bands)),-20,0,1));

init_sb_strength = 50;

meter_sb(i) = _ <: attach(_, vbargraph("h:[1]Spectral Ballancer/h:[2]loudness normalized spectrum/[1][unit:dB]band%2i",-40,40));
gainmeter_sb(i) = _ <: attach(_, (ba.linear2db:vbargraph("h:[1]Spectral Ballancer/h:[3]resulting gain/[1][symbol:spectral_ballancer_gain_band_%2i]gr %2i",-12,12)));
meter_expander_sb = vbargraph("h:[1]Spectral Ballancer/h:Parameters/[3][integer]expander",0,1);

sb_strength = vslider("h:[1]Spectral Ballancer/h:Parameters/[1][symbol:timbre_strength][unit:%]strength", init_sb_strength,0,100,1) : _/100;


process = si.bus(Nch) 
        : ba.bypass1(bypass_switch,
            //: pregain(Nch) 
            preFilter
            : re.mono_freeverb(0.9, 0.9, 0.1, 5)
            : levelerMono
            : ballancer
            //: dynEQ
            : mbExpComp
            //: postgain(Nch) 
        )
        //<: si.bus(2)
        //: limiter_lookahead
        ;


// GUI main

gui_main(x) = hgroup("main",x);
gui_mb(x) = gui_main(hgroup("mbExpComp",x));
gui_leveler(x) = gui_main(hgroup("leveler",x));

bypass_switch = gui_main(checkbox("[0]bypass"));

//        _   _ _ _ _         
//       | | (_) (_) |        
//  _   _| |_ _| |_| |_ _   _ 
// | | | | __| | | | __| | | |
// | |_| | |_| | | | |_| |_| |
//  \__,_|\__|_|_|_|\__|\__, |
//                       __/ |
//                      |___/ 


// pre and post gain

preGainSlider = vslider("h:[2]Controls/[0][unit:dB]PreGain", 0, -20, 20, 0.1);
postGainSlider = vslider("h:[2]Controls/[9][unit:dB]PostGain", 0, -20, 20, 0.1);

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

// ratio2strength
ratio2strength(ratio) = 1-(1/ratio);


// PRE FILTER
preFilter = preHighpass : preLowpass with {

    preHighpass = fi.highpass(3,preHighpass_freq);
    preHighpass_freq = gui_mb(vslider("preLowcut_freq[scale:log]",80,1,400,1));

    preLowpass = fi.lowpass(3,preLowpass_freq);
    preLowpass_freq = 22000;
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


// crossover for spectral ballancer and multiband expander/compressor

crossover = fi.crossover8LR4(100,200,400,800,1600,3200,6400);

 


//   _                    _           
//  | |                  | |          
//  | |     _____   _____| | ___ _ __ 
//  | |    / _ \ \ / / _ \ |/ _ \ '__|
//  | |___|  __/\ V /  __/ |  __/ |   
//  |______\___| \_/ \___|_|\___|_|   

//  Leveler GUI
bp = 0; //checkbox("h:LevelerPro/[0]bypass_leveler"):si.smoo;
target = gui_leveler(vslider("[1][unit:dB]target", init_leveler_target, -60, 0, 1));
limit_pos = 20; //vslider("h:[2]Controls/[2][unit:dB]max boost", init_leveler_maxboost, 0, 30, 1);
limit_neg = -20; //vslider("h:[2]Controls/[3][unit:dB]max cut", init_leveler_maxcut, 0, 30, 1) : ma.neg;
scale = 1; //vslider("h:[2]Controls/[4][unit:%]strength", init_leveler_scale, 0, 100, 1) * 0.01;
leveler_speed = 0.6; //vslider("h:[2]Controls/[5][unit:%]speed", init_leveler_speed, 0, 100, 1) * 0.01;
leveler_brake_thresh = -22 + target; //target + vslider("h:[2]Controls/[6][unit:dB]brake threshold", init_leveler_brake_threshold,-90,0,1)+32;
meter_leveler_brake = _*100 : gui_leveler(vbargraph("[7][unit:%]brake",0,100));
leveler_meter_gain = gui_leveler(vbargraph("[8][unit:dB]gain",-50,50));
expander_thresh_offset = gui_leveler(vslider("thresh offset", 6,0,40,1));
min_meter =  _ <: attach(_,gui_leveler(vbargraph("min_track",-100,0)));

//  Leveler NO GUI
/*
bp = 0; //checkbox("h:LevelerPro/[0]bypass_leveler"):si.smoo;
target = -16; //vslider("h:[2]Controls/[1][unit:dB]target", -23, -60, 0, 1);
limit_pos = 20; //vslider("h:[2]Controls/[2][unit:dB]max boost", init_leveler_maxboost, 0, 30, 1);
limit_neg = -20; //vslider("h:[2]Controls/[3][unit:dB]max cut", init_leveler_maxcut, 0, 30, 1) : ma.neg;
scale = 1; //vslider("h:[2]Controls/[4][unit:%]strength", init_leveler_scale, 0, 100, 1) * 0.01;
leveler_speed = 0.6; //vslider("h:[2]Controls/[5][unit:%]speed", init_leveler_speed, 0, 100, 1) * 0.01;
leveler_brake_thresh = -22 + target; //target + vslider("h:[2]Controls/[6][unit:dB]brake threshold", init_leveler_brake_threshold,-90,0,1)+32;
meter_leveler_brake = _; //_*100 : vbargraph("h:[2]Controls/[7][unit:%]brake",0,100);
leveler_meter_gain = _; //vbargraph("h:[2]Controls/[8][unit:dB]gain",-50,50);
expander_thresh_offset = 26; //hslider("thresh offset", 26,0,40,1);
min_meter =  _ <: attach(_,vbargraph("min_track",-100,0));
*/
levelerMono(l) =

  ( ((l):leveler_sc(target)~(_)
                              :(
       (_*(1-bp))
      
     ))
  , (l*bp)
  ):>(_);

/*
leveler(l,r) =

  ( ((l,r):leveler_sc(target)~(_,_)
                              :(
       (_*(1-bp))
      ,(_*(1-bp))
     ))
  , (l*bp,r*bp)
  ):>(_,_);
*/

basefreq =
  it.interpolate_linear(leveler_speed:pow(2), 0.01, 0.2);

sensitivity =
  it.interpolate_linear(leveler_speed:pow(0.5), 0.00000025, 0.0000025);

lk2_fixed(Tg)= kfilter : zi : 4.342944819 * log(max(1e-12)) : -(0.691) with {
  // maximum assumed sample rate is 192k
  sump(n) = ba.slidingSump(n, Tg*maxSR)/max(n,ma.EPSILON);
  envelope(period, x) = x * x :  sump(rint(period * ma.SR));
  zi = envelope(Tg); // mean square: average power = energy/Tg = integral of squared signal / Tg

};


kfilter = _ <: (ebur128 * filterswitch), (speechfilter  * (1 - filterswitch)) :> si.bus(1) with{
    ebur128 = fi.itu_r_bs_1770_4_kfilter;
    speechfilter = fi.highpass(2,200) : fi.fi.peak_eq_cq(3,2400,0.7);
    filterswitch = 1; //hslider("h:LevelerPro/[4][style:radio{'ebu':0;'speech':1}]filter",0,0,1,1);
};



leveler_sc(target,fl,l) =
  calc(lk2_fixed(0.01,fl))
  // (calc(lk2_var(lk2_time,fl,fr))*(1-bp)+bp)
  <: (_*l)
with {
  // lp1p(cf) = si.smooth(ba.tau2pole(1/(2*ma.PI*cf)));
  calc(lufs) = FB(lufs)~_: ba.db2linear;
  FB(lufs,prev_gain) =
    (target - lufs)
    +(prev_gain )
    :  limit(limit_neg,limit_pos)
    : dynamicSmoothing(
      sensitivity * expander(abs(fl))
    ,  basefreq * expander(abs(fl))
    )
    
    * scale
    : leveler_meter_gain;

  limit(lo,hi) = min(hi) : max(lo);

  leveler_speed_brake(sc) = expander(sc) * leveler_speed;

  leveler_brake_threshold_dynamic(in) = min_track(in) + expander_thresh_offset;



  min_track(l) = l 
            : an.amp_follower_ar(0.01,0.01) 
            : ba.slidingMin(sliding_window * ma.SR, Sliding_window_max) 
            : si.smooth(ba.tau2pole(min_smoothing_time)) 
            : ba.linear2db : max(-60) 
            : min_meter 
            with {
                
                sliding_window = 3;
                min_smoothing_time = 1;
            };

expander_sc_filter = fi.highpassLR4(280) : fi.lowpassLR4 (400);


  expander(x) = ( x : expander_sc_filter : co.peak_expansion_gain_mono_db(maxHold,strength,leveler_brake_threshold_dynamic(x),range,gate_att,hold,gate_rel,knee,prePost) 
                 : ba.db2linear
                 :max(0)
                 :min(1))
                <: attach(_, (1-_) : meter_leveler_brake) with{
                    maxHold = hold*maxSR;
                    strength = 100;
                    range = 0-(ma.MAX);
                    gate_att = 0.001;
                    hold = 0.01;
                    gate_rel = 0.2;
                    // hslider("gate rel", 0.1, 0.0, 1, 0.001);
                    knee = 24; //hslider("gate knee", 12, 0, 90, 1);
                    prePost = 1;
                };

  
};









// Dynamic Smoothing
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

mbExpComp = si.bus(8)
    
    //: fi.crossover8LR4(xo1,xo2,xo3,xo4,xo5,xo6,xo7)
    //: crossover
    // : gainNBands
    
    : expander
    : par(i,NBands,compressor)

    :> si.bus(1)

    with {

        xo1 = 100;
        xo2 = 200;
        xo3 = 400;
        xo4 = 800;
        xo5 = 1600;
        xo6 = 3200;
        xo7 = 6400;

        gainNBands = par(i,NBands,(_ * (gui_mb(vslider("gain %i",0,-12,12,1) : ba.db2linear))));

        expander = co.expander_N_chan(strength,thresh,range,att,hold,rel,knee,prePost,link,meter,maxHold,NBands) with {
            strength = ratio2strength(4);// 20; //hslider("strength", 0.4, 0, 100, 1);
            thresh = target - 12; //hslider("threshold", -20, -80, 0, 0.1);
            range = -12;//hslider("range", 12, 0, 20, 1);
            att = 0.001; //hslider("attack", 1, 0,100,1) *0.001;
            hold = 0.001; //hslider("hold", 10, 0, 100,1) *0.001;
            rel = 0.2; //hslider("release", 200, 0, 1000,1) *0.001;
            knee = 6;//hslider("knee", 6, 0, 30, 1);
            prePost = 1;
            link = 0.25;
            //meter _ <: attach(_, (ba.linear2db : hbargraph("Level",-12,12)));
            meter = _<:(_, ((gui_mb(vbargraph("[1][unit:dB]", -12, 12))))):attach;
            //meter = _;
            maxHold = 1000; //9600;//ma.SR * 0.1;
            
        };

        compressor(l) = l * (l:co.peak_compression_gain_mono(strength,thresh,att,rel,knee,prePost):compressor_meter) with {
            strength = ratio2strength(1.4); 
            thresh = target -6;
            att = 0.001;
            rel = 0.1;
            knee = 6;
            prePost = 1;
            compressor_meter = _ <: attach(_,ba.linear2db:gui_mb(vbargraph("[2][unit:dB]",-6,0)));

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

ballancer_bp1 = ba.bypass_fade(100,checkbox("bypass sb"),ballancer);
ballancer_bp2 = bp2(ballancer_checkbox, ballancer_st);
ballancer_st = _,_ :> _ *0.5 : ballancer <: _,_;        // fake stereo

ballancer(l) = l <: 
        (measure_full <:                                // split input in 2 for FULLRANGE measurement and crossover split
        
        par(i,SB_bands,_)),                                // multiply FULLRANGE measurement by SB_bands
        
        (_ : (xoverbank                                 // filterbank split
        
        : par(i,SB_bands,(_<: ((measure_bp),_))))          // duplicate each filtered band and measure the first one
        
        : ro.interleave(2,SB_bands))                       // swap for subtraction
    
        : target_spectrum, par(i,SB_bands*3,_)             // get target spectrum
        : ro.interleave(SB_bands,4)                        // rearrange
        
        : par(i,SB_bands,(_,(ro.cross(2)                   // cross
        :(_-_)                                          // subract from fullrange loudness
        :meter_sb(i)),_))                               // meter (incoming frequency spectrum loudness-normalized)
        
        : par(i,SB_bands,(((((_-_)                         // substract target spectrum
        : sb_envelope(i)                                // gainchange smoothing (dependent on frequency band)
        : sb_limit                                      // limit gainchange
        : _*sb_strength                                 // apply strength
        : _*expander_sb(l) : ba.db2linear)     )        // multiply with expander (voice activity detection)
        : gainmeter_sb(i)),_))                          // meter the gainchange
        : par(i,SB_bands,gainchange(l))                    // do the actual gainchange to each band
        // :> _                                            // sum bands together
        
        with {
        
            //xoverbank = _ : fi.crossover8LR4(80,160,320,640,1280,2560,5120) : si.bus(SB_bands);
            xoverbank = crossover;
            sb_limitUP = 12;
            sb_limitDOWN = 12;
            sb_limit = max(ma.neg(sb_limitDOWN)) : min(sb_limitUP);
        
            sb_envelope(i) = si.smooth(ba.tau2pole(tau)) with{
                tau = 0.2 * ((SB_bands-i) / SB_bands);
            };
            
            gainchange(in) = (_)*(_ : sb_delay);

            sb_delay = de.delay(48000,0);                            // delay = 0, needed at all?

            measure_full =  fi.itu_r_bs_1770_4_kfilter
                            : an.amp_follower_ud(0.01,0.1) 
                            : max(-90:ba.db2linear) 
                            : ba.linear2db;

            measure_bp =    _ * ba.db2linear(12)                    // boost the bands for measuring by +18dB
                            : fi.itu_r_bs_1770_4_kfilter            // k-weighting
                            : an.amp_follower_ud(0.01,0.1)          // actual measuring with separate up/down time constants
                            : max(-90:ba.db2linear)                 // limit floor to -70dB (in linear domain)
                            : ba.linear2db;

            expander_sb(x) =    co.peak_expansion_gain_mono_db(maxHold,strength,thresh,range,att,hold,gate_rel,knee,prePost,x) with{
                                    maxHold = hold*maxSR;
                                    strength = 0.8;
                                    thresh = -20;      
                                    range = 0-(ma.MAX);
                                    att = 0.025;
                                    hold = 0.010;
                                    gate_rel = 1;
                                    knee = ma.EPSILON;
                                    prePost = 1;
                                    }
                                : ba.db2linear
                                :max(0)
                                :min(1)
                                <: attach(_: meter_expander_sb)
                                ;

        };    





