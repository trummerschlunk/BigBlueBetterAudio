
//------------------------------------------------------------------------------
// This file was generated using the Faust compiler (https://faust.grame.fr),
// and the Faust post-processor (https://github.com/jpcima/faustpp).
//
// Source: bbba.dsp
// Name: bbba
// Description: 
// Author: Klaus Scheuermann
// Copyright: 
// License: GPLv3+
// Version: 0.06
//------------------------------------------------------------------------------


#include "DistrhoPlugin.hpp"
#include "extra/ScopedPointer.hpp"

// --------------------------------------------------------------------------------------------------------------------

// inline code when possible
#define FAUSTPP_VIRTUAL inline

// make everything available directly
#define FAUSTPP_PRIVATE public
#define FAUSTPP_PROTECTED public

// match distrho namespace
#define FAUSTPP_BEGIN_NAMESPACE START_NAMESPACE_DISTRHO
#define FAUSTPP_END_NAMESPACE END_NAMESPACE_DISTRHO

// --------------------------------------------------------------------------------------------------------------------

START_NAMESPACE_DISTRHO

template <class T> inline T min(T a, T b) { return (a < b) ? a : b; }
template <class T> inline T max(T a, T b) { return (a > b) ? a : b; }

class dsp {
public:
    virtual ~dsp() {}
};

class Meta {
public:
    // dummy
    void declare(...) {}
};

class UI {
public:
    // dummy
    void openHorizontalBox(...) {}
    void openVerticalBox(...) {}
    void openTabBox(...) {}
    void closeBox(...) {}
    void declare(...) {}
    void addButton(...) {}
    void addCheckButton(...) {}
    void addVerticalSlider(...) {}
    void addHorizontalSlider(...) {}
    void addVerticalBargraph(...) {}
    void addHorizontalBargraph(...) {}
};

END_NAMESPACE_DISTRHO

// --------------------------------------------------------------------------------------------------------------------


#if defined(__GNUC__)
#   pragma GCC diagnostic push
#   pragma GCC diagnostic ignored "-Wunused-parameter"
#endif

#ifndef FAUSTPP_PRIVATE
#   define FAUSTPP_PRIVATE private
#endif
#ifndef FAUSTPP_PROTECTED
#   define FAUSTPP_PROTECTED protected
#endif
#ifndef FAUSTPP_VIRTUAL
#   define FAUSTPP_VIRTUAL virtual
#endif

#ifndef FAUSTPP_BEGIN_NAMESPACE
#   define FAUSTPP_BEGIN_NAMESPACE
#endif
#ifndef FAUSTPP_END_NAMESPACE
#   define FAUSTPP_END_NAMESPACE
#endif

FAUSTPP_BEGIN_NAMESPACE

#ifndef FAUSTFLOAT
#define FAUSTFLOAT float
#endif 

FAUSTPP_END_NAMESPACE
#include <algorithm>
#include <cmath>
#include <cstdint>
#include <math.h>
FAUSTPP_BEGIN_NAMESPACE

#ifndef FAUSTCLASS 
#define FAUSTCLASS mydsp
#endif

#ifdef __APPLE__ 
#define exp10f __exp10f
#define exp10 __exp10
#endif

#if defined(_WIN32)
#define RESTRICT __restrict
#else
#define RESTRICT __restrict__
#endif

static float mydsp_faustpower2_f(float value) {
	return value * value;
}

class mydsp : public dsp {
	
 FAUSTPP_PRIVATE:
	
	FAUSTFLOAT fCheckbox0;
	int fSampleRate;
	float fConst0;
	float fConst1;
	float fConst2;
	float fConst3;
	float fConst4;
	float fConst5;
	float fConst6;
	float fConst7;
	float fConst8;
	float fConst9;
	float fConst10;
	float fConst11;
	float fConst12;
	int iConst13;
	float fConst14;
	float fConst15;
	float fConst16;
	float fConst17;
	float fConst18;
	float fConst19;
	float fRec42[2];
	float fConst20;
	float fRec43[2];
	float fConst21;
	float fRec37[2];
	float fRec38[2];
	float fRec34[2];
	float fConst22;
	float fRec35[2];
	float fRec31[2];
	float fRec32[2];
	float fVec0[2];
	int iConst23;
	float fVec1[3];
	int iConst24;
	float fVec2[5];
	int iConst25;
	int iConst26;
	float fVec3[12];
	int iConst27;
	int iConst28;
	int IOTA0;
	float fVec4[32];
	int iConst29;
	int iConst30;
	float fVec5[64];
	int iConst31;
	int iConst32;
	float fVec6[128];
	int iConst33;
	int iConst34;
	float fVec7[256];
	int iConst35;
	int iConst36;
	float fVec8[512];
	int iConst37;
	FAUSTFLOAT fVslider0;
	float fConst38;
	float fConst39;
	int iConst40;
	float fConst41;
	float fConst42;
	float fRec48[2];
	int iConst43;
	float fVec9[3];
	int iConst44;
	float fVec10[5];
	int iConst45;
	int iConst46;
	float fVec11[12];
	int iConst47;
	int iConst48;
	float fVec12[32];
	int iConst49;
	int iConst50;
	float fVec13[64];
	int iConst51;
	int iConst52;
	float fVec14[128];
	int iConst53;
	int iConst54;
	float fVec15[256];
	int iConst55;
	int iConst56;
	float fVec16[512];
	int iConst57;
	int iConst58;
	float fVec17[1024];
	int iConst59;
	int iConst60;
	float fVec18[2048];
	int iConst61;
	int iConst62;
	float fVec19[4096];
	int iConst63;
	int iConst64;
	float fVec20[8192];
	int iConst65;
	int iConst66;
	float fVec21[16384];
	int iConst67;
	int iConst68;
	float fVec22[32768];
	int iConst69;
	int iConst70;
	float fVec23[65536];
	int iConst71;
	int iConst72;
	float fVec24[131072];
	int iConst73;
	int iConst74;
	float fVec25[262144];
	int iConst75;
	int iConst76;
	float fVec26[524288];
	int iConst77;
	float fRec47[2];
	FAUSTFLOAT fVbargraph0;
	float fConst78;
	float fConst79;
	float fRec30[2];
	FAUSTFLOAT fVbargraph1;
	float fConst80;
	FAUSTFLOAT fVslider1;
	float fConst81;
	float fConst82;
	int iConst83;
	float fConst84;
	float fConst85;
	float fConst86;
	float fConst87;
	float fConst88;
	float fConst89;
	float fConst90;
	float fConst91;
	float fConst92;
	float fConst93;
	float fConst94;
	float fConst95;
	float fConst96;
	float fVec27[2];
	float fConst97;
	float fConst98;
	float fRec52[2];
	float fRec51[2];
	float fConst99;
	float fVec28[2];
	float fConst100;
	float fRec50[2];
	float fRec49[2];
	float fVec29[2];
	float fVec30[3];
	float fVec31[5];
	float fVec32[12];
	float fVec33[32];
	float fVec34[64];
	float fVec35[128];
	float fVec36[256];
	float fVec37[512];
	int iConst101;
	int iConst102;
	int iConst103;
	int iConst104;
	int iConst105;
	int iConst106;
	int iConst107;
	int iConst108;
	int iConst109;
	int iConst110;
	int iConst111;
	int iConst112;
	int iConst113;
	int iConst114;
	int iConst115;
	float fRec25[2];
	float fRec26[2];
	float fRec23[2];
	FAUSTFLOAT fVbargraph2;
	float fRec22[2];
	float fConst116;
	float fConst117;
	float fConst118;
	float fConst119;
	float fConst120;
	FAUSTFLOAT fVslider2;
	float fVec38[2];
	float fRec65[2];
	float fRec64[3];
	float fVec39[2];
	float fRec63[2];
	float fConst121;
	float fConst122;
	float fRec62[3];
	float fRec66[2];
	float fVec40[8192];
	int iConst123;
	float fRec61[2];
	float fRec68[2];
	float fVec41[8192];
	int iConst124;
	float fRec67[2];
	float fRec70[2];
	float fVec42[8192];
	int iConst125;
	float fRec69[2];
	float fRec72[2];
	float fVec43[8192];
	int iConst126;
	float fRec71[2];
	float fRec74[2];
	float fVec44[8192];
	int iConst127;
	float fRec73[2];
	float fRec76[2];
	float fVec45[8192];
	int iConst128;
	float fRec75[2];
	float fRec78[2];
	float fVec46[8192];
	int iConst129;
	float fRec77[2];
	float fRec80[2];
	float fVec47[8192];
	int iConst130;
	float fRec79[2];
	float fVec48[2048];
	int iConst131;
	float fRec59[2];
	float fVec49[2048];
	int iConst132;
	float fRec57[2];
	float fVec50[2048];
	int iConst133;
	float fRec55[2];
	float fVec51[1024];
	int iConst134;
	float fRec53[2];
	float fRec21[3];
	float fRec17[2];
	float fConst135;
	float fRec18[2];
	float fConst136;
	float fRec14[2];
	float fRec15[2];
	float fConst137;
	float fConst138;
	float fConst139;
	float fConst140;
	float fConst141;
	float fConst142;
	float fRec84[2];
	float fConst143;
	float fRec85[2];
	float fConst144;
	float fConst145;
	float fConst146;
	float fConst147;
	float fRec87[2];
	float fConst148;
	float fRec88[2];
	float fConst149;
	float fRec81[2];
	float fConst150;
	float fRec82[2];
	float fConst151;
	float fRec10[2];
	float fConst152;
	float fRec11[2];
	float fConst153;
	float fRec7[2];
	float fRec8[2];
	float fRec90[2];
	float fRec91[2];
	float fConst154;
	float fRec3[2];
	float fConst155;
	float fRec4[2];
	float fConst156;
	float fRec0[2];
	float fRec1[2];
	float fRec2[2];
	FAUSTFLOAT fVslider3;
	float fConst157;
	FAUSTFLOAT fVslider4;
	float fConst158;
	float fVec52[2];
	float fConst159;
	float fConst160;
	float fRec99[2];
	float fRec98[2];
	float fVec53[2];
	float fRec97[2];
	float fRec96[2];
	float fConst161;
	float fConst162;
	float fRec95[2];
	float fRec94[2];
	float fVec54[2];
	float fRec105[2];
	float fRec104[2];
	float fVec55[2];
	float fRec103[2];
	float fRec102[2];
	float fRec101[2];
	float fRec100[2];
	FAUSTFLOAT fVbargraph3;
	float fRec93[2];
	float fVec56[2];
	float fVec57[3];
	float fVec58[5];
	float fVec59[12];
	float fVec60[32];
	float fVec61[64];
	float fVec62[128];
	float fVec63[256];
	float fVec64[512];
	float fConst163;
	float fRec106[2];
	FAUSTFLOAT fVbargraph4;
	FAUSTFLOAT fVbargraph5;
	int iConst164;
	float fVec65[2];
	int iConst165;
	float fVec66[3];
	int iConst166;
	float fVec67[5];
	int iConst167;
	int iConst168;
	float fVec68[12];
	int iConst169;
	int iConst170;
	float fVec69[32];
	int iConst171;
	int iConst172;
	float fVec70[64];
	int iConst173;
	int iConst174;
	float fVec71[128];
	int iConst175;
	int iConst176;
	float fVec72[256];
	int iConst177;
	int iConst178;
	float fVec73[512];
	int iConst179;
	int iConst180;
	float fVec74[512];
	int iConst181;
	float fRec107[2];
	float fRec109[2];
	float fRec110[2];
	float fVec75[2];
	float fConst182;
	float fConst183;
	FAUSTFLOAT fVslider5;
	float fVec76[2];
	float fRec119[2];
	float fRec118[2];
	float fVec77[2];
	float fRec117[2];
	float fRec116[2];
	float fRec115[2];
	float fRec114[2];
	FAUSTFLOAT fVbargraph6;
	float fRec113[2];
	FAUSTFLOAT fVbargraph7;
	float fVec78[2];
	float fVec79[3];
	float fVec80[5];
	float fVec81[12];
	float fVec82[32];
	float fVec83[64];
	float fVec84[128];
	float fVec85[256];
	float fVec86[512];
	float fVec87[512];
	float fRec108[2];
	float fRec128[2];
	float fRec129[2];
	float fRec132[2];
	float fRec133[2];
	float fRec124[2];
	float fRec125[2];
	float fRec121[2];
	float fRec122[2];
	float fRec123[2];
	float fConst184;
	float fConst185;
	FAUSTFLOAT fVslider6;
	float fVec88[2];
	float fRec141[2];
	float fRec140[2];
	float fVec89[2];
	float fRec139[2];
	float fRec138[2];
	float fRec137[2];
	float fRec136[2];
	FAUSTFLOAT fVbargraph8;
	float fRec135[2];
	FAUSTFLOAT fVbargraph9;
	float fVec90[2];
	float fVec91[3];
	float fVec92[5];
	float fVec93[12];
	float fVec94[32];
	float fVec95[64];
	float fVec96[128];
	float fVec97[256];
	float fVec98[512];
	float fVec99[512];
	float fRec120[2];
	float fRec143[2];
	float fRec144[2];
	float fVec100[2];
	float fConst186;
	float fConst187;
	FAUSTFLOAT fVslider7;
	float fVec101[2];
	float fRec153[2];
	float fRec152[2];
	float fVec102[2];
	float fRec151[2];
	float fRec150[2];
	float fRec149[2];
	float fRec148[2];
	FAUSTFLOAT fVbargraph10;
	float fRec147[2];
	FAUSTFLOAT fVbargraph11;
	float fVec103[2];
	float fVec104[3];
	float fVec105[5];
	float fVec106[12];
	float fVec107[32];
	float fVec108[64];
	float fVec109[128];
	float fVec110[256];
	float fVec111[512];
	float fVec112[512];
	float fRec142[2];
	float fRec169[2];
	float fRec170[2];
	float fRec176[2];
	float fRec177[2];
	float fRec179[2];
	float fRec180[2];
	float fRec173[2];
	float fRec174[2];
	float fRec165[2];
	float fRec166[2];
	float fRec162[2];
	float fRec163[2];
	float fRec182[2];
	float fRec183[2];
	float fRec158[2];
	float fRec159[2];
	float fRec155[2];
	float fRec156[2];
	float fRec157[2];
	FAUSTFLOAT fVslider8;
	float fVec113[2];
	float fRec191[2];
	float fRec190[2];
	float fVec114[2];
	float fRec189[2];
	float fRec188[2];
	float fRec187[2];
	float fRec186[2];
	FAUSTFLOAT fVbargraph12;
	float fRec185[2];
	FAUSTFLOAT fVbargraph13;
	float fVec115[2];
	float fVec116[3];
	float fVec117[5];
	float fVec118[12];
	float fVec119[32];
	float fVec120[64];
	float fVec121[128];
	float fVec122[256];
	float fVec123[512];
	float fVec124[512];
	float fRec154[2];
	float fRec193[2];
	float fRec194[2];
	float fVec125[2];
	float fConst188;
	float fConst189;
	FAUSTFLOAT fVslider9;
	float fVec126[2];
	float fRec203[2];
	float fRec202[2];
	float fVec127[2];
	float fRec201[2];
	float fRec200[2];
	float fRec199[2];
	float fRec198[2];
	FAUSTFLOAT fVbargraph14;
	float fRec197[2];
	FAUSTFLOAT fVbargraph15;
	float fVec128[2];
	float fVec129[3];
	float fVec130[5];
	float fVec131[12];
	float fVec132[32];
	float fVec133[64];
	float fVec134[128];
	float fVec135[256];
	float fVec136[512];
	float fVec137[512];
	float fRec192[2];
	float fRec212[2];
	float fRec213[2];
	float fRec216[2];
	float fRec217[2];
	float fRec208[2];
	float fRec209[2];
	float fRec205[2];
	float fRec206[2];
	float fRec207[2];
	float fConst190;
	float fConst191;
	FAUSTFLOAT fVslider10;
	float fVec138[2];
	float fRec225[2];
	float fRec224[2];
	float fVec139[2];
	float fRec223[2];
	float fRec222[2];
	float fRec221[2];
	float fRec220[2];
	FAUSTFLOAT fVbargraph16;
	float fRec219[2];
	FAUSTFLOAT fVbargraph17;
	float fVec140[2];
	float fVec141[3];
	float fVec142[5];
	float fVec143[12];
	float fVec144[32];
	float fVec145[64];
	float fVec146[128];
	float fVec147[256];
	float fVec148[512];
	float fVec149[512];
	float fRec204[2];
	float fRec227[2];
	float fRec228[2];
	float fVec150[2];
	float fConst192;
	FAUSTFLOAT fVslider11;
	float fVec151[2];
	float fRec237[2];
	float fRec236[2];
	float fVec152[2];
	float fRec235[2];
	float fRec234[2];
	float fRec233[2];
	float fRec232[2];
	FAUSTFLOAT fVbargraph18;
	float fRec231[2];
	FAUSTFLOAT fVbargraph19;
	float fVec153[2];
	float fVec154[3];
	float fVec155[5];
	float fVec156[12];
	float fVec157[32];
	float fVec158[64];
	float fVec159[128];
	float fVec160[256];
	float fVec161[512];
	float fVec162[512];
	float fRec226[2];
	FAUSTFLOAT fVbargraph20;
	float fRec238[2];
	FAUSTFLOAT fVbargraph21;
	FAUSTFLOAT fVbargraph22;
	float fRec239[2];
	FAUSTFLOAT fVbargraph23;
	FAUSTFLOAT fVbargraph24;
	float fRec240[2];
	FAUSTFLOAT fVbargraph25;
	FAUSTFLOAT fVbargraph26;
	float fRec241[2];
	FAUSTFLOAT fVbargraph27;
	FAUSTFLOAT fVbargraph28;
	float fRec242[2];
	FAUSTFLOAT fVbargraph29;
	FAUSTFLOAT fVbargraph30;
	float fRec243[2];
	FAUSTFLOAT fVbargraph31;
	FAUSTFLOAT fVbargraph32;
	float fRec244[2];
	FAUSTFLOAT fVbargraph33;
	FAUSTFLOAT fVbargraph34;
	float fRec245[2];
	FAUSTFLOAT fVbargraph35;
	
 public:
	mydsp() {
	}
	
	void metadata(Meta* m) { 
		m->declare("analyzers.lib/amp_follower_ar:author", "Jonatan Liljedahl, revised by Romain Michon");
		m->declare("analyzers.lib/name", "Faust Analyzer Library");
		m->declare("analyzers.lib/version", "1.2.0");
		m->declare("author", "Klaus Scheuermann");
		m->declare("basics.lib/bypass1:author", "Julius Smith");
		m->declare("basics.lib/name", "Faust Basic Element Library");
		m->declare("basics.lib/parallelMax:author", "Bart Brouns");
		m->declare("basics.lib/parallelMax:copyright", "Copyright (c) 2020 Bart Brouns <bart@magnetophon.nl>");
		m->declare("basics.lib/parallelMax:licence", "GPL-3.0");
		m->declare("basics.lib/parallelOp:author", "Bart Brouns");
		m->declare("basics.lib/parallelOp:copyright", "Copyright (c) 2020 Bart Brouns <bart@magnetophon.nl>");
		m->declare("basics.lib/parallelOp:licence", "GPL-3.0");
		m->declare("basics.lib/tabulateNd", "Copyright (C) 2023 Bart Brouns <bart@magnetophon.nl>");
		m->declare("basics.lib/version", "1.21.0");
		m->declare("compile_options", "-a /Users/klausscheuermann/Library/Caches/TemporaryItems/faustpp/73962-md.cpp -lang cpp -ct 1 -es 1 -mcd 16 -mdd 1024 -mdy 33 -single -ftz 0");
		m->declare("compressors.lib/expanderSC_N_chan:author", "Bart Brouns");
		m->declare("compressors.lib/expanderSC_N_chan:license", "GPLv3");
		m->declare("compressors.lib/expander_N_chan:author", "Bart Brouns");
		m->declare("compressors.lib/expander_N_chan:license", "GPLv3");
		m->declare("compressors.lib/name", "Faust Compressor Effect Library");
		m->declare("compressors.lib/peak_compression_gain_mono:author", "Bart Brouns");
		m->declare("compressors.lib/peak_compression_gain_mono:license", "GPLv3");
		m->declare("compressors.lib/peak_compression_gain_mono_db:author", "Bart Brouns");
		m->declare("compressors.lib/peak_compression_gain_mono_db:license", "GPLv3");
		m->declare("compressors.lib/peak_expansion_gain_N_chan_db:author", "Bart Brouns");
		m->declare("compressors.lib/peak_expansion_gain_N_chan_db:license", "GPLv3");
		m->declare("compressors.lib/version", "1.6.0");
		m->declare("delays.lib/name", "Faust Delay Library");
		m->declare("delays.lib/version", "1.1.0");
		m->declare("filename", "bbba.dsp");
		m->declare("filters.lib/allpass_comb:author", "Julius O. Smith III");
		m->declare("filters.lib/allpass_comb:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/allpass_comb:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/crossover2LR4:author", "Dario Sanfilippo");
		m->declare("filters.lib/crossover2LR4:copyright", "Copyright (C) 2022 Dario Sanfilippo <sanfilippo.dario@gmail.com>");
		m->declare("filters.lib/crossover2LR4:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/crossover8LR4:author", "Dario Sanfilippo");
		m->declare("filters.lib/crossover8LR4:copyright", "Copyright (C) 2022 Dario Sanfilippo <sanfilippo.dario@gmail.com>");
		m->declare("filters.lib/crossover8LR4:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/fir:author", "Julius O. Smith III");
		m->declare("filters.lib/fir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/fir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/highpass:author", "Julius O. Smith III");
		m->declare("filters.lib/highpass:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/highpassLR4:author", "Dario Sanfilippo");
		m->declare("filters.lib/highpassLR4:copyright", "Copyright (C) 2022 Dario Sanfilippo <sanfilippo.dario@gmail.com>");
		m->declare("filters.lib/highpassLR4:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/iir:author", "Julius O. Smith III");
		m->declare("filters.lib/iir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/iir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/itu_r_bs_1770_4_kfilter:author", "Jakob Dübel");
		m->declare("filters.lib/itu_r_bs_1770_4_kfilter:copyright", "Copyright (C) 2022 Jakob Dübel");
		m->declare("filters.lib/itu_r_bs_1770_4_kfilter:license", "ISC license");
		m->declare("filters.lib/lowpass0_highpass1", "MIT-style STK-4.3 license");
		m->declare("filters.lib/lowpass0_highpass1:author", "Julius O. Smith III");
		m->declare("filters.lib/lowpass:author", "Julius O. Smith III");
		m->declare("filters.lib/lowpass:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/lowpass:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/lowpassLR4:author", "Dario Sanfilippo");
		m->declare("filters.lib/lowpassLR4:copyright", "Copyright (C) 2022 Dario Sanfilippo <sanfilippo.dario@gmail.com>");
		m->declare("filters.lib/lowpassLR4:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/name", "Faust Filters Library");
		m->declare("filters.lib/peak_eq:author", "Julius O. Smith III");
		m->declare("filters.lib/peak_eq:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/peak_eq:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/peak_eq_cq:author", "Julius O. Smith III");
		m->declare("filters.lib/peak_eq_cq:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/peak_eq_cq:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/svf:author", "Oleg Nesterov");
		m->declare("filters.lib/svf:copyright", "Copyright (C) 2020 Oleg Nesterov <oleg@redhat.com>");
		m->declare("filters.lib/svf:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/tf1:author", "Julius O. Smith III");
		m->declare("filters.lib/tf1:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf1:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/tf1s:author", "Julius O. Smith III");
		m->declare("filters.lib/tf1s:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf1s:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/tf22t:author", "Julius O. Smith III");
		m->declare("filters.lib/tf22t:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf22t:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/tf2:author", "Julius O. Smith III");
		m->declare("filters.lib/tf2:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf2:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/tf2s:author", "Julius O. Smith III");
		m->declare("filters.lib/tf2s:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf2s:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/version", "1.6.0");
		m->declare("interpolators.lib/interpolate_linear:author", "Stéphane Letz");
		m->declare("interpolators.lib/interpolate_linear:licence", "MIT");
		m->declare("interpolators.lib/name", "Faust Interpolator Library");
		m->declare("interpolators.lib/version", "1.4.0");
		m->declare("license", "GPLv3");
		m->declare("maths.lib/author", "GRAME");
		m->declare("maths.lib/copyright", "GRAME");
		m->declare("maths.lib/license", "LGPL with exception");
		m->declare("maths.lib/name", "Faust Math Library");
		m->declare("maths.lib/version", "2.8.1");
		m->declare("name", "bbba");
		m->declare("platform.lib/name", "Generic Platform Library");
		m->declare("platform.lib/version", "1.3.0");
		m->declare("reverbs.lib/mono_freeverb:author", "Romain Michon");
		m->declare("reverbs.lib/name", "Faust Reverb Library");
		m->declare("reverbs.lib/version", "1.3.2");
		m->declare("routes.lib/name", "Faust Signal Routing Library");
		m->declare("routes.lib/version", "1.2.0");
		m->declare("signals.lib/name", "Faust Signal Routing Library");
		m->declare("signals.lib/onePoleSwitching:author", "Jonatan Liljedahl, revised by Dario Sanfilippo");
		m->declare("signals.lib/onePoleSwitching:licence", "STK-4.3");
		m->declare("signals.lib/version", "1.6.0");
		m->declare("version", "0.06");
	}

	FAUSTPP_VIRTUAL int getNumInputs() {
		return 1;
	}
	FAUSTPP_VIRTUAL int getNumOutputs() {
		return 1;
	}
	
	static void classInit(int sample_rate) {
	}
	
	FAUSTPP_VIRTUAL void instanceConstants(int sample_rate) {
		fSampleRate = sample_rate;
		fConst0 = std::min<float>(1.92e+05f, std::max<float>(1.0f, float(fSampleRate)));
		fConst1 = std::tan(314.15927f / fConst0);
		fConst2 = fConst1 * (fConst1 + 1.4142135f) + 1.0f;
		fConst3 = 2.0f / fConst2;
		fConst4 = std::tan(628.31854f / fConst0);
		fConst5 = fConst4 * (fConst4 + 1.4142135f) + 1.0f;
		fConst6 = 2.0f / fConst5;
		fConst7 = std::tan(2513.2742f / fConst0);
		fConst8 = fConst7 * (fConst7 + 1.4142135f) + 1.0f;
		fConst9 = 2.0f / fConst8;
		fConst10 = 3.1415927f / fConst0;
		fConst11 = 0.125f * fConst0;
		fConst12 = 0.01f * fConst0;
		iConst13 = int(std::floor(fConst12)) % 2;
		fConst14 = std::tan(1256.6371f / fConst0);
		fConst15 = fConst14 * (fConst14 + 1.4142135f) + 1.0f;
		fConst16 = 2.0f / fConst15;
		fConst17 = std::tan(879.64594f / fConst0);
		fConst18 = fConst17 * (fConst17 + 1.4142135f) + 1.0f;
		fConst19 = 2.0f / fConst18;
		fConst20 = fConst17 / fConst18;
		fConst21 = 1.0f / fConst18;
		fConst22 = fConst14 / fConst15;
		iConst23 = int(std::floor(0.005f * fConst0)) % 2;
		iConst24 = int(std::floor(0.0025f * fConst0)) % 2;
		iConst25 = iConst13 + 2 * iConst23;
		iConst26 = int(std::floor(0.00125f * fConst0)) % 2;
		iConst27 = iConst25 + 4 * iConst24;
		iConst28 = int(std::floor(0.000625f * fConst0)) % 2;
		iConst29 = iConst27 + 8 * iConst26;
		iConst30 = int(std::floor(0.0003125f * fConst0)) % 2;
		iConst31 = iConst29 + 16 * iConst28;
		iConst32 = int(std::floor(0.00015625f * fConst0)) % 2;
		iConst33 = iConst31 + 32 * iConst30;
		iConst34 = int(std::floor(7.8125e-05f * fConst0)) % 2;
		iConst35 = iConst33 + 64 * iConst32;
		iConst36 = int(std::floor(3.90625e-05f * fConst0)) % 2;
		iConst37 = iConst35 + 128 * iConst34;
		fConst38 = std::exp(-(1.0f / fConst0));
		fConst39 = 1.0f - fConst38;
		iConst40 = int(std::floor(3.0f * fConst0)) % 2;
		fConst41 = std::exp(-(1e+02f / fConst0));
		fConst42 = 1.0f - fConst41;
		iConst43 = int(std::floor(1.5f * fConst0)) % 2;
		iConst44 = int(std::floor(0.75f * fConst0)) % 2;
		iConst45 = iConst40 + 2 * iConst43;
		iConst46 = int(std::floor(0.375f * fConst0)) % 2;
		iConst47 = iConst45 + 4 * iConst44;
		iConst48 = int(std::floor(0.1875f * fConst0)) % 2;
		iConst49 = iConst47 + 8 * iConst46;
		iConst50 = int(std::floor(0.09375f * fConst0)) % 2;
		iConst51 = iConst49 + 16 * iConst48;
		iConst52 = int(std::floor(0.046875f * fConst0)) % 2;
		iConst53 = iConst51 + 32 * iConst50;
		iConst54 = int(std::floor(0.0234375f * fConst0)) % 2;
		iConst55 = iConst53 + 64 * iConst52;
		iConst56 = int(std::floor(0.01171875f * fConst0)) % 2;
		iConst57 = iConst55 + 128 * iConst54;
		iConst58 = int(std::floor(0.005859375f * fConst0)) % 2;
		iConst59 = iConst57 + 256 * iConst56;
		iConst60 = int(std::floor(0.0029296875f * fConst0)) % 2;
		iConst61 = iConst59 + 512 * iConst58;
		iConst62 = int(std::floor(0.0014648438f * fConst0)) % 2;
		iConst63 = iConst61 + 1024 * iConst60;
		iConst64 = int(std::floor(0.0007324219f * fConst0)) % 2;
		iConst65 = iConst63 + 2048 * iConst62;
		iConst66 = int(std::floor(0.00036621094f * fConst0)) % 2;
		iConst67 = iConst65 + 4096 * iConst64;
		iConst68 = int(std::floor(0.00018310547f * fConst0)) % 2;
		iConst69 = iConst67 + 8192 * iConst66;
		iConst70 = int(std::floor(9.1552734e-05f * fConst0)) % 2;
		iConst71 = iConst69 + 16384 * iConst68;
		iConst72 = int(std::floor(4.5776367e-05f * fConst0)) % 2;
		iConst73 = iConst71 + 32768 * iConst70;
		iConst74 = int(std::floor(2.2888184e-05f * fConst0)) % 2;
		iConst75 = iConst73 + 65536 * iConst72;
		iConst76 = int(std::floor(1.1444092e-05f * fConst0)) % 2;
		iConst77 = iConst75 + 131072 * iConst74;
		fConst78 = std::exp(-(5.0f / fConst0));
		fConst79 = std::exp(-(1e+03f / fConst0));
		fConst80 = 9.964212e-07f * fConst0;
		fConst81 = std::rint(fConst12);
		fConst82 = 1.0f / std::max<float>(fConst81, 1.1920929e-07f);
		iConst83 = int(std::floor(0.00390625f * fConst81)) % 2;
		fConst84 = std::tan(119.806114f / fConst0);
		fConst85 = mydsp_faustpower2_f(fConst84);
		fConst86 = 0.50032705f * (fConst85 + 1.0f);
		fConst87 = 1.0f / (fConst84 + fConst86);
		fConst88 = std::tan(5283.415f / fConst0);
		fConst89 = mydsp_faustpower2_f(fConst88);
		fConst90 = 1.4142135f * fConst88;
		fConst91 = 1.0f / (fConst89 + fConst90 + 1.0f);
		fConst92 = fConst89 + -1.5848527f;
		fConst93 = 2.0f * fConst92;
		fConst94 = fConst89 + (1.0f - fConst90);
		fConst95 = 1.7803667f * fConst88;
		fConst96 = fConst89 + (1.5848527f - fConst95);
		fConst97 = 2.0f * (fConst89 + -1.0f);
		fConst98 = fConst89 + fConst95 + 1.5848527f;
		fConst99 = fConst86 - fConst84;
		fConst100 = 1.0006541f * (fConst85 + -1.0f);
		iConst101 = int(std::floor(fConst81)) % 2;
		iConst102 = int(std::floor(0.5f * fConst81)) % 2;
		iConst103 = iConst101 + 2 * iConst102;
		iConst104 = int(std::floor(0.25f * fConst81)) % 2;
		iConst105 = iConst103 + 4 * iConst104;
		iConst106 = int(std::floor(0.125f * fConst81)) % 2;
		iConst107 = iConst105 + 8 * iConst106;
		iConst108 = int(std::floor(0.0625f * fConst81)) % 2;
		iConst109 = iConst107 + 16 * iConst108;
		iConst110 = int(std::floor(0.03125f * fConst81)) % 2;
		iConst111 = iConst109 + 32 * iConst110;
		iConst112 = int(std::floor(0.015625f * fConst81)) % 2;
		iConst113 = iConst111 + 64 * iConst112;
		iConst114 = int(std::floor(0.0078125f * fConst81)) % 2;
		iConst115 = iConst113 + 128 * iConst114;
		fConst116 = std::tan(69115.04f / fConst0);
		fConst117 = 1.0f / fConst116;
		fConst118 = 1.0f / ((fConst117 + 1.0f) / fConst116 + 1.0f);
		fConst119 = 1.0f / (fConst117 + 1.0f);
		fConst120 = 1.0f - fConst117;
		fConst121 = (fConst117 + -1.0f) / fConst116 + 1.0f;
		fConst122 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst116));
		iConst123 = std::max<int>(0, int(0.036666665f * fConst0) + 4);
		iConst124 = std::max<int>(0, int(0.035306122f * fConst0) + 4);
		iConst125 = std::max<int>(0, int(0.033809524f * fConst0) + 4);
		iConst126 = std::max<int>(0, int(0.0322449f * fConst0) + 4);
		iConst127 = std::max<int>(0, int(0.030748298f * fConst0) + 4);
		iConst128 = std::max<int>(0, int(0.028956916f * fConst0) + 4);
		iConst129 = std::max<int>(0, int(0.026938776f * fConst0) + 4);
		iConst130 = std::max<int>(0, int(0.025306122f * fConst0) + 4);
		iConst131 = std::min<int>(1024, std::max<int>(0, int(0.0126077095f * fConst0) + 4));
		iConst132 = std::min<int>(1024, std::max<int>(0, int(fConst12) + 4));
		iConst133 = std::min<int>(1024, std::max<int>(0, int(0.0077324263f * fConst0) + 4));
		iConst134 = std::min<int>(1024, std::max<int>(0, int(0.0051020407f * fConst0) + 4));
		fConst135 = fConst7 / fConst8;
		fConst136 = 1.0f / fConst8;
		fConst137 = std::tan(20106.193f / fConst0);
		fConst138 = fConst137 * (fConst137 + 1.4142135f) + 1.0f;
		fConst139 = 2.0f / fConst138;
		fConst140 = std::tan(10053.097f / fConst0);
		fConst141 = fConst140 * (fConst140 + 1.4142135f) + 1.0f;
		fConst142 = 2.0f / fConst141;
		fConst143 = fConst140 / fConst141;
		fConst144 = 1.0f / fConst141;
		fConst145 = std::tan(5026.5483f / fConst0);
		fConst146 = fConst145 * (fConst145 + 1.4142135f) + 1.0f;
		fConst147 = 2.0f / fConst146;
		fConst148 = fConst145 / fConst146;
		fConst149 = 1.0f / fConst146;
		fConst150 = fConst137 / fConst138;
		fConst151 = 1.0f / fConst138;
		fConst152 = fConst4 / fConst5;
		fConst153 = 1.0f / fConst5;
		fConst154 = 1.0f / fConst15;
		fConst155 = fConst1 / fConst2;
		fConst156 = 1.0f / fConst2;
		fConst157 = 1.0f - fConst78;
		fConst158 = 3.9810717f * fConst96;
		fConst159 = 7.9621434f * fConst92;
		fConst160 = 3.9810717f * fConst98;
		fConst161 = std::exp(-(1e+01f / fConst0));
		fConst162 = 1.0f - fConst161;
		fConst163 = std::exp(-(4e+01f / fConst0));
		iConst164 = int(std::floor(0.001f * fConst0)) % 2;
		iConst165 = int(std::floor(0.0005f * fConst0)) % 2;
		iConst166 = int(std::floor(0.00025f * fConst0)) % 2;
		iConst167 = iConst164 + 2 * iConst165;
		iConst168 = int(std::floor(0.000125f * fConst0)) % 2;
		iConst169 = iConst167 + 4 * iConst166;
		iConst170 = int(std::floor(6.25e-05f * fConst0)) % 2;
		iConst171 = iConst169 + 8 * iConst168;
		iConst172 = int(std::floor(3.125e-05f * fConst0)) % 2;
		iConst173 = iConst171 + 16 * iConst170;
		iConst174 = int(std::floor(1.5625e-05f * fConst0)) % 2;
		iConst175 = iConst173 + 32 * iConst172;
		iConst176 = int(std::floor(7.8125e-06f * fConst0)) % 2;
		iConst177 = iConst175 + 64 * iConst174;
		iConst178 = int(std::floor(3.90625e-06f * fConst0)) % 2;
		iConst179 = iConst177 + 128 * iConst176;
		iConst180 = int(std::floor(1.953125e-06f * fConst0)) % 2;
		iConst181 = iConst179 + 256 * iConst178;
		fConst182 = std::exp(-(5.714286f / fConst0));
		fConst183 = 1.0f - fConst182;
		fConst184 = std::exp(-(6.6666665f / fConst0));
		fConst185 = 1.0f - fConst184;
		fConst186 = std::exp(-(8.0f / fConst0));
		fConst187 = 1.0f - fConst186;
		fConst188 = std::exp(-(13.333333f / fConst0));
		fConst189 = 1.0f - fConst188;
		fConst190 = std::exp(-(2e+01f / fConst0));
		fConst191 = 1.0f - fConst190;
		fConst192 = 1.0f - fConst163;
	}
	
	FAUSTPP_VIRTUAL void instanceResetUserInterface() {
		fCheckbox0 = FAUSTFLOAT(0.0f);
		fVslider0 = FAUSTFLOAT(6.0f);
		fVslider1 = FAUSTFLOAT(-23.0f);
		fVslider2 = FAUSTFLOAT(8e+01f);
		fVslider3 = FAUSTFLOAT(5e+01f);
		fVslider4 = FAUSTFLOAT(-1e+01f);
		fVslider5 = FAUSTFLOAT(-5.0f);
		fVslider6 = FAUSTFLOAT(-5.0f);
		fVslider7 = FAUSTFLOAT(-8.0f);
		fVslider8 = FAUSTFLOAT(-9.0f);
		fVslider9 = FAUSTFLOAT(-1e+01f);
		fVslider10 = FAUSTFLOAT(-7.0f);
		fVslider11 = FAUSTFLOAT(-3.0f);
	}
	
	FAUSTPP_VIRTUAL void instanceClear() {
		for (int l0 = 0; l0 < 2; l0 = l0 + 1) {
			fRec42[l0] = 0.0f;
		}
		for (int l1 = 0; l1 < 2; l1 = l1 + 1) {
			fRec43[l1] = 0.0f;
		}
		for (int l2 = 0; l2 < 2; l2 = l2 + 1) {
			fRec37[l2] = 0.0f;
		}
		for (int l3 = 0; l3 < 2; l3 = l3 + 1) {
			fRec38[l3] = 0.0f;
		}
		for (int l4 = 0; l4 < 2; l4 = l4 + 1) {
			fRec34[l4] = 0.0f;
		}
		for (int l5 = 0; l5 < 2; l5 = l5 + 1) {
			fRec35[l5] = 0.0f;
		}
		for (int l6 = 0; l6 < 2; l6 = l6 + 1) {
			fRec31[l6] = 0.0f;
		}
		for (int l7 = 0; l7 < 2; l7 = l7 + 1) {
			fRec32[l7] = 0.0f;
		}
		for (int l8 = 0; l8 < 2; l8 = l8 + 1) {
			fVec0[l8] = 0.0f;
		}
		for (int l9 = 0; l9 < 3; l9 = l9 + 1) {
			fVec1[l9] = 0.0f;
		}
		for (int l10 = 0; l10 < 5; l10 = l10 + 1) {
			fVec2[l10] = 0.0f;
		}
		for (int l11 = 0; l11 < 12; l11 = l11 + 1) {
			fVec3[l11] = 0.0f;
		}
		IOTA0 = 0;
		for (int l12 = 0; l12 < 32; l12 = l12 + 1) {
			fVec4[l12] = 0.0f;
		}
		for (int l13 = 0; l13 < 64; l13 = l13 + 1) {
			fVec5[l13] = 0.0f;
		}
		for (int l14 = 0; l14 < 128; l14 = l14 + 1) {
			fVec6[l14] = 0.0f;
		}
		for (int l15 = 0; l15 < 256; l15 = l15 + 1) {
			fVec7[l15] = 0.0f;
		}
		for (int l16 = 0; l16 < 512; l16 = l16 + 1) {
			fVec8[l16] = 0.0f;
		}
		for (int l17 = 0; l17 < 2; l17 = l17 + 1) {
			fRec48[l17] = 0.0f;
		}
		for (int l18 = 0; l18 < 3; l18 = l18 + 1) {
			fVec9[l18] = 0.0f;
		}
		for (int l19 = 0; l19 < 5; l19 = l19 + 1) {
			fVec10[l19] = 0.0f;
		}
		for (int l20 = 0; l20 < 12; l20 = l20 + 1) {
			fVec11[l20] = 0.0f;
		}
		for (int l21 = 0; l21 < 32; l21 = l21 + 1) {
			fVec12[l21] = 0.0f;
		}
		for (int l22 = 0; l22 < 64; l22 = l22 + 1) {
			fVec13[l22] = 0.0f;
		}
		for (int l23 = 0; l23 < 128; l23 = l23 + 1) {
			fVec14[l23] = 0.0f;
		}
		for (int l24 = 0; l24 < 256; l24 = l24 + 1) {
			fVec15[l24] = 0.0f;
		}
		for (int l25 = 0; l25 < 512; l25 = l25 + 1) {
			fVec16[l25] = 0.0f;
		}
		for (int l26 = 0; l26 < 1024; l26 = l26 + 1) {
			fVec17[l26] = 0.0f;
		}
		for (int l27 = 0; l27 < 2048; l27 = l27 + 1) {
			fVec18[l27] = 0.0f;
		}
		for (int l28 = 0; l28 < 4096; l28 = l28 + 1) {
			fVec19[l28] = 0.0f;
		}
		for (int l29 = 0; l29 < 8192; l29 = l29 + 1) {
			fVec20[l29] = 0.0f;
		}
		for (int l30 = 0; l30 < 16384; l30 = l30 + 1) {
			fVec21[l30] = 0.0f;
		}
		for (int l31 = 0; l31 < 32768; l31 = l31 + 1) {
			fVec22[l31] = 0.0f;
		}
		for (int l32 = 0; l32 < 65536; l32 = l32 + 1) {
			fVec23[l32] = 0.0f;
		}
		for (int l33 = 0; l33 < 131072; l33 = l33 + 1) {
			fVec24[l33] = 0.0f;
		}
		for (int l34 = 0; l34 < 262144; l34 = l34 + 1) {
			fVec25[l34] = 0.0f;
		}
		for (int l35 = 0; l35 < 524288; l35 = l35 + 1) {
			fVec26[l35] = 0.0f;
		}
		for (int l36 = 0; l36 < 2; l36 = l36 + 1) {
			fRec47[l36] = 0.0f;
		}
		for (int l37 = 0; l37 < 2; l37 = l37 + 1) {
			fRec30[l37] = 0.0f;
		}
		for (int l38 = 0; l38 < 2; l38 = l38 + 1) {
			fVec27[l38] = 0.0f;
		}
		for (int l39 = 0; l39 < 2; l39 = l39 + 1) {
			fRec52[l39] = 0.0f;
		}
		for (int l40 = 0; l40 < 2; l40 = l40 + 1) {
			fRec51[l40] = 0.0f;
		}
		for (int l41 = 0; l41 < 2; l41 = l41 + 1) {
			fVec28[l41] = 0.0f;
		}
		for (int l42 = 0; l42 < 2; l42 = l42 + 1) {
			fRec50[l42] = 0.0f;
		}
		for (int l43 = 0; l43 < 2; l43 = l43 + 1) {
			fRec49[l43] = 0.0f;
		}
		for (int l44 = 0; l44 < 2; l44 = l44 + 1) {
			fVec29[l44] = 0.0f;
		}
		for (int l45 = 0; l45 < 3; l45 = l45 + 1) {
			fVec30[l45] = 0.0f;
		}
		for (int l46 = 0; l46 < 5; l46 = l46 + 1) {
			fVec31[l46] = 0.0f;
		}
		for (int l47 = 0; l47 < 12; l47 = l47 + 1) {
			fVec32[l47] = 0.0f;
		}
		for (int l48 = 0; l48 < 32; l48 = l48 + 1) {
			fVec33[l48] = 0.0f;
		}
		for (int l49 = 0; l49 < 64; l49 = l49 + 1) {
			fVec34[l49] = 0.0f;
		}
		for (int l50 = 0; l50 < 128; l50 = l50 + 1) {
			fVec35[l50] = 0.0f;
		}
		for (int l51 = 0; l51 < 256; l51 = l51 + 1) {
			fVec36[l51] = 0.0f;
		}
		for (int l52 = 0; l52 < 512; l52 = l52 + 1) {
			fVec37[l52] = 0.0f;
		}
		for (int l53 = 0; l53 < 2; l53 = l53 + 1) {
			fRec25[l53] = 0.0f;
		}
		for (int l54 = 0; l54 < 2; l54 = l54 + 1) {
			fRec26[l54] = 0.0f;
		}
		for (int l55 = 0; l55 < 2; l55 = l55 + 1) {
			fRec23[l55] = 0.0f;
		}
		for (int l56 = 0; l56 < 2; l56 = l56 + 1) {
			fRec22[l56] = 0.0f;
		}
		for (int l57 = 0; l57 < 2; l57 = l57 + 1) {
			fVec38[l57] = 0.0f;
		}
		for (int l58 = 0; l58 < 2; l58 = l58 + 1) {
			fRec65[l58] = 0.0f;
		}
		for (int l59 = 0; l59 < 3; l59 = l59 + 1) {
			fRec64[l59] = 0.0f;
		}
		for (int l60 = 0; l60 < 2; l60 = l60 + 1) {
			fVec39[l60] = 0.0f;
		}
		for (int l61 = 0; l61 < 2; l61 = l61 + 1) {
			fRec63[l61] = 0.0f;
		}
		for (int l62 = 0; l62 < 3; l62 = l62 + 1) {
			fRec62[l62] = 0.0f;
		}
		for (int l63 = 0; l63 < 2; l63 = l63 + 1) {
			fRec66[l63] = 0.0f;
		}
		for (int l64 = 0; l64 < 8192; l64 = l64 + 1) {
			fVec40[l64] = 0.0f;
		}
		for (int l65 = 0; l65 < 2; l65 = l65 + 1) {
			fRec61[l65] = 0.0f;
		}
		for (int l66 = 0; l66 < 2; l66 = l66 + 1) {
			fRec68[l66] = 0.0f;
		}
		for (int l67 = 0; l67 < 8192; l67 = l67 + 1) {
			fVec41[l67] = 0.0f;
		}
		for (int l68 = 0; l68 < 2; l68 = l68 + 1) {
			fRec67[l68] = 0.0f;
		}
		for (int l69 = 0; l69 < 2; l69 = l69 + 1) {
			fRec70[l69] = 0.0f;
		}
		for (int l70 = 0; l70 < 8192; l70 = l70 + 1) {
			fVec42[l70] = 0.0f;
		}
		for (int l71 = 0; l71 < 2; l71 = l71 + 1) {
			fRec69[l71] = 0.0f;
		}
		for (int l72 = 0; l72 < 2; l72 = l72 + 1) {
			fRec72[l72] = 0.0f;
		}
		for (int l73 = 0; l73 < 8192; l73 = l73 + 1) {
			fVec43[l73] = 0.0f;
		}
		for (int l74 = 0; l74 < 2; l74 = l74 + 1) {
			fRec71[l74] = 0.0f;
		}
		for (int l75 = 0; l75 < 2; l75 = l75 + 1) {
			fRec74[l75] = 0.0f;
		}
		for (int l76 = 0; l76 < 8192; l76 = l76 + 1) {
			fVec44[l76] = 0.0f;
		}
		for (int l77 = 0; l77 < 2; l77 = l77 + 1) {
			fRec73[l77] = 0.0f;
		}
		for (int l78 = 0; l78 < 2; l78 = l78 + 1) {
			fRec76[l78] = 0.0f;
		}
		for (int l79 = 0; l79 < 8192; l79 = l79 + 1) {
			fVec45[l79] = 0.0f;
		}
		for (int l80 = 0; l80 < 2; l80 = l80 + 1) {
			fRec75[l80] = 0.0f;
		}
		for (int l81 = 0; l81 < 2; l81 = l81 + 1) {
			fRec78[l81] = 0.0f;
		}
		for (int l82 = 0; l82 < 8192; l82 = l82 + 1) {
			fVec46[l82] = 0.0f;
		}
		for (int l83 = 0; l83 < 2; l83 = l83 + 1) {
			fRec77[l83] = 0.0f;
		}
		for (int l84 = 0; l84 < 2; l84 = l84 + 1) {
			fRec80[l84] = 0.0f;
		}
		for (int l85 = 0; l85 < 8192; l85 = l85 + 1) {
			fVec47[l85] = 0.0f;
		}
		for (int l86 = 0; l86 < 2; l86 = l86 + 1) {
			fRec79[l86] = 0.0f;
		}
		for (int l87 = 0; l87 < 2048; l87 = l87 + 1) {
			fVec48[l87] = 0.0f;
		}
		for (int l88 = 0; l88 < 2; l88 = l88 + 1) {
			fRec59[l88] = 0.0f;
		}
		for (int l89 = 0; l89 < 2048; l89 = l89 + 1) {
			fVec49[l89] = 0.0f;
		}
		for (int l90 = 0; l90 < 2; l90 = l90 + 1) {
			fRec57[l90] = 0.0f;
		}
		for (int l91 = 0; l91 < 2048; l91 = l91 + 1) {
			fVec50[l91] = 0.0f;
		}
		for (int l92 = 0; l92 < 2; l92 = l92 + 1) {
			fRec55[l92] = 0.0f;
		}
		for (int l93 = 0; l93 < 1024; l93 = l93 + 1) {
			fVec51[l93] = 0.0f;
		}
		for (int l94 = 0; l94 < 2; l94 = l94 + 1) {
			fRec53[l94] = 0.0f;
		}
		for (int l95 = 0; l95 < 3; l95 = l95 + 1) {
			fRec21[l95] = 0.0f;
		}
		for (int l96 = 0; l96 < 2; l96 = l96 + 1) {
			fRec17[l96] = 0.0f;
		}
		for (int l97 = 0; l97 < 2; l97 = l97 + 1) {
			fRec18[l97] = 0.0f;
		}
		for (int l98 = 0; l98 < 2; l98 = l98 + 1) {
			fRec14[l98] = 0.0f;
		}
		for (int l99 = 0; l99 < 2; l99 = l99 + 1) {
			fRec15[l99] = 0.0f;
		}
		for (int l100 = 0; l100 < 2; l100 = l100 + 1) {
			fRec84[l100] = 0.0f;
		}
		for (int l101 = 0; l101 < 2; l101 = l101 + 1) {
			fRec85[l101] = 0.0f;
		}
		for (int l102 = 0; l102 < 2; l102 = l102 + 1) {
			fRec87[l102] = 0.0f;
		}
		for (int l103 = 0; l103 < 2; l103 = l103 + 1) {
			fRec88[l103] = 0.0f;
		}
		for (int l104 = 0; l104 < 2; l104 = l104 + 1) {
			fRec81[l104] = 0.0f;
		}
		for (int l105 = 0; l105 < 2; l105 = l105 + 1) {
			fRec82[l105] = 0.0f;
		}
		for (int l106 = 0; l106 < 2; l106 = l106 + 1) {
			fRec10[l106] = 0.0f;
		}
		for (int l107 = 0; l107 < 2; l107 = l107 + 1) {
			fRec11[l107] = 0.0f;
		}
		for (int l108 = 0; l108 < 2; l108 = l108 + 1) {
			fRec7[l108] = 0.0f;
		}
		for (int l109 = 0; l109 < 2; l109 = l109 + 1) {
			fRec8[l109] = 0.0f;
		}
		for (int l110 = 0; l110 < 2; l110 = l110 + 1) {
			fRec90[l110] = 0.0f;
		}
		for (int l111 = 0; l111 < 2; l111 = l111 + 1) {
			fRec91[l111] = 0.0f;
		}
		for (int l112 = 0; l112 < 2; l112 = l112 + 1) {
			fRec3[l112] = 0.0f;
		}
		for (int l113 = 0; l113 < 2; l113 = l113 + 1) {
			fRec4[l113] = 0.0f;
		}
		for (int l114 = 0; l114 < 2; l114 = l114 + 1) {
			fRec0[l114] = 0.0f;
		}
		for (int l115 = 0; l115 < 2; l115 = l115 + 1) {
			fRec1[l115] = 0.0f;
		}
		for (int l116 = 0; l116 < 2; l116 = l116 + 1) {
			fRec2[l116] = 0.0f;
		}
		for (int l117 = 0; l117 < 2; l117 = l117 + 1) {
			fVec52[l117] = 0.0f;
		}
		for (int l118 = 0; l118 < 2; l118 = l118 + 1) {
			fRec99[l118] = 0.0f;
		}
		for (int l119 = 0; l119 < 2; l119 = l119 + 1) {
			fRec98[l119] = 0.0f;
		}
		for (int l120 = 0; l120 < 2; l120 = l120 + 1) {
			fVec53[l120] = 0.0f;
		}
		for (int l121 = 0; l121 < 2; l121 = l121 + 1) {
			fRec97[l121] = 0.0f;
		}
		for (int l122 = 0; l122 < 2; l122 = l122 + 1) {
			fRec96[l122] = 0.0f;
		}
		for (int l123 = 0; l123 < 2; l123 = l123 + 1) {
			fRec95[l123] = 0.0f;
		}
		for (int l124 = 0; l124 < 2; l124 = l124 + 1) {
			fRec94[l124] = 0.0f;
		}
		for (int l125 = 0; l125 < 2; l125 = l125 + 1) {
			fVec54[l125] = 0.0f;
		}
		for (int l126 = 0; l126 < 2; l126 = l126 + 1) {
			fRec105[l126] = 0.0f;
		}
		for (int l127 = 0; l127 < 2; l127 = l127 + 1) {
			fRec104[l127] = 0.0f;
		}
		for (int l128 = 0; l128 < 2; l128 = l128 + 1) {
			fVec55[l128] = 0.0f;
		}
		for (int l129 = 0; l129 < 2; l129 = l129 + 1) {
			fRec103[l129] = 0.0f;
		}
		for (int l130 = 0; l130 < 2; l130 = l130 + 1) {
			fRec102[l130] = 0.0f;
		}
		for (int l131 = 0; l131 < 2; l131 = l131 + 1) {
			fRec101[l131] = 0.0f;
		}
		for (int l132 = 0; l132 < 2; l132 = l132 + 1) {
			fRec100[l132] = 0.0f;
		}
		for (int l133 = 0; l133 < 2; l133 = l133 + 1) {
			fRec93[l133] = 0.0f;
		}
		for (int l134 = 0; l134 < 2; l134 = l134 + 1) {
			fVec56[l134] = 0.0f;
		}
		for (int l135 = 0; l135 < 3; l135 = l135 + 1) {
			fVec57[l135] = 0.0f;
		}
		for (int l136 = 0; l136 < 5; l136 = l136 + 1) {
			fVec58[l136] = 0.0f;
		}
		for (int l137 = 0; l137 < 12; l137 = l137 + 1) {
			fVec59[l137] = 0.0f;
		}
		for (int l138 = 0; l138 < 32; l138 = l138 + 1) {
			fVec60[l138] = 0.0f;
		}
		for (int l139 = 0; l139 < 64; l139 = l139 + 1) {
			fVec61[l139] = 0.0f;
		}
		for (int l140 = 0; l140 < 128; l140 = l140 + 1) {
			fVec62[l140] = 0.0f;
		}
		for (int l141 = 0; l141 < 256; l141 = l141 + 1) {
			fVec63[l141] = 0.0f;
		}
		for (int l142 = 0; l142 < 512; l142 = l142 + 1) {
			fVec64[l142] = 0.0f;
		}
		for (int l143 = 0; l143 < 2; l143 = l143 + 1) {
			fRec106[l143] = 0.0f;
		}
		for (int l144 = 0; l144 < 2; l144 = l144 + 1) {
			fVec65[l144] = 0.0f;
		}
		for (int l145 = 0; l145 < 3; l145 = l145 + 1) {
			fVec66[l145] = 0.0f;
		}
		for (int l146 = 0; l146 < 5; l146 = l146 + 1) {
			fVec67[l146] = 0.0f;
		}
		for (int l147 = 0; l147 < 12; l147 = l147 + 1) {
			fVec68[l147] = 0.0f;
		}
		for (int l148 = 0; l148 < 32; l148 = l148 + 1) {
			fVec69[l148] = 0.0f;
		}
		for (int l149 = 0; l149 < 64; l149 = l149 + 1) {
			fVec70[l149] = 0.0f;
		}
		for (int l150 = 0; l150 < 128; l150 = l150 + 1) {
			fVec71[l150] = 0.0f;
		}
		for (int l151 = 0; l151 < 256; l151 = l151 + 1) {
			fVec72[l151] = 0.0f;
		}
		for (int l152 = 0; l152 < 512; l152 = l152 + 1) {
			fVec73[l152] = 0.0f;
		}
		for (int l153 = 0; l153 < 512; l153 = l153 + 1) {
			fVec74[l153] = 0.0f;
		}
		for (int l154 = 0; l154 < 2; l154 = l154 + 1) {
			fRec107[l154] = 0.0f;
		}
		for (int l155 = 0; l155 < 2; l155 = l155 + 1) {
			fRec109[l155] = 0.0f;
		}
		for (int l156 = 0; l156 < 2; l156 = l156 + 1) {
			fRec110[l156] = 0.0f;
		}
		for (int l157 = 0; l157 < 2; l157 = l157 + 1) {
			fVec75[l157] = 0.0f;
		}
		for (int l158 = 0; l158 < 2; l158 = l158 + 1) {
			fVec76[l158] = 0.0f;
		}
		for (int l159 = 0; l159 < 2; l159 = l159 + 1) {
			fRec119[l159] = 0.0f;
		}
		for (int l160 = 0; l160 < 2; l160 = l160 + 1) {
			fRec118[l160] = 0.0f;
		}
		for (int l161 = 0; l161 < 2; l161 = l161 + 1) {
			fVec77[l161] = 0.0f;
		}
		for (int l162 = 0; l162 < 2; l162 = l162 + 1) {
			fRec117[l162] = 0.0f;
		}
		for (int l163 = 0; l163 < 2; l163 = l163 + 1) {
			fRec116[l163] = 0.0f;
		}
		for (int l164 = 0; l164 < 2; l164 = l164 + 1) {
			fRec115[l164] = 0.0f;
		}
		for (int l165 = 0; l165 < 2; l165 = l165 + 1) {
			fRec114[l165] = 0.0f;
		}
		for (int l166 = 0; l166 < 2; l166 = l166 + 1) {
			fRec113[l166] = 0.0f;
		}
		for (int l167 = 0; l167 < 2; l167 = l167 + 1) {
			fVec78[l167] = 0.0f;
		}
		for (int l168 = 0; l168 < 3; l168 = l168 + 1) {
			fVec79[l168] = 0.0f;
		}
		for (int l169 = 0; l169 < 5; l169 = l169 + 1) {
			fVec80[l169] = 0.0f;
		}
		for (int l170 = 0; l170 < 12; l170 = l170 + 1) {
			fVec81[l170] = 0.0f;
		}
		for (int l171 = 0; l171 < 32; l171 = l171 + 1) {
			fVec82[l171] = 0.0f;
		}
		for (int l172 = 0; l172 < 64; l172 = l172 + 1) {
			fVec83[l172] = 0.0f;
		}
		for (int l173 = 0; l173 < 128; l173 = l173 + 1) {
			fVec84[l173] = 0.0f;
		}
		for (int l174 = 0; l174 < 256; l174 = l174 + 1) {
			fVec85[l174] = 0.0f;
		}
		for (int l175 = 0; l175 < 512; l175 = l175 + 1) {
			fVec86[l175] = 0.0f;
		}
		for (int l176 = 0; l176 < 512; l176 = l176 + 1) {
			fVec87[l176] = 0.0f;
		}
		for (int l177 = 0; l177 < 2; l177 = l177 + 1) {
			fRec108[l177] = 0.0f;
		}
		for (int l178 = 0; l178 < 2; l178 = l178 + 1) {
			fRec128[l178] = 0.0f;
		}
		for (int l179 = 0; l179 < 2; l179 = l179 + 1) {
			fRec129[l179] = 0.0f;
		}
		for (int l180 = 0; l180 < 2; l180 = l180 + 1) {
			fRec132[l180] = 0.0f;
		}
		for (int l181 = 0; l181 < 2; l181 = l181 + 1) {
			fRec133[l181] = 0.0f;
		}
		for (int l182 = 0; l182 < 2; l182 = l182 + 1) {
			fRec124[l182] = 0.0f;
		}
		for (int l183 = 0; l183 < 2; l183 = l183 + 1) {
			fRec125[l183] = 0.0f;
		}
		for (int l184 = 0; l184 < 2; l184 = l184 + 1) {
			fRec121[l184] = 0.0f;
		}
		for (int l185 = 0; l185 < 2; l185 = l185 + 1) {
			fRec122[l185] = 0.0f;
		}
		for (int l186 = 0; l186 < 2; l186 = l186 + 1) {
			fRec123[l186] = 0.0f;
		}
		for (int l187 = 0; l187 < 2; l187 = l187 + 1) {
			fVec88[l187] = 0.0f;
		}
		for (int l188 = 0; l188 < 2; l188 = l188 + 1) {
			fRec141[l188] = 0.0f;
		}
		for (int l189 = 0; l189 < 2; l189 = l189 + 1) {
			fRec140[l189] = 0.0f;
		}
		for (int l190 = 0; l190 < 2; l190 = l190 + 1) {
			fVec89[l190] = 0.0f;
		}
		for (int l191 = 0; l191 < 2; l191 = l191 + 1) {
			fRec139[l191] = 0.0f;
		}
		for (int l192 = 0; l192 < 2; l192 = l192 + 1) {
			fRec138[l192] = 0.0f;
		}
		for (int l193 = 0; l193 < 2; l193 = l193 + 1) {
			fRec137[l193] = 0.0f;
		}
		for (int l194 = 0; l194 < 2; l194 = l194 + 1) {
			fRec136[l194] = 0.0f;
		}
		for (int l195 = 0; l195 < 2; l195 = l195 + 1) {
			fRec135[l195] = 0.0f;
		}
		for (int l196 = 0; l196 < 2; l196 = l196 + 1) {
			fVec90[l196] = 0.0f;
		}
		for (int l197 = 0; l197 < 3; l197 = l197 + 1) {
			fVec91[l197] = 0.0f;
		}
		for (int l198 = 0; l198 < 5; l198 = l198 + 1) {
			fVec92[l198] = 0.0f;
		}
		for (int l199 = 0; l199 < 12; l199 = l199 + 1) {
			fVec93[l199] = 0.0f;
		}
		for (int l200 = 0; l200 < 32; l200 = l200 + 1) {
			fVec94[l200] = 0.0f;
		}
		for (int l201 = 0; l201 < 64; l201 = l201 + 1) {
			fVec95[l201] = 0.0f;
		}
		for (int l202 = 0; l202 < 128; l202 = l202 + 1) {
			fVec96[l202] = 0.0f;
		}
		for (int l203 = 0; l203 < 256; l203 = l203 + 1) {
			fVec97[l203] = 0.0f;
		}
		for (int l204 = 0; l204 < 512; l204 = l204 + 1) {
			fVec98[l204] = 0.0f;
		}
		for (int l205 = 0; l205 < 512; l205 = l205 + 1) {
			fVec99[l205] = 0.0f;
		}
		for (int l206 = 0; l206 < 2; l206 = l206 + 1) {
			fRec120[l206] = 0.0f;
		}
		for (int l207 = 0; l207 < 2; l207 = l207 + 1) {
			fRec143[l207] = 0.0f;
		}
		for (int l208 = 0; l208 < 2; l208 = l208 + 1) {
			fRec144[l208] = 0.0f;
		}
		for (int l209 = 0; l209 < 2; l209 = l209 + 1) {
			fVec100[l209] = 0.0f;
		}
		for (int l210 = 0; l210 < 2; l210 = l210 + 1) {
			fVec101[l210] = 0.0f;
		}
		for (int l211 = 0; l211 < 2; l211 = l211 + 1) {
			fRec153[l211] = 0.0f;
		}
		for (int l212 = 0; l212 < 2; l212 = l212 + 1) {
			fRec152[l212] = 0.0f;
		}
		for (int l213 = 0; l213 < 2; l213 = l213 + 1) {
			fVec102[l213] = 0.0f;
		}
		for (int l214 = 0; l214 < 2; l214 = l214 + 1) {
			fRec151[l214] = 0.0f;
		}
		for (int l215 = 0; l215 < 2; l215 = l215 + 1) {
			fRec150[l215] = 0.0f;
		}
		for (int l216 = 0; l216 < 2; l216 = l216 + 1) {
			fRec149[l216] = 0.0f;
		}
		for (int l217 = 0; l217 < 2; l217 = l217 + 1) {
			fRec148[l217] = 0.0f;
		}
		for (int l218 = 0; l218 < 2; l218 = l218 + 1) {
			fRec147[l218] = 0.0f;
		}
		for (int l219 = 0; l219 < 2; l219 = l219 + 1) {
			fVec103[l219] = 0.0f;
		}
		for (int l220 = 0; l220 < 3; l220 = l220 + 1) {
			fVec104[l220] = 0.0f;
		}
		for (int l221 = 0; l221 < 5; l221 = l221 + 1) {
			fVec105[l221] = 0.0f;
		}
		for (int l222 = 0; l222 < 12; l222 = l222 + 1) {
			fVec106[l222] = 0.0f;
		}
		for (int l223 = 0; l223 < 32; l223 = l223 + 1) {
			fVec107[l223] = 0.0f;
		}
		for (int l224 = 0; l224 < 64; l224 = l224 + 1) {
			fVec108[l224] = 0.0f;
		}
		for (int l225 = 0; l225 < 128; l225 = l225 + 1) {
			fVec109[l225] = 0.0f;
		}
		for (int l226 = 0; l226 < 256; l226 = l226 + 1) {
			fVec110[l226] = 0.0f;
		}
		for (int l227 = 0; l227 < 512; l227 = l227 + 1) {
			fVec111[l227] = 0.0f;
		}
		for (int l228 = 0; l228 < 512; l228 = l228 + 1) {
			fVec112[l228] = 0.0f;
		}
		for (int l229 = 0; l229 < 2; l229 = l229 + 1) {
			fRec142[l229] = 0.0f;
		}
		for (int l230 = 0; l230 < 2; l230 = l230 + 1) {
			fRec169[l230] = 0.0f;
		}
		for (int l231 = 0; l231 < 2; l231 = l231 + 1) {
			fRec170[l231] = 0.0f;
		}
		for (int l232 = 0; l232 < 2; l232 = l232 + 1) {
			fRec176[l232] = 0.0f;
		}
		for (int l233 = 0; l233 < 2; l233 = l233 + 1) {
			fRec177[l233] = 0.0f;
		}
		for (int l234 = 0; l234 < 2; l234 = l234 + 1) {
			fRec179[l234] = 0.0f;
		}
		for (int l235 = 0; l235 < 2; l235 = l235 + 1) {
			fRec180[l235] = 0.0f;
		}
		for (int l236 = 0; l236 < 2; l236 = l236 + 1) {
			fRec173[l236] = 0.0f;
		}
		for (int l237 = 0; l237 < 2; l237 = l237 + 1) {
			fRec174[l237] = 0.0f;
		}
		for (int l238 = 0; l238 < 2; l238 = l238 + 1) {
			fRec165[l238] = 0.0f;
		}
		for (int l239 = 0; l239 < 2; l239 = l239 + 1) {
			fRec166[l239] = 0.0f;
		}
		for (int l240 = 0; l240 < 2; l240 = l240 + 1) {
			fRec162[l240] = 0.0f;
		}
		for (int l241 = 0; l241 < 2; l241 = l241 + 1) {
			fRec163[l241] = 0.0f;
		}
		for (int l242 = 0; l242 < 2; l242 = l242 + 1) {
			fRec182[l242] = 0.0f;
		}
		for (int l243 = 0; l243 < 2; l243 = l243 + 1) {
			fRec183[l243] = 0.0f;
		}
		for (int l244 = 0; l244 < 2; l244 = l244 + 1) {
			fRec158[l244] = 0.0f;
		}
		for (int l245 = 0; l245 < 2; l245 = l245 + 1) {
			fRec159[l245] = 0.0f;
		}
		for (int l246 = 0; l246 < 2; l246 = l246 + 1) {
			fRec155[l246] = 0.0f;
		}
		for (int l247 = 0; l247 < 2; l247 = l247 + 1) {
			fRec156[l247] = 0.0f;
		}
		for (int l248 = 0; l248 < 2; l248 = l248 + 1) {
			fRec157[l248] = 0.0f;
		}
		for (int l249 = 0; l249 < 2; l249 = l249 + 1) {
			fVec113[l249] = 0.0f;
		}
		for (int l250 = 0; l250 < 2; l250 = l250 + 1) {
			fRec191[l250] = 0.0f;
		}
		for (int l251 = 0; l251 < 2; l251 = l251 + 1) {
			fRec190[l251] = 0.0f;
		}
		for (int l252 = 0; l252 < 2; l252 = l252 + 1) {
			fVec114[l252] = 0.0f;
		}
		for (int l253 = 0; l253 < 2; l253 = l253 + 1) {
			fRec189[l253] = 0.0f;
		}
		for (int l254 = 0; l254 < 2; l254 = l254 + 1) {
			fRec188[l254] = 0.0f;
		}
		for (int l255 = 0; l255 < 2; l255 = l255 + 1) {
			fRec187[l255] = 0.0f;
		}
		for (int l256 = 0; l256 < 2; l256 = l256 + 1) {
			fRec186[l256] = 0.0f;
		}
		for (int l257 = 0; l257 < 2; l257 = l257 + 1) {
			fRec185[l257] = 0.0f;
		}
		for (int l258 = 0; l258 < 2; l258 = l258 + 1) {
			fVec115[l258] = 0.0f;
		}
		for (int l259 = 0; l259 < 3; l259 = l259 + 1) {
			fVec116[l259] = 0.0f;
		}
		for (int l260 = 0; l260 < 5; l260 = l260 + 1) {
			fVec117[l260] = 0.0f;
		}
		for (int l261 = 0; l261 < 12; l261 = l261 + 1) {
			fVec118[l261] = 0.0f;
		}
		for (int l262 = 0; l262 < 32; l262 = l262 + 1) {
			fVec119[l262] = 0.0f;
		}
		for (int l263 = 0; l263 < 64; l263 = l263 + 1) {
			fVec120[l263] = 0.0f;
		}
		for (int l264 = 0; l264 < 128; l264 = l264 + 1) {
			fVec121[l264] = 0.0f;
		}
		for (int l265 = 0; l265 < 256; l265 = l265 + 1) {
			fVec122[l265] = 0.0f;
		}
		for (int l266 = 0; l266 < 512; l266 = l266 + 1) {
			fVec123[l266] = 0.0f;
		}
		for (int l267 = 0; l267 < 512; l267 = l267 + 1) {
			fVec124[l267] = 0.0f;
		}
		for (int l268 = 0; l268 < 2; l268 = l268 + 1) {
			fRec154[l268] = 0.0f;
		}
		for (int l269 = 0; l269 < 2; l269 = l269 + 1) {
			fRec193[l269] = 0.0f;
		}
		for (int l270 = 0; l270 < 2; l270 = l270 + 1) {
			fRec194[l270] = 0.0f;
		}
		for (int l271 = 0; l271 < 2; l271 = l271 + 1) {
			fVec125[l271] = 0.0f;
		}
		for (int l272 = 0; l272 < 2; l272 = l272 + 1) {
			fVec126[l272] = 0.0f;
		}
		for (int l273 = 0; l273 < 2; l273 = l273 + 1) {
			fRec203[l273] = 0.0f;
		}
		for (int l274 = 0; l274 < 2; l274 = l274 + 1) {
			fRec202[l274] = 0.0f;
		}
		for (int l275 = 0; l275 < 2; l275 = l275 + 1) {
			fVec127[l275] = 0.0f;
		}
		for (int l276 = 0; l276 < 2; l276 = l276 + 1) {
			fRec201[l276] = 0.0f;
		}
		for (int l277 = 0; l277 < 2; l277 = l277 + 1) {
			fRec200[l277] = 0.0f;
		}
		for (int l278 = 0; l278 < 2; l278 = l278 + 1) {
			fRec199[l278] = 0.0f;
		}
		for (int l279 = 0; l279 < 2; l279 = l279 + 1) {
			fRec198[l279] = 0.0f;
		}
		for (int l280 = 0; l280 < 2; l280 = l280 + 1) {
			fRec197[l280] = 0.0f;
		}
		for (int l281 = 0; l281 < 2; l281 = l281 + 1) {
			fVec128[l281] = 0.0f;
		}
		for (int l282 = 0; l282 < 3; l282 = l282 + 1) {
			fVec129[l282] = 0.0f;
		}
		for (int l283 = 0; l283 < 5; l283 = l283 + 1) {
			fVec130[l283] = 0.0f;
		}
		for (int l284 = 0; l284 < 12; l284 = l284 + 1) {
			fVec131[l284] = 0.0f;
		}
		for (int l285 = 0; l285 < 32; l285 = l285 + 1) {
			fVec132[l285] = 0.0f;
		}
		for (int l286 = 0; l286 < 64; l286 = l286 + 1) {
			fVec133[l286] = 0.0f;
		}
		for (int l287 = 0; l287 < 128; l287 = l287 + 1) {
			fVec134[l287] = 0.0f;
		}
		for (int l288 = 0; l288 < 256; l288 = l288 + 1) {
			fVec135[l288] = 0.0f;
		}
		for (int l289 = 0; l289 < 512; l289 = l289 + 1) {
			fVec136[l289] = 0.0f;
		}
		for (int l290 = 0; l290 < 512; l290 = l290 + 1) {
			fVec137[l290] = 0.0f;
		}
		for (int l291 = 0; l291 < 2; l291 = l291 + 1) {
			fRec192[l291] = 0.0f;
		}
		for (int l292 = 0; l292 < 2; l292 = l292 + 1) {
			fRec212[l292] = 0.0f;
		}
		for (int l293 = 0; l293 < 2; l293 = l293 + 1) {
			fRec213[l293] = 0.0f;
		}
		for (int l294 = 0; l294 < 2; l294 = l294 + 1) {
			fRec216[l294] = 0.0f;
		}
		for (int l295 = 0; l295 < 2; l295 = l295 + 1) {
			fRec217[l295] = 0.0f;
		}
		for (int l296 = 0; l296 < 2; l296 = l296 + 1) {
			fRec208[l296] = 0.0f;
		}
		for (int l297 = 0; l297 < 2; l297 = l297 + 1) {
			fRec209[l297] = 0.0f;
		}
		for (int l298 = 0; l298 < 2; l298 = l298 + 1) {
			fRec205[l298] = 0.0f;
		}
		for (int l299 = 0; l299 < 2; l299 = l299 + 1) {
			fRec206[l299] = 0.0f;
		}
		for (int l300 = 0; l300 < 2; l300 = l300 + 1) {
			fRec207[l300] = 0.0f;
		}
		for (int l301 = 0; l301 < 2; l301 = l301 + 1) {
			fVec138[l301] = 0.0f;
		}
		for (int l302 = 0; l302 < 2; l302 = l302 + 1) {
			fRec225[l302] = 0.0f;
		}
		for (int l303 = 0; l303 < 2; l303 = l303 + 1) {
			fRec224[l303] = 0.0f;
		}
		for (int l304 = 0; l304 < 2; l304 = l304 + 1) {
			fVec139[l304] = 0.0f;
		}
		for (int l305 = 0; l305 < 2; l305 = l305 + 1) {
			fRec223[l305] = 0.0f;
		}
		for (int l306 = 0; l306 < 2; l306 = l306 + 1) {
			fRec222[l306] = 0.0f;
		}
		for (int l307 = 0; l307 < 2; l307 = l307 + 1) {
			fRec221[l307] = 0.0f;
		}
		for (int l308 = 0; l308 < 2; l308 = l308 + 1) {
			fRec220[l308] = 0.0f;
		}
		for (int l309 = 0; l309 < 2; l309 = l309 + 1) {
			fRec219[l309] = 0.0f;
		}
		for (int l310 = 0; l310 < 2; l310 = l310 + 1) {
			fVec140[l310] = 0.0f;
		}
		for (int l311 = 0; l311 < 3; l311 = l311 + 1) {
			fVec141[l311] = 0.0f;
		}
		for (int l312 = 0; l312 < 5; l312 = l312 + 1) {
			fVec142[l312] = 0.0f;
		}
		for (int l313 = 0; l313 < 12; l313 = l313 + 1) {
			fVec143[l313] = 0.0f;
		}
		for (int l314 = 0; l314 < 32; l314 = l314 + 1) {
			fVec144[l314] = 0.0f;
		}
		for (int l315 = 0; l315 < 64; l315 = l315 + 1) {
			fVec145[l315] = 0.0f;
		}
		for (int l316 = 0; l316 < 128; l316 = l316 + 1) {
			fVec146[l316] = 0.0f;
		}
		for (int l317 = 0; l317 < 256; l317 = l317 + 1) {
			fVec147[l317] = 0.0f;
		}
		for (int l318 = 0; l318 < 512; l318 = l318 + 1) {
			fVec148[l318] = 0.0f;
		}
		for (int l319 = 0; l319 < 512; l319 = l319 + 1) {
			fVec149[l319] = 0.0f;
		}
		for (int l320 = 0; l320 < 2; l320 = l320 + 1) {
			fRec204[l320] = 0.0f;
		}
		for (int l321 = 0; l321 < 2; l321 = l321 + 1) {
			fRec227[l321] = 0.0f;
		}
		for (int l322 = 0; l322 < 2; l322 = l322 + 1) {
			fRec228[l322] = 0.0f;
		}
		for (int l323 = 0; l323 < 2; l323 = l323 + 1) {
			fVec150[l323] = 0.0f;
		}
		for (int l324 = 0; l324 < 2; l324 = l324 + 1) {
			fVec151[l324] = 0.0f;
		}
		for (int l325 = 0; l325 < 2; l325 = l325 + 1) {
			fRec237[l325] = 0.0f;
		}
		for (int l326 = 0; l326 < 2; l326 = l326 + 1) {
			fRec236[l326] = 0.0f;
		}
		for (int l327 = 0; l327 < 2; l327 = l327 + 1) {
			fVec152[l327] = 0.0f;
		}
		for (int l328 = 0; l328 < 2; l328 = l328 + 1) {
			fRec235[l328] = 0.0f;
		}
		for (int l329 = 0; l329 < 2; l329 = l329 + 1) {
			fRec234[l329] = 0.0f;
		}
		for (int l330 = 0; l330 < 2; l330 = l330 + 1) {
			fRec233[l330] = 0.0f;
		}
		for (int l331 = 0; l331 < 2; l331 = l331 + 1) {
			fRec232[l331] = 0.0f;
		}
		for (int l332 = 0; l332 < 2; l332 = l332 + 1) {
			fRec231[l332] = 0.0f;
		}
		for (int l333 = 0; l333 < 2; l333 = l333 + 1) {
			fVec153[l333] = 0.0f;
		}
		for (int l334 = 0; l334 < 3; l334 = l334 + 1) {
			fVec154[l334] = 0.0f;
		}
		for (int l335 = 0; l335 < 5; l335 = l335 + 1) {
			fVec155[l335] = 0.0f;
		}
		for (int l336 = 0; l336 < 12; l336 = l336 + 1) {
			fVec156[l336] = 0.0f;
		}
		for (int l337 = 0; l337 < 32; l337 = l337 + 1) {
			fVec157[l337] = 0.0f;
		}
		for (int l338 = 0; l338 < 64; l338 = l338 + 1) {
			fVec158[l338] = 0.0f;
		}
		for (int l339 = 0; l339 < 128; l339 = l339 + 1) {
			fVec159[l339] = 0.0f;
		}
		for (int l340 = 0; l340 < 256; l340 = l340 + 1) {
			fVec160[l340] = 0.0f;
		}
		for (int l341 = 0; l341 < 512; l341 = l341 + 1) {
			fVec161[l341] = 0.0f;
		}
		for (int l342 = 0; l342 < 512; l342 = l342 + 1) {
			fVec162[l342] = 0.0f;
		}
		for (int l343 = 0; l343 < 2; l343 = l343 + 1) {
			fRec226[l343] = 0.0f;
		}
		for (int l344 = 0; l344 < 2; l344 = l344 + 1) {
			fRec238[l344] = 0.0f;
		}
		for (int l345 = 0; l345 < 2; l345 = l345 + 1) {
			fRec239[l345] = 0.0f;
		}
		for (int l346 = 0; l346 < 2; l346 = l346 + 1) {
			fRec240[l346] = 0.0f;
		}
		for (int l347 = 0; l347 < 2; l347 = l347 + 1) {
			fRec241[l347] = 0.0f;
		}
		for (int l348 = 0; l348 < 2; l348 = l348 + 1) {
			fRec242[l348] = 0.0f;
		}
		for (int l349 = 0; l349 < 2; l349 = l349 + 1) {
			fRec243[l349] = 0.0f;
		}
		for (int l350 = 0; l350 < 2; l350 = l350 + 1) {
			fRec244[l350] = 0.0f;
		}
		for (int l351 = 0; l351 < 2; l351 = l351 + 1) {
			fRec245[l351] = 0.0f;
		}
	}
	
	FAUSTPP_VIRTUAL void init(int sample_rate) {
		classInit(sample_rate);
		instanceInit(sample_rate);
	}
	
	FAUSTPP_VIRTUAL void instanceInit(int sample_rate) {
		instanceConstants(sample_rate);
		instanceResetUserInterface();
		instanceClear();
	}
	
	FAUSTPP_VIRTUAL mydsp* clone() {
		return new mydsp();
	}
	
	FAUSTPP_VIRTUAL int getSampleRate() {
		return fSampleRate;
	}
	
	FAUSTPP_VIRTUAL void buildUserInterface(UI* ui_interface) {
		ui_interface->openVerticalBox("bbba");
		ui_interface->declare(0, "1", "");
		ui_interface->openHorizontalBox("Spectral Ballancer");
		ui_interface->openHorizontalBox("Parameters");
		ui_interface->declare(&fVslider3, "1", "");
		ui_interface->declare(&fVslider3, "symbol", "timbre_strength");
		ui_interface->declare(&fVslider3, "unit", "%");
		ui_interface->addVerticalSlider("strength", &fVslider3, FAUSTFLOAT(5e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVbargraph4, "3", "");
		ui_interface->declare(&fVbargraph4, "integer", "");
		ui_interface->addVerticalBargraph("expander", &fVbargraph4, FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("Target Curve");
		ui_interface->addVerticalSlider("spec 0", &fVslider4, FAUSTFLOAT(-1e+01f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->addVerticalSlider("spec 1", &fVslider5, FAUSTFLOAT(-5.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->addVerticalSlider("spec 2", &fVslider6, FAUSTFLOAT(-5.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->addVerticalSlider("spec 3", &fVslider7, FAUSTFLOAT(-8.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->addVerticalSlider("spec 4", &fVslider8, FAUSTFLOAT(-9.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->addVerticalSlider("spec 5", &fVslider9, FAUSTFLOAT(-1e+01f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->addVerticalSlider("spec 6", &fVslider10, FAUSTFLOAT(-7.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->addVerticalSlider("spec 7", &fVslider11, FAUSTFLOAT(-3.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->declare(0, "2", "");
		ui_interface->openHorizontalBox("loudness normalized spectrum");
		ui_interface->declare(&fVbargraph3, "1", "");
		ui_interface->declare(&fVbargraph3, "unit", "dB");
		ui_interface->addVerticalBargraph("band 0", &fVbargraph3, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph6, "1", "");
		ui_interface->declare(&fVbargraph6, "unit", "dB");
		ui_interface->addVerticalBargraph("band 1", &fVbargraph6, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph8, "1", "");
		ui_interface->declare(&fVbargraph8, "unit", "dB");
		ui_interface->addVerticalBargraph("band 2", &fVbargraph8, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph10, "1", "");
		ui_interface->declare(&fVbargraph10, "unit", "dB");
		ui_interface->addVerticalBargraph("band 3", &fVbargraph10, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph12, "1", "");
		ui_interface->declare(&fVbargraph12, "unit", "dB");
		ui_interface->addVerticalBargraph("band 4", &fVbargraph12, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph14, "1", "");
		ui_interface->declare(&fVbargraph14, "unit", "dB");
		ui_interface->addVerticalBargraph("band 5", &fVbargraph14, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph16, "1", "");
		ui_interface->declare(&fVbargraph16, "unit", "dB");
		ui_interface->addVerticalBargraph("band 6", &fVbargraph16, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph18, "1", "");
		ui_interface->declare(&fVbargraph18, "unit", "dB");
		ui_interface->addVerticalBargraph("band 7", &fVbargraph18, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->closeBox();
		ui_interface->declare(0, "3", "");
		ui_interface->openHorizontalBox("resulting gain");
		ui_interface->declare(&fVbargraph5, "1", "");
		ui_interface->declare(&fVbargraph5, "symbol", "spectral_ballancer_gain_band_ 0");
		ui_interface->addVerticalBargraph("gr  0", &fVbargraph5, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph7, "1", "");
		ui_interface->declare(&fVbargraph7, "symbol", "spectral_ballancer_gain_band_ 1");
		ui_interface->addVerticalBargraph("gr  1", &fVbargraph7, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph9, "1", "");
		ui_interface->declare(&fVbargraph9, "symbol", "spectral_ballancer_gain_band_ 2");
		ui_interface->addVerticalBargraph("gr  2", &fVbargraph9, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph11, "1", "");
		ui_interface->declare(&fVbargraph11, "symbol", "spectral_ballancer_gain_band_ 3");
		ui_interface->addVerticalBargraph("gr  3", &fVbargraph11, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph13, "1", "");
		ui_interface->declare(&fVbargraph13, "symbol", "spectral_ballancer_gain_band_ 4");
		ui_interface->addVerticalBargraph("gr  4", &fVbargraph13, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph15, "1", "");
		ui_interface->declare(&fVbargraph15, "symbol", "spectral_ballancer_gain_band_ 5");
		ui_interface->addVerticalBargraph("gr  5", &fVbargraph15, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph17, "1", "");
		ui_interface->declare(&fVbargraph17, "symbol", "spectral_ballancer_gain_band_ 6");
		ui_interface->addVerticalBargraph("gr  6", &fVbargraph17, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph19, "1", "");
		ui_interface->declare(&fVbargraph19, "symbol", "spectral_ballancer_gain_band_ 7");
		ui_interface->addVerticalBargraph("gr  7", &fVbargraph19, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->closeBox();
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("main");
		ui_interface->declare(&fCheckbox0, "0", "");
		ui_interface->addCheckButton("bypass", &fCheckbox0);
		ui_interface->openHorizontalBox("leveler");
		ui_interface->declare(&fVslider1, "1", "");
		ui_interface->declare(&fVslider1, "unit", "dB");
		ui_interface->addVerticalSlider("target", &fVslider1, FAUSTFLOAT(-23.0f), FAUSTFLOAT(-6e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVbargraph1, "7", "");
		ui_interface->declare(&fVbargraph1, "unit", "%");
		ui_interface->addVerticalBargraph("brake", &fVbargraph1, FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f));
		ui_interface->declare(&fVbargraph2, "8", "");
		ui_interface->declare(&fVbargraph2, "unit", "dB");
		ui_interface->addVerticalBargraph("gain", &fVbargraph2, FAUSTFLOAT(-5e+01f), FAUSTFLOAT(5e+01f));
		ui_interface->addVerticalBargraph("min_track", &fVbargraph0, FAUSTFLOAT(-1e+02f), FAUSTFLOAT(0.0f));
		ui_interface->addVerticalSlider("thresh offset", &fVslider0, FAUSTFLOAT(6.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(4e+01f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("mbExpComp");
		ui_interface->declare(&fVbargraph20, "1", "");
		ui_interface->declare(&fVbargraph20, "unit", "dB");
		ui_interface->addVerticalBargraph("vbargraph0", &fVbargraph20, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph22, "1", "");
		ui_interface->declare(&fVbargraph22, "unit", "dB");
		ui_interface->addVerticalBargraph("vbargraph1", &fVbargraph22, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph24, "1", "");
		ui_interface->declare(&fVbargraph24, "unit", "dB");
		ui_interface->addVerticalBargraph("vbargraph2", &fVbargraph24, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph26, "1", "");
		ui_interface->declare(&fVbargraph26, "unit", "dB");
		ui_interface->addVerticalBargraph("vbargraph3", &fVbargraph26, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph28, "1", "");
		ui_interface->declare(&fVbargraph28, "unit", "dB");
		ui_interface->addVerticalBargraph("vbargraph4", &fVbargraph28, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph30, "1", "");
		ui_interface->declare(&fVbargraph30, "unit", "dB");
		ui_interface->addVerticalBargraph("vbargraph5", &fVbargraph30, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph32, "1", "");
		ui_interface->declare(&fVbargraph32, "unit", "dB");
		ui_interface->addVerticalBargraph("vbargraph6", &fVbargraph32, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph34, "1", "");
		ui_interface->declare(&fVbargraph34, "unit", "dB");
		ui_interface->addVerticalBargraph("vbargraph7", &fVbargraph34, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph21, "2", "");
		ui_interface->declare(&fVbargraph21, "unit", "dB");
		ui_interface->addVerticalBargraph("vbargraph8", &fVbargraph21, FAUSTFLOAT(-6.0f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph23, "2", "");
		ui_interface->declare(&fVbargraph23, "unit", "dB");
		ui_interface->addVerticalBargraph("vbargraph9", &fVbargraph23, FAUSTFLOAT(-6.0f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph25, "2", "");
		ui_interface->declare(&fVbargraph25, "unit", "dB");
		ui_interface->addVerticalBargraph("vbargraph10", &fVbargraph25, FAUSTFLOAT(-6.0f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph27, "2", "");
		ui_interface->declare(&fVbargraph27, "unit", "dB");
		ui_interface->addVerticalBargraph("vbargraph11", &fVbargraph27, FAUSTFLOAT(-6.0f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph29, "2", "");
		ui_interface->declare(&fVbargraph29, "unit", "dB");
		ui_interface->addVerticalBargraph("vbargraph12", &fVbargraph29, FAUSTFLOAT(-6.0f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph31, "2", "");
		ui_interface->declare(&fVbargraph31, "unit", "dB");
		ui_interface->addVerticalBargraph("vbargraph13", &fVbargraph31, FAUSTFLOAT(-6.0f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph33, "2", "");
		ui_interface->declare(&fVbargraph33, "unit", "dB");
		ui_interface->addVerticalBargraph("vbargraph14", &fVbargraph33, FAUSTFLOAT(-6.0f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph35, "2", "");
		ui_interface->declare(&fVbargraph35, "unit", "dB");
		ui_interface->addVerticalBargraph("vbargraph15", &fVbargraph35, FAUSTFLOAT(-6.0f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVslider2, "scale", "log");
		ui_interface->addVerticalSlider("preLowcut_freq", &fVslider2, FAUSTFLOAT(8e+01f), FAUSTFLOAT(1.0f), FAUSTFLOAT(4e+02f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->closeBox();
		ui_interface->closeBox();
	}
	
	FAUSTPP_VIRTUAL void compute(int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
		FAUSTFLOAT* input0 = inputs[0];
		FAUSTFLOAT* output0 = outputs[0];
		int iSlow0 = int(float(fCheckbox0));
		float fSlow1 = float(fVslider0);
		float fSlow2 = float(fVslider1);
		float fSlow3 = std::tan(fConst10 * float(fVslider2));
		float fSlow4 = mydsp_faustpower2_f(fSlow3);
		float fSlow5 = 1.0f / fSlow3;
		float fSlow6 = (fSlow5 + 1.0f) / fSlow3 + 1.0f;
		float fSlow7 = 1.0f / (fSlow4 * fSlow6);
		float fSlow8 = 1.0f / (fSlow5 + 1.0f);
		float fSlow9 = 1.0f - fSlow5;
		float fSlow10 = 1.0f / fSlow6;
		float fSlow11 = (fSlow5 + -1.0f) / fSlow3 + 1.0f;
		float fSlow12 = 2.0f * (1.0f - 1.0f / fSlow4);
		float fSlow13 = 0.0005f * float(fVslider3);
		float fSlow14 = float(fVslider4);
		float fSlow15 = fSlow2 + -15.0f;
		float fSlow16 = fSlow2 + -9.0f;
		float fSlow17 = float(fVslider5);
		float fSlow18 = float(fVslider6);
		float fSlow19 = float(fVslider7);
		float fSlow20 = float(fVslider8);
		float fSlow21 = float(fVslider9);
		float fSlow22 = float(fVslider10);
		float fSlow23 = float(fVslider11);
		float fSlow24 = fSlow2 + -3.0f;
		for (int i0 = 0; i0 < count; i0 = i0 + 1) {
			float fTemp0 = std::fabs(fRec21[1]);
			float fTemp1 = fRec42[1] + fConst17 * (fTemp0 - fRec43[1]);
			fRec42[0] = fConst19 * fTemp1 - fRec42[1];
			float fTemp2 = fRec43[1] + fConst20 * fTemp1;
			fRec43[0] = 2.0f * fTemp2 - fRec43[1];
			float fRec44 = fTemp0;
			float fRec45 = fConst21 * fTemp1;
			float fRec46 = fTemp2;
			float fTemp3 = fRec46 + 1.4142135f * fRec45;
			float fTemp4 = fRec37[1] + fConst17 * (fRec44 - (fTemp3 + fRec38[1]));
			fRec37[0] = fConst19 * fTemp4 - fRec37[1];
			float fTemp5 = fRec38[1] + fConst20 * fTemp4;
			fRec38[0] = 2.0f * fTemp5 - fRec38[1];
			float fRec39 = fRec44 - fTemp3;
			float fRec40 = fConst21 * fTemp4;
			float fRec41 = fTemp5;
			float fTemp6 = fRec41 + 1.4142135f * fRec40;
			float fTemp7 = fRec34[1] + fConst14 * (fRec39 - (fTemp6 + fRec35[1]));
			fRec34[0] = fConst16 * fTemp7 - fRec34[1];
			float fTemp8 = fRec35[1] + fConst22 * fTemp7;
			fRec35[0] = 2.0f * fTemp8 - fRec35[1];
			float fRec36 = fTemp8;
			float fTemp9 = fRec31[1] + fConst14 * (fRec36 - fRec32[1]);
			fRec31[0] = fConst16 * fTemp9 - fRec31[1];
			float fTemp10 = fRec32[1] + fConst22 * fTemp9;
			fRec32[0] = 2.0f * fTemp10 - fRec32[1];
			float fRec33 = fTemp10;
			float fTemp11 = std::fabs(fRec33);
			fVec0[0] = fTemp11;
			float fTemp12 = std::max<float>(fTemp11, fVec0[1]);
			fVec1[0] = fTemp12;
			float fTemp13 = std::max<float>(fTemp12, fVec1[2]);
			fVec2[0] = fTemp13;
			float fTemp14 = std::max<float>(fTemp13, fVec2[4]);
			fVec3[0] = fTemp14;
			float fTemp15 = std::max<float>(fTemp14, fVec3[8]);
			fVec4[IOTA0 & 31] = fTemp15;
			float fTemp16 = std::max<float>(fTemp15, fVec4[(IOTA0 - 16) & 31]);
			fVec5[IOTA0 & 63] = fTemp16;
			float fTemp17 = std::max<float>(fTemp16, fVec5[(IOTA0 - 32) & 63]);
			fVec6[IOTA0 & 127] = fTemp17;
			float fTemp18 = std::max<float>(fTemp17, fVec6[(IOTA0 - 64) & 127]);
			fVec7[IOTA0 & 255] = fTemp18;
			fVec8[IOTA0 & 511] = std::max<float>(fTemp18, fVec7[(IOTA0 - 128) & 255]);
			float fTemp19 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst13) ? fTemp11 : -3.4028235e+38f), ((iConst23) ? fVec1[iConst13] : -3.4028235e+38f)), ((iConst24) ? fVec2[iConst25] : -3.4028235e+38f)), ((iConst26) ? fVec3[iConst27] : -3.4028235e+38f)), ((iConst28) ? fVec4[(IOTA0 - iConst29) & 31] : -3.4028235e+38f)), ((iConst30) ? fVec5[(IOTA0 - iConst31) & 63] : -3.4028235e+38f)), ((iConst32) ? fVec6[(IOTA0 - iConst33) & 127] : -3.4028235e+38f)), ((iConst34) ? fVec7[(IOTA0 - iConst35) & 255] : -3.4028235e+38f)), ((iConst36) ? fVec8[(IOTA0 - iConst37) & 511] : -3.4028235e+38f))));
			fRec48[0] = fConst42 * fTemp0 + fConst41 * fRec48[1];
			float fTemp20 = std::min<float>(fRec48[0], fRec48[1]);
			fVec9[0] = fTemp20;
			float fTemp21 = std::min<float>(fTemp20, fVec9[2]);
			fVec10[0] = fTemp21;
			float fTemp22 = std::min<float>(fTemp21, fVec10[4]);
			fVec11[0] = fTemp22;
			float fTemp23 = std::min<float>(fTemp22, fVec11[8]);
			fVec12[IOTA0 & 31] = fTemp23;
			float fTemp24 = std::min<float>(fTemp23, fVec12[(IOTA0 - 16) & 31]);
			fVec13[IOTA0 & 63] = fTemp24;
			float fTemp25 = std::min<float>(fTemp24, fVec13[(IOTA0 - 32) & 63]);
			fVec14[IOTA0 & 127] = fTemp25;
			float fTemp26 = std::min<float>(fTemp25, fVec14[(IOTA0 - 64) & 127]);
			fVec15[IOTA0 & 255] = fTemp26;
			float fTemp27 = std::min<float>(fTemp26, fVec15[(IOTA0 - 128) & 255]);
			fVec16[IOTA0 & 511] = fTemp27;
			float fTemp28 = std::min<float>(fTemp27, fVec16[(IOTA0 - 256) & 511]);
			fVec17[IOTA0 & 1023] = fTemp28;
			float fTemp29 = std::min<float>(fTemp28, fVec17[(IOTA0 - 512) & 1023]);
			fVec18[IOTA0 & 2047] = fTemp29;
			float fTemp30 = std::min<float>(fTemp29, fVec18[(IOTA0 - 1024) & 2047]);
			fVec19[IOTA0 & 4095] = fTemp30;
			float fTemp31 = std::min<float>(fTemp30, fVec19[(IOTA0 - 2048) & 4095]);
			fVec20[IOTA0 & 8191] = fTemp31;
			float fTemp32 = std::min<float>(fTemp31, fVec20[(IOTA0 - 4096) & 8191]);
			fVec21[IOTA0 & 16383] = fTemp32;
			float fTemp33 = std::min<float>(fTemp32, fVec21[(IOTA0 - 8192) & 16383]);
			fVec22[IOTA0 & 32767] = fTemp33;
			float fTemp34 = std::min<float>(fTemp33, fVec22[(IOTA0 - 16384) & 32767]);
			fVec23[IOTA0 & 65535] = fTemp34;
			float fTemp35 = std::min<float>(fTemp34, fVec23[(IOTA0 - 32768) & 65535]);
			fVec24[IOTA0 & 131071] = fTemp35;
			float fTemp36 = std::min<float>(fTemp35, fVec24[(IOTA0 - 65536) & 131071]);
			fVec25[IOTA0 & 262143] = fTemp36;
			fVec26[IOTA0 & 524287] = std::min<float>(fTemp36, fVec25[(IOTA0 - 131072) & 262143]);
			fRec47[0] = fConst39 * std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(((iConst40) ? fRec48[0] : 3.4028235e+38f), ((iConst43) ? fVec9[iConst40] : 3.4028235e+38f)), ((iConst44) ? fVec10[iConst45] : 3.4028235e+38f)), ((iConst46) ? fVec11[iConst47] : 3.4028235e+38f)), ((iConst48) ? fVec12[(IOTA0 - iConst49) & 31] : 3.4028235e+38f)), ((iConst50) ? fVec13[(IOTA0 - iConst51) & 63] : 3.4028235e+38f)), ((iConst52) ? fVec14[(IOTA0 - iConst53) & 127] : 3.4028235e+38f)), ((iConst54) ? fVec15[(IOTA0 - iConst55) & 255] : 3.4028235e+38f)), ((iConst56) ? fVec16[(IOTA0 - iConst57) & 511] : 3.4028235e+38f)), ((iConst58) ? fVec17[(IOTA0 - iConst59) & 1023] : 3.4028235e+38f)), ((iConst60) ? fVec18[(IOTA0 - iConst61) & 2047] : 3.4028235e+38f)), ((iConst62) ? fVec19[(IOTA0 - iConst63) & 4095] : 3.4028235e+38f)), ((iConst64) ? fVec20[(IOTA0 - iConst65) & 8191] : 3.4028235e+38f)), ((iConst66) ? fVec21[(IOTA0 - iConst67) & 16383] : 3.4028235e+38f)), ((iConst68) ? fVec22[(IOTA0 - iConst69) & 32767] : 3.4028235e+38f)), ((iConst70) ? fVec23[(IOTA0 - iConst71) & 65535] : 3.4028235e+38f)), ((iConst72) ? fVec24[(IOTA0 - iConst73) & 131071] : 3.4028235e+38f)), ((iConst74) ? fVec25[(IOTA0 - iConst75) & 262143] : 3.4028235e+38f)), ((iConst76) ? fVec26[(IOTA0 - iConst77) & 524287] : 3.4028235e+38f)) + fConst38 * fRec47[1];
			float fTemp37 = std::max<float>(-6e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fRec47[0])));
			fVbargraph0 = FAUSTFLOAT(fTemp37);
			float fTemp38 = fTemp37;
			int iTemp39 = (fTemp19 > (fSlow1 + fTemp38 + -12.0f)) + (fTemp19 > (fSlow1 + fTemp38 + 12.0f));
			float fTemp40 = std::max<float>(-3.4028235e+38f, 1e+02f * ((iTemp39 == 0) ? fTemp19 - fTemp38 - fSlow1 : ((iTemp39 == 1) ? -(0.020833334f * mydsp_faustpower2_f(fTemp19 + (-12.0f - fTemp38) - fSlow1)) : 0.0f)));
			float fTemp41 = ((fTemp40 > fRec30[1]) ? fConst79 : fConst78);
			fRec30[0] = fTemp40 * (1.0f - fTemp41) + fRec30[1] * fTemp41;
			float fTemp42 = std::min<float>(1.0f, std::max<float>(0.0f, std::pow(1e+01f, 0.05f * fRec30[0])));
			fVbargraph1 = FAUSTFLOAT(1e+02f * (1.0f - fTemp42));
			float fTemp43 = std::tan(fConst10 * std::min<float>(fConst11, fTemp42 * (fConst80 * std::fabs(fRec23[1]) + 0.0784f)));
			fVec27[0] = fConst94 * fRec51[1] - fConst96 * fRec21[2];
			fRec52[0] = fConst91 * (fConst93 * fRec21[2] - (fVec27[1] + fConst97 * fRec52[1]) + fConst98 * fRec21[1]);
			fRec51[0] = fRec52[0];
			fVec28[0] = 0.50032705f * fRec51[1] - fConst99 * fRec49[1];
			fRec50[0] = fConst87 * (fVec28[1] - fConst100 * fRec50[1] - 1.0006541f * fRec51[1] + 0.50032705f * fRec51[0]);
			fRec49[0] = fRec50[0];
			float fTemp44 = mydsp_faustpower2_f(fRec49[0]);
			fVec29[0] = fTemp44;
			float fTemp45 = fTemp44 + fVec29[1];
			fVec30[0] = fTemp45;
			float fTemp46 = fTemp45 + fVec30[2];
			fVec31[0] = fTemp46;
			float fTemp47 = fTemp46 + fVec31[4];
			fVec32[0] = fTemp47;
			float fTemp48 = fTemp47 + fVec32[8];
			fVec33[IOTA0 & 31] = fTemp48;
			float fTemp49 = fTemp48 + fVec33[(IOTA0 - 16) & 31];
			fVec34[IOTA0 & 63] = fTemp49;
			float fTemp50 = fTemp49 + fVec34[(IOTA0 - 32) & 63];
			fVec35[IOTA0 & 127] = fTemp50;
			float fTemp51 = fTemp50 + fVec35[(IOTA0 - 64) & 127];
			fVec36[IOTA0 & 255] = fTemp51;
			fVec37[IOTA0 & 511] = fTemp51 + fVec36[(IOTA0 - 128) & 255];
			float fTemp52 = fTemp43 + 2.0f;
			float fTemp53 = std::max<float>(-2e+01f, std::min<float>(2e+01f, fSlow2 + fRec22[1] + (0.691f - 4.3429446f * std::log(std::max<float>(1e-12f, fConst82 * (((iConst83) ? 0.86000985f * fVec37[(IOTA0 - iConst115) & 511] : 0.0f) + ((iConst114) ? 0.86000985f * fVec36[(IOTA0 - iConst113) & 255] : 0.0f) + ((iConst112) ? 0.86000985f * fVec35[(IOTA0 - iConst111) & 127] : 0.0f) + ((iConst110) ? 0.86000985f * fVec34[(IOTA0 - iConst109) & 63] : 0.0f) + ((iConst108) ? 0.86000985f * fVec33[(IOTA0 - iConst107) & 31] : 0.0f) + ((iConst106) ? 0.86000985f * fVec32[iConst105] : 0.0f) + ((iConst104) ? 0.86000985f * fVec31[iConst103] : 0.0f) + ((iConst101) ? 0.86000985f * fTemp44 : 0.0f) + ((iConst102) ? 0.86000985f * fVec30[iConst101] : 0.0f))))))) - (fRec25[1] * fTemp52 + fRec26[1]);
			float fTemp54 = fTemp43 * fTemp52 + 1.0f;
			float fTemp55 = fTemp43 * fTemp53 / fTemp54;
			fRec25[0] = fRec25[1] + 2.0f * fTemp55;
			float fTemp56 = fRec25[1] + fTemp55;
			float fTemp57 = fTemp43 * fTemp56;
			fRec26[0] = fRec26[1] + 2.0f * fTemp57;
			float fRec27 = fTemp56;
			float fRec28 = fTemp53 / fTemp54;
			float fRec29 = fRec26[1] + fTemp57;
			fRec23[0] = fRec27;
			float fRec24 = fRec29;
			fVbargraph2 = FAUSTFLOAT(fRec24);
			fRec22[0] = fVbargraph2;
			float fTemp58 = float(input0[i0]);
			float fTemp59 = ((iSlow0) ? 0.0f : fTemp58);
			fVec38[0] = fTemp59;
			fRec65[0] = -(fSlow8 * (fSlow9 * fRec65[1] - fSlow5 * (fTemp59 - fVec38[1])));
			fRec64[0] = fRec65[0] - fSlow10 * (fSlow11 * fRec64[2] + fSlow12 * fRec64[1]);
			float fTemp60 = fSlow7 * (fRec64[2] + (fRec64[0] - 2.0f * fRec64[1]));
			fVec39[0] = fTemp60;
			fRec63[0] = -(fConst119 * (fConst120 * fRec63[1] - (fTemp60 + fVec39[1])));
			fRec62[0] = fRec63[0] - fConst118 * (fConst121 * fRec62[2] + fConst122 * fRec62[1]);
			float fTemp61 = fConst118 * (fRec62[2] + fRec62[0] + 2.0f * fRec62[1]);
			fRec66[0] = 0.1f * fRec66[1] + 0.9f * fRec61[1];
			fVec40[IOTA0 & 8191] = fTemp61 + 0.9f * fRec66[0];
			fRec61[0] = fVec40[(IOTA0 - iConst123) & 8191];
			fRec68[0] = 0.1f * fRec68[1] + 0.9f * fRec67[1];
			fVec41[IOTA0 & 8191] = fTemp61 + 0.9f * fRec68[0];
			fRec67[0] = fVec41[(IOTA0 - iConst124) & 8191];
			fRec70[0] = 0.1f * fRec70[1] + 0.9f * fRec69[1];
			fVec42[IOTA0 & 8191] = fTemp61 + 0.9f * fRec70[0];
			fRec69[0] = fVec42[(IOTA0 - iConst125) & 8191];
			fRec72[0] = 0.1f * fRec72[1] + 0.9f * fRec71[1];
			fVec43[IOTA0 & 8191] = fTemp61 + 0.9f * fRec72[0];
			fRec71[0] = fVec43[(IOTA0 - iConst126) & 8191];
			fRec74[0] = 0.1f * fRec74[1] + 0.9f * fRec73[1];
			fVec44[IOTA0 & 8191] = fTemp61 + 0.9f * fRec74[0];
			fRec73[0] = fVec44[(IOTA0 - iConst127) & 8191];
			fRec76[0] = 0.1f * fRec76[1] + 0.9f * fRec75[1];
			fVec45[IOTA0 & 8191] = fTemp61 + 0.9f * fRec76[0];
			fRec75[0] = fVec45[(IOTA0 - iConst128) & 8191];
			fRec78[0] = 0.1f * fRec78[1] + 0.9f * fRec77[1];
			fVec46[IOTA0 & 8191] = fTemp61 + 0.9f * fRec78[0];
			fRec77[0] = fVec46[(IOTA0 - iConst129) & 8191];
			fRec80[0] = 0.1f * fRec80[1] + 0.9f * fRec79[1];
			fVec47[IOTA0 & 8191] = 0.9f * fRec80[0] + fTemp61;
			fRec79[0] = fVec47[(IOTA0 - iConst130) & 8191];
			float fTemp62 = fRec61[1] + fRec67[1] + fRec69[1] + fRec71[1] + fRec73[1] + fRec75[1] + fRec77[1] + 0.9f * fRec59[1] + fRec79[1];
			fVec48[IOTA0 & 2047] = fTemp62;
			fRec59[0] = fVec48[(IOTA0 - iConst131) & 2047];
			float fRec60 = -(0.9f * fTemp62);
			float fTemp63 = fRec59[1] + fRec60 + 0.9f * fRec57[1];
			fVec49[IOTA0 & 2047] = fTemp63;
			fRec57[0] = fVec49[(IOTA0 - iConst132) & 2047];
			float fRec58 = -(0.9f * fTemp63);
			float fTemp64 = fRec57[1] + fRec58 + 0.9f * fRec55[1];
			fVec50[IOTA0 & 2047] = fTemp64;
			fRec55[0] = fVec50[(IOTA0 - iConst133) & 2047];
			float fRec56 = -(0.9f * fTemp64);
			float fTemp65 = fRec55[1] + fRec56 + 0.9f * fRec53[1];
			fVec51[IOTA0 & 1023] = fTemp65;
			fRec53[0] = fVec51[(IOTA0 - iConst134) & 1023];
			float fRec54 = -(0.9f * fTemp65);
			fRec21[0] = std::pow(1e+01f, 0.05f * fRec22[0]) * (fRec54 + fRec53[1]);
			float fTemp66 = fRec17[1] + fConst7 * (fRec21[0] - fRec18[1]);
			fRec17[0] = fConst9 * fTemp66 - fRec17[1];
			float fTemp67 = fRec18[1] + fConst135 * fTemp66;
			fRec18[0] = 2.0f * fTemp67 - fRec18[1];
			float fRec19 = fConst136 * fTemp66;
			float fRec20 = fTemp67;
			float fTemp68 = fRec14[1] + fConst7 * (fRec20 - fRec15[1]);
			fRec14[0] = fConst9 * fTemp68 - fRec14[1];
			float fTemp69 = fRec15[1] + fConst135 * fTemp68;
			fRec15[0] = 2.0f * fTemp69 - fRec15[1];
			float fRec16 = fTemp69;
			float fTemp70 = fRec84[1] + fConst140 * (fRec16 - fRec85[1]);
			fRec84[0] = fConst142 * fTemp70 - fRec84[1];
			float fTemp71 = fRec85[1] + fConst143 * fTemp70;
			fRec85[0] = 2.0f * fTemp71 - fRec85[1];
			float fRec86 = fConst144 * fTemp70;
			float fTemp72 = 2.828427f * fRec86;
			float fTemp73 = fRec87[1] + fConst145 * (fRec16 - (fTemp72 + fRec88[1]));
			fRec87[0] = fConst147 * fTemp73 - fRec87[1];
			float fTemp74 = fRec88[1] + fConst148 * fTemp73;
			fRec88[0] = 2.0f * fTemp74 - fRec88[1];
			float fRec89 = fConst149 * fTemp73;
			float fTemp75 = fRec86 + fRec89;
			float fTemp76 = 2.828427f * fTemp75;
			float fTemp77 = fRec81[1] + fConst137 * (fRec16 - (fTemp76 + fRec82[1]));
			fRec81[0] = fConst139 * fTemp77 - fRec81[1];
			float fTemp78 = fRec82[1] + fConst150 * fTemp77;
			fRec82[0] = 2.0f * fTemp78 - fRec82[1];
			float fRec83 = fConst151 * fTemp77;
			float fTemp79 = fRec83 + fTemp75;
			float fTemp80 = 2.828427f * fTemp79;
			float fTemp81 = fRec10[1] + fConst4 * (fRec16 - (fTemp80 + fRec11[1]));
			fRec10[0] = fConst6 * fTemp81 - fRec10[1];
			float fTemp82 = fRec11[1] + fConst152 * fTemp81;
			fRec11[0] = 2.0f * fTemp82 - fRec11[1];
			float fRec12 = fConst153 * fTemp81;
			float fRec13 = fTemp82;
			float fTemp83 = fRec7[1] + fConst4 * (fRec13 - fRec8[1]);
			fRec7[0] = fConst6 * fTemp83 - fRec7[1];
			float fTemp84 = fRec8[1] + fConst152 * fTemp83;
			fRec8[0] = 2.0f * fTemp84 - fRec8[1];
			float fRec9 = fTemp84;
			float fTemp85 = fRec90[1] + fConst14 * (fRec9 - fRec91[1]);
			fRec90[0] = fConst16 * fTemp85 - fRec90[1];
			float fTemp86 = fRec91[1] + fConst22 * fTemp85;
			fRec91[0] = 2.0f * fTemp86 - fRec91[1];
			float fRec92 = fConst154 * fTemp85;
			float fTemp87 = 2.828427f * fRec92;
			float fTemp88 = fRec3[1] + fConst1 * (fRec9 - (fTemp87 + fRec4[1]));
			fRec3[0] = fConst3 * fTemp88 - fRec3[1];
			float fTemp89 = fRec4[1] + fConst155 * fTemp88;
			fRec4[0] = 2.0f * fTemp89 - fRec4[1];
			float fRec5 = fConst156 * fTemp88;
			float fRec6 = fTemp89;
			float fTemp90 = fRec0[1] + fConst1 * (fRec6 - fRec1[1]);
			fRec0[0] = fConst3 * fTemp90 - fRec0[1];
			float fTemp91 = fRec1[1] + fConst155 * fTemp90;
			fRec1[0] = 2.0f * fTemp91 - fRec1[1];
			fRec2[0] = fTemp91;
			fVec52[0] = fConst158 * fRec2[1] - fConst94 * fRec98[1];
			fRec99[0] = fConst91 * (fVec52[1] - fConst97 * fRec99[1] + fConst159 * fRec2[1] + fConst160 * fRec2[0]);
			fRec98[0] = fRec99[0];
			fVec53[0] = 0.50032705f * fRec98[1] - fConst99 * fRec96[1];
			fRec97[0] = fConst87 * (fVec53[1] - fConst100 * fRec97[1] - 1.0006541f * fRec98[1] + 0.50032705f * fRec98[0]);
			fRec96[0] = fRec97[0];
			float fTemp92 = std::fabs(0.92736715f * fRec96[0]);
			fRec95[0] = std::max<float>(fTemp92, fConst161 * fRec95[1] + fConst162 * fTemp92);
			fRec94[0] = fConst42 * fRec95[0] + fConst41 * fRec94[1];
			fVec54[0] = fConst96 * fRec21[1] - fConst94 * fRec104[1];
			fRec105[0] = fConst91 * (fVec54[1] - fConst97 * fRec105[1] + fConst93 * fRec21[1] + fConst98 * fRec21[0]);
			fRec104[0] = fRec105[0];
			fVec55[0] = 0.50032705f * fRec104[1] - fConst99 * fRec102[1];
			fRec103[0] = fConst87 * (fVec55[1] - fConst100 * fRec103[1] - 1.0006541f * fRec104[1] + 0.50032705f * fRec104[0]);
			fRec102[0] = fRec103[0];
			float fTemp93 = std::fabs(0.92736715f * fRec102[0]);
			fRec101[0] = std::max<float>(fTemp93, fConst161 * fRec101[1] + fConst162 * fTemp93);
			fRec100[0] = fConst42 * fRec101[0] + fConst41 * fRec100[1];
			float fTemp94 = std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec100[0])));
			float fTemp95 = 2e+01f * (std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec94[0]))) - fTemp94);
			fVbargraph3 = FAUSTFLOAT(fTemp95);
			fRec93[0] = fConst157 * (fSlow14 - fTemp95) + fConst78 * fRec93[1];
			float fTemp96 = std::fabs(fRec21[0]);
			fVec56[0] = fTemp96;
			float fTemp97 = std::max<float>(fTemp96, fVec56[1]);
			fVec57[0] = fTemp97;
			float fTemp98 = std::max<float>(fTemp97, fVec57[2]);
			fVec58[0] = fTemp98;
			float fTemp99 = std::max<float>(fTemp98, fVec58[4]);
			fVec59[0] = fTemp99;
			float fTemp100 = std::max<float>(fTemp99, fVec59[8]);
			fVec60[IOTA0 & 31] = fTemp100;
			float fTemp101 = std::max<float>(fTemp100, fVec60[(IOTA0 - 16) & 31]);
			fVec61[IOTA0 & 63] = fTemp101;
			float fTemp102 = std::max<float>(fTemp101, fVec61[(IOTA0 - 32) & 63]);
			fVec62[IOTA0 & 127] = fTemp102;
			float fTemp103 = std::max<float>(fTemp102, fVec62[(IOTA0 - 64) & 127]);
			fVec63[IOTA0 & 255] = fTemp103;
			fVec64[IOTA0 & 511] = std::max<float>(fTemp103, fVec63[(IOTA0 - 128) & 255]);
			float fTemp104 = std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst13) ? fTemp96 : -3.4028235e+38f), ((iConst23) ? fVec57[iConst13] : -3.4028235e+38f)), ((iConst24) ? fVec58[iConst25] : -3.4028235e+38f)), ((iConst26) ? fVec59[iConst27] : -3.4028235e+38f)), ((iConst28) ? fVec60[(IOTA0 - iConst29) & 31] : -3.4028235e+38f)), ((iConst30) ? fVec61[(IOTA0 - iConst31) & 63] : -3.4028235e+38f)), ((iConst32) ? fVec62[(IOTA0 - iConst33) & 127] : -3.4028235e+38f)), ((iConst34) ? fVec63[(IOTA0 - iConst35) & 255] : -3.4028235e+38f)), ((iConst36) ? fVec64[(IOTA0 - iConst37) & 511] : -3.4028235e+38f))));
			float fTemp105 = 2e+01f * fTemp104;
			int iTemp106 = (fTemp105 > -2e+01f) + (fTemp105 > -2e+01f);
			float fTemp107 = 2e+01f * (fTemp104 + 1.0f);
			float fTemp108 = std::max<float>(-3.4028235e+38f, 0.8f * ((iTemp106 == 0) ? fTemp107 : ((iTemp106 == 1) ? -(4194304.0f * mydsp_faustpower2_f(fTemp107 + -5.9604645e-08f)) : 0.0f)));
			float fTemp109 = ((fTemp108 > fRec106[1]) ? fConst163 : fConst38);
			fRec106[0] = fTemp108 * (1.0f - fTemp109) + fRec106[1] * fTemp109;
			float fTemp110 = std::min<float>(1.0f, std::max<float>(0.0f, std::pow(1e+01f, 0.05f * fRec106[0])));
			fVbargraph4 = FAUSTFLOAT(fTemp110);
			float fTemp111 = fTemp110;
			float fTemp112 = std::pow(1e+01f, fSlow13 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec93[0])) * fTemp111);
			fVbargraph5 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp112)));
			float fTemp113 = fRec2[0] * fTemp112;
			float fTemp114 = std::fabs(fTemp113);
			fVec65[0] = fTemp114;
			float fTemp115 = std::max<float>(fTemp114, fVec65[1]);
			fVec66[0] = fTemp115;
			float fTemp116 = std::max<float>(fTemp115, fVec66[2]);
			fVec67[0] = fTemp116;
			float fTemp117 = std::max<float>(fTemp116, fVec67[4]);
			fVec68[0] = fTemp117;
			float fTemp118 = std::max<float>(fTemp117, fVec68[8]);
			fVec69[IOTA0 & 31] = fTemp118;
			float fTemp119 = std::max<float>(fTemp118, fVec69[(IOTA0 - 16) & 31]);
			fVec70[IOTA0 & 63] = fTemp119;
			float fTemp120 = std::max<float>(fTemp119, fVec70[(IOTA0 - 32) & 63]);
			fVec71[IOTA0 & 127] = fTemp120;
			float fTemp121 = std::max<float>(fTemp120, fVec71[(IOTA0 - 64) & 127]);
			fVec72[IOTA0 & 255] = fTemp121;
			float fTemp122 = std::max<float>(fTemp121, fVec72[(IOTA0 - 128) & 255]);
			fVec73[IOTA0 & 511] = fTemp122;
			fVec74[IOTA0 & 511] = std::max<float>(fTemp122, fVec73[(IOTA0 - 256) & 511]);
			float fTemp123 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst164) ? fTemp114 : -3.4028235e+38f), ((iConst165) ? fVec66[iConst164] : -3.4028235e+38f)), ((iConst166) ? fVec67[iConst167] : -3.4028235e+38f)), ((iConst168) ? fVec68[iConst169] : -3.4028235e+38f)), ((iConst170) ? fVec69[(IOTA0 - iConst171) & 31] : -3.4028235e+38f)), ((iConst172) ? fVec70[(IOTA0 - iConst173) & 63] : -3.4028235e+38f)), ((iConst174) ? fVec71[(IOTA0 - iConst175) & 127] : -3.4028235e+38f)), ((iConst176) ? fVec72[(IOTA0 - iConst177) & 255] : -3.4028235e+38f)), ((iConst178) ? fVec73[(IOTA0 - iConst179) & 511] : -3.4028235e+38f)), ((iConst180) ? fVec74[(IOTA0 - iConst181) & 511] : -3.4028235e+38f))));
			int iTemp124 = (fTemp123 > fSlow15) + (fTemp123 > fSlow16);
			float fTemp125 = std::max<float>(-12.0f, 0.75f * ((iTemp124 == 0) ? fTemp123 + 12.0f - fSlow2 : ((iTemp124 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp123 + 9.0f - fSlow2)) : 0.0f)));
			float fTemp126 = ((fTemp125 > fRec107[1]) ? fConst79 : fConst78);
			fRec107[0] = fTemp125 * (1.0f - fTemp126) + fRec107[1] * fTemp126;
			float fTemp127 = fRec6 + fTemp87 + 1.4142135f * fRec5;
			float fTemp128 = fRec109[1] + fConst1 * (fRec9 - (fTemp127 + fRec110[1]));
			fRec109[0] = fConst3 * fTemp128 - fRec109[1];
			float fTemp129 = fRec110[1] + fConst155 * fTemp128;
			fRec110[0] = 2.0f * fTemp129 - fRec110[1];
			float fRec111 = fConst156 * fTemp128;
			float fRec112 = fTemp129;
			float fTemp130 = fRec9 - (1.4142135f * (fRec5 + fRec111) + fRec112 + fRec6 + fTemp87);
			fVec75[0] = fTemp130;
			fVec76[0] = fConst158 * fVec75[1] - fConst94 * fRec118[1];
			fRec119[0] = fConst91 * (fVec76[1] - fConst97 * fRec119[1] + fConst159 * fVec75[1] + fConst160 * fTemp130);
			fRec118[0] = fRec119[0];
			fVec77[0] = 0.50032705f * fRec118[1] - fConst99 * fRec116[1];
			fRec117[0] = fConst87 * (fVec77[1] - fConst100 * fRec117[1] - 1.0006541f * fRec118[1] + 0.50032705f * fRec118[0]);
			fRec116[0] = fRec117[0];
			float fTemp131 = std::fabs(0.92736715f * fRec116[0]);
			fRec115[0] = std::max<float>(fTemp131, fConst161 * fRec115[1] + fConst162 * fTemp131);
			fRec114[0] = fConst42 * fRec115[0] + fConst41 * fRec114[1];
			float fTemp132 = 2e+01f * (fTemp94 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec114[0]))));
			fVbargraph6 = FAUSTFLOAT(-fTemp132);
			fRec113[0] = fConst183 * (fSlow17 - -fTemp132) + fConst182 * fRec113[1];
			float fTemp133 = std::pow(1e+01f, fSlow13 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec113[0])) * fTemp111);
			fVbargraph7 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp133)));
			float fTemp134 = fTemp130 * fTemp133;
			float fTemp135 = std::fabs(fTemp134);
			fVec78[0] = fTemp135;
			float fTemp136 = std::max<float>(fTemp135, fVec78[1]);
			fVec79[0] = fTemp136;
			float fTemp137 = std::max<float>(fTemp136, fVec79[2]);
			fVec80[0] = fTemp137;
			float fTemp138 = std::max<float>(fTemp137, fVec80[4]);
			fVec81[0] = fTemp138;
			float fTemp139 = std::max<float>(fTemp138, fVec81[8]);
			fVec82[IOTA0 & 31] = fTemp139;
			float fTemp140 = std::max<float>(fTemp139, fVec82[(IOTA0 - 16) & 31]);
			fVec83[IOTA0 & 63] = fTemp140;
			float fTemp141 = std::max<float>(fTemp140, fVec83[(IOTA0 - 32) & 63]);
			fVec84[IOTA0 & 127] = fTemp141;
			float fTemp142 = std::max<float>(fTemp141, fVec84[(IOTA0 - 64) & 127]);
			fVec85[IOTA0 & 255] = fTemp142;
			float fTemp143 = std::max<float>(fTemp142, fVec85[(IOTA0 - 128) & 255]);
			fVec86[IOTA0 & 511] = fTemp143;
			fVec87[IOTA0 & 511] = std::max<float>(fTemp143, fVec86[(IOTA0 - 256) & 511]);
			float fTemp144 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst164) ? fTemp135 : -3.4028235e+38f), ((iConst165) ? fVec79[iConst164] : -3.4028235e+38f)), ((iConst166) ? fVec80[iConst167] : -3.4028235e+38f)), ((iConst168) ? fVec81[iConst169] : -3.4028235e+38f)), ((iConst170) ? fVec82[(IOTA0 - iConst171) & 31] : -3.4028235e+38f)), ((iConst172) ? fVec83[(IOTA0 - iConst173) & 63] : -3.4028235e+38f)), ((iConst174) ? fVec84[(IOTA0 - iConst175) & 127] : -3.4028235e+38f)), ((iConst176) ? fVec85[(IOTA0 - iConst177) & 255] : -3.4028235e+38f)), ((iConst178) ? fVec86[(IOTA0 - iConst179) & 511] : -3.4028235e+38f)), ((iConst180) ? fVec87[(IOTA0 - iConst181) & 511] : -3.4028235e+38f))));
			int iTemp145 = (fTemp144 > fSlow15) + (fTemp144 > fSlow16);
			float fTemp146 = std::max<float>(-12.0f, 0.75f * ((iTemp145 == 0) ? fTemp144 + 12.0f - fSlow2 : ((iTemp145 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp144 + 9.0f - fSlow2)) : 0.0f)));
			float fTemp147 = ((fTemp146 > fRec108[1]) ? fConst79 : fConst78);
			fRec108[0] = fTemp146 * (1.0f - fTemp147) + fRec108[1] * fTemp147;
			float fTemp148 = fTemp80 + fRec13 + 1.4142135f * fRec12;
			float fTemp149 = fRec128[1] + fConst4 * (fRec16 - (fTemp148 + fRec129[1]));
			fRec128[0] = fConst6 * fTemp149 - fRec128[1];
			float fTemp150 = fRec129[1] + fConst152 * fTemp149;
			fRec129[0] = 2.0f * fTemp150 - fRec129[1];
			float fRec130 = fConst153 * fTemp149;
			float fRec131 = fTemp150;
			float fTemp151 = fRec12 + fRec130;
			float fTemp152 = 1.4142135f * fTemp151;
			float fTemp153 = fRec13 + fRec131;
			float fTemp154 = fTemp152 + fTemp80 + fTemp153;
			float fTemp155 = fRec132[1] + fConst1 * (fRec16 - (fTemp154 + fRec133[1]));
			fRec132[0] = fConst3 * fTemp155 - fRec132[1];
			float fTemp156 = fRec133[1] + fConst155 * fTemp155;
			fRec133[0] = 2.0f * fTemp156 - fRec133[1];
			float fRec134 = fConst156 * fTemp155;
			float fTemp157 = 2.828427f * (fRec134 + fTemp79);
			float fTemp158 = fTemp152 + fTemp153 + fTemp157;
			float fTemp159 = fRec124[1] + fConst14 * (fRec16 - (fTemp158 + fRec125[1]));
			fRec124[0] = fConst16 * fTemp159 - fRec124[1];
			float fTemp160 = fRec125[1] + fConst22 * fTemp159;
			fRec125[0] = 2.0f * fTemp160 - fRec125[1];
			float fRec126 = fConst154 * fTemp159;
			float fRec127 = fTemp160;
			float fTemp161 = fRec121[1] + fConst14 * (fRec127 - fRec122[1]);
			fRec121[0] = fConst16 * fTemp161 - fRec121[1];
			float fTemp162 = fRec122[1] + fConst22 * fTemp161;
			fRec122[0] = 2.0f * fTemp162 - fRec122[1];
			fRec123[0] = fTemp162;
			fVec88[0] = fConst158 * fRec123[1] - fConst94 * fRec140[1];
			fRec141[0] = fConst91 * (fVec88[1] - fConst97 * fRec141[1] + fConst159 * fRec123[1] + fConst160 * fRec123[0]);
			fRec140[0] = fRec141[0];
			fVec89[0] = 0.50032705f * fRec140[1] - fConst99 * fRec138[1];
			fRec139[0] = fConst87 * (fVec89[1] - fConst100 * fRec139[1] - 1.0006541f * fRec140[1] + 0.50032705f * fRec140[0]);
			fRec138[0] = fRec139[0];
			float fTemp163 = std::fabs(0.92736715f * fRec138[0]);
			fRec137[0] = std::max<float>(fTemp163, fConst161 * fRec137[1] + fConst162 * fTemp163);
			fRec136[0] = fConst42 * fRec137[0] + fConst41 * fRec136[1];
			float fTemp164 = 2e+01f * (fTemp94 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec136[0]))));
			fVbargraph8 = FAUSTFLOAT(-fTemp164);
			fRec135[0] = fConst185 * (fSlow18 - -fTemp164) + fConst184 * fRec135[1];
			float fTemp165 = std::pow(1e+01f, fSlow13 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec135[0])) * fTemp111);
			fVbargraph9 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp165)));
			float fTemp166 = fRec123[0] * fTemp165;
			float fTemp167 = std::fabs(fTemp166);
			fVec90[0] = fTemp167;
			float fTemp168 = std::max<float>(fTemp167, fVec90[1]);
			fVec91[0] = fTemp168;
			float fTemp169 = std::max<float>(fTemp168, fVec91[2]);
			fVec92[0] = fTemp169;
			float fTemp170 = std::max<float>(fTemp169, fVec92[4]);
			fVec93[0] = fTemp170;
			float fTemp171 = std::max<float>(fTemp170, fVec93[8]);
			fVec94[IOTA0 & 31] = fTemp171;
			float fTemp172 = std::max<float>(fTemp171, fVec94[(IOTA0 - 16) & 31]);
			fVec95[IOTA0 & 63] = fTemp172;
			float fTemp173 = std::max<float>(fTemp172, fVec95[(IOTA0 - 32) & 63]);
			fVec96[IOTA0 & 127] = fTemp173;
			float fTemp174 = std::max<float>(fTemp173, fVec96[(IOTA0 - 64) & 127]);
			fVec97[IOTA0 & 255] = fTemp174;
			float fTemp175 = std::max<float>(fTemp174, fVec97[(IOTA0 - 128) & 255]);
			fVec98[IOTA0 & 511] = fTemp175;
			fVec99[IOTA0 & 511] = std::max<float>(fTemp175, fVec98[(IOTA0 - 256) & 511]);
			float fTemp176 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst164) ? fTemp167 : -3.4028235e+38f), ((iConst165) ? fVec91[iConst164] : -3.4028235e+38f)), ((iConst166) ? fVec92[iConst167] : -3.4028235e+38f)), ((iConst168) ? fVec93[iConst169] : -3.4028235e+38f)), ((iConst170) ? fVec94[(IOTA0 - iConst171) & 31] : -3.4028235e+38f)), ((iConst172) ? fVec95[(IOTA0 - iConst173) & 63] : -3.4028235e+38f)), ((iConst174) ? fVec96[(IOTA0 - iConst175) & 127] : -3.4028235e+38f)), ((iConst176) ? fVec97[(IOTA0 - iConst177) & 255] : -3.4028235e+38f)), ((iConst178) ? fVec98[(IOTA0 - iConst179) & 511] : -3.4028235e+38f)), ((iConst180) ? fVec99[(IOTA0 - iConst181) & 511] : -3.4028235e+38f))));
			int iTemp177 = (fTemp176 > fSlow15) + (fTemp176 > fSlow16);
			float fTemp178 = std::max<float>(-12.0f, 0.75f * ((iTemp177 == 0) ? fTemp176 + 12.0f - fSlow2 : ((iTemp177 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp176 + 9.0f - fSlow2)) : 0.0f)));
			float fTemp179 = ((fTemp178 > fRec120[1]) ? fConst79 : fConst78);
			fRec120[0] = fTemp178 * (1.0f - fTemp179) + fRec120[1] * fTemp179;
			float fTemp180 = fRec126 + fTemp151;
			float fTemp181 = fRec127 + fTemp153;
			float fTemp182 = 1.4142135f * fTemp180 + fTemp157 + fTemp181;
			float fTemp183 = fRec143[1] + fConst14 * (fRec16 - (fTemp182 + fRec144[1]));
			fRec143[0] = fConst16 * fTemp183 - fRec143[1];
			float fTemp184 = fRec144[1] + fConst22 * fTemp183;
			fRec144[0] = 2.0f * fTemp184 - fRec144[1];
			float fRec145 = fConst154 * fTemp183;
			float fRec146 = fTemp184;
			float fTemp185 = fRec16 - (1.4142135f * (fRec145 + fTemp180) + fTemp157 + fRec146 + fTemp181);
			fVec100[0] = fTemp185;
			fVec101[0] = fConst158 * fVec100[1] - fConst94 * fRec152[1];
			fRec153[0] = fConst91 * (fVec101[1] - fConst97 * fRec153[1] + fConst159 * fVec100[1] + fConst160 * fTemp185);
			fRec152[0] = fRec153[0];
			fVec102[0] = 0.50032705f * fRec152[1] - fConst99 * fRec150[1];
			fRec151[0] = fConst87 * (fVec102[1] - fConst100 * fRec151[1] - 1.0006541f * fRec152[1] + 0.50032705f * fRec152[0]);
			fRec150[0] = fRec151[0];
			float fTemp186 = std::fabs(0.92736715f * fRec150[0]);
			fRec149[0] = std::max<float>(fTemp186, fConst161 * fRec149[1] + fConst162 * fTemp186);
			fRec148[0] = fConst42 * fRec149[0] + fConst41 * fRec148[1];
			float fTemp187 = 2e+01f * (fTemp94 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec148[0]))));
			fVbargraph10 = FAUSTFLOAT(-fTemp187);
			fRec147[0] = fConst187 * (fSlow19 - -fTemp187) + fConst186 * fRec147[1];
			float fTemp188 = std::pow(1e+01f, fSlow13 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec147[0])) * fTemp111);
			fVbargraph11 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp188)));
			float fTemp189 = fTemp185 * fTemp188;
			float fTemp190 = std::fabs(fTemp189);
			fVec103[0] = fTemp190;
			float fTemp191 = std::max<float>(fTemp190, fVec103[1]);
			fVec104[0] = fTemp191;
			float fTemp192 = std::max<float>(fTemp191, fVec104[2]);
			fVec105[0] = fTemp192;
			float fTemp193 = std::max<float>(fTemp192, fVec105[4]);
			fVec106[0] = fTemp193;
			float fTemp194 = std::max<float>(fTemp193, fVec106[8]);
			fVec107[IOTA0 & 31] = fTemp194;
			float fTemp195 = std::max<float>(fTemp194, fVec107[(IOTA0 - 16) & 31]);
			fVec108[IOTA0 & 63] = fTemp195;
			float fTemp196 = std::max<float>(fTemp195, fVec108[(IOTA0 - 32) & 63]);
			fVec109[IOTA0 & 127] = fTemp196;
			float fTemp197 = std::max<float>(fTemp196, fVec109[(IOTA0 - 64) & 127]);
			fVec110[IOTA0 & 255] = fTemp197;
			float fTemp198 = std::max<float>(fTemp197, fVec110[(IOTA0 - 128) & 255]);
			fVec111[IOTA0 & 511] = fTemp198;
			fVec112[IOTA0 & 511] = std::max<float>(fTemp198, fVec111[(IOTA0 - 256) & 511]);
			float fTemp199 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst164) ? fTemp190 : -3.4028235e+38f), ((iConst165) ? fVec104[iConst164] : -3.4028235e+38f)), ((iConst166) ? fVec105[iConst167] : -3.4028235e+38f)), ((iConst168) ? fVec106[iConst169] : -3.4028235e+38f)), ((iConst170) ? fVec107[(IOTA0 - iConst171) & 31] : -3.4028235e+38f)), ((iConst172) ? fVec108[(IOTA0 - iConst173) & 63] : -3.4028235e+38f)), ((iConst174) ? fVec109[(IOTA0 - iConst175) & 127] : -3.4028235e+38f)), ((iConst176) ? fVec110[(IOTA0 - iConst177) & 255] : -3.4028235e+38f)), ((iConst178) ? fVec111[(IOTA0 - iConst179) & 511] : -3.4028235e+38f)), ((iConst180) ? fVec112[(IOTA0 - iConst181) & 511] : -3.4028235e+38f))));
			int iTemp200 = (fTemp199 > fSlow15) + (fTemp199 > fSlow16);
			float fTemp201 = std::max<float>(-12.0f, 0.75f * ((iTemp200 == 0) ? fTemp199 + 12.0f - fSlow2 : ((iTemp200 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp199 + 9.0f - fSlow2)) : 0.0f)));
			float fTemp202 = ((fTemp201 > fRec142[1]) ? fConst79 : fConst78);
			fRec142[0] = fTemp201 * (1.0f - fTemp202) + fRec142[1] * fTemp202;
			float fTemp203 = fRec20 + 1.4142135f * fRec19;
			float fTemp204 = fRec169[1] + fConst7 * (fRec21[0] - (fTemp203 + fRec170[1]));
			fRec169[0] = fConst9 * fTemp204 - fRec169[1];
			float fTemp205 = fRec170[1] + fConst135 * fTemp204;
			fRec170[0] = 2.0f * fTemp205 - fRec170[1];
			float fRec171 = fConst136 * fTemp204;
			float fRec172 = fTemp205;
			float fTemp206 = fRec19 + fRec171;
			float fTemp207 = 1.4142135f * fTemp206;
			float fTemp208 = fRec20 + fRec172;
			float fTemp209 = fTemp207 + fTemp208;
			float fTemp210 = fRec176[1] + fConst4 * (fRec21[0] - (fTemp209 + fRec177[1]));
			fRec176[0] = fConst6 * fTemp210 - fRec176[1];
			float fTemp211 = fRec177[1] + fConst152 * fTemp210;
			fRec177[0] = 2.0f * fTemp211 - fRec177[1];
			float fRec178 = fConst153 * fTemp210;
			float fTemp212 = fTemp207 + fTemp208 + 2.828427f * fRec178;
			float fTemp213 = fRec179[1] + fConst1 * (fRec21[0] - (fTemp212 + fRec180[1]));
			fRec179[0] = fConst3 * fTemp213 - fRec179[1];
			float fTemp214 = fRec180[1] + fConst155 * fTemp213;
			fRec180[0] = 2.0f * fTemp214 - fRec180[1];
			float fRec181 = fConst156 * fTemp213;
			float fTemp215 = fRec178 + fRec181;
			float fTemp216 = fTemp209 + 2.828427f * fTemp215;
			float fTemp217 = fRec173[1] + fConst14 * (fRec21[0] - (fTemp216 + fRec174[1]));
			fRec173[0] = fConst16 * fTemp217 - fRec173[1];
			float fTemp218 = fRec174[1] + fConst22 * fTemp217;
			fRec174[0] = 2.0f * fTemp218 - fRec174[1];
			float fRec175 = fConst154 * fTemp217;
			float fTemp219 = fRec175 + fTemp215;
			float fTemp220 = 2.828427f * fTemp219;
			float fTemp221 = fTemp209 + fTemp220;
			float fTemp222 = fRec165[1] + fConst140 * (fRec21[0] - (fTemp221 + fRec166[1]));
			fRec165[0] = fConst142 * fTemp222 - fRec165[1];
			float fTemp223 = fRec166[1] + fConst143 * fTemp222;
			fRec166[0] = 2.0f * fTemp223 - fRec166[1];
			float fRec167 = fConst144 * fTemp222;
			float fRec168 = fTemp223;
			float fTemp224 = fRec162[1] + fConst140 * (fRec168 - fRec163[1]);
			fRec162[0] = fConst142 * fTemp224 - fRec162[1];
			float fTemp225 = fRec163[1] + fConst143 * fTemp224;
			fRec163[0] = 2.0f * fTemp225 - fRec163[1];
			float fRec164 = fTemp225;
			float fTemp226 = fRec182[1] + fConst137 * (fRec164 - fRec183[1]);
			fRec182[0] = fConst139 * fTemp226 - fRec182[1];
			float fTemp227 = fRec183[1] + fConst150 * fTemp226;
			fRec183[0] = 2.0f * fTemp227 - fRec183[1];
			float fRec184 = fConst151 * fTemp226;
			float fTemp228 = 2.828427f * fRec184;
			float fTemp229 = fRec158[1] + fConst145 * (fRec164 - (fTemp228 + fRec159[1]));
			fRec158[0] = fConst147 * fTemp229 - fRec158[1];
			float fTemp230 = fRec159[1] + fConst148 * fTemp229;
			fRec159[0] = 2.0f * fTemp230 - fRec159[1];
			float fRec160 = fConst149 * fTemp229;
			float fRec161 = fTemp230;
			float fTemp231 = fRec155[1] + fConst145 * (fRec161 - fRec156[1]);
			fRec155[0] = fConst147 * fTemp231 - fRec155[1];
			float fTemp232 = fRec156[1] + fConst148 * fTemp231;
			fRec156[0] = 2.0f * fTemp232 - fRec156[1];
			fRec157[0] = fTemp232;
			fVec113[0] = fConst158 * fRec157[1] - fConst94 * fRec190[1];
			fRec191[0] = fConst91 * (fVec113[1] - fConst97 * fRec191[1] + fConst159 * fRec157[1] + fConst160 * fRec157[0]);
			fRec190[0] = fRec191[0];
			fVec114[0] = 0.50032705f * fRec190[1] - fConst99 * fRec188[1];
			fRec189[0] = fConst87 * (fVec114[1] - fConst100 * fRec189[1] - 1.0006541f * fRec190[1] + 0.50032705f * fRec190[0]);
			fRec188[0] = fRec189[0];
			float fTemp233 = std::fabs(0.92736715f * fRec188[0]);
			fRec187[0] = std::max<float>(fTemp233, fConst161 * fRec187[1] + fConst162 * fTemp233);
			fRec186[0] = fConst42 * fRec187[0] + fConst41 * fRec186[1];
			float fTemp234 = 2e+01f * (fTemp94 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec186[0]))));
			fVbargraph12 = FAUSTFLOAT(-fTemp234);
			fRec185[0] = fConst162 * (fSlow20 - -fTemp234) + fConst161 * fRec185[1];
			float fTemp235 = std::pow(1e+01f, fSlow13 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec185[0])) * fTemp111);
			fVbargraph13 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp235)));
			float fTemp236 = fRec157[0] * fTemp235;
			float fTemp237 = std::fabs(fTemp236);
			fVec115[0] = fTemp237;
			float fTemp238 = std::max<float>(fTemp237, fVec115[1]);
			fVec116[0] = fTemp238;
			float fTemp239 = std::max<float>(fTemp238, fVec116[2]);
			fVec117[0] = fTemp239;
			float fTemp240 = std::max<float>(fTemp239, fVec117[4]);
			fVec118[0] = fTemp240;
			float fTemp241 = std::max<float>(fTemp240, fVec118[8]);
			fVec119[IOTA0 & 31] = fTemp241;
			float fTemp242 = std::max<float>(fTemp241, fVec119[(IOTA0 - 16) & 31]);
			fVec120[IOTA0 & 63] = fTemp242;
			float fTemp243 = std::max<float>(fTemp242, fVec120[(IOTA0 - 32) & 63]);
			fVec121[IOTA0 & 127] = fTemp243;
			float fTemp244 = std::max<float>(fTemp243, fVec121[(IOTA0 - 64) & 127]);
			fVec122[IOTA0 & 255] = fTemp244;
			float fTemp245 = std::max<float>(fTemp244, fVec122[(IOTA0 - 128) & 255]);
			fVec123[IOTA0 & 511] = fTemp245;
			fVec124[IOTA0 & 511] = std::max<float>(fTemp245, fVec123[(IOTA0 - 256) & 511]);
			float fTemp246 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst164) ? fTemp237 : -3.4028235e+38f), ((iConst165) ? fVec116[iConst164] : -3.4028235e+38f)), ((iConst166) ? fVec117[iConst167] : -3.4028235e+38f)), ((iConst168) ? fVec118[iConst169] : -3.4028235e+38f)), ((iConst170) ? fVec119[(IOTA0 - iConst171) & 31] : -3.4028235e+38f)), ((iConst172) ? fVec120[(IOTA0 - iConst173) & 63] : -3.4028235e+38f)), ((iConst174) ? fVec121[(IOTA0 - iConst175) & 127] : -3.4028235e+38f)), ((iConst176) ? fVec122[(IOTA0 - iConst177) & 255] : -3.4028235e+38f)), ((iConst178) ? fVec123[(IOTA0 - iConst179) & 511] : -3.4028235e+38f)), ((iConst180) ? fVec124[(IOTA0 - iConst181) & 511] : -3.4028235e+38f))));
			int iTemp247 = (fTemp246 > fSlow15) + (fTemp246 > fSlow16);
			float fTemp248 = std::max<float>(-12.0f, 0.75f * ((iTemp247 == 0) ? fTemp246 + 12.0f - fSlow2 : ((iTemp247 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp246 + 9.0f - fSlow2)) : 0.0f)));
			float fTemp249 = ((fTemp248 > fRec154[1]) ? fConst79 : fConst78);
			fRec154[0] = fTemp248 * (1.0f - fTemp249) + fRec154[1] * fTemp249;
			float fTemp250 = fRec161 + fTemp228 + 1.4142135f * fRec160;
			float fTemp251 = fRec193[1] + fConst145 * (fRec164 - (fTemp250 + fRec194[1]));
			fRec193[0] = fConst147 * fTemp251 - fRec193[1];
			float fTemp252 = fRec194[1] + fConst148 * fTemp251;
			fRec194[0] = 2.0f * fTemp252 - fRec194[1];
			float fRec195 = fConst149 * fTemp251;
			float fRec196 = fTemp252;
			float fTemp253 = fRec164 - (1.4142135f * (fRec160 + fRec195) + fRec196 + fRec161 + fTemp228);
			fVec125[0] = fTemp253;
			fVec126[0] = fConst158 * fVec125[1] - fConst94 * fRec202[1];
			fRec203[0] = fConst91 * (fVec126[1] - fConst97 * fRec203[1] + fConst159 * fVec125[1] + fConst160 * fTemp253);
			fRec202[0] = fRec203[0];
			fVec127[0] = 0.50032705f * fRec202[1] - fConst99 * fRec200[1];
			fRec201[0] = fConst87 * (fVec127[1] - fConst100 * fRec201[1] - 1.0006541f * fRec202[1] + 0.50032705f * fRec202[0]);
			fRec200[0] = fRec201[0];
			float fTemp254 = std::fabs(0.92736715f * fRec200[0]);
			fRec199[0] = std::max<float>(fTemp254, fConst161 * fRec199[1] + fConst162 * fTemp254);
			fRec198[0] = fConst42 * fRec199[0] + fConst41 * fRec198[1];
			float fTemp255 = 2e+01f * (fTemp94 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec198[0]))));
			fVbargraph14 = FAUSTFLOAT(-fTemp255);
			fRec197[0] = fConst189 * (fSlow21 - -fTemp255) + fConst188 * fRec197[1];
			float fTemp256 = std::pow(1e+01f, fSlow13 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec197[0])) * fTemp111);
			fVbargraph15 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp256)));
			float fTemp257 = fTemp253 * fTemp256;
			float fTemp258 = std::fabs(fTemp257);
			fVec128[0] = fTemp258;
			float fTemp259 = std::max<float>(fTemp258, fVec128[1]);
			fVec129[0] = fTemp259;
			float fTemp260 = std::max<float>(fTemp259, fVec129[2]);
			fVec130[0] = fTemp260;
			float fTemp261 = std::max<float>(fTemp260, fVec130[4]);
			fVec131[0] = fTemp261;
			float fTemp262 = std::max<float>(fTemp261, fVec131[8]);
			fVec132[IOTA0 & 31] = fTemp262;
			float fTemp263 = std::max<float>(fTemp262, fVec132[(IOTA0 - 16) & 31]);
			fVec133[IOTA0 & 63] = fTemp263;
			float fTemp264 = std::max<float>(fTemp263, fVec133[(IOTA0 - 32) & 63]);
			fVec134[IOTA0 & 127] = fTemp264;
			float fTemp265 = std::max<float>(fTemp264, fVec134[(IOTA0 - 64) & 127]);
			fVec135[IOTA0 & 255] = fTemp265;
			float fTemp266 = std::max<float>(fTemp265, fVec135[(IOTA0 - 128) & 255]);
			fVec136[IOTA0 & 511] = fTemp266;
			fVec137[IOTA0 & 511] = std::max<float>(fTemp266, fVec136[(IOTA0 - 256) & 511]);
			float fTemp267 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst164) ? fTemp258 : -3.4028235e+38f), ((iConst165) ? fVec129[iConst164] : -3.4028235e+38f)), ((iConst166) ? fVec130[iConst167] : -3.4028235e+38f)), ((iConst168) ? fVec131[iConst169] : -3.4028235e+38f)), ((iConst170) ? fVec132[(IOTA0 - iConst171) & 31] : -3.4028235e+38f)), ((iConst172) ? fVec133[(IOTA0 - iConst173) & 63] : -3.4028235e+38f)), ((iConst174) ? fVec134[(IOTA0 - iConst175) & 127] : -3.4028235e+38f)), ((iConst176) ? fVec135[(IOTA0 - iConst177) & 255] : -3.4028235e+38f)), ((iConst178) ? fVec136[(IOTA0 - iConst179) & 511] : -3.4028235e+38f)), ((iConst180) ? fVec137[(IOTA0 - iConst181) & 511] : -3.4028235e+38f))));
			int iTemp268 = (fTemp267 > fSlow15) + (fTemp267 > fSlow16);
			float fTemp269 = std::max<float>(-12.0f, 0.75f * ((iTemp268 == 0) ? fTemp267 + 12.0f - fSlow2 : ((iTemp268 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp267 + 9.0f - fSlow2)) : 0.0f)));
			float fTemp270 = ((fTemp269 > fRec192[1]) ? fConst79 : fConst78);
			fRec192[0] = fTemp269 * (1.0f - fTemp270) + fRec192[1] * fTemp270;
			float fTemp271 = fRec167 + fTemp206;
			float fTemp272 = fRec168 + fTemp208;
			float fTemp273 = 1.4142135f * fTemp271 + fTemp220 + fTemp272;
			float fTemp274 = fRec212[1] + fConst140 * (fRec21[0] - (fTemp273 + fRec213[1]));
			fRec212[0] = fConst142 * fTemp274 - fRec212[1];
			float fTemp275 = fRec213[1] + fConst143 * fTemp274;
			fRec213[0] = 2.0f * fTemp275 - fRec213[1];
			float fRec214 = fConst144 * fTemp274;
			float fRec215 = fTemp275;
			float fTemp276 = fRec214 + fTemp271;
			float fTemp277 = 1.4142135f * fTemp276;
			float fTemp278 = fRec215 + fTemp272;
			float fTemp279 = fTemp277 + fTemp220 + fTemp278;
			float fTemp280 = fRec216[1] + fConst145 * (fRec21[0] - (fTemp279 + fRec217[1]));
			fRec216[0] = fConst147 * fTemp280 - fRec216[1];
			float fTemp281 = fRec217[1] + fConst148 * fTemp280;
			fRec217[0] = 2.0f * fTemp281 - fRec217[1];
			float fRec218 = fConst149 * fTemp280;
			float fTemp282 = 2.828427f * (fRec218 + fTemp219);
			float fTemp283 = fTemp277 + fTemp278 + fTemp282;
			float fTemp284 = fRec208[1] + fConst137 * (fRec21[0] - (fTemp283 + fRec209[1]));
			fRec208[0] = fConst139 * fTemp284 - fRec208[1];
			float fTemp285 = fRec209[1] + fConst150 * fTemp284;
			fRec209[0] = 2.0f * fTemp285 - fRec209[1];
			float fRec210 = fConst151 * fTemp284;
			float fRec211 = fTemp285;
			float fTemp286 = fRec205[1] + fConst137 * (fRec211 - fRec206[1]);
			fRec205[0] = fConst139 * fTemp286 - fRec205[1];
			float fTemp287 = fRec206[1] + fConst150 * fTemp286;
			fRec206[0] = 2.0f * fTemp287 - fRec206[1];
			fRec207[0] = fTemp287;
			fVec138[0] = fConst158 * fRec207[1] - fConst94 * fRec224[1];
			fRec225[0] = fConst91 * (fVec138[1] - fConst97 * fRec225[1] + fConst159 * fRec207[1] + fConst160 * fRec207[0]);
			fRec224[0] = fRec225[0];
			fVec139[0] = 0.50032705f * fRec224[1] - fConst99 * fRec222[1];
			fRec223[0] = fConst87 * (fVec139[1] - fConst100 * fRec223[1] - 1.0006541f * fRec224[1] + 0.50032705f * fRec224[0]);
			fRec222[0] = fRec223[0];
			float fTemp288 = std::fabs(0.92736715f * fRec222[0]);
			fRec221[0] = std::max<float>(fTemp288, fConst161 * fRec221[1] + fConst162 * fTemp288);
			fRec220[0] = fConst42 * fRec221[0] + fConst41 * fRec220[1];
			float fTemp289 = 2e+01f * (fTemp94 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec220[0]))));
			fVbargraph16 = FAUSTFLOAT(-fTemp289);
			fRec219[0] = fConst191 * (fSlow22 - -fTemp289) + fConst190 * fRec219[1];
			float fTemp290 = std::pow(1e+01f, fSlow13 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec219[0])) * fTemp111);
			fVbargraph17 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp290)));
			float fTemp291 = fRec207[0] * fTemp290;
			float fTemp292 = std::fabs(fTemp291);
			fVec140[0] = fTemp292;
			float fTemp293 = std::max<float>(fTemp292, fVec140[1]);
			fVec141[0] = fTemp293;
			float fTemp294 = std::max<float>(fTemp293, fVec141[2]);
			fVec142[0] = fTemp294;
			float fTemp295 = std::max<float>(fTemp294, fVec142[4]);
			fVec143[0] = fTemp295;
			float fTemp296 = std::max<float>(fTemp295, fVec143[8]);
			fVec144[IOTA0 & 31] = fTemp296;
			float fTemp297 = std::max<float>(fTemp296, fVec144[(IOTA0 - 16) & 31]);
			fVec145[IOTA0 & 63] = fTemp297;
			float fTemp298 = std::max<float>(fTemp297, fVec145[(IOTA0 - 32) & 63]);
			fVec146[IOTA0 & 127] = fTemp298;
			float fTemp299 = std::max<float>(fTemp298, fVec146[(IOTA0 - 64) & 127]);
			fVec147[IOTA0 & 255] = fTemp299;
			float fTemp300 = std::max<float>(fTemp299, fVec147[(IOTA0 - 128) & 255]);
			fVec148[IOTA0 & 511] = fTemp300;
			fVec149[IOTA0 & 511] = std::max<float>(fTemp300, fVec148[(IOTA0 - 256) & 511]);
			float fTemp301 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst164) ? fTemp292 : -3.4028235e+38f), ((iConst165) ? fVec141[iConst164] : -3.4028235e+38f)), ((iConst166) ? fVec142[iConst167] : -3.4028235e+38f)), ((iConst168) ? fVec143[iConst169] : -3.4028235e+38f)), ((iConst170) ? fVec144[(IOTA0 - iConst171) & 31] : -3.4028235e+38f)), ((iConst172) ? fVec145[(IOTA0 - iConst173) & 63] : -3.4028235e+38f)), ((iConst174) ? fVec146[(IOTA0 - iConst175) & 127] : -3.4028235e+38f)), ((iConst176) ? fVec147[(IOTA0 - iConst177) & 255] : -3.4028235e+38f)), ((iConst178) ? fVec148[(IOTA0 - iConst179) & 511] : -3.4028235e+38f)), ((iConst180) ? fVec149[(IOTA0 - iConst181) & 511] : -3.4028235e+38f))));
			int iTemp302 = (fTemp301 > fSlow15) + (fTemp301 > fSlow16);
			float fTemp303 = std::max<float>(-12.0f, 0.75f * ((iTemp302 == 0) ? fTemp301 + 12.0f - fSlow2 : ((iTemp302 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp301 + 9.0f - fSlow2)) : 0.0f)));
			float fTemp304 = ((fTemp303 > fRec204[1]) ? fConst79 : fConst78);
			fRec204[0] = fTemp303 * (1.0f - fTemp304) + fRec204[1] * fTemp304;
			float fTemp305 = fRec210 + fTemp276;
			float fTemp306 = fRec211 + fTemp278;
			float fTemp307 = 1.4142135f * fTemp305 + fTemp282 + fTemp306;
			float fTemp308 = fRec227[1] + fConst137 * (fRec21[0] - (fTemp307 + fRec228[1]));
			fRec227[0] = fConst139 * fTemp308 - fRec227[1];
			float fTemp309 = fRec228[1] + fConst150 * fTemp308;
			fRec228[0] = 2.0f * fTemp309 - fRec228[1];
			float fRec229 = fConst151 * fTemp308;
			float fRec230 = fTemp309;
			float fTemp310 = fRec21[0] - (1.4142135f * (fRec229 + fTemp305) + fTemp282 + fRec230 + fTemp306);
			fVec150[0] = fTemp310;
			fVec151[0] = fConst158 * fVec150[1] - fConst94 * fRec236[1];
			fRec237[0] = fConst91 * (fVec151[1] - fConst97 * fRec237[1] + fConst159 * fVec150[1] + fConst160 * fTemp310);
			fRec236[0] = fRec237[0];
			fVec152[0] = 0.50032705f * fRec236[1] - fConst99 * fRec234[1];
			fRec235[0] = fConst87 * (fVec152[1] - fConst100 * fRec235[1] - 1.0006541f * fRec236[1] + 0.50032705f * fRec236[0]);
			fRec234[0] = fRec235[0];
			float fTemp311 = std::fabs(0.92736715f * fRec234[0]);
			fRec233[0] = std::max<float>(fTemp311, fConst161 * fRec233[1] + fConst162 * fTemp311);
			fRec232[0] = fConst42 * fRec233[0] + fConst41 * fRec232[1];
			float fTemp312 = 2e+01f * (fTemp94 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec232[0]))));
			fVbargraph18 = FAUSTFLOAT(-fTemp312);
			fRec231[0] = fConst192 * (fSlow23 - -fTemp312) + fConst163 * fRec231[1];
			float fTemp313 = std::pow(1e+01f, fSlow13 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec231[0])) * fTemp111);
			fVbargraph19 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp313)));
			float fTemp314 = fTemp310 * fTemp313;
			float fTemp315 = std::fabs(fTemp314);
			fVec153[0] = fTemp315;
			float fTemp316 = std::max<float>(fTemp315, fVec153[1]);
			fVec154[0] = fTemp316;
			float fTemp317 = std::max<float>(fTemp316, fVec154[2]);
			fVec155[0] = fTemp317;
			float fTemp318 = std::max<float>(fTemp317, fVec155[4]);
			fVec156[0] = fTemp318;
			float fTemp319 = std::max<float>(fTemp318, fVec156[8]);
			fVec157[IOTA0 & 31] = fTemp319;
			float fTemp320 = std::max<float>(fTemp319, fVec157[(IOTA0 - 16) & 31]);
			fVec158[IOTA0 & 63] = fTemp320;
			float fTemp321 = std::max<float>(fTemp320, fVec158[(IOTA0 - 32) & 63]);
			fVec159[IOTA0 & 127] = fTemp321;
			float fTemp322 = std::max<float>(fTemp321, fVec159[(IOTA0 - 64) & 127]);
			fVec160[IOTA0 & 255] = fTemp322;
			float fTemp323 = std::max<float>(fTemp322, fVec160[(IOTA0 - 128) & 255]);
			fVec161[IOTA0 & 511] = fTemp323;
			fVec162[IOTA0 & 511] = std::max<float>(fTemp323, fVec161[(IOTA0 - 256) & 511]);
			float fTemp324 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst164) ? fTemp315 : -3.4028235e+38f), ((iConst165) ? fVec154[iConst164] : -3.4028235e+38f)), ((iConst166) ? fVec155[iConst167] : -3.4028235e+38f)), ((iConst168) ? fVec156[iConst169] : -3.4028235e+38f)), ((iConst170) ? fVec157[(IOTA0 - iConst171) & 31] : -3.4028235e+38f)), ((iConst172) ? fVec158[(IOTA0 - iConst173) & 63] : -3.4028235e+38f)), ((iConst174) ? fVec159[(IOTA0 - iConst175) & 127] : -3.4028235e+38f)), ((iConst176) ? fVec160[(IOTA0 - iConst177) & 255] : -3.4028235e+38f)), ((iConst178) ? fVec161[(IOTA0 - iConst179) & 511] : -3.4028235e+38f)), ((iConst180) ? fVec162[(IOTA0 - iConst181) & 511] : -3.4028235e+38f))));
			int iTemp325 = (fTemp324 > fSlow15) + (fTemp324 > fSlow16);
			float fTemp326 = std::max<float>(-12.0f, 0.75f * ((iTemp325 == 0) ? fTemp324 + 12.0f - fSlow2 : ((iTemp325 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp324 + 9.0f - fSlow2)) : 0.0f)));
			float fTemp327 = ((fTemp326 > fRec226[1]) ? fConst79 : fConst78);
			fRec226[0] = fTemp326 * (1.0f - fTemp327) + fRec226[1] * fTemp327;
			float fTemp328 = std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(fRec107[0], fRec108[0]), fRec120[0]), fRec142[0]), fRec154[0]), fRec192[0]), fRec204[0]), fRec226[0]);
			float fTemp329 = fRec107[0] + 0.25f * (fTemp328 - fRec107[0]);
			fVbargraph20 = FAUSTFLOAT(fTemp329);
			float fTemp330 = fTemp113 * std::pow(1e+01f, 0.05f * fTemp329);
			float fTemp331 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp330)));
			int iTemp332 = (fTemp331 > fSlow16) + (fTemp331 > fSlow24);
			float fTemp333 = std::max<float>(0.0f, ((iTemp332 == 0) ? 0.0f : ((iTemp332 == 1) ? 0.083333336f * mydsp_faustpower2_f(fTemp331 + 9.0f - fSlow2) : fTemp331 + 6.0f - fSlow2)));
			float fTemp334 = ((-(0.2857143f * fTemp333) > fRec238[1]) ? fConst161 : fConst79);
			fRec238[0] = fRec238[1] * fTemp334 - 0.2857143f * fTemp333 * (1.0f - fTemp334);
			float fTemp335 = std::pow(1e+01f, 0.05f * fRec238[0]);
			fVbargraph21 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp335)));
			float fTemp336 = fRec108[0] + 0.25f * (fTemp328 - fRec108[0]);
			fVbargraph22 = FAUSTFLOAT(fTemp336);
			float fTemp337 = fTemp134 * std::pow(1e+01f, 0.05f * fTemp336);
			float fTemp338 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp337)));
			int iTemp339 = (fTemp338 > fSlow16) + (fTemp338 > fSlow24);
			float fTemp340 = std::max<float>(0.0f, ((iTemp339 == 0) ? 0.0f : ((iTemp339 == 1) ? 0.083333336f * mydsp_faustpower2_f(fTemp338 + 9.0f - fSlow2) : fTemp338 + 6.0f - fSlow2)));
			float fTemp341 = ((-(0.2857143f * fTemp340) > fRec239[1]) ? fConst161 : fConst79);
			fRec239[0] = fRec239[1] * fTemp341 - 0.2857143f * fTemp340 * (1.0f - fTemp341);
			float fTemp342 = std::pow(1e+01f, 0.05f * fRec239[0]);
			fVbargraph23 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp342)));
			float fTemp343 = fRec120[0] + 0.25f * (fTemp328 - fRec120[0]);
			fVbargraph24 = FAUSTFLOAT(fTemp343);
			float fTemp344 = fTemp166 * std::pow(1e+01f, 0.05f * fTemp343);
			float fTemp345 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp344)));
			int iTemp346 = (fTemp345 > fSlow16) + (fTemp345 > fSlow24);
			float fTemp347 = std::max<float>(0.0f, ((iTemp346 == 0) ? 0.0f : ((iTemp346 == 1) ? 0.083333336f * mydsp_faustpower2_f(fTemp345 + 9.0f - fSlow2) : fTemp345 + 6.0f - fSlow2)));
			float fTemp348 = ((-(0.2857143f * fTemp347) > fRec240[1]) ? fConst161 : fConst79);
			fRec240[0] = fRec240[1] * fTemp348 - 0.2857143f * fTemp347 * (1.0f - fTemp348);
			float fTemp349 = std::pow(1e+01f, 0.05f * fRec240[0]);
			fVbargraph25 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp349)));
			float fTemp350 = fRec142[0] + 0.25f * (fTemp328 - fRec142[0]);
			fVbargraph26 = FAUSTFLOAT(fTemp350);
			float fTemp351 = fTemp189 * std::pow(1e+01f, 0.05f * fTemp350);
			float fTemp352 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp351)));
			int iTemp353 = (fTemp352 > fSlow16) + (fTemp352 > fSlow24);
			float fTemp354 = std::max<float>(0.0f, ((iTemp353 == 0) ? 0.0f : ((iTemp353 == 1) ? 0.083333336f * mydsp_faustpower2_f(fTemp352 + 9.0f - fSlow2) : fTemp352 + 6.0f - fSlow2)));
			float fTemp355 = ((-(0.2857143f * fTemp354) > fRec241[1]) ? fConst161 : fConst79);
			fRec241[0] = fRec241[1] * fTemp355 - 0.2857143f * fTemp354 * (1.0f - fTemp355);
			float fTemp356 = std::pow(1e+01f, 0.05f * fRec241[0]);
			fVbargraph27 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp356)));
			float fTemp357 = fRec154[0] + 0.25f * (fTemp328 - fRec154[0]);
			fVbargraph28 = FAUSTFLOAT(fTemp357);
			float fTemp358 = fTemp236 * std::pow(1e+01f, 0.05f * fTemp357);
			float fTemp359 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp358)));
			int iTemp360 = (fTemp359 > fSlow16) + (fTemp359 > fSlow24);
			float fTemp361 = std::max<float>(0.0f, ((iTemp360 == 0) ? 0.0f : ((iTemp360 == 1) ? 0.083333336f * mydsp_faustpower2_f(fTemp359 + 9.0f - fSlow2) : fTemp359 + 6.0f - fSlow2)));
			float fTemp362 = ((-(0.2857143f * fTemp361) > fRec242[1]) ? fConst161 : fConst79);
			fRec242[0] = fRec242[1] * fTemp362 - 0.2857143f * fTemp361 * (1.0f - fTemp362);
			float fTemp363 = std::pow(1e+01f, 0.05f * fRec242[0]);
			fVbargraph29 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp363)));
			float fTemp364 = fRec192[0] + 0.25f * (fTemp328 - fRec192[0]);
			fVbargraph30 = FAUSTFLOAT(fTemp364);
			float fTemp365 = fTemp257 * std::pow(1e+01f, 0.05f * fTemp364);
			float fTemp366 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp365)));
			int iTemp367 = (fTemp366 > fSlow16) + (fTemp366 > fSlow24);
			float fTemp368 = std::max<float>(0.0f, ((iTemp367 == 0) ? 0.0f : ((iTemp367 == 1) ? 0.083333336f * mydsp_faustpower2_f(fTemp366 + 9.0f - fSlow2) : fTemp366 + 6.0f - fSlow2)));
			float fTemp369 = ((-(0.2857143f * fTemp368) > fRec243[1]) ? fConst161 : fConst79);
			fRec243[0] = fRec243[1] * fTemp369 - 0.2857143f * fTemp368 * (1.0f - fTemp369);
			float fTemp370 = std::pow(1e+01f, 0.05f * fRec243[0]);
			fVbargraph31 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp370)));
			float fTemp371 = fRec204[0] + 0.25f * (fTemp328 - fRec204[0]);
			fVbargraph32 = FAUSTFLOAT(fTemp371);
			float fTemp372 = fTemp291 * std::pow(1e+01f, 0.05f * fTemp371);
			float fTemp373 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp372)));
			int iTemp374 = (fTemp373 > fSlow16) + (fTemp373 > fSlow24);
			float fTemp375 = std::max<float>(0.0f, ((iTemp374 == 0) ? 0.0f : ((iTemp374 == 1) ? 0.083333336f * mydsp_faustpower2_f(fTemp373 + 9.0f - fSlow2) : fTemp373 + 6.0f - fSlow2)));
			float fTemp376 = ((-(0.2857143f * fTemp375) > fRec244[1]) ? fConst161 : fConst79);
			fRec244[0] = fRec244[1] * fTemp376 - 0.2857143f * fTemp375 * (1.0f - fTemp376);
			float fTemp377 = std::pow(1e+01f, 0.05f * fRec244[0]);
			fVbargraph33 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp377)));
			float fTemp378 = fRec226[0] + 0.25f * (fTemp328 - fRec226[0]);
			fVbargraph34 = FAUSTFLOAT(fTemp378);
			float fTemp379 = fTemp314 * std::pow(1e+01f, 0.05f * fTemp378);
			float fTemp380 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp379)));
			int iTemp381 = (fTemp380 > fSlow16) + (fTemp380 > fSlow24);
			float fTemp382 = std::max<float>(0.0f, ((iTemp381 == 0) ? 0.0f : ((iTemp381 == 1) ? 0.083333336f * mydsp_faustpower2_f(fTemp380 + 9.0f - fSlow2) : fTemp380 + 6.0f - fSlow2)));
			float fTemp383 = ((-(0.2857143f * fTemp382) > fRec245[1]) ? fConst161 : fConst79);
			fRec245[0] = fRec245[1] * fTemp383 - 0.2857143f * fTemp382 * (1.0f - fTemp383);
			float fTemp384 = std::pow(1e+01f, 0.05f * fRec245[0]);
			fVbargraph35 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp384)));
			output0[i0] = FAUSTFLOAT(((iSlow0) ? fTemp58 : fTemp330 * fTemp335 + fTemp337 * fTemp342 + fTemp344 * fTemp349 + fTemp351 * fTemp356 + fTemp358 * fTemp363 + fTemp365 * fTemp370 + fTemp372 * fTemp377 + fTemp379 * fTemp384));
			fRec42[1] = fRec42[0];
			fRec43[1] = fRec43[0];
			fRec37[1] = fRec37[0];
			fRec38[1] = fRec38[0];
			fRec34[1] = fRec34[0];
			fRec35[1] = fRec35[0];
			fRec31[1] = fRec31[0];
			fRec32[1] = fRec32[0];
			fVec0[1] = fVec0[0];
			fVec1[2] = fVec1[1];
			fVec1[1] = fVec1[0];
			for (int j0 = 4; j0 > 0; j0 = j0 - 1) {
				fVec2[j0] = fVec2[j0 - 1];
			}
			for (int j1 = 11; j1 > 0; j1 = j1 - 1) {
				fVec3[j1] = fVec3[j1 - 1];
			}
			IOTA0 = IOTA0 + 1;
			fRec48[1] = fRec48[0];
			fVec9[2] = fVec9[1];
			fVec9[1] = fVec9[0];
			for (int j2 = 4; j2 > 0; j2 = j2 - 1) {
				fVec10[j2] = fVec10[j2 - 1];
			}
			for (int j3 = 11; j3 > 0; j3 = j3 - 1) {
				fVec11[j3] = fVec11[j3 - 1];
			}
			fRec47[1] = fRec47[0];
			fRec30[1] = fRec30[0];
			fVec27[1] = fVec27[0];
			fRec52[1] = fRec52[0];
			fRec51[1] = fRec51[0];
			fVec28[1] = fVec28[0];
			fRec50[1] = fRec50[0];
			fRec49[1] = fRec49[0];
			fVec29[1] = fVec29[0];
			fVec30[2] = fVec30[1];
			fVec30[1] = fVec30[0];
			for (int j4 = 4; j4 > 0; j4 = j4 - 1) {
				fVec31[j4] = fVec31[j4 - 1];
			}
			for (int j5 = 11; j5 > 0; j5 = j5 - 1) {
				fVec32[j5] = fVec32[j5 - 1];
			}
			fRec25[1] = fRec25[0];
			fRec26[1] = fRec26[0];
			fRec23[1] = fRec23[0];
			fRec22[1] = fRec22[0];
			fVec38[1] = fVec38[0];
			fRec65[1] = fRec65[0];
			fRec64[2] = fRec64[1];
			fRec64[1] = fRec64[0];
			fVec39[1] = fVec39[0];
			fRec63[1] = fRec63[0];
			fRec62[2] = fRec62[1];
			fRec62[1] = fRec62[0];
			fRec66[1] = fRec66[0];
			fRec61[1] = fRec61[0];
			fRec68[1] = fRec68[0];
			fRec67[1] = fRec67[0];
			fRec70[1] = fRec70[0];
			fRec69[1] = fRec69[0];
			fRec72[1] = fRec72[0];
			fRec71[1] = fRec71[0];
			fRec74[1] = fRec74[0];
			fRec73[1] = fRec73[0];
			fRec76[1] = fRec76[0];
			fRec75[1] = fRec75[0];
			fRec78[1] = fRec78[0];
			fRec77[1] = fRec77[0];
			fRec80[1] = fRec80[0];
			fRec79[1] = fRec79[0];
			fRec59[1] = fRec59[0];
			fRec57[1] = fRec57[0];
			fRec55[1] = fRec55[0];
			fRec53[1] = fRec53[0];
			fRec21[2] = fRec21[1];
			fRec21[1] = fRec21[0];
			fRec17[1] = fRec17[0];
			fRec18[1] = fRec18[0];
			fRec14[1] = fRec14[0];
			fRec15[1] = fRec15[0];
			fRec84[1] = fRec84[0];
			fRec85[1] = fRec85[0];
			fRec87[1] = fRec87[0];
			fRec88[1] = fRec88[0];
			fRec81[1] = fRec81[0];
			fRec82[1] = fRec82[0];
			fRec10[1] = fRec10[0];
			fRec11[1] = fRec11[0];
			fRec7[1] = fRec7[0];
			fRec8[1] = fRec8[0];
			fRec90[1] = fRec90[0];
			fRec91[1] = fRec91[0];
			fRec3[1] = fRec3[0];
			fRec4[1] = fRec4[0];
			fRec0[1] = fRec0[0];
			fRec1[1] = fRec1[0];
			fRec2[1] = fRec2[0];
			fVec52[1] = fVec52[0];
			fRec99[1] = fRec99[0];
			fRec98[1] = fRec98[0];
			fVec53[1] = fVec53[0];
			fRec97[1] = fRec97[0];
			fRec96[1] = fRec96[0];
			fRec95[1] = fRec95[0];
			fRec94[1] = fRec94[0];
			fVec54[1] = fVec54[0];
			fRec105[1] = fRec105[0];
			fRec104[1] = fRec104[0];
			fVec55[1] = fVec55[0];
			fRec103[1] = fRec103[0];
			fRec102[1] = fRec102[0];
			fRec101[1] = fRec101[0];
			fRec100[1] = fRec100[0];
			fRec93[1] = fRec93[0];
			fVec56[1] = fVec56[0];
			fVec57[2] = fVec57[1];
			fVec57[1] = fVec57[0];
			for (int j6 = 4; j6 > 0; j6 = j6 - 1) {
				fVec58[j6] = fVec58[j6 - 1];
			}
			for (int j7 = 11; j7 > 0; j7 = j7 - 1) {
				fVec59[j7] = fVec59[j7 - 1];
			}
			fRec106[1] = fRec106[0];
			fVec65[1] = fVec65[0];
			fVec66[2] = fVec66[1];
			fVec66[1] = fVec66[0];
			for (int j8 = 4; j8 > 0; j8 = j8 - 1) {
				fVec67[j8] = fVec67[j8 - 1];
			}
			for (int j9 = 11; j9 > 0; j9 = j9 - 1) {
				fVec68[j9] = fVec68[j9 - 1];
			}
			fRec107[1] = fRec107[0];
			fRec109[1] = fRec109[0];
			fRec110[1] = fRec110[0];
			fVec75[1] = fVec75[0];
			fVec76[1] = fVec76[0];
			fRec119[1] = fRec119[0];
			fRec118[1] = fRec118[0];
			fVec77[1] = fVec77[0];
			fRec117[1] = fRec117[0];
			fRec116[1] = fRec116[0];
			fRec115[1] = fRec115[0];
			fRec114[1] = fRec114[0];
			fRec113[1] = fRec113[0];
			fVec78[1] = fVec78[0];
			fVec79[2] = fVec79[1];
			fVec79[1] = fVec79[0];
			for (int j10 = 4; j10 > 0; j10 = j10 - 1) {
				fVec80[j10] = fVec80[j10 - 1];
			}
			for (int j11 = 11; j11 > 0; j11 = j11 - 1) {
				fVec81[j11] = fVec81[j11 - 1];
			}
			fRec108[1] = fRec108[0];
			fRec128[1] = fRec128[0];
			fRec129[1] = fRec129[0];
			fRec132[1] = fRec132[0];
			fRec133[1] = fRec133[0];
			fRec124[1] = fRec124[0];
			fRec125[1] = fRec125[0];
			fRec121[1] = fRec121[0];
			fRec122[1] = fRec122[0];
			fRec123[1] = fRec123[0];
			fVec88[1] = fVec88[0];
			fRec141[1] = fRec141[0];
			fRec140[1] = fRec140[0];
			fVec89[1] = fVec89[0];
			fRec139[1] = fRec139[0];
			fRec138[1] = fRec138[0];
			fRec137[1] = fRec137[0];
			fRec136[1] = fRec136[0];
			fRec135[1] = fRec135[0];
			fVec90[1] = fVec90[0];
			fVec91[2] = fVec91[1];
			fVec91[1] = fVec91[0];
			for (int j12 = 4; j12 > 0; j12 = j12 - 1) {
				fVec92[j12] = fVec92[j12 - 1];
			}
			for (int j13 = 11; j13 > 0; j13 = j13 - 1) {
				fVec93[j13] = fVec93[j13 - 1];
			}
			fRec120[1] = fRec120[0];
			fRec143[1] = fRec143[0];
			fRec144[1] = fRec144[0];
			fVec100[1] = fVec100[0];
			fVec101[1] = fVec101[0];
			fRec153[1] = fRec153[0];
			fRec152[1] = fRec152[0];
			fVec102[1] = fVec102[0];
			fRec151[1] = fRec151[0];
			fRec150[1] = fRec150[0];
			fRec149[1] = fRec149[0];
			fRec148[1] = fRec148[0];
			fRec147[1] = fRec147[0];
			fVec103[1] = fVec103[0];
			fVec104[2] = fVec104[1];
			fVec104[1] = fVec104[0];
			for (int j14 = 4; j14 > 0; j14 = j14 - 1) {
				fVec105[j14] = fVec105[j14 - 1];
			}
			for (int j15 = 11; j15 > 0; j15 = j15 - 1) {
				fVec106[j15] = fVec106[j15 - 1];
			}
			fRec142[1] = fRec142[0];
			fRec169[1] = fRec169[0];
			fRec170[1] = fRec170[0];
			fRec176[1] = fRec176[0];
			fRec177[1] = fRec177[0];
			fRec179[1] = fRec179[0];
			fRec180[1] = fRec180[0];
			fRec173[1] = fRec173[0];
			fRec174[1] = fRec174[0];
			fRec165[1] = fRec165[0];
			fRec166[1] = fRec166[0];
			fRec162[1] = fRec162[0];
			fRec163[1] = fRec163[0];
			fRec182[1] = fRec182[0];
			fRec183[1] = fRec183[0];
			fRec158[1] = fRec158[0];
			fRec159[1] = fRec159[0];
			fRec155[1] = fRec155[0];
			fRec156[1] = fRec156[0];
			fRec157[1] = fRec157[0];
			fVec113[1] = fVec113[0];
			fRec191[1] = fRec191[0];
			fRec190[1] = fRec190[0];
			fVec114[1] = fVec114[0];
			fRec189[1] = fRec189[0];
			fRec188[1] = fRec188[0];
			fRec187[1] = fRec187[0];
			fRec186[1] = fRec186[0];
			fRec185[1] = fRec185[0];
			fVec115[1] = fVec115[0];
			fVec116[2] = fVec116[1];
			fVec116[1] = fVec116[0];
			for (int j16 = 4; j16 > 0; j16 = j16 - 1) {
				fVec117[j16] = fVec117[j16 - 1];
			}
			for (int j17 = 11; j17 > 0; j17 = j17 - 1) {
				fVec118[j17] = fVec118[j17 - 1];
			}
			fRec154[1] = fRec154[0];
			fRec193[1] = fRec193[0];
			fRec194[1] = fRec194[0];
			fVec125[1] = fVec125[0];
			fVec126[1] = fVec126[0];
			fRec203[1] = fRec203[0];
			fRec202[1] = fRec202[0];
			fVec127[1] = fVec127[0];
			fRec201[1] = fRec201[0];
			fRec200[1] = fRec200[0];
			fRec199[1] = fRec199[0];
			fRec198[1] = fRec198[0];
			fRec197[1] = fRec197[0];
			fVec128[1] = fVec128[0];
			fVec129[2] = fVec129[1];
			fVec129[1] = fVec129[0];
			for (int j18 = 4; j18 > 0; j18 = j18 - 1) {
				fVec130[j18] = fVec130[j18 - 1];
			}
			for (int j19 = 11; j19 > 0; j19 = j19 - 1) {
				fVec131[j19] = fVec131[j19 - 1];
			}
			fRec192[1] = fRec192[0];
			fRec212[1] = fRec212[0];
			fRec213[1] = fRec213[0];
			fRec216[1] = fRec216[0];
			fRec217[1] = fRec217[0];
			fRec208[1] = fRec208[0];
			fRec209[1] = fRec209[0];
			fRec205[1] = fRec205[0];
			fRec206[1] = fRec206[0];
			fRec207[1] = fRec207[0];
			fVec138[1] = fVec138[0];
			fRec225[1] = fRec225[0];
			fRec224[1] = fRec224[0];
			fVec139[1] = fVec139[0];
			fRec223[1] = fRec223[0];
			fRec222[1] = fRec222[0];
			fRec221[1] = fRec221[0];
			fRec220[1] = fRec220[0];
			fRec219[1] = fRec219[0];
			fVec140[1] = fVec140[0];
			fVec141[2] = fVec141[1];
			fVec141[1] = fVec141[0];
			for (int j20 = 4; j20 > 0; j20 = j20 - 1) {
				fVec142[j20] = fVec142[j20 - 1];
			}
			for (int j21 = 11; j21 > 0; j21 = j21 - 1) {
				fVec143[j21] = fVec143[j21 - 1];
			}
			fRec204[1] = fRec204[0];
			fRec227[1] = fRec227[0];
			fRec228[1] = fRec228[0];
			fVec150[1] = fVec150[0];
			fVec151[1] = fVec151[0];
			fRec237[1] = fRec237[0];
			fRec236[1] = fRec236[0];
			fVec152[1] = fVec152[0];
			fRec235[1] = fRec235[0];
			fRec234[1] = fRec234[0];
			fRec233[1] = fRec233[0];
			fRec232[1] = fRec232[0];
			fRec231[1] = fRec231[0];
			fVec153[1] = fVec153[0];
			fVec154[2] = fVec154[1];
			fVec154[1] = fVec154[0];
			for (int j22 = 4; j22 > 0; j22 = j22 - 1) {
				fVec155[j22] = fVec155[j22 - 1];
			}
			for (int j23 = 11; j23 > 0; j23 = j23 - 1) {
				fVec156[j23] = fVec156[j23 - 1];
			}
			fRec226[1] = fRec226[0];
			fRec238[1] = fRec238[0];
			fRec239[1] = fRec239[0];
			fRec240[1] = fRec240[0];
			fRec241[1] = fRec241[0];
			fRec242[1] = fRec242[0];
			fRec243[1] = fRec243[0];
			fRec244[1] = fRec244[0];
			fRec245[1] = fRec245[0];
		}
	}

};
FAUSTPP_END_NAMESPACE


#if defined(__GNUC__)
#   pragma GCC diagnostic pop
#endif



// --------------------------------------------------------------------------------------------------------------------

START_NAMESPACE_DISTRHO

// --------------------------------------------------------------------------------------------------------------------

class FaustGeneratedPlugin : public Plugin
{
protected:
    ScopedPointer<mydsp> dsp;

public:
    FaustGeneratedPlugin(const uint32_t extraParameters = 0,
                         const uint32_t extraPrograms = 0,
                         const uint32_t extraStates = 0)
        : Plugin(kParameterCount + extraParameters, kProgramCount + extraPrograms, kStateCount + extraStates)
    {
        dsp = new mydsp;
        dsp->init(getSampleRate());

        // passive controls are only updated on first run, make sure they have valid values now
        dsp->fVbargraph4 = 0;
        dsp->fVbargraph3 = 0;
        dsp->fVbargraph6 = 0;
        dsp->fVbargraph8 = 0;
        dsp->fVbargraph10 = 0;
        dsp->fVbargraph12 = 0;
        dsp->fVbargraph14 = 0;
        dsp->fVbargraph16 = 0;
        dsp->fVbargraph18 = 0;
        dsp->fVbargraph5 = 0;
        dsp->fVbargraph7 = 0;
        dsp->fVbargraph9 = 0;
        dsp->fVbargraph11 = 0;
        dsp->fVbargraph13 = 0;
        dsp->fVbargraph15 = 0;
        dsp->fVbargraph17 = 0;
        dsp->fVbargraph19 = 0;
        dsp->fVbargraph1 = 0;
        dsp->fVbargraph2 = 0;
        dsp->fVbargraph0 = 0;
        dsp->fVbargraph20 = 0;
        dsp->fVbargraph22 = 0;
        dsp->fVbargraph24 = 0;
        dsp->fVbargraph26 = 0;
        dsp->fVbargraph28 = 0;
        dsp->fVbargraph30 = 0;
        dsp->fVbargraph32 = 0;
        dsp->fVbargraph34 = 0;
        dsp->fVbargraph21 = 0;
        dsp->fVbargraph23 = 0;
        dsp->fVbargraph25 = 0;
        dsp->fVbargraph27 = 0;
        dsp->fVbargraph29 = 0;
        dsp->fVbargraph31 = 0;
        dsp->fVbargraph33 = 0;
        dsp->fVbargraph35 = 0;
        
    }

    /*
    void printCurrentValues()
    {
        d_stdout("==== preset data start ===");
        printf("%.12g,", dsp->fVslider3);
        printf("%.12g,", dsp->fVslider4);
        printf("%.12g,", dsp->fVslider5);
        printf("%.12g,", dsp->fVslider6);
        printf("%.12g,", dsp->fVslider7);
        printf("%.12g,", dsp->fVslider8);
        printf("%.12g,", dsp->fVslider9);
        printf("%.12g,", dsp->fVslider10);
        printf("%.12g,", dsp->fVslider11);
        printf("%.12g,", dsp->fCheckbox0);
        printf("%.12g,", dsp->fVslider1);
        printf("%.12g,", dsp->fVslider0);
        printf("%.12g,", dsp->fVslider2);
        
        d_stdout("\n==== preset data end ===");
    }
    */

protected:
   /* -----------------------------------------------------------------------------------------------------------------
    * Information */

    const char* getLabel() const override
    {
        return "bbb_audio";
    }

    const char* getDescription() const override
    {
        return "";
    }

    const char* getMaker() const override
    {
        return "Klaus Scheuermann";
    }

    const char* getHomePage() const override
    {
        return "https://4ohm.de/";
    }

    const char* getLicense() const override
    {
        return "GPLv3+";
    }

    uint32_t getVersion() const override
    {
        return d_version(1, 0, 0);
    }

   /* -----------------------------------------------------------------------------------------------------------------
    * Init */

    void initAudioPort(const bool input, const uint32_t index, AudioPort& port) override
    {
        /* make assumptions related to IO.
         * 1 audio port means mono, 2 means stereo.
         */
        
            
        port.groupId = kPortGroupMono;
            
            
        

        // everything else is as default
        Plugin::initAudioPort(input, index, port);
    }

    void initParameter(const uint32_t index, Parameter& param) override
    {
        switch (index)
        {
        case kParameter_timbre_strength:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[0];
            param.unit = kParameterUnits[0];
            param.symbol = kParameterSymbols[0];
            param.shortName = "";
            param.ranges.def = kParameterRanges[0].def;
            param.ranges.min = kParameterRanges[0].min;
            param.ranges.max = kParameterRanges[0].max;
            break;
        case kParameter__:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[1];
            param.unit = kParameterUnits[1];
            param.symbol = kParameterSymbols[1];
            param.shortName = "";
            param.ranges.def = kParameterRanges[1].def;
            param.ranges.min = kParameterRanges[1].min;
            param.ranges.max = kParameterRanges[1].max;
            break;
        case kParameter__:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[2];
            param.unit = kParameterUnits[2];
            param.symbol = kParameterSymbols[2];
            param.shortName = "";
            param.ranges.def = kParameterRanges[2].def;
            param.ranges.min = kParameterRanges[2].min;
            param.ranges.max = kParameterRanges[2].max;
            break;
        case kParameter__:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[3];
            param.unit = kParameterUnits[3];
            param.symbol = kParameterSymbols[3];
            param.shortName = "";
            param.ranges.def = kParameterRanges[3].def;
            param.ranges.min = kParameterRanges[3].min;
            param.ranges.max = kParameterRanges[3].max;
            break;
        case kParameter__:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[4];
            param.unit = kParameterUnits[4];
            param.symbol = kParameterSymbols[4];
            param.shortName = "";
            param.ranges.def = kParameterRanges[4].def;
            param.ranges.min = kParameterRanges[4].min;
            param.ranges.max = kParameterRanges[4].max;
            break;
        case kParameter__:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[5];
            param.unit = kParameterUnits[5];
            param.symbol = kParameterSymbols[5];
            param.shortName = "";
            param.ranges.def = kParameterRanges[5].def;
            param.ranges.min = kParameterRanges[5].min;
            param.ranges.max = kParameterRanges[5].max;
            break;
        case kParameter__:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[6];
            param.unit = kParameterUnits[6];
            param.symbol = kParameterSymbols[6];
            param.shortName = "";
            param.ranges.def = kParameterRanges[6].def;
            param.ranges.min = kParameterRanges[6].min;
            param.ranges.max = kParameterRanges[6].max;
            break;
        case kParameter__:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[7];
            param.unit = kParameterUnits[7];
            param.symbol = kParameterSymbols[7];
            param.shortName = "";
            param.ranges.def = kParameterRanges[7].def;
            param.ranges.min = kParameterRanges[7].min;
            param.ranges.max = kParameterRanges[7].max;
            break;
        case kParameter__:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[8];
            param.unit = kParameterUnits[8];
            param.symbol = kParameterSymbols[8];
            param.shortName = "";
            param.ranges.def = kParameterRanges[8].def;
            param.ranges.min = kParameterRanges[8].min;
            param.ranges.max = kParameterRanges[8].max;
            break;
        case kParameter__0:
            param.hints = kParameterIsAutomatable
            
            
                |kParameterIsBoolean
            
            
                |kParameterIsInteger
            
            
            ;
            param.name = kParameterNames[9];
            param.unit = kParameterUnits[9];
            param.symbol = kParameterSymbols[9];
            param.shortName = "";
            param.ranges.def = kParameterRanges[9].def;
            param.ranges.min = kParameterRanges[9].min;
            param.ranges.max = kParameterRanges[9].max;
            break;
        case kParameter__1:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[10];
            param.unit = kParameterUnits[10];
            param.symbol = kParameterSymbols[10];
            param.shortName = "";
            param.ranges.def = kParameterRanges[10].def;
            param.ranges.min = kParameterRanges[10].min;
            param.ranges.max = kParameterRanges[10].max;
            break;
        case kParameter__2:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[11];
            param.unit = kParameterUnits[11];
            param.symbol = kParameterSymbols[11];
            param.shortName = "";
            param.ranges.def = kParameterRanges[11].def;
            param.ranges.min = kParameterRanges[11].min;
            param.ranges.max = kParameterRanges[11].max;
            break;
        case kParameter__3:
            param.hints = kParameterIsAutomatable
            
            
            
            
                |kParameterIsLogarithmic
            
            ;
            param.name = kParameterNames[12];
            param.unit = kParameterUnits[12];
            param.symbol = kParameterSymbols[12];
            param.shortName = "";
            param.ranges.def = kParameterRanges[12].def;
            param.ranges.min = kParameterRanges[12].min;
            param.ranges.max = kParameterRanges[12].max;
            break;
        
        case kParameter__4:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
                |kParameterIsInteger
            
            
            ;
            param.name = kParameterNames[13];
            param.unit = kParameterUnits[13];
            param.symbol = kParameterSymbols[13];
            param.shortName = "";
            param.ranges.def = kParameterRanges[13].def;
            param.ranges.min = kParameterRanges[13].min;
            param.ranges.max = kParameterRanges[13].max;
            break;
        case kParameter__5:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[14];
            param.unit = kParameterUnits[14];
            param.symbol = kParameterSymbols[14];
            param.shortName = "";
            param.ranges.def = kParameterRanges[14].def;
            param.ranges.min = kParameterRanges[14].min;
            param.ranges.max = kParameterRanges[14].max;
            break;
        case kParameter__6:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[15];
            param.unit = kParameterUnits[15];
            param.symbol = kParameterSymbols[15];
            param.shortName = "";
            param.ranges.def = kParameterRanges[15].def;
            param.ranges.min = kParameterRanges[15].min;
            param.ranges.max = kParameterRanges[15].max;
            break;
        case kParameter__7:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[16];
            param.unit = kParameterUnits[16];
            param.symbol = kParameterSymbols[16];
            param.shortName = "";
            param.ranges.def = kParameterRanges[16].def;
            param.ranges.min = kParameterRanges[16].min;
            param.ranges.max = kParameterRanges[16].max;
            break;
        case kParameter__8:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[17];
            param.unit = kParameterUnits[17];
            param.symbol = kParameterSymbols[17];
            param.shortName = "";
            param.ranges.def = kParameterRanges[17].def;
            param.ranges.min = kParameterRanges[17].min;
            param.ranges.max = kParameterRanges[17].max;
            break;
        case kParameter__9:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[18];
            param.unit = kParameterUnits[18];
            param.symbol = kParameterSymbols[18];
            param.shortName = "";
            param.ranges.def = kParameterRanges[18].def;
            param.ranges.min = kParameterRanges[18].min;
            param.ranges.max = kParameterRanges[18].max;
            break;
        case kParameter__0:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[19];
            param.unit = kParameterUnits[19];
            param.symbol = kParameterSymbols[19];
            param.shortName = "";
            param.ranges.def = kParameterRanges[19].def;
            param.ranges.min = kParameterRanges[19].min;
            param.ranges.max = kParameterRanges[19].max;
            break;
        case kParameter__1:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[20];
            param.unit = kParameterUnits[20];
            param.symbol = kParameterSymbols[20];
            param.shortName = "";
            param.ranges.def = kParameterRanges[20].def;
            param.ranges.min = kParameterRanges[20].min;
            param.ranges.max = kParameterRanges[20].max;
            break;
        case kParameter__2:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[21];
            param.unit = kParameterUnits[21];
            param.symbol = kParameterSymbols[21];
            param.shortName = "";
            param.ranges.def = kParameterRanges[21].def;
            param.ranges.min = kParameterRanges[21].min;
            param.ranges.max = kParameterRanges[21].max;
            break;
        case kParameter_spectral_ballancer_gain_band__0:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[22];
            param.unit = kParameterUnits[22];
            param.symbol = kParameterSymbols[22];
            param.shortName = "";
            param.ranges.def = kParameterRanges[22].def;
            param.ranges.min = kParameterRanges[22].min;
            param.ranges.max = kParameterRanges[22].max;
            break;
        case kParameter_spectral_ballancer_gain_band__1:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[23];
            param.unit = kParameterUnits[23];
            param.symbol = kParameterSymbols[23];
            param.shortName = "";
            param.ranges.def = kParameterRanges[23].def;
            param.ranges.min = kParameterRanges[23].min;
            param.ranges.max = kParameterRanges[23].max;
            break;
        case kParameter_spectral_ballancer_gain_band__2:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[24];
            param.unit = kParameterUnits[24];
            param.symbol = kParameterSymbols[24];
            param.shortName = "";
            param.ranges.def = kParameterRanges[24].def;
            param.ranges.min = kParameterRanges[24].min;
            param.ranges.max = kParameterRanges[24].max;
            break;
        case kParameter_spectral_ballancer_gain_band__3:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[25];
            param.unit = kParameterUnits[25];
            param.symbol = kParameterSymbols[25];
            param.shortName = "";
            param.ranges.def = kParameterRanges[25].def;
            param.ranges.min = kParameterRanges[25].min;
            param.ranges.max = kParameterRanges[25].max;
            break;
        case kParameter_spectral_ballancer_gain_band__4:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[26];
            param.unit = kParameterUnits[26];
            param.symbol = kParameterSymbols[26];
            param.shortName = "";
            param.ranges.def = kParameterRanges[26].def;
            param.ranges.min = kParameterRanges[26].min;
            param.ranges.max = kParameterRanges[26].max;
            break;
        case kParameter_spectral_ballancer_gain_band__5:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[27];
            param.unit = kParameterUnits[27];
            param.symbol = kParameterSymbols[27];
            param.shortName = "";
            param.ranges.def = kParameterRanges[27].def;
            param.ranges.min = kParameterRanges[27].min;
            param.ranges.max = kParameterRanges[27].max;
            break;
        case kParameter_spectral_ballancer_gain_band__6:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[28];
            param.unit = kParameterUnits[28];
            param.symbol = kParameterSymbols[28];
            param.shortName = "";
            param.ranges.def = kParameterRanges[28].def;
            param.ranges.min = kParameterRanges[28].min;
            param.ranges.max = kParameterRanges[28].max;
            break;
        case kParameter_spectral_ballancer_gain_band__7:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[29];
            param.unit = kParameterUnits[29];
            param.symbol = kParameterSymbols[29];
            param.shortName = "";
            param.ranges.def = kParameterRanges[29].def;
            param.ranges.min = kParameterRanges[29].min;
            param.ranges.max = kParameterRanges[29].max;
            break;
        case kParameter__1:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[30];
            param.unit = kParameterUnits[30];
            param.symbol = kParameterSymbols[30];
            param.shortName = "";
            param.ranges.def = kParameterRanges[30].def;
            param.ranges.min = kParameterRanges[30].min;
            param.ranges.max = kParameterRanges[30].max;
            break;
        case kParameter__2:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[31];
            param.unit = kParameterUnits[31];
            param.symbol = kParameterSymbols[31];
            param.shortName = "";
            param.ranges.def = kParameterRanges[31].def;
            param.ranges.min = kParameterRanges[31].min;
            param.ranges.max = kParameterRanges[31].max;
            break;
        case kParameter__3:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[32];
            param.unit = kParameterUnits[32];
            param.symbol = kParameterSymbols[32];
            param.shortName = "";
            param.ranges.def = kParameterRanges[32].def;
            param.ranges.min = kParameterRanges[32].min;
            param.ranges.max = kParameterRanges[32].max;
            break;
        case kParameter__4:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[33];
            param.unit = kParameterUnits[33];
            param.symbol = kParameterSymbols[33];
            param.shortName = "";
            param.ranges.def = kParameterRanges[33].def;
            param.ranges.min = kParameterRanges[33].min;
            param.ranges.max = kParameterRanges[33].max;
            break;
        case kParameter__5:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[34];
            param.unit = kParameterUnits[34];
            param.symbol = kParameterSymbols[34];
            param.shortName = "";
            param.ranges.def = kParameterRanges[34].def;
            param.ranges.min = kParameterRanges[34].min;
            param.ranges.max = kParameterRanges[34].max;
            break;
        case kParameter__6:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[35];
            param.unit = kParameterUnits[35];
            param.symbol = kParameterSymbols[35];
            param.shortName = "";
            param.ranges.def = kParameterRanges[35].def;
            param.ranges.min = kParameterRanges[35].min;
            param.ranges.max = kParameterRanges[35].max;
            break;
        case kParameter__7:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[36];
            param.unit = kParameterUnits[36];
            param.symbol = kParameterSymbols[36];
            param.shortName = "";
            param.ranges.def = kParameterRanges[36].def;
            param.ranges.min = kParameterRanges[36].min;
            param.ranges.max = kParameterRanges[36].max;
            break;
        case kParameter__8:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[37];
            param.unit = kParameterUnits[37];
            param.symbol = kParameterSymbols[37];
            param.shortName = "";
            param.ranges.def = kParameterRanges[37].def;
            param.ranges.min = kParameterRanges[37].min;
            param.ranges.max = kParameterRanges[37].max;
            break;
        case kParameter__9:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[38];
            param.unit = kParameterUnits[38];
            param.symbol = kParameterSymbols[38];
            param.shortName = "";
            param.ranges.def = kParameterRanges[38].def;
            param.ranges.min = kParameterRanges[38].min;
            param.ranges.max = kParameterRanges[38].max;
            break;
        case kParameter__0:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[39];
            param.unit = kParameterUnits[39];
            param.symbol = kParameterSymbols[39];
            param.shortName = "";
            param.ranges.def = kParameterRanges[39].def;
            param.ranges.min = kParameterRanges[39].min;
            param.ranges.max = kParameterRanges[39].max;
            break;
        case kParameter__1:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[40];
            param.unit = kParameterUnits[40];
            param.symbol = kParameterSymbols[40];
            param.shortName = "";
            param.ranges.def = kParameterRanges[40].def;
            param.ranges.min = kParameterRanges[40].min;
            param.ranges.max = kParameterRanges[40].max;
            break;
        case kParameter__2:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[41];
            param.unit = kParameterUnits[41];
            param.symbol = kParameterSymbols[41];
            param.shortName = "";
            param.ranges.def = kParameterRanges[41].def;
            param.ranges.min = kParameterRanges[41].min;
            param.ranges.max = kParameterRanges[41].max;
            break;
        case kParameter__3:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[42];
            param.unit = kParameterUnits[42];
            param.symbol = kParameterSymbols[42];
            param.shortName = "";
            param.ranges.def = kParameterRanges[42].def;
            param.ranges.min = kParameterRanges[42].min;
            param.ranges.max = kParameterRanges[42].max;
            break;
        case kParameter__4:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[43];
            param.unit = kParameterUnits[43];
            param.symbol = kParameterSymbols[43];
            param.shortName = "";
            param.ranges.def = kParameterRanges[43].def;
            param.ranges.min = kParameterRanges[43].min;
            param.ranges.max = kParameterRanges[43].max;
            break;
        case kParameter__5:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[44];
            param.unit = kParameterUnits[44];
            param.symbol = kParameterSymbols[44];
            param.shortName = "";
            param.ranges.def = kParameterRanges[44].def;
            param.ranges.min = kParameterRanges[44].min;
            param.ranges.max = kParameterRanges[44].max;
            break;
        case kParameter__6:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[45];
            param.unit = kParameterUnits[45];
            param.symbol = kParameterSymbols[45];
            param.shortName = "";
            param.ranges.def = kParameterRanges[45].def;
            param.ranges.min = kParameterRanges[45].min;
            param.ranges.max = kParameterRanges[45].max;
            break;
        case kParameter__7:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[46];
            param.unit = kParameterUnits[46];
            param.symbol = kParameterSymbols[46];
            param.shortName = "";
            param.ranges.def = kParameterRanges[46].def;
            param.ranges.min = kParameterRanges[46].min;
            param.ranges.max = kParameterRanges[46].max;
            break;
        case kParameter__8:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[47];
            param.unit = kParameterUnits[47];
            param.symbol = kParameterSymbols[47];
            param.shortName = "";
            param.ranges.def = kParameterRanges[47].def;
            param.ranges.min = kParameterRanges[47].min;
            param.ranges.max = kParameterRanges[47].max;
            break;
        case kParameter__9:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[48];
            param.unit = kParameterUnits[48];
            param.symbol = kParameterSymbols[48];
            param.shortName = "";
            param.ranges.def = kParameterRanges[48].def;
            param.ranges.min = kParameterRanges[48].min;
            param.ranges.max = kParameterRanges[48].max;
            break;
        
        }
    }

   /* -----------------------------------------------------------------------------------------------------------------
    * Internal data */

    float getParameterValue(const uint32_t index) const override
    {
        switch (index)
        {
        case kParameter_timbre_strength:
            return dsp->fVslider3;
        case kParameter__:
            return dsp->fVslider4;
        case kParameter__:
            return dsp->fVslider5;
        case kParameter__:
            return dsp->fVslider6;
        case kParameter__:
            return dsp->fVslider7;
        case kParameter__:
            return dsp->fVslider8;
        case kParameter__:
            return dsp->fVslider9;
        case kParameter__:
            return dsp->fVslider10;
        case kParameter__:
            return dsp->fVslider11;
        case kParameter__0:
            return dsp->fCheckbox0;
        case kParameter__1:
            return dsp->fVslider1;
        case kParameter__2:
            return dsp->fVslider0;
        case kParameter__3:
            return dsp->fVslider2;
        case kParameter__4:
            return dsp->fVbargraph4;
        case kParameter__5:
            return dsp->fVbargraph3;
        case kParameter__6:
            return dsp->fVbargraph6;
        case kParameter__7:
            return dsp->fVbargraph8;
        case kParameter__8:
            return dsp->fVbargraph10;
        case kParameter__9:
            return dsp->fVbargraph12;
        case kParameter__0:
            return dsp->fVbargraph14;
        case kParameter__1:
            return dsp->fVbargraph16;
        case kParameter__2:
            return dsp->fVbargraph18;
        case kParameter_spectral_ballancer_gain_band__0:
            return dsp->fVbargraph5;
        case kParameter_spectral_ballancer_gain_band__1:
            return dsp->fVbargraph7;
        case kParameter_spectral_ballancer_gain_band__2:
            return dsp->fVbargraph9;
        case kParameter_spectral_ballancer_gain_band__3:
            return dsp->fVbargraph11;
        case kParameter_spectral_ballancer_gain_band__4:
            return dsp->fVbargraph13;
        case kParameter_spectral_ballancer_gain_band__5:
            return dsp->fVbargraph15;
        case kParameter_spectral_ballancer_gain_band__6:
            return dsp->fVbargraph17;
        case kParameter_spectral_ballancer_gain_band__7:
            return dsp->fVbargraph19;
        case kParameter__1:
            return dsp->fVbargraph1;
        case kParameter__2:
            return dsp->fVbargraph2;
        case kParameter__3:
            return dsp->fVbargraph0;
        case kParameter__4:
            return dsp->fVbargraph20;
        case kParameter__5:
            return dsp->fVbargraph22;
        case kParameter__6:
            return dsp->fVbargraph24;
        case kParameter__7:
            return dsp->fVbargraph26;
        case kParameter__8:
            return dsp->fVbargraph28;
        case kParameter__9:
            return dsp->fVbargraph30;
        case kParameter__0:
            return dsp->fVbargraph32;
        case kParameter__1:
            return dsp->fVbargraph34;
        case kParameter__2:
            return dsp->fVbargraph21;
        case kParameter__3:
            return dsp->fVbargraph23;
        case kParameter__4:
            return dsp->fVbargraph25;
        case kParameter__5:
            return dsp->fVbargraph27;
        case kParameter__6:
            return dsp->fVbargraph29;
        case kParameter__7:
            return dsp->fVbargraph31;
        case kParameter__8:
            return dsp->fVbargraph33;
        case kParameter__9:
            return dsp->fVbargraph35;
        
        default:
            return 0.0f;
        }
    }

    void setParameterValue(const uint32_t index, const float value) override
    {
        switch (index)
        {
        case kParameter_timbre_strength:
            dsp->fVslider3 = value;
            break;
        case kParameter__:
            dsp->fVslider4 = value;
            break;
        case kParameter__:
            dsp->fVslider5 = value;
            break;
        case kParameter__:
            dsp->fVslider6 = value;
            break;
        case kParameter__:
            dsp->fVslider7 = value;
            break;
        case kParameter__:
            dsp->fVslider8 = value;
            break;
        case kParameter__:
            dsp->fVslider9 = value;
            break;
        case kParameter__:
            dsp->fVslider10 = value;
            break;
        case kParameter__:
            dsp->fVslider11 = value;
            break;
        case kParameter__0:
            dsp->fCheckbox0 = value;
            break;
        case kParameter__1:
            dsp->fVslider1 = value;
            break;
        case kParameter__2:
            dsp->fVslider0 = value;
            break;
        case kParameter__3:
            dsp->fVslider2 = value;
            break;
        
        }
    }

   /* -----------------------------------------------------------------------------------------------------------------
    * Audio/MIDI Processing */

    void run(const float** const inputs, float** const outputs, const uint32_t frames) override
    {
        dsp->compute(frames, const_cast<float**>(inputs), outputs);
    }

    void sampleRateChanged(const double newSampleRate) override
    {
        // retrieve parameter info first
        float params[13] = {
            dsp->fVslider3,
            dsp->fVslider4,
            dsp->fVslider5,
            dsp->fVslider6,
            dsp->fVslider7,
            dsp->fVslider8,
            dsp->fVslider9,
            dsp->fVslider10,
            dsp->fVslider11,
            dsp->fCheckbox0,
            dsp->fVslider1,
            dsp->fVslider0,
            dsp->fVslider2,
            
        };

        // tell dsp to change sample rate
        dsp->init(newSampleRate);

        // set parameters back, which have been reset in the dsp
        dsp->fVslider3 = params[0];
        dsp->fVslider4 = params[1];
        dsp->fVslider5 = params[2];
        dsp->fVslider6 = params[3];
        dsp->fVslider7 = params[4];
        dsp->fVslider8 = params[5];
        dsp->fVslider9 = params[6];
        dsp->fVslider10 = params[7];
        dsp->fVslider11 = params[8];
        dsp->fCheckbox0 = params[9];
        dsp->fVslider1 = params[10];
        dsp->fVslider0 = params[11];
        dsp->fVslider2 = params[12];
        
    }

    // ----------------------------------------------------------------------------------------------------------------

    DISTRHO_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(FaustGeneratedPlugin)
};

// --------------------------------------------------------------------------------------------------------------------

#if 0


Plugin* createPlugin()
{
    return new FaustGeneratedPlugin();
}


#endif

// --------------------------------------------------------------------------------------------------------------------

END_NAMESPACE_DISTRHO
