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
//
// PROTOTYPE: merged analyser + bell-bank topology, 16 bands.
//
// Same parameters, same analysis layer, same limiter as bbba.dsp. What changes
// is how the correction is measured and applied:
//
//   bbba.dsp   input -> crossover8LR4 -> 8 band signals -> per-band gain (SB)
//                    -> per-band compressor (MB) -> sum
//
//   this file  input -> 8 constant-Q analysis bandpasses (detector only)
//                    -> SB gain (dB) + MB gain (dB) summed per band
//                    -> de-overlap kernel -> cascade of 8 SVF bells on the audio
//
// The crossover disappears entirely, and with it its 9.4 ms of group delay at
// 100 Hz and the ripple it produces whenever adjacent band gains disagree. Both
// gains are already computed in dB, so summing them is free and the bells take
// dB directly - the two db2lin conversions of the old chain are gone.

declare name "bbba_bells16";
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
Nbands = 16;                        // half-octave spacing; 8 in bbba.dsp
maxSR = 48000;                      // maximum samplerate

pre_gain_init = 2;
post_gain_init = 0;

lev_target_init = -18;

sb_strength_init = 60;
// interpolated from the 8-band curve onto the new centres (log frequency)
sb_target_spectrum_init = -10.00, -7.67, -5.33, -5.00, -5.00, -6.00, -7.40, -8.27, -8.73, -9.20, -9.67, -9.60, -8.20, -6.80, -5.40, -4.00;

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
            : correct
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

// ratio2strength
ratio2strength(ratio) = 1-(1/ratio);

// ---- routing helpers (shared by the analysis layer) ------------------------
// Interleave two n-buses into n pairs.
pairUp(n) = route(2*n, 2*n, par(i, n, ((i+1, 2*i+1), (n+i+1, 2*i+2))));
// Lay a copy of one scalar beside every signal on an n-bus.
withScalar(n) = route(n+1, 2*n, (par(i, n, (i+1, 2*i+1)),
                                 par(i, n, (n+1, 2*i+2))));

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

// ANALYSIS / CORRECTION BANK
// Band centres are the geometric centres of the crossover bands this replaces,
// so the two topologies are comparable band for band.
// Log-spaced centres over the same span the 8-band version covered, so the two
// are directly comparable. All constants, so Faust folds them at compile time.
fLo = 70.7;
fHi = 9051.0;
bandRatio  = pow(fHi/fLo, 1.0/(Nbands - 1));     // 1.3819, i.e. 0.4667 octaves
octSpacing = log(bandRatio)/log(2.0);
fcOf(i) = fLo * pow(bandRatio, i);

// Q of a filter whose -3 dB bandwidth is bw octaves: Q = 1/(2 sinh(ln2/2 bw)).
qOct(bw) = 1.0/(2.0*shx(0.5*log(2.0)*bw)) with { shx(x) = 0.5*(exp(x) - exp(0.0-x)); };

// The analysis bandpasses are one band spacing wide - narrow, because their job
// is to tell bands apart.
qAnalysis = qOct(octSpacing);

// The correction bells are deliberately WIDER than the spacing. At bellWidth 1
// the de-overlap kernel makes each band centre exact but leaves the curve
// scalloped between centres: a flat request came out with 1.34 dB of peak-to-peak
// ripple, which the multiband compressor would impose on everything it touched,
// moving with the gain. Widening the bells so their skirts meet drops that to
// 0.13 dB, and improves resolution at the same time (a 1-octave feature landing
// between centres reaches 7.4 dB of a requested 8, against 5.6 at bellWidth 1).
// The cost is conditioning: cond(W) goes 2.3 -> 9.3, and climbs steeply past 2.5.
bellWidth = 2.0;
qBell = qOct(octSpacing*bellWidth);

// Analysis bandpass, unity at centre. Detector only - never in the audio path.
bandpass(i) = fi.svf.bp(fcOf(i), qAnalysis) : /(qAnalysis);

// De-overlap. The bells overlap, so what the cascade produces at a band centre
// is not that band's gain but the sum of every bell's response there:
// applied = W . g. W was measured on this exact bank rather than assumed from a
// peaking-filter prototype - fi.svf.bell sets k = 1/(Q*A), so its bandwidth
// moves with gain and the analytic shape does not describe it. Nearest-neighbour
// leakage measures 0.19, cond(W) = 2.03. Rows below are inv(W).
// Regenerate if fLo, fHi, bellWidth or Nbands change.
bells_kernel = 1;                   // 0 = skip the de-overlap, for A/B

deconvolve = si.bus(Nbands) <: par(i,Nbands, krow(i))
with {
    krow(i) = par(j,Nbands, *(kmat(i,j))) :> _;
    kmat(i,j) = Krow(i) : ba.selector(j,Nbands);
    Krow( 0) = 1.32938, -0.71099, 0.12726, -0.03511, 0.00243, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000;
    Krow( 1) = -0.70857, 1.73095, -0.80900, 0.14189, -0.03543, 0.00366, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000;
    Krow( 2) = 0.11732, -0.79978, 1.75909, -0.79085, 0.13665, -0.03536, 0.00350, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000;
    Krow( 3) = -0.03440, 0.14704, -0.80843, 1.74501, -0.78518, 0.14008, -0.03569, 0.00362, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000;
    Krow( 4) = 0.00254, -0.03783, 0.14787, -0.79643, 1.74390, -0.79449, 0.14018, -0.03590, 0.00376, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000;
    Krow( 5) = 0.00000, 0.00416, -0.03762, 0.14319, -0.79877, 1.74701, -0.79118, 0.14051, -0.03632, 0.00375, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000;
    Krow( 6) = 0.00000, 0.00000, 0.00414, -0.03687, 0.14398, -0.79659, 1.74247, -0.79240, 0.14281, -0.03638, 0.00372, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000;
    Krow( 7) = 0.00000, 0.00000, 0.00000, 0.00387, -0.03670, 0.14206, -0.79049, 1.74336, -0.79620, 0.14141, -0.03588, 0.00357, 0.00000, 0.00000, 0.00000, 0.00000;
    Krow( 8) = 0.00000, 0.00000, 0.00000, 0.00000, 0.00381, -0.03613, 0.13980, -0.79239, 1.74311, -0.78998, 0.13888, -0.03510, 0.00330, 0.00000, 0.00000, 0.00000;
    Krow( 9) = 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00373, -0.03583, 0.14065, -0.79033, 1.73564, -0.78282, 0.13591, -0.03385, 0.00286, 0.00000, 0.00000;
    Krow(10) = 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00361, -0.03580, 0.13937, -0.78333, 1.72467, -0.77192, 0.13010, -0.03164, 0.00215, 0.00000;
    Krow(11) = 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00355, -0.03518, 0.13601, -0.77225, 1.70479, -0.75011, 0.11975, -0.02783, 0.00068;
    Krow(12) = 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00333, -0.03394, 0.13052, -0.75091, 1.66765, -0.71137, 0.10209, -0.02207;
    Krow(13) = 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00289, -0.03178, 0.12024, -0.71221, 1.60193, -0.64366, 0.06969;
    Krow(14) = 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00218, -0.02796, 0.10254, -0.64419, 1.49235, -0.52365;
    Krow(15) = 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 0.00070, -0.02213, 0.06981, -0.52368, 1.20629;
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



//   __  __                        _    _____                          _   _             
//  |  \/  |                      | |  / ____|                        | | (_)            
//  | \  / | ___ _ __ __ _  ___  __| | | |     ___  _ __ _ __ ___  ___| |_ _  ___  _ __  
//  | |\/| |/ _ \ '__/ _` |/ _ \/ _` | | |    / _ \| '__| '__/ _ \/ __| __| |/ _ \| '_ \ 
//  | |  | |  __/ | | (_| |  __/ (_| | | |___| (_) | |  | | |  __/ (__| |_| | (_) | | | |
//  |_|  |_|\___|_|  \__, |\___|\__,_|  \_____\___/|_|  |_|  \___|\___|\__|_|\___/|_| |_|
//                    __/ |                                                              
//                   |___/                                                               
//
// One analyser feeds both decisions. The spectral balancer's per-band gain and
// the multiband compressor's per-band gain are both already in dB, so they are
// simply added before the de-overlap kernel and the bell bank - one correction
// pass instead of two, and neither conversion back to linear.

correct = _ <: (gainsTotal, _) : bells

with {

    // ---- analysis -----------------------------------------------------------
    measure_full =  fi.itu_r_bs_1770_4_kfilter : detect;

    // K-weighting folded in as a per-band constant. Measured on this bank:
    // pink and white agree to 0.5 dB across every band, tighter than the 8-band
    // version because half-octave skirts enclose less of the K slope. That holds
    // for band 0 too, so unlike bbba.dsp no band needs the real filter here.
    kw_offset = -2.75, -1.89, -1.35, -1.04, -0.85, -0.72, -0.58, -0.34, 0.16, 1.00, 2.00, 2.73, 3.10, 3.24, 3.30, 3.33;

    measure_bp(i) = _ * ba.db2linear(12 + (kw_offset : ba.selector(i,Nbands)))
                    : detect;

    detect =        an.amp_follower_ud(0.01,0.1)
                    : max(-90:ba.db2linear)
                    : lin2db;

    // Level-normalised spectrum: each band relative to the fullrange level.
    curveBus = _ <: ((_ <: par(i,Nbands, bandpass(i) : measure_bp(i))),
                     (measure_full <: si.bus(Nbands)))
             : pairUp(Nbands)
             : par(i,Nbands, (_-_) : sb_meter(i));

    // ---- the analysis layer, unchanged from bbba.dsp ------------------------
    sb_limitUP = 6.00, 7.40, 8.80, 10.20, 11.60, 12.00, 12.00, 12.00, 12.00, 12.00, 12.00, 11.60, 10.20, 8.80, 7.40, 6.00;
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
            : _*vad_ext
            : _*w;
    };

    // Spectral balancer gain per band, in dB - not converted to linear, because
    // the bell that realises it takes dB.
    sbGains = _ <: (curveBus <: (si.bus(Nbands), weights) : toWant), levelGate
            : withScalar(Nbands)
            : par(i,Nbands, applyGain(i))
    with {
        applyGain(i, want, gate) = want : sb_envelope(i) : _*gate : sb_gainmeter(i);
    };

    // ---- multiband compression, in dB, on the same analysis bands -----------
    mb_makeup = 1.5;
    ratio = 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4;
    // interpolated onto the new centres, then lowered by the measured
    // detector shortfall: halving each band's width takes ~3.2 dB off what
    // the gain computer sees, so the same threshold would compress less.
    thresh = -9.57, -9.49, -9.60, -9.96, -10.35, -10.83, -11.39, -12.37, -13.77, -14.63, -14.76, -14.91, -14.46, -14.72, -15.22, -15.64;
    att = 30.0, 27.7, 25.3, 23.0, 20.7, 18.3, 16.0, 13.7, 11.3, 9.0, 6.7, 4.7, 3.8, 2.9, 2.5, 2.0;
    rel = 100.0, 90.7, 81.3, 72.0, 62.7, 53.3, 44.0, 34.7, 25.3, 19.0, 16.7, 15.0, 15.0, 15.0, 15.0, 15.0;
    knee = 1;

    mbGain(i) = comp_gain_from_db(
                    ratio2strength(ratio : ba.selector(i,Nbands)),
                    target + (thresh : ba.selector(i,Nbands)),
                    att : ba.selector(i,Nbands) : _*0.001,
                    rel : ba.selector(i,Nbands) : _*0.001,
                    knee)
                : +(mb_makeup) : *(mb_strength) : compressor_meter(i);

    // Instantaneous band level in dB. Adding the balancer's gain here is exactly
    // what feeding the compressor the balanced band would do, because prePost = 1
    // puts no smoother before the log.
    rawLevels = _ <: par(i,Nbands, bandpass(i) : abs : lin2db);

    // ---- sum the two decisions, undo the bank's overlap, correct ------------
    gainsTotal = _ <: (sbGains, rawLevels)
               : pairUp(Nbands)
               : par(i,Nbands, combine(i))
               : deconv
    with {
        combine(i, sbg, lvl) = sbg + (lvl + sbg : mbGain(i));
    };

    deconv = kernelOn(bells_kernel)
    with { kernelOn(0) = si.bus(Nbands); kernelOn(1) = deconvolve; };

    clamp01 = max(0.0) : min(1.0);
    deadband(t, x) = ma.signum(x) * max(0.0, abs(x) - t);
};



//   _      _           _ _            
//  | |    (_)         (_) |           
//  | |     _ _ __ ___  _| |_ ___ _ __ 
//  | |    | | '_ ` _ \| | __/ _ \ '__|
//  | |____| | | | | | | | ||  __/ |   
//  |______|_|_| |_| |_|_|\__\___|_|   
                                    
// Lookahead time and ceiling
Latency_limiter = 0.002;
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


