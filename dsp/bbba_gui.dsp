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
// 0.18 has in and out meters, lookahead limiter, etc
// 0.19 is a fake stereo version for making the plugin GUI
// 0.21 finally correct fake stereo
// 0.22 adds the correct symbols for the plugin GUI and lists them at the top
// 0.24 puts pregain in the correct place before the input meter, cleanup
// 0.25 correct [unit]s
// 0.26 no bypass
// 0.27 lufs->LUFS
// 0.28 return of the expander
// 0.29 modified vad for spectral ballancer
// 0.30 new [symbol:voice_isolation_intensity]
// 0.31 add lowpass filter (commented out in gui version)
// 0.32 merged analyser + bell-bank topology, matching dsp/bbba.dsp. The
//      crossover is gone: one analyser drives the spectral balancer, the
//      multiband compressor and the expander, their gains are summed in dB,
//      de-overlapped and realised by a cascade of 8 SVF bells.

declare name "bbba";
declare version "0.30";             
declare author "Klaus Scheuermann";
declare license "GPLv3";

import("stdfaust.lib");

// SYMBOLS FOR PLUGIN GUI
// [symbol:bypass]                  Global Enable 0/1 (or 1/0 ???)
// [symbol:pre_gain]                Input Gain -20/+20 dB
// [symbol:leveler_target]          Targel Loudness -60/0 LUFS
// [symbol:leveler_scale]           Leveler On/Off 1/0
// [symbol:sbmb_strength]           Sound Shaping Enable 100 / 0
// [symbol:sb_strength]             Spectral Ballancer Strength 0/100 %
// [symbol:mb_strength]             Multiband Dynamics Strength 0/100 %
// [symbol:voice_isolation_intensity]   voice isolation intensity from Plugin

// SYMBOLS FOR PLUGIN METERS
// [symbol:input_peak_channel_0]    Left Input Peak Meter -70 / 0 dbFS
// [symbol:input_peak_channel_2]    Right Input Peak Meter -70 / 0 dbFS
// [symbol:output_peak_channel_0]   Left Output Peak Meter -70 / 0 dbFS
// [symbol:output_peak_channel_2]   Right Output Peak Meter -70 / 0 dbFS
// [symbol:lufs_out_meter]          LUFS Output Meter -70 / 0 LUFS
// [symbol:leveler_gain]            Leveler Gain -50/+50 dB
// [symbol:sb_gain_%2i]             8 meters for Spectral Ballancer -12/+12 (%2i = 00-07)
// [symbol:mb_comp_gain%2i]         8 meters for Multiband Dynamics -12/+12 (%2i = 00-07)
// [symbol:limiter_gain]            Limiter Gain Reduction -12/0 dB


// INIT VALUES

Nch = 1;                            // bbba is mono
Nbands = 8;                         // number of bands of the multiband processing and the spectral ballancer
maxSR = 48000;                      // maximum samplerate

lev_target_init = -23;
lev_maxboost_init = 30;
lev_maxcut_init = 30;
lev_brake_threshold_init = -22;
lev_speed_init = 80;
lev_scale_init =100;

sbmb_strength_init = 100;

sb_strength_init = 50;
sb_target_spectrum_init = -10, -5, -5, -8, -9, -10, -7, -4;

// Analysis layer, as in dsp/bbba.dsp. Not exposed as plugin parameters - they
// shape how the balancer decides, not what the user reaches for.
sb_levelneutral = 1;    // corrections sum to zero: tonal balance only
sb_bandrange = 18;      // dB below the average band before a band stops counting
sb_tolerance = 1;       // dB deadband
sb_threshold = -50;     // dBFS fullrange gate, applied after the ballistics
sb_gateknee = 6;        // dB, soft knee of both gates

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

target = gui_leveler(vslider("[1][unit:LUFS]target[symbol:leveler_target]", lev_target_init, -60, 0, 1));
lev_limit_pos = lev_maxboost_init;
lev_limit_neg = lev_maxcut_init : ma.neg;
lev_scale = gui_leveler(vslider("leveler_scale[symbol:leveler_scale]", 1, 0, 1,0.1)); //lev_scale_init / 100; 
lev_speed = lev_speed_init / 100;
lev_brake_thresh = lev_brake_threshold_init + target;


sbmb_strength = gui_main(vslider("[2]sbmb_strength[symbol:sbmb_strength]",sbmb_strength_init,0,100,1)) /100;      // strength of spectral ballancer and multiband compressor


sb_strength = vslider("h:[1]Spectral Ballancer/h:Parameters/[1][unit:%]sb_strength[symbol:sb_strength]", sb_strength_init,0,100,1) : _/100;    // strength of the spectral ballancer
sb_target_spectrum = sb_target_spectrum_init; //par(i,Nbands, vslider("h:[1]Spectral Ballancer/h:Target Curve/spec %i[symbol:sb_target_spectrum_%i]", (sb_target_spectrum_init : ba.selector(i,Nbands)),-20,0,1));


mb_strength = gui_mb(vslider("mb_strength[unit:%][symbol:mb_strength]", mb_strength_init,0,100,1)) / 100 : _*sbmb_strength;

mb_exp_thresh = gui_main(vslider("mb_exp_thresh[unit:dB][symbol:mb_exp_thresh]",mb_exp_thresh_init,-12,12,1));
mb_exp_strength = gui_mb(vslider("mb_exp_strength[unit:%][symbol:mb_exp_strength]", mb_exp_strength_init,0,100,1)) / 100 : _*sbmb_strength;

voice_isolation_intensity = gui_main(vslider("VIintense[symbol:voice_isolation_intensity]",1,0,1,0.01));

// METERS

lev_meter_gain = _ <: attach(_,gui_leveler(vbargraph("[8][unit:dB]gain[symbol:leveler_gain]",-50,50)));

sb_meter(i) = _ <: attach(_, vbargraph("h:[1]Spectral Ballancer/h:[2]loudness normalized spectrum/[1][unit:dB]band %2i[symbol:sb_meter_%2i]",-40,40));
// gains arrive in dB now, so no linear2db here
sb_gainmeter(i) = _ <: attach(_, vbargraph("h:[1]Spectral Ballancer/h:[3]resulting gain/[1]sb_gain %2i[symbol:sb_gain_%2i]",-12,12));

compressor_meter(i) = _ <: attach(_,gui_mb(vbargraph("[2]MBgr%2i[unit:dB][symbol:mb_comp_gain%2i]",-12,12)));
expander_meter = _ <: attach(_,ba.linear2db:gui_mb(vbargraph("[2]EXgr[unit:dB][symbol:mb_exp_gain]",-12,12)));
mb_exp_meter(i) = _<:(_, ((gui_mb(vbargraph("[1]Exp%i[unit:dB][symbol:mb_exp_meter%i]", -12, 0))))):attach;
limiter_meter = _ <: attach(_,abs : ba.linear2db : gui_main(vbargraph("[99][symbol:limiter_gain]LimiterGR",-12,0)));


// ----------------------- peak meters -----------------------
peakmeter_in = in_meter_l,in_meter_r with {
    envelop = abs : max(ba.db2linear(meters_minimum)) : ba.linear2db : min(12)  : max ~ -(20.0/ma.SR);
    in_meter_l(x) = attach(x, envelop(x) : gui_main(vbargraph("[symbol:input_peak_channel_0]In 0", meters_minimum, 0)));
    in_meter_r(x) = attach(x, envelop(x) : gui_main(vbargraph("[symbol:input_peak_channel_1]In 1", meters_minimum, 0)));
};

peakmeter_out = out_meter_l,out_meter_r with {
    envelop = abs : max(ba.db2linear(meters_minimum)) : ba.linear2db : min(12)  : max ~ -(20.0/ma.SR);
    out_meter_l(x) = attach(x, envelop(x) : gui_main(vbargraph("[symbol:output_peak_channel_0]Out 0", meters_minimum, 0)));
    out_meter_r(x) = attach(x, envelop(x) : gui_main(vbargraph("[symbol:output_peak_channel_1]Out 1", meters_minimum, 0)));
};

// ------------------------ LUFS out meter -------------------
lufs_out_meter(l,r) = l,r <: l, attach(r, (lk2_short : gui_main(vbargraph("[symbol:lufs_out_meter][unit:LUFS]lufs_out",meters_minimum,0)))) : _,_;
lk2_short = lk2_fixed(3);

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
vad_smoothing_meter = _<: attach(_, gui_main(vbargraph("vad_smoo[symbol:vad_smoothing_meter]",0,1)));


// MAIN

process = _,_  
        : pregain(2)
        : peakmeter_in
        : stereo2mono
        
        : preFilter

        // The leveler's sidechain now sees the fully corrected signal. With one
        // bell pass realising balancer + compressor + expander together there is
        // no longer a separate post-balancer tap to feed back, and measuring
        // what actually leaves the stage is the more sensible reference anyway.
        : (leveler_sc(target) : correct <: (_,_)) ~ _ : (!,_)

        // : postHighcut
        
        : limiter_lookahead
        
        <: _,_
        : peakmeter_out
        : lufs_out_meter
;




//        _   _ _ _ _         
//       | | (_) (_) |        
//  _   _| |_ _| |_| |_ _   _ 
// | | | | __| | | | __| | | |
// | |_| | |_| | | | |_| |_| |
//  \__,_|\__|_|_|_|\__|\__, |
//                       __/ |
//                      |___/ 

// mono2stereo2mono

momo2stereo = _ <: _,_;
stereo2mono = _,_ :> _ *0.5;

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

// dB CONVERSION
// 10^(x/20) == e^(x*ln10/20) and 20*log10(x) == ln(x)*20/ln10, so exp/log can
// replace pow/log10 with identical results to float precision. powf is much
// more expensive than expf on the wasm/emscripten target in particular.
lin2db(x) = log(max(ma.MIN, x)) * 8.685889638065035;    // 20/ln(10)
db2lin(x) = exp(x * 0.11512925464970229);               // ln(10)/20

// ---- routing helpers (shared by the analysis layer) ------------------------
// Interleave two n-buses into n pairs.
pairUp(n) = route(2*n, 2*n, par(i, n, ((i+1, 2*i+1), (n+i+1, 2*i+2))));
// Lay a copy of one scalar beside every signal on an n-bus.
withScalar(n) = route(n+1, 2*n, (par(i, n, (i+1, 2*i+1)),
                                 par(i, n, (n+1, 2*i+2))));

// comp_gain_db with the level supplied directly in dB rather than as a signal.
// Valid for prePost = 1, where the pre-detector is bypassed and the chain is
// abs : lin2db : gain_computer : onePoleSwitching - so scaling the input by a
// gain is exactly adding that gain to the level in dB, which is how the spectral
// balancer's correction reaches this compressor without a trip through linear.
comp_gain_from_db(strength,thresh,att,rel,knee) =
    gain_computer(strength,thresh,knee) : si.onePoleSwitching(rel,att)
with {
    gain_computer(strength,thresh,knee,level) =
        select3((level>(thresh-(knee/2)))+(level>(thresh+(knee/2))),
                0,
                ((level-thresh+(knee/2)) : pow(2)/(2*max(ma.EPSILON,knee))),
                (level-thresh))
        : max(0)*-strength;
};


// co.peak_expansion_gain_mono_db with the level supplied directly in dB.
// Valid for prePost = 1, where the pre-detector is bypassed and the chain is
// abs : slidingMax : linear2db : gain_computer. slidingMax commutes with a
// positive gain, so adding the balancer's and compressor's gains to the level
// in dB is exact.
exp_gain_from_db(strength,thresh,range,attack,release,knee) =
    gain_computer(strength,thresh,range,knee) : si.lag_ud(att,rel)
with {
    gain_computer(strength,thresh,range,knee,level) =
        (select3((level>(thresh-(knee/2)))+(level>(thresh+(knee/2))),
                 (level-thresh),
                 ((level-thresh-(knee/2)) : pow(2)/(min(ma.EPSILON,knee*-2))),
                 0)
         * abs(strength) : max(range) * (-1+(2*(strength>0))));
    att = select2((strength>0),release,attack);
    rel = select2((strength>0),attack,release);
};

// ANALYSIS / CORRECTION BANK
// Band centres are the geometric centres of the crossover bands this replaces,
// so the two topologies are comparable band for band.
fcL = 70.7, 141.4, 282.8, 565.7, 1131.4, 2262.7, 4525.5, 9051.0;
fcOf(i) = fcL : ba.selector(i,Nbands);

// Q of a filter whose -3 dB bandwidth is one octave: Q = 1/(2 sinh(ln2/2)).
qOct(bw) = 1.0/(2.0*shx(0.5*log(2.0)*bw)) with { shx(x) = 0.5*(exp(x) - exp(0.0-x)); };
qAnalysis = qOct(1.0);          // one band spacing wide - to tell bands apart
bellWidth = 2.0;                // correction bells wider than the spacing, so the
qBell = qOct(1.0*bellWidth);    // de-overlapped curve does not scallop between centres

// Analysis bandpass, unity at centre. Detector only - never in the audio path.
bandpass(i) = fi.svf.bp(fcOf(i), qAnalysis) : /(qAnalysis);

// De-overlap. The bells overlap, so what the cascade produces at a band centre
// is not that band's gain but the sum of every bell's response there:
// applied = W . g. W was measured on this exact bank rather than assumed from a
// peaking-filter prototype - fi.svf.bell sets k = 1/(Q*A), so its bandwidth
// moves with gain and the analytic shape does not describe it. Nearest-neighbour
// leakage measures 0.19, cond(W) = 2.03. Rows below are inv(W).
// Regenerate if fcL, QbL or Nbands change.
bells_kernel = 1;                   // 0 = skip the de-overlap, for A/B

deconvolve = si.bus(Nbands) <: par(i,Nbands, krow(i))
with {
    krow(i) = par(j,Nbands, *(kmat(i,j))) :> _;
    kmat(i,j) = Krow(i) : ba.selector(j,Nbands);
    Krow(0) = 1.35422, -0.77469, 0.22165, -0.05398, 0.01302, -0.00309, 0.00069, -0.00013;
    Krow(1) = -0.77301, 1.80799, -0.91783, 0.25175, -0.06104, 0.01449, -0.00325, 0.00059;
    Krow(2) = 0.21506, -0.90890, 1.85152, -0.91688, 0.25042, -0.05976, 0.01340, -0.00243;
    Krow(3) = -0.05244, 0.25035, -0.91860, 1.84578, -0.91077, 0.24485, -0.05519, 0.00999;
    Krow(4) = 0.01270, -0.06095, 0.25175, -0.91263, 1.83204, -0.89004, 0.22587, -0.04111;
    Krow(5) = -0.00302, 0.01451, -0.06024, 0.24587, -0.89053, 1.78298, -0.81733, 0.16725;
    Krow(6) = 0.00068, -0.00325, 0.01350, -0.05536, 0.22574, -0.81715, 1.62165, -0.60264;
    Krow(7) = -0.00012, 0.00059, -0.00245, 0.01003, -0.04112, 0.16735, -0.60280, 1.23852;
};

// fi.svf.bell, transcribed so the gain arrives in dB and the tick divisor is
// formed once as a reciprocal. Verified against fi.svf.bell below.
bellv(f, q, gDb) = tick ~ (_,_) : !,!,si.dot(3, mix)
with {
    a   = db2lin(gDb*0.5);              // 10^(g/40)
    g   = tan(ma.PI*f/ma.SR);           // f is constant, so this is init-time
    k   = 1.0/(q*a);
    d   = 1.0/(1.0 + g*(g + k));
    mix = 1.0, k*(a*a - 1.0), 0.0;
    tick(ic1eq, ic2eq, v0) = 2.0*v1 - ic1eq, 2.0*v2 - ic2eq, v0, v1, v2
    with {
        v1 = (ic1eq + g*(v0 - ic2eq))*d;
        v2 = ic2eq + g*v1;
    };
};

// (gains bus, audio) -> audio. Peeled from the top band down, each stage taking
// the gain sitting next to the signal.
bells = bc(Nbands)
with {
    bc(0) = _;
    bc(n) = (si.bus(n-1), bellAt(n-1)) : bc(n-1);
};
bellAt(i, g, x) = x : bellv(fcOf(i), qBell, g);


// lowpass
postHighcut = fi.lowpass(3,postHighcut_freq);
postHighcut_freq = 12000; // gui_main(vslider("postHighcut_freq[scale:log][symbol:postHighcut_freq]",12000,5000,22000,1));



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
      };



 


//   _                    _           
//  | |                  | |          
//  | |     _____   _____| | ___ _ __ 
//  | |    / _ \ \ / / _ \ |/ _ \ '__|
//  | |___|  __/\ V /  __/ |  __/ |   
//  |______\___| \_/ \___|_|\___|_|   

basefreq =
  it.interpolate_linear(lev_speed:pow(2), 0.01, 0.2);

sensitivity =
  it.interpolate_linear(lev_speed:pow(0.5), 0.00000025, 0.0000025);

lk1_fixed(Tg)= kfilter : zi : 4.342944819 * log(max(1e-12)) : -(0.691) with {
  sump(n) = ba.slidingSump(n, Tg*maxSR)/max(n,ma.EPSILON);
  envelope(period, x) = x * x :  sump(rint(period * ma.SR));
  zi = envelope(Tg); // mean square: average power = energy/Tg = integral of squared signal / Tg
};

lk2_fixed(Tg)= par(i,2,kfilter : zi) :> 4.342944819 * log(max(1e-12)) : -(0.691) with {
  sump(n) = ba.slidingSump(n, Tg*maxSR)/max(n,ma.EPSILON);
  envelope(period, x) = x * x :  sump(rint(period * ma.SR));
  zi = envelope(Tg); // mean square: average power = energy/Tg = integral of squared signal / Tg
};

kfilter = fi.itu_r_bs_1770_4_kfilter;
   
leveler_sc(target,fl,l) =
                calc(lk1_fixed(0.01,fl))
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


//   __  __                        _    _____                          _   _
//  |  \/  |                      | |  / ____|                        | | (_)
//  | \  / | ___ _ __ __ _  ___  __| | | |     ___  _ __ _ __ ___  ___| |_ _  ___  _ __
//  | |\/| |/ _ \ '__/ _` |/ _ \/ _` | | |    / _ \| '__| '__/ _ \/ __| __| |/ _ \| '_ \
//  | |  | |  __/ | | (_| |  __/ (_| | | |___| (_) | |  | | |  __/ (__| |_| | (_) | | | |
//  |_|  |_|\___|_|  \__, |\___|\__,_|  \_____\___/|_|  |_|  \___|\___|\__|_|\___/|_| |_|
//                    __/ |
//                   |___/
//
// One analyser drives all three stages. The spectral balancer, the multiband
// compressor and the expander each produce a per-band gain in dB; they are
// summed, de-overlapped, and realised by a single cascade of 8 SVF bells.
//
// The stages stay in series exactly as before, because a gain in dB simply adds
// to a level in dB: the compressor is fed the band level plus the balancer's
// gain, and the expander the band level plus both. With prePost = 1 neither has
// a smoother before its log, so this is exact rather than an approximation.

correct = _ <: (gainsTotal, _) : bells

with {

    // ---- analysis -----------------------------------------------------------
    measure_full = fi.itu_r_bs_1770_4_kfilter : detect;

    kw_offset = 0, -1.33, -0.80, -0.36, 0.80, 2.45, 3.15, 3.30;

    measure_bp(0) = _ * ba.db2linear(12)
                    : fi.itu_r_bs_1770_4_kfilter
                    : detect;
    measure_bp(i) = _ * ba.db2linear(12 + (kw_offset : ba.selector(i,Nbands)))
                    : detect;

    detect = an.amp_follower_ud(0.01,0.1) : max(-90:ba.db2linear) : lin2db;

    curveBus = _ <: ((_ <: par(i,Nbands, bandpass(i) : measure_bp(i))),
                     (measure_full <: si.bus(Nbands)))
             : pairUp(Nbands)
             : par(i,Nbands, (_-_) : sb_meter(i));

    // ---- spectral balancer --------------------------------------------------
    sb_limitUP = 6, 9, 12, 12, 12, 12, 9, 6;
    sb_limitDOWN = 12;
    sb_limit(i) = max(ma.neg(sb_limitDOWN)) : min(sb_limitUP : ba.selector(i,Nbands));

    sb_envelope(i) = si.smooth(ba.tau2pole(tau)) with{
        tau = 0.2 * ((Nbands-i) / Nbands);
    };

    sb_target(i) = sb_target_spectrum : ba.selector(i,Nbands);

    weights = si.bus(Nbands) <: (si.bus(Nbands),
                                 (si.bus(Nbands) :> _ : /(Nbands)))
            : withScalar(Nbands) : par(i,Nbands, weightOf)
    with {
        weightOf(c, mean) = (c - mean + sb_bandrange)/sb_gateknee : clamp01;
    };

    devMean = si.bus(2*Nbands) : pairUp(Nbands) <: (wSum, dSum) : ratio
    with {
        wSum = par(i,Nbands, (!,_)) :> _ : max(ma.EPSILON);
        dSum = par(i,Nbands, devOf(i)) :> _;
        devOf(i, c, w) = (sb_target(i) - c) * w;
        ratio(w, d) = d / w;
    };

    levelGate = measure_full : _-sb_threshold : _/sb_gateknee : clamp01 : si.smoo;

    toWant = si.bus(2*Nbands) <: (si.bus(2*Nbands), devMean)
           : spread : par(i,Nbands, wantOf(i))
    with {
        spread = route(2*Nbands+1, 3*Nbands,
                   par(i, Nbands, ((i+1,        3*i+1),
                                   (Nbands+i+1, 3*i+2),
                                   (2*Nbands+1, 3*i+3))));
        wantOf(i, c, w, dMean) =
              ((sb_target(i) - c) - dMean*sb_levelneutral)
            : deadband(sb_tolerance)
            : sb_limit(i)
            : _*sb_strength
            : _*sbmb_strength
            : _*vad_ext
            : _*w;
    };

    sbGains = _ <: (curveBus <: (si.bus(Nbands), weights) : toWant), levelGate
            : withScalar(Nbands)
            : par(i,Nbands, applyGain(i))
    with {
        applyGain(i, want, gate) = want : sb_envelope(i) : _*gate : sb_gainmeter(i);
    };

    // ---- multiband compressor ----------------------------------------------
    mb_makeup = 1.5;
    ratio = 4,4,4,4,4,4,4,4;
    thresh = -6,-6,-7,-8,-11,-12,-12,-13;
    att = 30,25,20,15,10,5,3,2;
    rel = 100,80,60,40,20,15,15,15;
    knee = 1;

    mbGain(i) = comp_gain_from_db(
                    ratio2strength(ratio : ba.selector(i,Nbands)),
                    target + (thresh : ba.selector(i,Nbands)),
                    att : ba.selector(i,Nbands) : _*0.001,
                    rel : ba.selector(i,Nbands) : _*0.001,
                    knee)
                : +(mb_makeup) : *(mb_strength) : compressor_meter(i);

    // ---- expander -----------------------------------------------------------
    exp_ratio = 4,4,4,4,4,4,4,4;
    exp_thresh = -12,-12,-12,-12,-13,-13,-14,-15;
    exp_range = -12,-12,-12,-12,-12,-12,-12,-12;
    exp_att = 8,7,6,5,4,3,2,1;
    exp_rel = 200,200,200,200,160,120,80,50;
    exp_hold = 0.001;
    exp_maxHold = 1000;
    exp_knee = 6;

    // strength is reduced by half when VAD is 1, as before
    exp_strength(i) = ratio2strength(exp_ratio : ba.selector(i,Nbands))
                    * mb_exp_strength * (1-voice_isolation_intensity) * (1-(vad/2));

    expGain(i) = exp_gain_from_db(
                    exp_strength(i),
                    target + mb_exp_thresh + (exp_thresh : ba.selector(i,Nbands)),
                    exp_range : ba.selector(i,Nbands),
                    (exp_att : ba.selector(i,Nbands)) / 1000,
                    (exp_rel : ba.selector(i,Nbands)) / 1000,
                    exp_knee)
                : mb_exp_meter(i);

    // ---- band levels --------------------------------------------------------
    // the compressor detects instantaneously, the expander over a 1 ms hold
    bandAbs(i) = bandpass(i) : abs;
    mbLevels  = _ <: par(i,Nbands, bandAbs(i) : lin2db);
    expLevels = _ <: par(i,Nbands, bandAbs(i)
                                 : ba.slidingMax(exp_hold*ma.SR, exp_maxHold)
                                 : lin2db);

    // ---- sum the three decisions, undo the overlap, correct -----------------
    tripleUp(n) = route(3*n, 3*n, par(i, n, ((i+1,       3*i+1),
                                             (n+i+1,     3*i+2),
                                             (2*n+i+1,   3*i+3))));

    gainsTotal = _ <: (sbGains, mbLevels, expLevels)
               : tripleUp(Nbands)
               : par(i,Nbands, combine(i))
               : deconv
    with {
        combine(i, sbg, mlvl, elvl) = sbg + mbg + eg
        with {
            mbg = mlvl + sbg : mbGain(i);
            eg  = elvl + sbg + mbg : expGain(i);
        };
    };

    deconv = kernelOn(bells_kernel)
    with { kernelOn(0) = si.bus(Nbands); kernelOn(1) = deconvolve; };

    clamp01 = max(0.0) : min(1.0);
    deadband(t, x) = ma.signum(x) * max(0.0, abs(x) - t);
};
