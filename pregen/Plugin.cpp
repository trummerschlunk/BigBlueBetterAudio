
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
	FAUSTFLOAT fVslider0;
	int fSampleRate;
	float fConst0;
	int iConst1;
	float fConst2;
	int iConst3;
	float fConst4;
	float fConst5;
	float fConst6;
	float fConst7;
	float fConst8;
	FAUSTFLOAT fVslider1;
	float fConst9;
	float fVec0[2];
	float fRec16[2];
	float fRec15[3];
	float fVec1[2];
	float fConst10;
	float fConst11;
	float fRec14[2];
	float fRec13[3];
	float fRec17[2];
	int IOTA0;
	float fVec2[8192];
	int iConst12;
	float fRec12[2];
	float fRec19[2];
	float fVec3[8192];
	int iConst13;
	float fRec18[2];
	float fRec21[2];
	float fVec4[8192];
	int iConst14;
	float fRec20[2];
	float fRec23[2];
	float fVec5[8192];
	int iConst15;
	float fRec22[2];
	float fRec25[2];
	float fVec6[8192];
	int iConst16;
	float fRec24[2];
	float fRec27[2];
	float fVec7[8192];
	int iConst17;
	float fRec26[2];
	float fRec29[2];
	float fVec8[8192];
	int iConst18;
	float fRec28[2];
	float fRec31[2];
	float fVec9[8192];
	int iConst19;
	float fRec30[2];
	float fVec10[2048];
	int iConst20;
	float fRec10[2];
	float fVec11[2048];
	int iConst21;
	float fRec8[2];
	float fVec12[2048];
	int iConst22;
	float fRec6[2];
	float fVec13[1024];
	int iConst23;
	float fRec4[2];
	float fConst24;
	float fConst25;
	float fConst26;
	int iConst27;
	float fConst28;
	float fConst29;
	float fRec42[2];
	int iConst30;
	float fVec14[3];
	int iConst31;
	float fVec15[5];
	int iConst32;
	int iConst33;
	float fVec16[12];
	int iConst34;
	int iConst35;
	float fVec17[32];
	int iConst36;
	int iConst37;
	float fVec18[64];
	int iConst38;
	int iConst39;
	float fVec19[128];
	int iConst40;
	int iConst41;
	float fVec20[256];
	int iConst42;
	int iConst43;
	float fVec21[512];
	int iConst44;
	int iConst45;
	float fVec22[1024];
	int iConst46;
	int iConst47;
	float fVec23[2048];
	int iConst48;
	int iConst49;
	float fVec24[4096];
	int iConst50;
	int iConst51;
	float fVec25[8192];
	int iConst52;
	int iConst53;
	float fVec26[16384];
	int iConst54;
	int iConst55;
	float fVec27[32768];
	int iConst56;
	int iConst57;
	float fVec28[65536];
	int iConst58;
	int iConst59;
	float fVec29[131072];
	int iConst60;
	int iConst61;
	float fVec30[262144];
	int iConst62;
	int iConst63;
	float fVec31[524288];
	int iConst64;
	float fConst65;
	float fRec41[2];
	FAUSTFLOAT fVbargraph0;
	FAUSTFLOAT fVslider2;
	float fConst66;
	float fConst67;
	float fConst68;
	float fRec54[2];
	float fConst69;
	float fRec55[2];
	float fConst70;
	float fRec49[2];
	float fRec50[2];
	float fConst71;
	float fConst72;
	float fConst73;
	float fRec46[2];
	float fConst74;
	float fRec47[2];
	float fRec43[2];
	float fRec44[2];
	float fVec32[2];
	int iConst75;
	float fVec33[3];
	int iConst76;
	float fVec34[5];
	int iConst77;
	int iConst78;
	float fVec35[12];
	int iConst79;
	int iConst80;
	float fVec36[32];
	int iConst81;
	int iConst82;
	float fVec37[64];
	int iConst83;
	int iConst84;
	float fVec38[128];
	int iConst85;
	int iConst86;
	float fVec39[256];
	int iConst87;
	int iConst88;
	float fVec40[512];
	int iConst89;
	float fConst90;
	float fConst91;
	float fRec40[2];
	FAUSTFLOAT fVbargraph1;
	float fConst92;
	int iConst93;
	float fConst94;
	float fConst95;
	float fConst96;
	float fConst97;
	float fConst98;
	float fConst99;
	float fConst100;
	float fConst101;
	float fVec41[2];
	float fConst102;
	float fConst103;
	float fConst104;
	float fRec62[2];
	float fRec61[2];
	float fConst105;
	float fConst106;
	float fConst107;
	float fConst108;
	float fConst109;
	float fVec42[2];
	float fConst110;
	float fRec60[2];
	float fRec59[2];
	float fVec43[2];
	float fVec44[3];
	int iConst111;
	int iConst112;
	float fVec45[5];
	int iConst113;
	int iConst114;
	float fVec46[12];
	int iConst115;
	int iConst116;
	float fVec47[32];
	int iConst117;
	int iConst118;
	float fVec48[64];
	int iConst119;
	int iConst120;
	float fVec49[128];
	int iConst121;
	int iConst122;
	float fVec50[256];
	int iConst123;
	int iConst124;
	float fVec51[512];
	int iConst125;
	float fConst126;
	float fRec35[2];
	float fRec36[2];
	float fRec33[2];
	FAUSTFLOAT fVbargraph2;
	float fRec32[2];
	float fRec3[3];
	float fVec52[2];
	float fVec53[3];
	float fVec54[5];
	float fVec55[12];
	float fVec56[32];
	float fVec57[64];
	float fVec58[128];
	float fVec59[256];
	float fVec60[512];
	float fConst127;
	float fRec2[2];
	FAUSTFLOAT fVbargraph3;
	float fConst128;
	float fConst129;
	float fConst130;
	float fRec74[2];
	float fConst131;
	float fRec75[2];
	float fConst132;
	float fRec70[2];
	float fRec71[2];
	float fConst133;
	float fConst134;
	float fConst135;
	float fRec85[2];
	float fConst136;
	float fRec86[2];
	float fConst137;
	float fConst138;
	float fConst139;
	float fConst140;
	float fRec82[2];
	float fConst141;
	float fRec83[2];
	float fConst142;
	float fRec88[2];
	float fRec89[2];
	float fConst143;
	float fConst144;
	float fConst145;
	float fConst146;
	float fRec78[2];
	float fConst147;
	float fRec79[2];
	float fConst148;
	float fRec91[2];
	float fRec92[2];
	float fConst149;
	float fConst150;
	float fConst151;
	float fRec99[2];
	float fConst152;
	float fRec100[2];
	float fConst153;
	float fConst154;
	float fConst155;
	float fConst156;
	float fRec95[2];
	float fConst157;
	float fRec96[2];
	float fConst158;
	float fRec102[2];
	float fRec103[2];
	float fVec61[2];
	float fConst159;
	float fConst160;
	float fConst161;
	float fVec62[2];
	float fRec69[2];
	float fRec68[2];
	float fVec63[2];
	float fRec67[2];
	float fRec66[2];
	float fConst162;
	float fConst163;
	float fRec65[2];
	float fRec64[2];
	float fVec64[2];
	float fRec111[2];
	float fRec110[2];
	float fVec65[2];
	float fRec109[2];
	float fRec108[2];
	float fRec107[2];
	float fRec106[2];
	FAUSTFLOAT fVbargraph4;
	FAUSTFLOAT fVslider3;
	float fConst164;
	float fRec63[2];
	FAUSTFLOAT fVslider4;
	FAUSTFLOAT fVbargraph5;
	float fVec66[2];
	int iConst165;
	float fVec67[3];
	int iConst166;
	float fVec68[5];
	int iConst167;
	int iConst168;
	float fVec69[12];
	int iConst169;
	int iConst170;
	float fVec70[32];
	int iConst171;
	int iConst172;
	float fVec71[64];
	int iConst173;
	int iConst174;
	float fVec72[128];
	int iConst175;
	int iConst176;
	float fVec73[256];
	int iConst177;
	int iConst178;
	float fVec74[512];
	int iConst179;
	int iConst180;
	float fVec75[512];
	int iConst181;
	float fRec1[2];
	float fRec143[2];
	float fRec144[2];
	float fRec140[2];
	float fRec141[2];
	float fRec137[2];
	float fRec138[2];
	float fRec146[2];
	float fRec147[2];
	float fRec133[2];
	float fRec134[2];
	float fRec130[2];
	float fRec131[2];
	float fRec127[2];
	float fRec128[2];
	float fRec123[2];
	float fRec124[2];
	float fRec120[2];
	float fRec121[2];
	float fRec122[2];
	float fVec76[2];
	float fRec119[2];
	float fRec118[2];
	float fVec77[2];
	float fRec117[2];
	float fRec116[2];
	float fRec115[2];
	float fRec114[2];
	FAUSTFLOAT fVbargraph6;
	FAUSTFLOAT fVslider5;
	float fConst182;
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
	float fRec112[2];
	float fConst183;
	float fRec157[2];
	float fRec158[2];
	float fVec88[2];
	float fVec89[2];
	float fRec156[2];
	float fRec155[2];
	float fVec90[2];
	float fRec154[2];
	float fRec153[2];
	float fRec152[2];
	float fRec151[2];
	FAUSTFLOAT fVbargraph8;
	FAUSTFLOAT fVslider6;
	float fConst184;
	float fRec150[2];
	FAUSTFLOAT fVbargraph9;
	float fVec91[2];
	float fVec92[3];
	float fVec93[5];
	float fVec94[12];
	float fVec95[32];
	float fVec96[64];
	float fVec97[128];
	float fVec98[256];
	float fVec99[512];
	float fVec100[512];
	float fRec149[2];
	float fConst185;
	float fRec179[2];
	float fRec180[2];
	float fRec176[2];
	float fRec177[2];
	float fRec172[2];
	float fRec173[2];
	float fRec169[2];
	float fRec170[2];
	float fRec171[2];
	float fVec101[2];
	float fRec168[2];
	float fRec167[2];
	float fVec102[2];
	float fRec166[2];
	float fRec165[2];
	float fRec164[2];
	float fRec163[2];
	FAUSTFLOAT fVbargraph10;
	FAUSTFLOAT fVslider7;
	float fConst186;
	float fRec162[2];
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
	float fRec161[2];
	float fConst187;
	float fRec191[2];
	float fRec192[2];
	float fVec113[2];
	float fVec114[2];
	float fRec190[2];
	float fRec189[2];
	float fVec115[2];
	float fRec188[2];
	float fRec187[2];
	float fRec186[2];
	float fRec185[2];
	FAUSTFLOAT fVbargraph12;
	FAUSTFLOAT fVslider8;
	float fConst188;
	float fRec184[2];
	FAUSTFLOAT fVbargraph13;
	float fVec116[2];
	float fVec117[3];
	float fVec118[5];
	float fVec119[12];
	float fVec120[32];
	float fVec121[64];
	float fVec122[128];
	float fVec123[256];
	float fVec124[512];
	float fVec125[512];
	float fRec183[2];
	float fRec213[2];
	float fRec214[2];
	float fRec210[2];
	float fRec211[2];
	float fRec206[2];
	float fRec207[2];
	float fRec203[2];
	float fRec204[2];
	float fRec205[2];
	float fVec126[2];
	float fRec202[2];
	float fRec201[2];
	float fVec127[2];
	float fRec200[2];
	float fRec199[2];
	float fRec198[2];
	float fRec197[2];
	FAUSTFLOAT fVbargraph14;
	FAUSTFLOAT fVslider9;
	float fRec196[2];
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
	float fRec195[2];
	float fConst189;
	float fRec224[2];
	float fRec225[2];
	float fVec138[2];
	float fVec139[2];
	float fRec223[2];
	float fRec222[2];
	float fVec140[2];
	float fRec221[2];
	float fRec220[2];
	float fRec219[2];
	float fRec218[2];
	FAUSTFLOAT fVbargraph16;
	FAUSTFLOAT fVslider10;
	float fConst190;
	float fRec217[2];
	FAUSTFLOAT fVbargraph17;
	float fVec141[2];
	float fVec142[3];
	float fVec143[5];
	float fVec144[12];
	float fVec145[32];
	float fVec146[64];
	float fVec147[128];
	float fVec148[256];
	float fVec149[512];
	float fVec150[512];
	float fRec216[2];
	float fConst191;
	float fRec236[2];
	float fRec237[2];
	float fRec238[2];
	float fVec151[2];
	float fRec235[2];
	float fRec234[2];
	float fVec152[2];
	float fRec233[2];
	float fRec232[2];
	float fRec231[2];
	float fRec230[2];
	FAUSTFLOAT fVbargraph18;
	FAUSTFLOAT fVslider11;
	float fConst192;
	float fRec229[2];
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
	float fRec228[2];
	FAUSTFLOAT fVbargraph20;
	float fRec0[2];
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
		m->declare("basics.lib/version", "1.21.0");
		m->declare("compile_options", "-a /tmp/tmpznqc93et.cpp -lang cpp -ct 1 -es 1 -mcd 16 -mdd 1024 -mdy 33 -single -ftz 0");
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
		m->declare("filters.lib/lowpass0_highpass1", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
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
		m->declare("filters.lib/version", "1.7.1");
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
		m->declare("reverbs.lib/version", "1.4.0");
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
		iConst1 = int(std::floor(0.001f * fConst0)) % 2;
		fConst2 = 0.01f * fConst0;
		iConst3 = int(std::floor(fConst2)) % 2;
		fConst4 = std::tan(69115.04f / fConst0);
		fConst5 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst4));
		fConst6 = 1.0f / fConst4;
		fConst7 = (fConst6 + -1.0f) / fConst4 + 1.0f;
		fConst8 = 1.0f / ((fConst6 + 1.0f) / fConst4 + 1.0f);
		fConst9 = 3.1415927f / fConst0;
		fConst10 = 1.0f - fConst6;
		fConst11 = 1.0f / (fConst6 + 1.0f);
		iConst12 = std::max<int>(0, int(0.025306122f * fConst0) + 4);
		iConst13 = std::max<int>(0, int(0.026938776f * fConst0) + 4);
		iConst14 = std::max<int>(0, int(0.028956916f * fConst0) + 4);
		iConst15 = std::max<int>(0, int(0.030748298f * fConst0) + 4);
		iConst16 = std::max<int>(0, int(0.0322449f * fConst0) + 4);
		iConst17 = std::max<int>(0, int(0.033809524f * fConst0) + 4);
		iConst18 = std::max<int>(0, int(0.035306122f * fConst0) + 4);
		iConst19 = std::max<int>(0, int(0.036666665f * fConst0) + 4);
		iConst20 = std::min<int>(1024, std::max<int>(0, int(0.0126077095f * fConst0) + 4));
		iConst21 = std::min<int>(1024, std::max<int>(0, int(fConst2) + 4));
		iConst22 = std::min<int>(1024, std::max<int>(0, int(0.0077324263f * fConst0) + 4));
		iConst23 = std::min<int>(1024, std::max<int>(0, int(0.0051020407f * fConst0) + 4));
		fConst24 = 0.125f * fConst0;
		fConst25 = 9.964212e-07f * fConst0;
		fConst26 = std::exp(-(1.0f / fConst0));
		iConst27 = int(std::floor(3.0f * fConst0)) % 2;
		fConst28 = std::exp(-(1e+02f / fConst0));
		fConst29 = 1.0f - fConst28;
		iConst30 = int(std::floor(1.5f * fConst0)) % 2;
		iConst31 = int(std::floor(0.75f * fConst0)) % 2;
		iConst32 = iConst27 + 2 * iConst30;
		iConst33 = int(std::floor(0.375f * fConst0)) % 2;
		iConst34 = iConst32 + 4 * iConst31;
		iConst35 = int(std::floor(0.1875f * fConst0)) % 2;
		iConst36 = iConst34 + 8 * iConst33;
		iConst37 = int(std::floor(0.09375f * fConst0)) % 2;
		iConst38 = iConst36 + 16 * iConst35;
		iConst39 = int(std::floor(0.046875f * fConst0)) % 2;
		iConst40 = iConst38 + 32 * iConst37;
		iConst41 = int(std::floor(0.0234375f * fConst0)) % 2;
		iConst42 = iConst40 + 64 * iConst39;
		iConst43 = int(std::floor(0.01171875f * fConst0)) % 2;
		iConst44 = iConst42 + 128 * iConst41;
		iConst45 = int(std::floor(0.005859375f * fConst0)) % 2;
		iConst46 = iConst44 + 256 * iConst43;
		iConst47 = int(std::floor(0.0029296875f * fConst0)) % 2;
		iConst48 = iConst46 + 512 * iConst45;
		iConst49 = int(std::floor(0.0014648438f * fConst0)) % 2;
		iConst50 = iConst48 + 1024 * iConst47;
		iConst51 = int(std::floor(0.0007324219f * fConst0)) % 2;
		iConst52 = iConst50 + 2048 * iConst49;
		iConst53 = int(std::floor(0.00036621094f * fConst0)) % 2;
		iConst54 = iConst52 + 4096 * iConst51;
		iConst55 = int(std::floor(0.00018310547f * fConst0)) % 2;
		iConst56 = iConst54 + 8192 * iConst53;
		iConst57 = int(std::floor(9.1552734e-05f * fConst0)) % 2;
		iConst58 = iConst56 + 16384 * iConst55;
		iConst59 = int(std::floor(4.5776367e-05f * fConst0)) % 2;
		iConst60 = iConst58 + 32768 * iConst57;
		iConst61 = int(std::floor(2.2888184e-05f * fConst0)) % 2;
		iConst62 = iConst60 + 65536 * iConst59;
		iConst63 = int(std::floor(1.1444092e-05f * fConst0)) % 2;
		iConst64 = iConst62 + 131072 * iConst61;
		fConst65 = 1.0f - fConst26;
		fConst66 = std::tan(879.64594f / fConst0);
		fConst67 = fConst66 * (fConst66 + 1.4142135f) + 1.0f;
		fConst68 = 2.0f / fConst67;
		fConst69 = fConst66 / fConst67;
		fConst70 = 1.0f / fConst67;
		fConst71 = std::tan(1256.6371f / fConst0);
		fConst72 = fConst71 * (fConst71 + 1.4142135f) + 1.0f;
		fConst73 = 2.0f / fConst72;
		fConst74 = fConst71 / fConst72;
		iConst75 = int(std::floor(0.005f * fConst0)) % 2;
		iConst76 = int(std::floor(0.0025f * fConst0)) % 2;
		iConst77 = iConst3 + 2 * iConst75;
		iConst78 = int(std::floor(0.00125f * fConst0)) % 2;
		iConst79 = iConst77 + 4 * iConst76;
		iConst80 = int(std::floor(0.000625f * fConst0)) % 2;
		iConst81 = iConst79 + 8 * iConst78;
		iConst82 = int(std::floor(0.0003125f * fConst0)) % 2;
		iConst83 = iConst81 + 16 * iConst80;
		iConst84 = int(std::floor(0.00015625f * fConst0)) % 2;
		iConst85 = iConst83 + 32 * iConst82;
		iConst86 = int(std::floor(7.8125e-05f * fConst0)) % 2;
		iConst87 = iConst85 + 64 * iConst84;
		iConst88 = int(std::floor(3.90625e-05f * fConst0)) % 2;
		iConst89 = iConst87 + 128 * iConst86;
		fConst90 = std::exp(-(5.0f / fConst0));
		fConst91 = std::exp(-(1e+03f / fConst0));
		fConst92 = std::rint(fConst2);
		iConst93 = int(std::floor(0.5f * fConst92)) % 2;
		fConst94 = std::tan(5283.415f / fConst0);
		fConst95 = 1.7803667f * fConst94;
		fConst96 = mydsp_faustpower2_f(fConst94);
		fConst97 = fConst96 + fConst95 + 1.5848527f;
		fConst98 = 2.0f * (fConst96 + -1.0f);
		fConst99 = fConst96 + (1.5848527f - fConst95);
		fConst100 = 1.4142135f * fConst94;
		fConst101 = fConst96 + (1.0f - fConst100);
		fConst102 = fConst96 + -1.5848527f;
		fConst103 = 2.0f * fConst102;
		fConst104 = 1.0f / (fConst96 + fConst100 + 1.0f);
		fConst105 = std::tan(119.806114f / fConst0);
		fConst106 = mydsp_faustpower2_f(fConst105);
		fConst107 = 1.0006541f * (fConst106 + -1.0f);
		fConst108 = 0.50032705f * (fConst106 + 1.0f);
		fConst109 = fConst108 - fConst105;
		fConst110 = 1.0f / (fConst105 + fConst108);
		iConst111 = int(std::floor(fConst92)) % 2;
		iConst112 = int(std::floor(0.25f * fConst92)) % 2;
		iConst113 = iConst111 + 2 * iConst93;
		iConst114 = int(std::floor(0.125f * fConst92)) % 2;
		iConst115 = iConst113 + 4 * iConst112;
		iConst116 = int(std::floor(0.0625f * fConst92)) % 2;
		iConst117 = iConst115 + 8 * iConst114;
		iConst118 = int(std::floor(0.03125f * fConst92)) % 2;
		iConst119 = iConst117 + 16 * iConst116;
		iConst120 = int(std::floor(0.015625f * fConst92)) % 2;
		iConst121 = iConst119 + 32 * iConst118;
		iConst122 = int(std::floor(0.0078125f * fConst92)) % 2;
		iConst123 = iConst121 + 64 * iConst120;
		iConst124 = int(std::floor(0.00390625f * fConst92)) % 2;
		iConst125 = iConst123 + 128 * iConst122;
		fConst126 = 1.0f / std::max<float>(fConst92, 1.1920929e-07f);
		fConst127 = std::exp(-(4e+01f / fConst0));
		fConst128 = std::tan(2513.2742f / fConst0);
		fConst129 = fConst128 * (fConst128 + 1.4142135f) + 1.0f;
		fConst130 = 2.0f / fConst129;
		fConst131 = fConst128 / fConst129;
		fConst132 = 1.0f / fConst129;
		fConst133 = std::tan(628.31854f / fConst0);
		fConst134 = fConst133 * (fConst133 + 1.4142135f) + 1.0f;
		fConst135 = 2.0f / fConst134;
		fConst136 = fConst133 / fConst134;
		fConst137 = 1.0f / fConst134;
		fConst138 = std::tan(314.15927f / fConst0);
		fConst139 = fConst138 * (fConst138 + 1.4142135f) + 1.0f;
		fConst140 = 2.0f / fConst139;
		fConst141 = fConst138 / fConst139;
		fConst142 = 1.0f / fConst139;
		fConst143 = 1.0f / fConst72;
		fConst144 = std::tan(10053.097f / fConst0);
		fConst145 = fConst144 * (fConst144 + 1.4142135f) + 1.0f;
		fConst146 = 2.0f / fConst145;
		fConst147 = fConst144 / fConst145;
		fConst148 = 1.0f / fConst145;
		fConst149 = std::tan(5026.5483f / fConst0);
		fConst150 = fConst149 * (fConst149 + 1.4142135f) + 1.0f;
		fConst151 = 2.0f / fConst150;
		fConst152 = fConst149 / fConst150;
		fConst153 = 1.0f / fConst150;
		fConst154 = std::tan(20106.193f / fConst0);
		fConst155 = fConst154 * (fConst154 + 1.4142135f) + 1.0f;
		fConst156 = 2.0f / fConst155;
		fConst157 = fConst154 / fConst155;
		fConst158 = 1.0f / fConst155;
		fConst159 = 3.9810717f * fConst97;
		fConst160 = 7.9621434f * fConst102;
		fConst161 = 3.9810717f * fConst99;
		fConst162 = std::exp(-(1e+01f / fConst0));
		fConst163 = 1.0f - fConst162;
		fConst164 = 1.0f - fConst127;
		iConst165 = int(std::floor(0.0005f * fConst0)) % 2;
		iConst166 = int(std::floor(0.00025f * fConst0)) % 2;
		iConst167 = iConst1 + 2 * iConst165;
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
		fConst182 = 1.0f - fConst90;
		fConst183 = std::exp(-(5.714286f / fConst0));
		fConst184 = 1.0f - fConst183;
		fConst185 = std::exp(-(6.6666665f / fConst0));
		fConst186 = 1.0f - fConst185;
		fConst187 = std::exp(-(8.0f / fConst0));
		fConst188 = 1.0f - fConst187;
		fConst189 = std::exp(-(13.333333f / fConst0));
		fConst190 = 1.0f - fConst189;
		fConst191 = std::exp(-(2e+01f / fConst0));
		fConst192 = 1.0f - fConst191;
	}
	
	FAUSTPP_VIRTUAL void instanceResetUserInterface() {
		fCheckbox0 = FAUSTFLOAT(0.0f);
		fVslider0 = FAUSTFLOAT(-23.0f);
		fVslider1 = FAUSTFLOAT(8e+01f);
		fVslider2 = FAUSTFLOAT(6.0f);
		fVslider3 = FAUSTFLOAT(-3.0f);
		fVslider4 = FAUSTFLOAT(5e+01f);
		fVslider5 = FAUSTFLOAT(-1e+01f);
		fVslider6 = FAUSTFLOAT(-5.0f);
		fVslider7 = FAUSTFLOAT(-5.0f);
		fVslider8 = FAUSTFLOAT(-8.0f);
		fVslider9 = FAUSTFLOAT(-9.0f);
		fVslider10 = FAUSTFLOAT(-1e+01f);
		fVslider11 = FAUSTFLOAT(-7.0f);
	}
	
	FAUSTPP_VIRTUAL void instanceClear() {
		for (int l0 = 0; l0 < 2; l0 = l0 + 1) {
			fVec0[l0] = 0.0f;
		}
		for (int l1 = 0; l1 < 2; l1 = l1 + 1) {
			fRec16[l1] = 0.0f;
		}
		for (int l2 = 0; l2 < 3; l2 = l2 + 1) {
			fRec15[l2] = 0.0f;
		}
		for (int l3 = 0; l3 < 2; l3 = l3 + 1) {
			fVec1[l3] = 0.0f;
		}
		for (int l4 = 0; l4 < 2; l4 = l4 + 1) {
			fRec14[l4] = 0.0f;
		}
		for (int l5 = 0; l5 < 3; l5 = l5 + 1) {
			fRec13[l5] = 0.0f;
		}
		for (int l6 = 0; l6 < 2; l6 = l6 + 1) {
			fRec17[l6] = 0.0f;
		}
		IOTA0 = 0;
		for (int l7 = 0; l7 < 8192; l7 = l7 + 1) {
			fVec2[l7] = 0.0f;
		}
		for (int l8 = 0; l8 < 2; l8 = l8 + 1) {
			fRec12[l8] = 0.0f;
		}
		for (int l9 = 0; l9 < 2; l9 = l9 + 1) {
			fRec19[l9] = 0.0f;
		}
		for (int l10 = 0; l10 < 8192; l10 = l10 + 1) {
			fVec3[l10] = 0.0f;
		}
		for (int l11 = 0; l11 < 2; l11 = l11 + 1) {
			fRec18[l11] = 0.0f;
		}
		for (int l12 = 0; l12 < 2; l12 = l12 + 1) {
			fRec21[l12] = 0.0f;
		}
		for (int l13 = 0; l13 < 8192; l13 = l13 + 1) {
			fVec4[l13] = 0.0f;
		}
		for (int l14 = 0; l14 < 2; l14 = l14 + 1) {
			fRec20[l14] = 0.0f;
		}
		for (int l15 = 0; l15 < 2; l15 = l15 + 1) {
			fRec23[l15] = 0.0f;
		}
		for (int l16 = 0; l16 < 8192; l16 = l16 + 1) {
			fVec5[l16] = 0.0f;
		}
		for (int l17 = 0; l17 < 2; l17 = l17 + 1) {
			fRec22[l17] = 0.0f;
		}
		for (int l18 = 0; l18 < 2; l18 = l18 + 1) {
			fRec25[l18] = 0.0f;
		}
		for (int l19 = 0; l19 < 8192; l19 = l19 + 1) {
			fVec6[l19] = 0.0f;
		}
		for (int l20 = 0; l20 < 2; l20 = l20 + 1) {
			fRec24[l20] = 0.0f;
		}
		for (int l21 = 0; l21 < 2; l21 = l21 + 1) {
			fRec27[l21] = 0.0f;
		}
		for (int l22 = 0; l22 < 8192; l22 = l22 + 1) {
			fVec7[l22] = 0.0f;
		}
		for (int l23 = 0; l23 < 2; l23 = l23 + 1) {
			fRec26[l23] = 0.0f;
		}
		for (int l24 = 0; l24 < 2; l24 = l24 + 1) {
			fRec29[l24] = 0.0f;
		}
		for (int l25 = 0; l25 < 8192; l25 = l25 + 1) {
			fVec8[l25] = 0.0f;
		}
		for (int l26 = 0; l26 < 2; l26 = l26 + 1) {
			fRec28[l26] = 0.0f;
		}
		for (int l27 = 0; l27 < 2; l27 = l27 + 1) {
			fRec31[l27] = 0.0f;
		}
		for (int l28 = 0; l28 < 8192; l28 = l28 + 1) {
			fVec9[l28] = 0.0f;
		}
		for (int l29 = 0; l29 < 2; l29 = l29 + 1) {
			fRec30[l29] = 0.0f;
		}
		for (int l30 = 0; l30 < 2048; l30 = l30 + 1) {
			fVec10[l30] = 0.0f;
		}
		for (int l31 = 0; l31 < 2; l31 = l31 + 1) {
			fRec10[l31] = 0.0f;
		}
		for (int l32 = 0; l32 < 2048; l32 = l32 + 1) {
			fVec11[l32] = 0.0f;
		}
		for (int l33 = 0; l33 < 2; l33 = l33 + 1) {
			fRec8[l33] = 0.0f;
		}
		for (int l34 = 0; l34 < 2048; l34 = l34 + 1) {
			fVec12[l34] = 0.0f;
		}
		for (int l35 = 0; l35 < 2; l35 = l35 + 1) {
			fRec6[l35] = 0.0f;
		}
		for (int l36 = 0; l36 < 1024; l36 = l36 + 1) {
			fVec13[l36] = 0.0f;
		}
		for (int l37 = 0; l37 < 2; l37 = l37 + 1) {
			fRec4[l37] = 0.0f;
		}
		for (int l38 = 0; l38 < 2; l38 = l38 + 1) {
			fRec42[l38] = 0.0f;
		}
		for (int l39 = 0; l39 < 3; l39 = l39 + 1) {
			fVec14[l39] = 0.0f;
		}
		for (int l40 = 0; l40 < 5; l40 = l40 + 1) {
			fVec15[l40] = 0.0f;
		}
		for (int l41 = 0; l41 < 12; l41 = l41 + 1) {
			fVec16[l41] = 0.0f;
		}
		for (int l42 = 0; l42 < 32; l42 = l42 + 1) {
			fVec17[l42] = 0.0f;
		}
		for (int l43 = 0; l43 < 64; l43 = l43 + 1) {
			fVec18[l43] = 0.0f;
		}
		for (int l44 = 0; l44 < 128; l44 = l44 + 1) {
			fVec19[l44] = 0.0f;
		}
		for (int l45 = 0; l45 < 256; l45 = l45 + 1) {
			fVec20[l45] = 0.0f;
		}
		for (int l46 = 0; l46 < 512; l46 = l46 + 1) {
			fVec21[l46] = 0.0f;
		}
		for (int l47 = 0; l47 < 1024; l47 = l47 + 1) {
			fVec22[l47] = 0.0f;
		}
		for (int l48 = 0; l48 < 2048; l48 = l48 + 1) {
			fVec23[l48] = 0.0f;
		}
		for (int l49 = 0; l49 < 4096; l49 = l49 + 1) {
			fVec24[l49] = 0.0f;
		}
		for (int l50 = 0; l50 < 8192; l50 = l50 + 1) {
			fVec25[l50] = 0.0f;
		}
		for (int l51 = 0; l51 < 16384; l51 = l51 + 1) {
			fVec26[l51] = 0.0f;
		}
		for (int l52 = 0; l52 < 32768; l52 = l52 + 1) {
			fVec27[l52] = 0.0f;
		}
		for (int l53 = 0; l53 < 65536; l53 = l53 + 1) {
			fVec28[l53] = 0.0f;
		}
		for (int l54 = 0; l54 < 131072; l54 = l54 + 1) {
			fVec29[l54] = 0.0f;
		}
		for (int l55 = 0; l55 < 262144; l55 = l55 + 1) {
			fVec30[l55] = 0.0f;
		}
		for (int l56 = 0; l56 < 524288; l56 = l56 + 1) {
			fVec31[l56] = 0.0f;
		}
		for (int l57 = 0; l57 < 2; l57 = l57 + 1) {
			fRec41[l57] = 0.0f;
		}
		for (int l58 = 0; l58 < 2; l58 = l58 + 1) {
			fRec54[l58] = 0.0f;
		}
		for (int l59 = 0; l59 < 2; l59 = l59 + 1) {
			fRec55[l59] = 0.0f;
		}
		for (int l60 = 0; l60 < 2; l60 = l60 + 1) {
			fRec49[l60] = 0.0f;
		}
		for (int l61 = 0; l61 < 2; l61 = l61 + 1) {
			fRec50[l61] = 0.0f;
		}
		for (int l62 = 0; l62 < 2; l62 = l62 + 1) {
			fRec46[l62] = 0.0f;
		}
		for (int l63 = 0; l63 < 2; l63 = l63 + 1) {
			fRec47[l63] = 0.0f;
		}
		for (int l64 = 0; l64 < 2; l64 = l64 + 1) {
			fRec43[l64] = 0.0f;
		}
		for (int l65 = 0; l65 < 2; l65 = l65 + 1) {
			fRec44[l65] = 0.0f;
		}
		for (int l66 = 0; l66 < 2; l66 = l66 + 1) {
			fVec32[l66] = 0.0f;
		}
		for (int l67 = 0; l67 < 3; l67 = l67 + 1) {
			fVec33[l67] = 0.0f;
		}
		for (int l68 = 0; l68 < 5; l68 = l68 + 1) {
			fVec34[l68] = 0.0f;
		}
		for (int l69 = 0; l69 < 12; l69 = l69 + 1) {
			fVec35[l69] = 0.0f;
		}
		for (int l70 = 0; l70 < 32; l70 = l70 + 1) {
			fVec36[l70] = 0.0f;
		}
		for (int l71 = 0; l71 < 64; l71 = l71 + 1) {
			fVec37[l71] = 0.0f;
		}
		for (int l72 = 0; l72 < 128; l72 = l72 + 1) {
			fVec38[l72] = 0.0f;
		}
		for (int l73 = 0; l73 < 256; l73 = l73 + 1) {
			fVec39[l73] = 0.0f;
		}
		for (int l74 = 0; l74 < 512; l74 = l74 + 1) {
			fVec40[l74] = 0.0f;
		}
		for (int l75 = 0; l75 < 2; l75 = l75 + 1) {
			fRec40[l75] = 0.0f;
		}
		for (int l76 = 0; l76 < 2; l76 = l76 + 1) {
			fVec41[l76] = 0.0f;
		}
		for (int l77 = 0; l77 < 2; l77 = l77 + 1) {
			fRec62[l77] = 0.0f;
		}
		for (int l78 = 0; l78 < 2; l78 = l78 + 1) {
			fRec61[l78] = 0.0f;
		}
		for (int l79 = 0; l79 < 2; l79 = l79 + 1) {
			fVec42[l79] = 0.0f;
		}
		for (int l80 = 0; l80 < 2; l80 = l80 + 1) {
			fRec60[l80] = 0.0f;
		}
		for (int l81 = 0; l81 < 2; l81 = l81 + 1) {
			fRec59[l81] = 0.0f;
		}
		for (int l82 = 0; l82 < 2; l82 = l82 + 1) {
			fVec43[l82] = 0.0f;
		}
		for (int l83 = 0; l83 < 3; l83 = l83 + 1) {
			fVec44[l83] = 0.0f;
		}
		for (int l84 = 0; l84 < 5; l84 = l84 + 1) {
			fVec45[l84] = 0.0f;
		}
		for (int l85 = 0; l85 < 12; l85 = l85 + 1) {
			fVec46[l85] = 0.0f;
		}
		for (int l86 = 0; l86 < 32; l86 = l86 + 1) {
			fVec47[l86] = 0.0f;
		}
		for (int l87 = 0; l87 < 64; l87 = l87 + 1) {
			fVec48[l87] = 0.0f;
		}
		for (int l88 = 0; l88 < 128; l88 = l88 + 1) {
			fVec49[l88] = 0.0f;
		}
		for (int l89 = 0; l89 < 256; l89 = l89 + 1) {
			fVec50[l89] = 0.0f;
		}
		for (int l90 = 0; l90 < 512; l90 = l90 + 1) {
			fVec51[l90] = 0.0f;
		}
		for (int l91 = 0; l91 < 2; l91 = l91 + 1) {
			fRec35[l91] = 0.0f;
		}
		for (int l92 = 0; l92 < 2; l92 = l92 + 1) {
			fRec36[l92] = 0.0f;
		}
		for (int l93 = 0; l93 < 2; l93 = l93 + 1) {
			fRec33[l93] = 0.0f;
		}
		for (int l94 = 0; l94 < 2; l94 = l94 + 1) {
			fRec32[l94] = 0.0f;
		}
		for (int l95 = 0; l95 < 3; l95 = l95 + 1) {
			fRec3[l95] = 0.0f;
		}
		for (int l96 = 0; l96 < 2; l96 = l96 + 1) {
			fVec52[l96] = 0.0f;
		}
		for (int l97 = 0; l97 < 3; l97 = l97 + 1) {
			fVec53[l97] = 0.0f;
		}
		for (int l98 = 0; l98 < 5; l98 = l98 + 1) {
			fVec54[l98] = 0.0f;
		}
		for (int l99 = 0; l99 < 12; l99 = l99 + 1) {
			fVec55[l99] = 0.0f;
		}
		for (int l100 = 0; l100 < 32; l100 = l100 + 1) {
			fVec56[l100] = 0.0f;
		}
		for (int l101 = 0; l101 < 64; l101 = l101 + 1) {
			fVec57[l101] = 0.0f;
		}
		for (int l102 = 0; l102 < 128; l102 = l102 + 1) {
			fVec58[l102] = 0.0f;
		}
		for (int l103 = 0; l103 < 256; l103 = l103 + 1) {
			fVec59[l103] = 0.0f;
		}
		for (int l104 = 0; l104 < 512; l104 = l104 + 1) {
			fVec60[l104] = 0.0f;
		}
		for (int l105 = 0; l105 < 2; l105 = l105 + 1) {
			fRec2[l105] = 0.0f;
		}
		for (int l106 = 0; l106 < 2; l106 = l106 + 1) {
			fRec74[l106] = 0.0f;
		}
		for (int l107 = 0; l107 < 2; l107 = l107 + 1) {
			fRec75[l107] = 0.0f;
		}
		for (int l108 = 0; l108 < 2; l108 = l108 + 1) {
			fRec70[l108] = 0.0f;
		}
		for (int l109 = 0; l109 < 2; l109 = l109 + 1) {
			fRec71[l109] = 0.0f;
		}
		for (int l110 = 0; l110 < 2; l110 = l110 + 1) {
			fRec85[l110] = 0.0f;
		}
		for (int l111 = 0; l111 < 2; l111 = l111 + 1) {
			fRec86[l111] = 0.0f;
		}
		for (int l112 = 0; l112 < 2; l112 = l112 + 1) {
			fRec82[l112] = 0.0f;
		}
		for (int l113 = 0; l113 < 2; l113 = l113 + 1) {
			fRec83[l113] = 0.0f;
		}
		for (int l114 = 0; l114 < 2; l114 = l114 + 1) {
			fRec88[l114] = 0.0f;
		}
		for (int l115 = 0; l115 < 2; l115 = l115 + 1) {
			fRec89[l115] = 0.0f;
		}
		for (int l116 = 0; l116 < 2; l116 = l116 + 1) {
			fRec78[l116] = 0.0f;
		}
		for (int l117 = 0; l117 < 2; l117 = l117 + 1) {
			fRec79[l117] = 0.0f;
		}
		for (int l118 = 0; l118 < 2; l118 = l118 + 1) {
			fRec91[l118] = 0.0f;
		}
		for (int l119 = 0; l119 < 2; l119 = l119 + 1) {
			fRec92[l119] = 0.0f;
		}
		for (int l120 = 0; l120 < 2; l120 = l120 + 1) {
			fRec99[l120] = 0.0f;
		}
		for (int l121 = 0; l121 < 2; l121 = l121 + 1) {
			fRec100[l121] = 0.0f;
		}
		for (int l122 = 0; l122 < 2; l122 = l122 + 1) {
			fRec95[l122] = 0.0f;
		}
		for (int l123 = 0; l123 < 2; l123 = l123 + 1) {
			fRec96[l123] = 0.0f;
		}
		for (int l124 = 0; l124 < 2; l124 = l124 + 1) {
			fRec102[l124] = 0.0f;
		}
		for (int l125 = 0; l125 < 2; l125 = l125 + 1) {
			fRec103[l125] = 0.0f;
		}
		for (int l126 = 0; l126 < 2; l126 = l126 + 1) {
			fVec61[l126] = 0.0f;
		}
		for (int l127 = 0; l127 < 2; l127 = l127 + 1) {
			fVec62[l127] = 0.0f;
		}
		for (int l128 = 0; l128 < 2; l128 = l128 + 1) {
			fRec69[l128] = 0.0f;
		}
		for (int l129 = 0; l129 < 2; l129 = l129 + 1) {
			fRec68[l129] = 0.0f;
		}
		for (int l130 = 0; l130 < 2; l130 = l130 + 1) {
			fVec63[l130] = 0.0f;
		}
		for (int l131 = 0; l131 < 2; l131 = l131 + 1) {
			fRec67[l131] = 0.0f;
		}
		for (int l132 = 0; l132 < 2; l132 = l132 + 1) {
			fRec66[l132] = 0.0f;
		}
		for (int l133 = 0; l133 < 2; l133 = l133 + 1) {
			fRec65[l133] = 0.0f;
		}
		for (int l134 = 0; l134 < 2; l134 = l134 + 1) {
			fRec64[l134] = 0.0f;
		}
		for (int l135 = 0; l135 < 2; l135 = l135 + 1) {
			fVec64[l135] = 0.0f;
		}
		for (int l136 = 0; l136 < 2; l136 = l136 + 1) {
			fRec111[l136] = 0.0f;
		}
		for (int l137 = 0; l137 < 2; l137 = l137 + 1) {
			fRec110[l137] = 0.0f;
		}
		for (int l138 = 0; l138 < 2; l138 = l138 + 1) {
			fVec65[l138] = 0.0f;
		}
		for (int l139 = 0; l139 < 2; l139 = l139 + 1) {
			fRec109[l139] = 0.0f;
		}
		for (int l140 = 0; l140 < 2; l140 = l140 + 1) {
			fRec108[l140] = 0.0f;
		}
		for (int l141 = 0; l141 < 2; l141 = l141 + 1) {
			fRec107[l141] = 0.0f;
		}
		for (int l142 = 0; l142 < 2; l142 = l142 + 1) {
			fRec106[l142] = 0.0f;
		}
		for (int l143 = 0; l143 < 2; l143 = l143 + 1) {
			fRec63[l143] = 0.0f;
		}
		for (int l144 = 0; l144 < 2; l144 = l144 + 1) {
			fVec66[l144] = 0.0f;
		}
		for (int l145 = 0; l145 < 3; l145 = l145 + 1) {
			fVec67[l145] = 0.0f;
		}
		for (int l146 = 0; l146 < 5; l146 = l146 + 1) {
			fVec68[l146] = 0.0f;
		}
		for (int l147 = 0; l147 < 12; l147 = l147 + 1) {
			fVec69[l147] = 0.0f;
		}
		for (int l148 = 0; l148 < 32; l148 = l148 + 1) {
			fVec70[l148] = 0.0f;
		}
		for (int l149 = 0; l149 < 64; l149 = l149 + 1) {
			fVec71[l149] = 0.0f;
		}
		for (int l150 = 0; l150 < 128; l150 = l150 + 1) {
			fVec72[l150] = 0.0f;
		}
		for (int l151 = 0; l151 < 256; l151 = l151 + 1) {
			fVec73[l151] = 0.0f;
		}
		for (int l152 = 0; l152 < 512; l152 = l152 + 1) {
			fVec74[l152] = 0.0f;
		}
		for (int l153 = 0; l153 < 512; l153 = l153 + 1) {
			fVec75[l153] = 0.0f;
		}
		for (int l154 = 0; l154 < 2; l154 = l154 + 1) {
			fRec1[l154] = 0.0f;
		}
		for (int l155 = 0; l155 < 2; l155 = l155 + 1) {
			fRec143[l155] = 0.0f;
		}
		for (int l156 = 0; l156 < 2; l156 = l156 + 1) {
			fRec144[l156] = 0.0f;
		}
		for (int l157 = 0; l157 < 2; l157 = l157 + 1) {
			fRec140[l157] = 0.0f;
		}
		for (int l158 = 0; l158 < 2; l158 = l158 + 1) {
			fRec141[l158] = 0.0f;
		}
		for (int l159 = 0; l159 < 2; l159 = l159 + 1) {
			fRec137[l159] = 0.0f;
		}
		for (int l160 = 0; l160 < 2; l160 = l160 + 1) {
			fRec138[l160] = 0.0f;
		}
		for (int l161 = 0; l161 < 2; l161 = l161 + 1) {
			fRec146[l161] = 0.0f;
		}
		for (int l162 = 0; l162 < 2; l162 = l162 + 1) {
			fRec147[l162] = 0.0f;
		}
		for (int l163 = 0; l163 < 2; l163 = l163 + 1) {
			fRec133[l163] = 0.0f;
		}
		for (int l164 = 0; l164 < 2; l164 = l164 + 1) {
			fRec134[l164] = 0.0f;
		}
		for (int l165 = 0; l165 < 2; l165 = l165 + 1) {
			fRec130[l165] = 0.0f;
		}
		for (int l166 = 0; l166 < 2; l166 = l166 + 1) {
			fRec131[l166] = 0.0f;
		}
		for (int l167 = 0; l167 < 2; l167 = l167 + 1) {
			fRec127[l167] = 0.0f;
		}
		for (int l168 = 0; l168 < 2; l168 = l168 + 1) {
			fRec128[l168] = 0.0f;
		}
		for (int l169 = 0; l169 < 2; l169 = l169 + 1) {
			fRec123[l169] = 0.0f;
		}
		for (int l170 = 0; l170 < 2; l170 = l170 + 1) {
			fRec124[l170] = 0.0f;
		}
		for (int l171 = 0; l171 < 2; l171 = l171 + 1) {
			fRec120[l171] = 0.0f;
		}
		for (int l172 = 0; l172 < 2; l172 = l172 + 1) {
			fRec121[l172] = 0.0f;
		}
		for (int l173 = 0; l173 < 2; l173 = l173 + 1) {
			fRec122[l173] = 0.0f;
		}
		for (int l174 = 0; l174 < 2; l174 = l174 + 1) {
			fVec76[l174] = 0.0f;
		}
		for (int l175 = 0; l175 < 2; l175 = l175 + 1) {
			fRec119[l175] = 0.0f;
		}
		for (int l176 = 0; l176 < 2; l176 = l176 + 1) {
			fRec118[l176] = 0.0f;
		}
		for (int l177 = 0; l177 < 2; l177 = l177 + 1) {
			fVec77[l177] = 0.0f;
		}
		for (int l178 = 0; l178 < 2; l178 = l178 + 1) {
			fRec117[l178] = 0.0f;
		}
		for (int l179 = 0; l179 < 2; l179 = l179 + 1) {
			fRec116[l179] = 0.0f;
		}
		for (int l180 = 0; l180 < 2; l180 = l180 + 1) {
			fRec115[l180] = 0.0f;
		}
		for (int l181 = 0; l181 < 2; l181 = l181 + 1) {
			fRec114[l181] = 0.0f;
		}
		for (int l182 = 0; l182 < 2; l182 = l182 + 1) {
			fRec113[l182] = 0.0f;
		}
		for (int l183 = 0; l183 < 2; l183 = l183 + 1) {
			fVec78[l183] = 0.0f;
		}
		for (int l184 = 0; l184 < 3; l184 = l184 + 1) {
			fVec79[l184] = 0.0f;
		}
		for (int l185 = 0; l185 < 5; l185 = l185 + 1) {
			fVec80[l185] = 0.0f;
		}
		for (int l186 = 0; l186 < 12; l186 = l186 + 1) {
			fVec81[l186] = 0.0f;
		}
		for (int l187 = 0; l187 < 32; l187 = l187 + 1) {
			fVec82[l187] = 0.0f;
		}
		for (int l188 = 0; l188 < 64; l188 = l188 + 1) {
			fVec83[l188] = 0.0f;
		}
		for (int l189 = 0; l189 < 128; l189 = l189 + 1) {
			fVec84[l189] = 0.0f;
		}
		for (int l190 = 0; l190 < 256; l190 = l190 + 1) {
			fVec85[l190] = 0.0f;
		}
		for (int l191 = 0; l191 < 512; l191 = l191 + 1) {
			fVec86[l191] = 0.0f;
		}
		for (int l192 = 0; l192 < 512; l192 = l192 + 1) {
			fVec87[l192] = 0.0f;
		}
		for (int l193 = 0; l193 < 2; l193 = l193 + 1) {
			fRec112[l193] = 0.0f;
		}
		for (int l194 = 0; l194 < 2; l194 = l194 + 1) {
			fRec157[l194] = 0.0f;
		}
		for (int l195 = 0; l195 < 2; l195 = l195 + 1) {
			fRec158[l195] = 0.0f;
		}
		for (int l196 = 0; l196 < 2; l196 = l196 + 1) {
			fVec88[l196] = 0.0f;
		}
		for (int l197 = 0; l197 < 2; l197 = l197 + 1) {
			fVec89[l197] = 0.0f;
		}
		for (int l198 = 0; l198 < 2; l198 = l198 + 1) {
			fRec156[l198] = 0.0f;
		}
		for (int l199 = 0; l199 < 2; l199 = l199 + 1) {
			fRec155[l199] = 0.0f;
		}
		for (int l200 = 0; l200 < 2; l200 = l200 + 1) {
			fVec90[l200] = 0.0f;
		}
		for (int l201 = 0; l201 < 2; l201 = l201 + 1) {
			fRec154[l201] = 0.0f;
		}
		for (int l202 = 0; l202 < 2; l202 = l202 + 1) {
			fRec153[l202] = 0.0f;
		}
		for (int l203 = 0; l203 < 2; l203 = l203 + 1) {
			fRec152[l203] = 0.0f;
		}
		for (int l204 = 0; l204 < 2; l204 = l204 + 1) {
			fRec151[l204] = 0.0f;
		}
		for (int l205 = 0; l205 < 2; l205 = l205 + 1) {
			fRec150[l205] = 0.0f;
		}
		for (int l206 = 0; l206 < 2; l206 = l206 + 1) {
			fVec91[l206] = 0.0f;
		}
		for (int l207 = 0; l207 < 3; l207 = l207 + 1) {
			fVec92[l207] = 0.0f;
		}
		for (int l208 = 0; l208 < 5; l208 = l208 + 1) {
			fVec93[l208] = 0.0f;
		}
		for (int l209 = 0; l209 < 12; l209 = l209 + 1) {
			fVec94[l209] = 0.0f;
		}
		for (int l210 = 0; l210 < 32; l210 = l210 + 1) {
			fVec95[l210] = 0.0f;
		}
		for (int l211 = 0; l211 < 64; l211 = l211 + 1) {
			fVec96[l211] = 0.0f;
		}
		for (int l212 = 0; l212 < 128; l212 = l212 + 1) {
			fVec97[l212] = 0.0f;
		}
		for (int l213 = 0; l213 < 256; l213 = l213 + 1) {
			fVec98[l213] = 0.0f;
		}
		for (int l214 = 0; l214 < 512; l214 = l214 + 1) {
			fVec99[l214] = 0.0f;
		}
		for (int l215 = 0; l215 < 512; l215 = l215 + 1) {
			fVec100[l215] = 0.0f;
		}
		for (int l216 = 0; l216 < 2; l216 = l216 + 1) {
			fRec149[l216] = 0.0f;
		}
		for (int l217 = 0; l217 < 2; l217 = l217 + 1) {
			fRec179[l217] = 0.0f;
		}
		for (int l218 = 0; l218 < 2; l218 = l218 + 1) {
			fRec180[l218] = 0.0f;
		}
		for (int l219 = 0; l219 < 2; l219 = l219 + 1) {
			fRec176[l219] = 0.0f;
		}
		for (int l220 = 0; l220 < 2; l220 = l220 + 1) {
			fRec177[l220] = 0.0f;
		}
		for (int l221 = 0; l221 < 2; l221 = l221 + 1) {
			fRec172[l221] = 0.0f;
		}
		for (int l222 = 0; l222 < 2; l222 = l222 + 1) {
			fRec173[l222] = 0.0f;
		}
		for (int l223 = 0; l223 < 2; l223 = l223 + 1) {
			fRec169[l223] = 0.0f;
		}
		for (int l224 = 0; l224 < 2; l224 = l224 + 1) {
			fRec170[l224] = 0.0f;
		}
		for (int l225 = 0; l225 < 2; l225 = l225 + 1) {
			fRec171[l225] = 0.0f;
		}
		for (int l226 = 0; l226 < 2; l226 = l226 + 1) {
			fVec101[l226] = 0.0f;
		}
		for (int l227 = 0; l227 < 2; l227 = l227 + 1) {
			fRec168[l227] = 0.0f;
		}
		for (int l228 = 0; l228 < 2; l228 = l228 + 1) {
			fRec167[l228] = 0.0f;
		}
		for (int l229 = 0; l229 < 2; l229 = l229 + 1) {
			fVec102[l229] = 0.0f;
		}
		for (int l230 = 0; l230 < 2; l230 = l230 + 1) {
			fRec166[l230] = 0.0f;
		}
		for (int l231 = 0; l231 < 2; l231 = l231 + 1) {
			fRec165[l231] = 0.0f;
		}
		for (int l232 = 0; l232 < 2; l232 = l232 + 1) {
			fRec164[l232] = 0.0f;
		}
		for (int l233 = 0; l233 < 2; l233 = l233 + 1) {
			fRec163[l233] = 0.0f;
		}
		for (int l234 = 0; l234 < 2; l234 = l234 + 1) {
			fRec162[l234] = 0.0f;
		}
		for (int l235 = 0; l235 < 2; l235 = l235 + 1) {
			fVec103[l235] = 0.0f;
		}
		for (int l236 = 0; l236 < 3; l236 = l236 + 1) {
			fVec104[l236] = 0.0f;
		}
		for (int l237 = 0; l237 < 5; l237 = l237 + 1) {
			fVec105[l237] = 0.0f;
		}
		for (int l238 = 0; l238 < 12; l238 = l238 + 1) {
			fVec106[l238] = 0.0f;
		}
		for (int l239 = 0; l239 < 32; l239 = l239 + 1) {
			fVec107[l239] = 0.0f;
		}
		for (int l240 = 0; l240 < 64; l240 = l240 + 1) {
			fVec108[l240] = 0.0f;
		}
		for (int l241 = 0; l241 < 128; l241 = l241 + 1) {
			fVec109[l241] = 0.0f;
		}
		for (int l242 = 0; l242 < 256; l242 = l242 + 1) {
			fVec110[l242] = 0.0f;
		}
		for (int l243 = 0; l243 < 512; l243 = l243 + 1) {
			fVec111[l243] = 0.0f;
		}
		for (int l244 = 0; l244 < 512; l244 = l244 + 1) {
			fVec112[l244] = 0.0f;
		}
		for (int l245 = 0; l245 < 2; l245 = l245 + 1) {
			fRec161[l245] = 0.0f;
		}
		for (int l246 = 0; l246 < 2; l246 = l246 + 1) {
			fRec191[l246] = 0.0f;
		}
		for (int l247 = 0; l247 < 2; l247 = l247 + 1) {
			fRec192[l247] = 0.0f;
		}
		for (int l248 = 0; l248 < 2; l248 = l248 + 1) {
			fVec113[l248] = 0.0f;
		}
		for (int l249 = 0; l249 < 2; l249 = l249 + 1) {
			fVec114[l249] = 0.0f;
		}
		for (int l250 = 0; l250 < 2; l250 = l250 + 1) {
			fRec190[l250] = 0.0f;
		}
		for (int l251 = 0; l251 < 2; l251 = l251 + 1) {
			fRec189[l251] = 0.0f;
		}
		for (int l252 = 0; l252 < 2; l252 = l252 + 1) {
			fVec115[l252] = 0.0f;
		}
		for (int l253 = 0; l253 < 2; l253 = l253 + 1) {
			fRec188[l253] = 0.0f;
		}
		for (int l254 = 0; l254 < 2; l254 = l254 + 1) {
			fRec187[l254] = 0.0f;
		}
		for (int l255 = 0; l255 < 2; l255 = l255 + 1) {
			fRec186[l255] = 0.0f;
		}
		for (int l256 = 0; l256 < 2; l256 = l256 + 1) {
			fRec185[l256] = 0.0f;
		}
		for (int l257 = 0; l257 < 2; l257 = l257 + 1) {
			fRec184[l257] = 0.0f;
		}
		for (int l258 = 0; l258 < 2; l258 = l258 + 1) {
			fVec116[l258] = 0.0f;
		}
		for (int l259 = 0; l259 < 3; l259 = l259 + 1) {
			fVec117[l259] = 0.0f;
		}
		for (int l260 = 0; l260 < 5; l260 = l260 + 1) {
			fVec118[l260] = 0.0f;
		}
		for (int l261 = 0; l261 < 12; l261 = l261 + 1) {
			fVec119[l261] = 0.0f;
		}
		for (int l262 = 0; l262 < 32; l262 = l262 + 1) {
			fVec120[l262] = 0.0f;
		}
		for (int l263 = 0; l263 < 64; l263 = l263 + 1) {
			fVec121[l263] = 0.0f;
		}
		for (int l264 = 0; l264 < 128; l264 = l264 + 1) {
			fVec122[l264] = 0.0f;
		}
		for (int l265 = 0; l265 < 256; l265 = l265 + 1) {
			fVec123[l265] = 0.0f;
		}
		for (int l266 = 0; l266 < 512; l266 = l266 + 1) {
			fVec124[l266] = 0.0f;
		}
		for (int l267 = 0; l267 < 512; l267 = l267 + 1) {
			fVec125[l267] = 0.0f;
		}
		for (int l268 = 0; l268 < 2; l268 = l268 + 1) {
			fRec183[l268] = 0.0f;
		}
		for (int l269 = 0; l269 < 2; l269 = l269 + 1) {
			fRec213[l269] = 0.0f;
		}
		for (int l270 = 0; l270 < 2; l270 = l270 + 1) {
			fRec214[l270] = 0.0f;
		}
		for (int l271 = 0; l271 < 2; l271 = l271 + 1) {
			fRec210[l271] = 0.0f;
		}
		for (int l272 = 0; l272 < 2; l272 = l272 + 1) {
			fRec211[l272] = 0.0f;
		}
		for (int l273 = 0; l273 < 2; l273 = l273 + 1) {
			fRec206[l273] = 0.0f;
		}
		for (int l274 = 0; l274 < 2; l274 = l274 + 1) {
			fRec207[l274] = 0.0f;
		}
		for (int l275 = 0; l275 < 2; l275 = l275 + 1) {
			fRec203[l275] = 0.0f;
		}
		for (int l276 = 0; l276 < 2; l276 = l276 + 1) {
			fRec204[l276] = 0.0f;
		}
		for (int l277 = 0; l277 < 2; l277 = l277 + 1) {
			fRec205[l277] = 0.0f;
		}
		for (int l278 = 0; l278 < 2; l278 = l278 + 1) {
			fVec126[l278] = 0.0f;
		}
		for (int l279 = 0; l279 < 2; l279 = l279 + 1) {
			fRec202[l279] = 0.0f;
		}
		for (int l280 = 0; l280 < 2; l280 = l280 + 1) {
			fRec201[l280] = 0.0f;
		}
		for (int l281 = 0; l281 < 2; l281 = l281 + 1) {
			fVec127[l281] = 0.0f;
		}
		for (int l282 = 0; l282 < 2; l282 = l282 + 1) {
			fRec200[l282] = 0.0f;
		}
		for (int l283 = 0; l283 < 2; l283 = l283 + 1) {
			fRec199[l283] = 0.0f;
		}
		for (int l284 = 0; l284 < 2; l284 = l284 + 1) {
			fRec198[l284] = 0.0f;
		}
		for (int l285 = 0; l285 < 2; l285 = l285 + 1) {
			fRec197[l285] = 0.0f;
		}
		for (int l286 = 0; l286 < 2; l286 = l286 + 1) {
			fRec196[l286] = 0.0f;
		}
		for (int l287 = 0; l287 < 2; l287 = l287 + 1) {
			fVec128[l287] = 0.0f;
		}
		for (int l288 = 0; l288 < 3; l288 = l288 + 1) {
			fVec129[l288] = 0.0f;
		}
		for (int l289 = 0; l289 < 5; l289 = l289 + 1) {
			fVec130[l289] = 0.0f;
		}
		for (int l290 = 0; l290 < 12; l290 = l290 + 1) {
			fVec131[l290] = 0.0f;
		}
		for (int l291 = 0; l291 < 32; l291 = l291 + 1) {
			fVec132[l291] = 0.0f;
		}
		for (int l292 = 0; l292 < 64; l292 = l292 + 1) {
			fVec133[l292] = 0.0f;
		}
		for (int l293 = 0; l293 < 128; l293 = l293 + 1) {
			fVec134[l293] = 0.0f;
		}
		for (int l294 = 0; l294 < 256; l294 = l294 + 1) {
			fVec135[l294] = 0.0f;
		}
		for (int l295 = 0; l295 < 512; l295 = l295 + 1) {
			fVec136[l295] = 0.0f;
		}
		for (int l296 = 0; l296 < 512; l296 = l296 + 1) {
			fVec137[l296] = 0.0f;
		}
		for (int l297 = 0; l297 < 2; l297 = l297 + 1) {
			fRec195[l297] = 0.0f;
		}
		for (int l298 = 0; l298 < 2; l298 = l298 + 1) {
			fRec224[l298] = 0.0f;
		}
		for (int l299 = 0; l299 < 2; l299 = l299 + 1) {
			fRec225[l299] = 0.0f;
		}
		for (int l300 = 0; l300 < 2; l300 = l300 + 1) {
			fVec138[l300] = 0.0f;
		}
		for (int l301 = 0; l301 < 2; l301 = l301 + 1) {
			fVec139[l301] = 0.0f;
		}
		for (int l302 = 0; l302 < 2; l302 = l302 + 1) {
			fRec223[l302] = 0.0f;
		}
		for (int l303 = 0; l303 < 2; l303 = l303 + 1) {
			fRec222[l303] = 0.0f;
		}
		for (int l304 = 0; l304 < 2; l304 = l304 + 1) {
			fVec140[l304] = 0.0f;
		}
		for (int l305 = 0; l305 < 2; l305 = l305 + 1) {
			fRec221[l305] = 0.0f;
		}
		for (int l306 = 0; l306 < 2; l306 = l306 + 1) {
			fRec220[l306] = 0.0f;
		}
		for (int l307 = 0; l307 < 2; l307 = l307 + 1) {
			fRec219[l307] = 0.0f;
		}
		for (int l308 = 0; l308 < 2; l308 = l308 + 1) {
			fRec218[l308] = 0.0f;
		}
		for (int l309 = 0; l309 < 2; l309 = l309 + 1) {
			fRec217[l309] = 0.0f;
		}
		for (int l310 = 0; l310 < 2; l310 = l310 + 1) {
			fVec141[l310] = 0.0f;
		}
		for (int l311 = 0; l311 < 3; l311 = l311 + 1) {
			fVec142[l311] = 0.0f;
		}
		for (int l312 = 0; l312 < 5; l312 = l312 + 1) {
			fVec143[l312] = 0.0f;
		}
		for (int l313 = 0; l313 < 12; l313 = l313 + 1) {
			fVec144[l313] = 0.0f;
		}
		for (int l314 = 0; l314 < 32; l314 = l314 + 1) {
			fVec145[l314] = 0.0f;
		}
		for (int l315 = 0; l315 < 64; l315 = l315 + 1) {
			fVec146[l315] = 0.0f;
		}
		for (int l316 = 0; l316 < 128; l316 = l316 + 1) {
			fVec147[l316] = 0.0f;
		}
		for (int l317 = 0; l317 < 256; l317 = l317 + 1) {
			fVec148[l317] = 0.0f;
		}
		for (int l318 = 0; l318 < 512; l318 = l318 + 1) {
			fVec149[l318] = 0.0f;
		}
		for (int l319 = 0; l319 < 512; l319 = l319 + 1) {
			fVec150[l319] = 0.0f;
		}
		for (int l320 = 0; l320 < 2; l320 = l320 + 1) {
			fRec216[l320] = 0.0f;
		}
		for (int l321 = 0; l321 < 2; l321 = l321 + 1) {
			fRec236[l321] = 0.0f;
		}
		for (int l322 = 0; l322 < 2; l322 = l322 + 1) {
			fRec237[l322] = 0.0f;
		}
		for (int l323 = 0; l323 < 2; l323 = l323 + 1) {
			fRec238[l323] = 0.0f;
		}
		for (int l324 = 0; l324 < 2; l324 = l324 + 1) {
			fVec151[l324] = 0.0f;
		}
		for (int l325 = 0; l325 < 2; l325 = l325 + 1) {
			fRec235[l325] = 0.0f;
		}
		for (int l326 = 0; l326 < 2; l326 = l326 + 1) {
			fRec234[l326] = 0.0f;
		}
		for (int l327 = 0; l327 < 2; l327 = l327 + 1) {
			fVec152[l327] = 0.0f;
		}
		for (int l328 = 0; l328 < 2; l328 = l328 + 1) {
			fRec233[l328] = 0.0f;
		}
		for (int l329 = 0; l329 < 2; l329 = l329 + 1) {
			fRec232[l329] = 0.0f;
		}
		for (int l330 = 0; l330 < 2; l330 = l330 + 1) {
			fRec231[l330] = 0.0f;
		}
		for (int l331 = 0; l331 < 2; l331 = l331 + 1) {
			fRec230[l331] = 0.0f;
		}
		for (int l332 = 0; l332 < 2; l332 = l332 + 1) {
			fRec229[l332] = 0.0f;
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
			fRec228[l343] = 0.0f;
		}
		for (int l344 = 0; l344 < 2; l344 = l344 + 1) {
			fRec0[l344] = 0.0f;
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
		ui_interface->declare(&fVslider4, "1", "");
		ui_interface->declare(&fVslider4, "symbol", "timbre_strength");
		ui_interface->declare(&fVslider4, "unit", "%");
		ui_interface->addVerticalSlider("strength", &fVslider4, FAUSTFLOAT(5e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVbargraph3, "3", "");
		ui_interface->declare(&fVbargraph3, "integer", "");
		ui_interface->addVerticalBargraph("expander", &fVbargraph3, FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("Target Curve");
		ui_interface->declare(&fVslider5, "symbol", "spec_0");
		ui_interface->addVerticalSlider("spec 0", &fVslider5, FAUSTFLOAT(-1e+01f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider6, "symbol", "spec_1");
		ui_interface->addVerticalSlider("spec 1", &fVslider6, FAUSTFLOAT(-5.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider7, "symbol", "spec_2");
		ui_interface->addVerticalSlider("spec 2", &fVslider7, FAUSTFLOAT(-5.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider8, "symbol", "spec_3");
		ui_interface->addVerticalSlider("spec 3", &fVslider8, FAUSTFLOAT(-8.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider9, "symbol", "spec_4");
		ui_interface->addVerticalSlider("spec 4", &fVslider9, FAUSTFLOAT(-9.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider10, "symbol", "spec_5");
		ui_interface->addVerticalSlider("spec 5", &fVslider10, FAUSTFLOAT(-1e+01f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider11, "symbol", "spec_6");
		ui_interface->addVerticalSlider("spec 6", &fVslider11, FAUSTFLOAT(-7.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider3, "symbol", "spec_7");
		ui_interface->addVerticalSlider("spec 7", &fVslider3, FAUSTFLOAT(-3.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->declare(0, "2", "");
		ui_interface->openHorizontalBox("loudness normalized spectrum");
		ui_interface->declare(&fVbargraph6, "1", "");
		ui_interface->declare(&fVbargraph6, "unit", "dB");
		ui_interface->addVerticalBargraph("band 0", &fVbargraph6, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph8, "1", "");
		ui_interface->declare(&fVbargraph8, "unit", "dB");
		ui_interface->addVerticalBargraph("band 1", &fVbargraph8, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph10, "1", "");
		ui_interface->declare(&fVbargraph10, "unit", "dB");
		ui_interface->addVerticalBargraph("band 2", &fVbargraph10, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph12, "1", "");
		ui_interface->declare(&fVbargraph12, "unit", "dB");
		ui_interface->addVerticalBargraph("band 3", &fVbargraph12, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph14, "1", "");
		ui_interface->declare(&fVbargraph14, "unit", "dB");
		ui_interface->addVerticalBargraph("band 4", &fVbargraph14, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph16, "1", "");
		ui_interface->declare(&fVbargraph16, "unit", "dB");
		ui_interface->addVerticalBargraph("band 5", &fVbargraph16, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph18, "1", "");
		ui_interface->declare(&fVbargraph18, "unit", "dB");
		ui_interface->addVerticalBargraph("band 6", &fVbargraph18, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph4, "1", "");
		ui_interface->declare(&fVbargraph4, "unit", "dB");
		ui_interface->addVerticalBargraph("band 7", &fVbargraph4, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->closeBox();
		ui_interface->declare(0, "3", "");
		ui_interface->openHorizontalBox("resulting gain");
		ui_interface->declare(&fVbargraph7, "1", "");
		ui_interface->declare(&fVbargraph7, "symbol", "spectral_ballancer_gain_band_ 0");
		ui_interface->addVerticalBargraph("gr  0", &fVbargraph7, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph9, "1", "");
		ui_interface->declare(&fVbargraph9, "symbol", "spectral_ballancer_gain_band_ 1");
		ui_interface->addVerticalBargraph("gr  1", &fVbargraph9, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph11, "1", "");
		ui_interface->declare(&fVbargraph11, "symbol", "spectral_ballancer_gain_band_ 2");
		ui_interface->addVerticalBargraph("gr  2", &fVbargraph11, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph13, "1", "");
		ui_interface->declare(&fVbargraph13, "symbol", "spectral_ballancer_gain_band_ 3");
		ui_interface->addVerticalBargraph("gr  3", &fVbargraph13, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph15, "1", "");
		ui_interface->declare(&fVbargraph15, "symbol", "spectral_ballancer_gain_band_ 4");
		ui_interface->addVerticalBargraph("gr  4", &fVbargraph15, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph17, "1", "");
		ui_interface->declare(&fVbargraph17, "symbol", "spectral_ballancer_gain_band_ 5");
		ui_interface->addVerticalBargraph("gr  5", &fVbargraph17, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph19, "1", "");
		ui_interface->declare(&fVbargraph19, "symbol", "spectral_ballancer_gain_band_ 6");
		ui_interface->addVerticalBargraph("gr  6", &fVbargraph19, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph5, "1", "");
		ui_interface->declare(&fVbargraph5, "symbol", "spectral_ballancer_gain_band_ 7");
		ui_interface->addVerticalBargraph("gr  7", &fVbargraph5, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->closeBox();
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("main");
		ui_interface->declare(&fCheckbox0, "0", "");
		ui_interface->addCheckButton("bypass", &fCheckbox0);
		ui_interface->openHorizontalBox("leveler");
		ui_interface->declare(&fVslider0, "1", "");
		ui_interface->declare(&fVslider0, "unit", "dB");
		ui_interface->addVerticalSlider("target", &fVslider0, FAUSTFLOAT(-23.0f), FAUSTFLOAT(-6e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVbargraph1, "7", "");
		ui_interface->declare(&fVbargraph1, "unit", "%");
		ui_interface->addVerticalBargraph("brake", &fVbargraph1, FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f));
		ui_interface->declare(&fVbargraph2, "8", "");
		ui_interface->declare(&fVbargraph2, "unit", "dB");
		ui_interface->addVerticalBargraph("gain", &fVbargraph2, FAUSTFLOAT(-5e+01f), FAUSTFLOAT(5e+01f));
		ui_interface->addVerticalBargraph("min_track", &fVbargraph0, FAUSTFLOAT(-1e+02f), FAUSTFLOAT(0.0f));
		ui_interface->addVerticalSlider("thresh offset", &fVslider2, FAUSTFLOAT(6.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(4e+01f), FAUSTFLOAT(1.0f));
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
		ui_interface->declare(&fVslider1, "scale", "log");
		ui_interface->addVerticalSlider("preLowcut_freq", &fVslider1, FAUSTFLOAT(8e+01f), FAUSTFLOAT(1.0f), FAUSTFLOAT(4e+02f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->closeBox();
		ui_interface->closeBox();
	}
	
	FAUSTPP_VIRTUAL void compute(int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
		FAUSTFLOAT* input0 = inputs[0];
		FAUSTFLOAT* output0 = outputs[0];
		int iSlow0 = int(float(fCheckbox0));
		float fSlow1 = float(fVslider0);
		float fSlow2 = fSlow1 + -3.0f;
		float fSlow3 = fSlow1 + -9.0f;
		float fSlow4 = std::tan(fConst9 * float(fVslider1));
		float fSlow5 = mydsp_faustpower2_f(fSlow4);
		float fSlow6 = 2.0f * (1.0f - 1.0f / fSlow5);
		float fSlow7 = 1.0f / fSlow4;
		float fSlow8 = (fSlow7 + -1.0f) / fSlow4 + 1.0f;
		float fSlow9 = (fSlow7 + 1.0f) / fSlow4 + 1.0f;
		float fSlow10 = 1.0f / fSlow9;
		float fSlow11 = 1.0f - fSlow7;
		float fSlow12 = 1.0f / (fSlow7 + 1.0f);
		float fSlow13 = 1.0f / (fSlow5 * fSlow9);
		float fSlow14 = float(fVslider2);
		float fSlow15 = float(fVslider3);
		float fSlow16 = 0.0005f * float(fVslider4);
		float fSlow17 = fSlow1 + -15.0f;
		float fSlow18 = float(fVslider5);
		float fSlow19 = float(fVslider6);
		float fSlow20 = float(fVslider7);
		float fSlow21 = float(fVslider8);
		float fSlow22 = float(fVslider9);
		float fSlow23 = float(fVslider10);
		float fSlow24 = float(fVslider11);
		for (int i0 = 0; i0 < count; i0 = i0 + 1) {
			float fTemp0 = float(input0[i0]);
			float fTemp1 = ((iSlow0) ? 0.0f : fTemp0);
			fVec0[0] = fTemp1;
			fRec16[0] = -(fSlow12 * (fSlow11 * fRec16[1] - fSlow7 * (fTemp1 - fVec0[1])));
			fRec15[0] = fRec16[0] - fSlow10 * (fSlow8 * fRec15[2] + fSlow6 * fRec15[1]);
			float fTemp2 = fSlow13 * (fRec15[2] + (fRec15[0] - 2.0f * fRec15[1]));
			fVec1[0] = fTemp2;
			fRec14[0] = -(fConst11 * (fConst10 * fRec14[1] - (fTemp2 + fVec1[1])));
			fRec13[0] = fRec14[0] - fConst8 * (fConst7 * fRec13[2] + fConst5 * fRec13[1]);
			float fTemp3 = fConst8 * (fRec13[2] + fRec13[0] + 2.0f * fRec13[1]);
			fRec17[0] = 0.1f * fRec17[1] + 0.9f * fRec12[1];
			fVec2[IOTA0 & 8191] = 0.9f * fRec17[0] + fTemp3;
			fRec12[0] = fVec2[(IOTA0 - iConst12) & 8191];
			fRec19[0] = 0.1f * fRec19[1] + 0.9f * fRec18[1];
			fVec3[IOTA0 & 8191] = fTemp3 + 0.9f * fRec19[0];
			fRec18[0] = fVec3[(IOTA0 - iConst13) & 8191];
			fRec21[0] = 0.1f * fRec21[1] + 0.9f * fRec20[1];
			fVec4[IOTA0 & 8191] = fTemp3 + 0.9f * fRec21[0];
			fRec20[0] = fVec4[(IOTA0 - iConst14) & 8191];
			fRec23[0] = 0.1f * fRec23[1] + 0.9f * fRec22[1];
			fVec5[IOTA0 & 8191] = fTemp3 + 0.9f * fRec23[0];
			fRec22[0] = fVec5[(IOTA0 - iConst15) & 8191];
			fRec25[0] = 0.1f * fRec25[1] + 0.9f * fRec24[1];
			fVec6[IOTA0 & 8191] = fTemp3 + 0.9f * fRec25[0];
			fRec24[0] = fVec6[(IOTA0 - iConst16) & 8191];
			fRec27[0] = 0.1f * fRec27[1] + 0.9f * fRec26[1];
			fVec7[IOTA0 & 8191] = fTemp3 + 0.9f * fRec27[0];
			fRec26[0] = fVec7[(IOTA0 - iConst17) & 8191];
			fRec29[0] = 0.1f * fRec29[1] + 0.9f * fRec28[1];
			fVec8[IOTA0 & 8191] = fTemp3 + 0.9f * fRec29[0];
			fRec28[0] = fVec8[(IOTA0 - iConst18) & 8191];
			fRec31[0] = 0.1f * fRec31[1] + 0.9f * fRec30[1];
			fVec9[IOTA0 & 8191] = fTemp3 + 0.9f * fRec31[0];
			fRec30[0] = fVec9[(IOTA0 - iConst19) & 8191];
			float fTemp4 = fRec30[1] + fRec28[1] + fRec26[1] + fRec24[1] + fRec22[1] + fRec20[1] + fRec18[1] + 0.9f * fRec10[1] + fRec12[1];
			fVec10[IOTA0 & 2047] = fTemp4;
			fRec10[0] = fVec10[(IOTA0 - iConst20) & 2047];
			float fRec11 = -(0.9f * fTemp4);
			float fTemp5 = fRec10[1] + fRec11 + 0.9f * fRec8[1];
			fVec11[IOTA0 & 2047] = fTemp5;
			fRec8[0] = fVec11[(IOTA0 - iConst21) & 2047];
			float fRec9 = -(0.9f * fTemp5);
			float fTemp6 = fRec8[1] + fRec9 + 0.9f * fRec6[1];
			fVec12[IOTA0 & 2047] = fTemp6;
			fRec6[0] = fVec12[(IOTA0 - iConst22) & 2047];
			float fRec7 = -(0.9f * fTemp6);
			float fTemp7 = fRec6[1] + fRec7 + 0.9f * fRec4[1];
			fVec13[IOTA0 & 1023] = fTemp7;
			fRec4[0] = fVec13[(IOTA0 - iConst23) & 1023];
			float fRec5 = -(0.9f * fTemp7);
			float fTemp8 = std::fabs(fRec3[1]);
			fRec42[0] = fConst29 * fTemp8 + fConst28 * fRec42[1];
			float fTemp9 = std::min<float>(fRec42[0], fRec42[1]);
			fVec14[0] = fTemp9;
			float fTemp10 = std::min<float>(fTemp9, fVec14[2]);
			fVec15[0] = fTemp10;
			float fTemp11 = std::min<float>(fTemp10, fVec15[4]);
			fVec16[0] = fTemp11;
			float fTemp12 = std::min<float>(fTemp11, fVec16[8]);
			fVec17[IOTA0 & 31] = fTemp12;
			float fTemp13 = std::min<float>(fTemp12, fVec17[(IOTA0 - 16) & 31]);
			fVec18[IOTA0 & 63] = fTemp13;
			float fTemp14 = std::min<float>(fTemp13, fVec18[(IOTA0 - 32) & 63]);
			fVec19[IOTA0 & 127] = fTemp14;
			float fTemp15 = std::min<float>(fTemp14, fVec19[(IOTA0 - 64) & 127]);
			fVec20[IOTA0 & 255] = fTemp15;
			float fTemp16 = std::min<float>(fTemp15, fVec20[(IOTA0 - 128) & 255]);
			fVec21[IOTA0 & 511] = fTemp16;
			float fTemp17 = std::min<float>(fTemp16, fVec21[(IOTA0 - 256) & 511]);
			fVec22[IOTA0 & 1023] = fTemp17;
			float fTemp18 = std::min<float>(fTemp17, fVec22[(IOTA0 - 512) & 1023]);
			fVec23[IOTA0 & 2047] = fTemp18;
			float fTemp19 = std::min<float>(fTemp18, fVec23[(IOTA0 - 1024) & 2047]);
			fVec24[IOTA0 & 4095] = fTemp19;
			float fTemp20 = std::min<float>(fTemp19, fVec24[(IOTA0 - 2048) & 4095]);
			fVec25[IOTA0 & 8191] = fTemp20;
			float fTemp21 = std::min<float>(fTemp20, fVec25[(IOTA0 - 4096) & 8191]);
			fVec26[IOTA0 & 16383] = fTemp21;
			float fTemp22 = std::min<float>(fTemp21, fVec26[(IOTA0 - 8192) & 16383]);
			fVec27[IOTA0 & 32767] = fTemp22;
			float fTemp23 = std::min<float>(fTemp22, fVec27[(IOTA0 - 16384) & 32767]);
			fVec28[IOTA0 & 65535] = fTemp23;
			float fTemp24 = std::min<float>(fTemp23, fVec28[(IOTA0 - 32768) & 65535]);
			fVec29[IOTA0 & 131071] = fTemp24;
			float fTemp25 = std::min<float>(fTemp24, fVec29[(IOTA0 - 65536) & 131071]);
			fVec30[IOTA0 & 262143] = fTemp25;
			fVec31[IOTA0 & 524287] = std::min<float>(fTemp25, fVec30[(IOTA0 - 131072) & 262143]);
			fRec41[0] = fConst65 * std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(((iConst27) ? fRec42[0] : 3.4028235e+38f), ((iConst30) ? fVec14[iConst27] : 3.4028235e+38f)), ((iConst31) ? fVec15[iConst32] : 3.4028235e+38f)), ((iConst33) ? fVec16[iConst34] : 3.4028235e+38f)), ((iConst35) ? fVec17[(IOTA0 - iConst36) & 31] : 3.4028235e+38f)), ((iConst37) ? fVec18[(IOTA0 - iConst38) & 63] : 3.4028235e+38f)), ((iConst39) ? fVec19[(IOTA0 - iConst40) & 127] : 3.4028235e+38f)), ((iConst41) ? fVec20[(IOTA0 - iConst42) & 255] : 3.4028235e+38f)), ((iConst43) ? fVec21[(IOTA0 - iConst44) & 511] : 3.4028235e+38f)), ((iConst45) ? fVec22[(IOTA0 - iConst46) & 1023] : 3.4028235e+38f)), ((iConst47) ? fVec23[(IOTA0 - iConst48) & 2047] : 3.4028235e+38f)), ((iConst49) ? fVec24[(IOTA0 - iConst50) & 4095] : 3.4028235e+38f)), ((iConst51) ? fVec25[(IOTA0 - iConst52) & 8191] : 3.4028235e+38f)), ((iConst53) ? fVec26[(IOTA0 - iConst54) & 16383] : 3.4028235e+38f)), ((iConst55) ? fVec27[(IOTA0 - iConst56) & 32767] : 3.4028235e+38f)), ((iConst57) ? fVec28[(IOTA0 - iConst58) & 65535] : 3.4028235e+38f)), ((iConst59) ? fVec29[(IOTA0 - iConst60) & 131071] : 3.4028235e+38f)), ((iConst61) ? fVec30[(IOTA0 - iConst62) & 262143] : 3.4028235e+38f)), ((iConst63) ? fVec31[(IOTA0 - iConst64) & 524287] : 3.4028235e+38f)) + fConst26 * fRec41[1];
			float fTemp26 = std::max<float>(-6e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fRec41[0])));
			fVbargraph0 = FAUSTFLOAT(fTemp26);
			float fTemp27 = fTemp26;
			float fTemp28 = fRec54[1] + fConst66 * (fTemp8 - fRec55[1]);
			fRec54[0] = fConst68 * fTemp28 - fRec54[1];
			float fTemp29 = fRec55[1] + fConst69 * fTemp28;
			fRec55[0] = 2.0f * fTemp29 - fRec55[1];
			float fRec56 = fTemp8;
			float fRec57 = fConst70 * fTemp28;
			float fRec58 = fTemp29;
			float fTemp30 = fRec58 + 1.4142135f * fRec57;
			float fTemp31 = fRec49[1] + fConst66 * (fRec56 - (fTemp30 + fRec50[1]));
			fRec49[0] = fConst68 * fTemp31 - fRec49[1];
			float fTemp32 = fRec50[1] + fConst69 * fTemp31;
			fRec50[0] = 2.0f * fTemp32 - fRec50[1];
			float fRec51 = fRec56 - fTemp30;
			float fRec52 = fConst70 * fTemp31;
			float fRec53 = fTemp32;
			float fTemp33 = fRec53 + 1.4142135f * fRec52;
			float fTemp34 = fRec46[1] + fConst71 * (fRec51 - (fTemp33 + fRec47[1]));
			fRec46[0] = fConst73 * fTemp34 - fRec46[1];
			float fTemp35 = fRec47[1] + fConst74 * fTemp34;
			fRec47[0] = 2.0f * fTemp35 - fRec47[1];
			float fRec48 = fTemp35;
			float fTemp36 = fRec43[1] + fConst71 * (fRec48 - fRec44[1]);
			fRec43[0] = fConst73 * fTemp36 - fRec43[1];
			float fTemp37 = fRec44[1] + fConst74 * fTemp36;
			fRec44[0] = 2.0f * fTemp37 - fRec44[1];
			float fRec45 = fTemp37;
			float fTemp38 = std::fabs(fRec45);
			fVec32[0] = fTemp38;
			float fTemp39 = std::max<float>(fTemp38, fVec32[1]);
			fVec33[0] = fTemp39;
			float fTemp40 = std::max<float>(fTemp39, fVec33[2]);
			fVec34[0] = fTemp40;
			float fTemp41 = std::max<float>(fTemp40, fVec34[4]);
			fVec35[0] = fTemp41;
			float fTemp42 = std::max<float>(fTemp41, fVec35[8]);
			fVec36[IOTA0 & 31] = fTemp42;
			float fTemp43 = std::max<float>(fTemp42, fVec36[(IOTA0 - 16) & 31]);
			fVec37[IOTA0 & 63] = fTemp43;
			float fTemp44 = std::max<float>(fTemp43, fVec37[(IOTA0 - 32) & 63]);
			fVec38[IOTA0 & 127] = fTemp44;
			float fTemp45 = std::max<float>(fTemp44, fVec38[(IOTA0 - 64) & 127]);
			fVec39[IOTA0 & 255] = fTemp45;
			fVec40[IOTA0 & 511] = std::max<float>(fTemp45, fVec39[(IOTA0 - 128) & 255]);
			float fTemp46 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst3) ? fTemp38 : -3.4028235e+38f), ((iConst75) ? fVec33[iConst3] : -3.4028235e+38f)), ((iConst76) ? fVec34[iConst77] : -3.4028235e+38f)), ((iConst78) ? fVec35[iConst79] : -3.4028235e+38f)), ((iConst80) ? fVec36[(IOTA0 - iConst81) & 31] : -3.4028235e+38f)), ((iConst82) ? fVec37[(IOTA0 - iConst83) & 63] : -3.4028235e+38f)), ((iConst84) ? fVec38[(IOTA0 - iConst85) & 127] : -3.4028235e+38f)), ((iConst86) ? fVec39[(IOTA0 - iConst87) & 255] : -3.4028235e+38f)), ((iConst88) ? fVec40[(IOTA0 - iConst89) & 511] : -3.4028235e+38f))));
			int iTemp47 = (fTemp46 > (fSlow14 + fTemp27 + -12.0f)) + (fTemp46 > (fSlow14 + fTemp27 + 12.0f));
			float fTemp48 = std::max<float>(-3.4028235e+38f, 1e+02f * ((iTemp47 == 0) ? fTemp46 - fTemp27 - fSlow14 : ((iTemp47 == 1) ? -(0.020833334f * mydsp_faustpower2_f(fTemp46 + (-12.0f - fTemp27) - fSlow14)) : 0.0f)));
			float fTemp49 = ((fTemp48 > fRec40[1]) ? fConst91 : fConst90);
			fRec40[0] = fTemp48 * (1.0f - fTemp49) + fRec40[1] * fTemp49;
			float fTemp50 = std::min<float>(1.0f, std::max<float>(0.0f, std::pow(1e+01f, 0.05f * fRec40[0])));
			fVbargraph1 = FAUSTFLOAT(1e+02f * (1.0f - fTemp50));
			float fTemp51 = std::tan(fConst9 * std::min<float>(fConst24, fTemp50 * (fConst25 * std::fabs(fRec33[1]) + 0.0784f)));
			float fTemp52 = fTemp51 + 2.0f;
			float fTemp53 = fTemp51 * fTemp52 + 1.0f;
			fVec41[0] = fConst101 * fRec61[1] - fConst99 * fRec3[2];
			fRec62[0] = fConst104 * (fConst103 * fRec3[2] - (fVec41[1] + fConst98 * fRec62[1]) + fConst97 * fRec3[1]);
			fRec61[0] = fRec62[0];
			fVec42[0] = 0.50032705f * fRec61[1] - fConst109 * fRec59[1];
			fRec60[0] = fConst110 * (fVec42[1] - fConst107 * fRec60[1] - 1.0006541f * fRec61[1] + 0.50032705f * fRec61[0]);
			fRec59[0] = fRec60[0];
			float fTemp54 = mydsp_faustpower2_f(fRec59[0]);
			fVec43[0] = fTemp54;
			float fTemp55 = fTemp54 + fVec43[1];
			fVec44[0] = fTemp55;
			float fTemp56 = fTemp55 + fVec44[2];
			fVec45[0] = fTemp56;
			float fTemp57 = fTemp56 + fVec45[4];
			fVec46[0] = fTemp57;
			float fTemp58 = fTemp57 + fVec46[8];
			fVec47[IOTA0 & 31] = fTemp58;
			float fTemp59 = fTemp58 + fVec47[(IOTA0 - 16) & 31];
			fVec48[IOTA0 & 63] = fTemp59;
			float fTemp60 = fTemp59 + fVec48[(IOTA0 - 32) & 63];
			fVec49[IOTA0 & 127] = fTemp60;
			float fTemp61 = fTemp60 + fVec49[(IOTA0 - 64) & 127];
			fVec50[IOTA0 & 255] = fTemp61;
			fVec51[IOTA0 & 511] = fTemp61 + fVec50[(IOTA0 - 128) & 255];
			float fTemp62 = std::max<float>(-2e+01f, std::min<float>(2e+01f, fSlow1 + fRec32[1] + (0.691f - 4.3429446f * std::log(std::max<float>(1e-12f, fConst126 * (((iConst124) ? 0.86000985f * fVec51[(IOTA0 - iConst125) & 511] : 0.0f) + ((iConst122) ? 0.86000985f * fVec50[(IOTA0 - iConst123) & 255] : 0.0f) + ((iConst120) ? 0.86000985f * fVec49[(IOTA0 - iConst121) & 127] : 0.0f) + ((iConst118) ? 0.86000985f * fVec48[(IOTA0 - iConst119) & 63] : 0.0f) + ((iConst116) ? 0.86000985f * fVec47[(IOTA0 - iConst117) & 31] : 0.0f) + ((iConst114) ? 0.86000985f * fVec46[iConst115] : 0.0f) + ((iConst112) ? 0.86000985f * fVec45[iConst113] : 0.0f) + ((iConst111) ? 0.86000985f * fTemp54 : 0.0f) + ((iConst93) ? 0.86000985f * fVec44[iConst111] : 0.0f))))))) - (fRec35[1] * fTemp52 + fRec36[1]);
			float fTemp63 = fTemp51 * fTemp62 / fTemp53;
			fRec35[0] = fRec35[1] + 2.0f * fTemp63;
			float fTemp64 = fRec35[1] + fTemp63;
			float fTemp65 = fTemp51 * fTemp64;
			fRec36[0] = fRec36[1] + 2.0f * fTemp65;
			float fRec37 = fTemp64;
			float fRec38 = fTemp62 / fTemp53;
			float fRec39 = fRec36[1] + fTemp65;
			fRec33[0] = fRec37;
			float fRec34 = fRec39;
			fVbargraph2 = FAUSTFLOAT(fRec34);
			fRec32[0] = fVbargraph2;
			fRec3[0] = std::pow(1e+01f, 0.05f * fRec32[0]) * (fRec5 + fRec4[1]);
			float fTemp66 = std::fabs(fRec3[0]);
			fVec52[0] = fTemp66;
			float fTemp67 = std::max<float>(fTemp66, fVec52[1]);
			fVec53[0] = fTemp67;
			float fTemp68 = std::max<float>(fTemp67, fVec53[2]);
			fVec54[0] = fTemp68;
			float fTemp69 = std::max<float>(fTemp68, fVec54[4]);
			fVec55[0] = fTemp69;
			float fTemp70 = std::max<float>(fTemp69, fVec55[8]);
			fVec56[IOTA0 & 31] = fTemp70;
			float fTemp71 = std::max<float>(fTemp70, fVec56[(IOTA0 - 16) & 31]);
			fVec57[IOTA0 & 63] = fTemp71;
			float fTemp72 = std::max<float>(fTemp71, fVec57[(IOTA0 - 32) & 63]);
			fVec58[IOTA0 & 127] = fTemp72;
			float fTemp73 = std::max<float>(fTemp72, fVec58[(IOTA0 - 64) & 127]);
			fVec59[IOTA0 & 255] = fTemp73;
			fVec60[IOTA0 & 511] = std::max<float>(fTemp73, fVec59[(IOTA0 - 128) & 255]);
			float fTemp74 = std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst3) ? fTemp66 : -3.4028235e+38f), ((iConst75) ? fVec53[iConst3] : -3.4028235e+38f)), ((iConst76) ? fVec54[iConst77] : -3.4028235e+38f)), ((iConst78) ? fVec55[iConst79] : -3.4028235e+38f)), ((iConst80) ? fVec56[(IOTA0 - iConst81) & 31] : -3.4028235e+38f)), ((iConst82) ? fVec57[(IOTA0 - iConst83) & 63] : -3.4028235e+38f)), ((iConst84) ? fVec58[(IOTA0 - iConst85) & 127] : -3.4028235e+38f)), ((iConst86) ? fVec59[(IOTA0 - iConst87) & 255] : -3.4028235e+38f)), ((iConst88) ? fVec60[(IOTA0 - iConst89) & 511] : -3.4028235e+38f))));
			float fTemp75 = 2e+01f * fTemp74;
			int iTemp76 = (fTemp75 > -2e+01f) + (fTemp75 > -2e+01f);
			float fTemp77 = 2e+01f * (fTemp74 + 1.0f);
			float fTemp78 = std::max<float>(-3.4028235e+38f, 0.8f * ((iTemp76 == 0) ? fTemp77 : ((iTemp76 == 1) ? -(4194304.0f * mydsp_faustpower2_f(fTemp77 + -5.9604645e-08f)) : 0.0f)));
			float fTemp79 = ((fTemp78 > fRec2[1]) ? fConst127 : fConst26);
			fRec2[0] = fTemp78 * (1.0f - fTemp79) + fRec2[1] * fTemp79;
			float fTemp80 = std::min<float>(1.0f, std::max<float>(0.0f, std::pow(1e+01f, 0.05f * fRec2[0])));
			fVbargraph3 = FAUSTFLOAT(fTemp80);
			float fTemp81 = fTemp80;
			float fTemp82 = fRec74[1] + fConst128 * (fRec3[0] - fRec75[1]);
			fRec74[0] = fConst130 * fTemp82 - fRec74[1];
			float fTemp83 = fRec75[1] + fConst131 * fTemp82;
			fRec75[0] = 2.0f * fTemp83 - fRec75[1];
			float fRec76 = fConst132 * fTemp82;
			float fRec77 = fTemp83;
			float fTemp84 = fRec77 + 1.4142135f * fRec76;
			float fTemp85 = fRec70[1] + fConst128 * (fRec3[0] - (fTemp84 + fRec71[1]));
			fRec70[0] = fConst130 * fTemp85 - fRec70[1];
			float fTemp86 = fRec71[1] + fConst131 * fTemp85;
			fRec71[0] = 2.0f * fTemp86 - fRec71[1];
			float fRec72 = fConst132 * fTemp85;
			float fRec73 = fTemp86;
			float fTemp87 = fRec77 + fRec73;
			float fTemp88 = fRec76 + fRec72;
			float fTemp89 = 1.4142135f * fTemp88;
			float fTemp90 = fTemp89 + fTemp87;
			float fTemp91 = fRec85[1] + fConst133 * (fRec3[0] - (fTemp90 + fRec86[1]));
			fRec85[0] = fConst135 * fTemp91 - fRec85[1];
			float fTemp92 = fRec86[1] + fConst136 * fTemp91;
			fRec86[0] = 2.0f * fTemp92 - fRec86[1];
			float fRec87 = fConst137 * fTemp91;
			float fTemp93 = fTemp89 + fTemp87 + 2.828427f * fRec87;
			float fTemp94 = fRec82[1] + fConst138 * (fRec3[0] - (fTemp93 + fRec83[1]));
			fRec82[0] = fConst140 * fTemp94 - fRec82[1];
			float fTemp95 = fRec83[1] + fConst141 * fTemp94;
			fRec83[0] = 2.0f * fTemp95 - fRec83[1];
			float fRec84 = fConst142 * fTemp94;
			float fTemp96 = fRec87 + fRec84;
			float fTemp97 = fTemp90 + 2.828427f * fTemp96;
			float fTemp98 = fRec88[1] + fConst71 * (fRec3[0] - (fTemp97 + fRec89[1]));
			fRec88[0] = fConst73 * fTemp98 - fRec88[1];
			float fTemp99 = fRec89[1] + fConst74 * fTemp98;
			fRec89[0] = 2.0f * fTemp99 - fRec89[1];
			float fRec90 = fConst143 * fTemp98;
			float fTemp100 = fRec90 + fTemp96;
			float fTemp101 = 2.828427f * fTemp100;
			float fTemp102 = fTemp90 + fTemp101;
			float fTemp103 = fRec78[1] + fConst144 * (fRec3[0] - (fTemp102 + fRec79[1]));
			fRec78[0] = fConst146 * fTemp103 - fRec78[1];
			float fTemp104 = fRec79[1] + fConst147 * fTemp103;
			fRec79[0] = 2.0f * fTemp104 - fRec79[1];
			float fRec80 = fConst148 * fTemp103;
			float fRec81 = fTemp104;
			float fTemp105 = fRec81 + fTemp87;
			float fTemp106 = fRec80 + fTemp88;
			float fTemp107 = 1.4142135f * fTemp106 + fTemp101 + fTemp105;
			float fTemp108 = fRec91[1] + fConst144 * (fRec3[0] - (fTemp107 + fRec92[1]));
			fRec91[0] = fConst146 * fTemp108 - fRec91[1];
			float fTemp109 = fRec92[1] + fConst147 * fTemp108;
			fRec92[0] = 2.0f * fTemp109 - fRec92[1];
			float fRec93 = fConst148 * fTemp108;
			float fRec94 = fTemp109;
			float fTemp110 = fRec94 + fTemp105;
			float fTemp111 = fRec93 + fTemp106;
			float fTemp112 = 1.4142135f * fTemp111;
			float fTemp113 = fTemp112 + fTemp101 + fTemp110;
			float fTemp114 = fRec99[1] + fConst149 * (fRec3[0] - (fTemp113 + fRec100[1]));
			fRec99[0] = fConst151 * fTemp114 - fRec99[1];
			float fTemp115 = fRec100[1] + fConst152 * fTemp114;
			fRec100[0] = 2.0f * fTemp115 - fRec100[1];
			float fRec101 = fConst153 * fTemp114;
			float fTemp116 = 2.828427f * (fRec101 + fTemp100);
			float fTemp117 = fTemp112 + fTemp110 + fTemp116;
			float fTemp118 = fRec95[1] + fConst154 * (fRec3[0] - (fTemp117 + fRec96[1]));
			fRec95[0] = fConst156 * fTemp118 - fRec95[1];
			float fTemp119 = fRec96[1] + fConst157 * fTemp118;
			fRec96[0] = 2.0f * fTemp119 - fRec96[1];
			float fRec97 = fConst158 * fTemp118;
			float fRec98 = fTemp119;
			float fTemp120 = fRec98 + fTemp110;
			float fTemp121 = fRec97 + fTemp111;
			float fTemp122 = 1.4142135f * fTemp121 + fTemp116 + fTemp120;
			float fTemp123 = fRec102[1] + fConst154 * (fRec3[0] - (fTemp122 + fRec103[1]));
			fRec102[0] = fConst156 * fTemp123 - fRec102[1];
			float fTemp124 = fRec103[1] + fConst157 * fTemp123;
			fRec103[0] = 2.0f * fTemp124 - fRec103[1];
			float fRec104 = fConst158 * fTemp123;
			float fRec105 = fTemp124;
			float fTemp125 = fRec3[0] - (1.4142135f * (fRec104 + fTemp121) + fTemp116 + fRec105 + fTemp120);
			fVec61[0] = fTemp125;
			fVec62[0] = fConst161 * fVec61[1] - fConst101 * fRec68[1];
			fRec69[0] = fConst104 * (fVec62[1] - fConst98 * fRec69[1] + fConst160 * fVec61[1] + fConst159 * fTemp125);
			fRec68[0] = fRec69[0];
			fVec63[0] = 0.50032705f * fRec68[1] - fConst109 * fRec66[1];
			fRec67[0] = fConst110 * (fVec63[1] - fConst107 * fRec67[1] - 1.0006541f * fRec68[1] + 0.50032705f * fRec68[0]);
			fRec66[0] = fRec67[0];
			float fTemp126 = std::fabs(0.92736715f * fRec66[0]);
			fRec65[0] = std::max<float>(fTemp126, fConst162 * fRec65[1] + fConst163 * fTemp126);
			fRec64[0] = fConst29 * fRec65[0] + fConst28 * fRec64[1];
			fVec64[0] = fConst99 * fRec3[1] - fConst101 * fRec110[1];
			fRec111[0] = fConst104 * (fVec64[1] - fConst98 * fRec111[1] + fConst103 * fRec3[1] + fConst97 * fRec3[0]);
			fRec110[0] = fRec111[0];
			fVec65[0] = 0.50032705f * fRec110[1] - fConst109 * fRec108[1];
			fRec109[0] = fConst110 * (fVec65[1] - fConst107 * fRec109[1] - 1.0006541f * fRec110[1] + 0.50032705f * fRec110[0]);
			fRec108[0] = fRec109[0];
			float fTemp127 = std::fabs(0.92736715f * fRec108[0]);
			fRec107[0] = std::max<float>(fTemp127, fConst162 * fRec107[1] + fConst163 * fTemp127);
			fRec106[0] = fConst29 * fRec107[0] + fConst28 * fRec106[1];
			float fTemp128 = std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec106[0])));
			float fTemp129 = 2e+01f * (fTemp128 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec64[0]))));
			fVbargraph4 = FAUSTFLOAT(-fTemp129);
			fRec63[0] = fConst164 * (fSlow15 - -fTemp129) + fConst127 * fRec63[1];
			float fTemp130 = std::pow(1e+01f, fSlow16 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec63[0])) * fTemp81);
			fVbargraph5 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp130)));
			float fTemp131 = fTemp125 * fTemp130;
			float fTemp132 = std::fabs(fTemp131);
			fVec66[0] = fTemp132;
			float fTemp133 = std::max<float>(fTemp132, fVec66[1]);
			fVec67[0] = fTemp133;
			float fTemp134 = std::max<float>(fTemp133, fVec67[2]);
			fVec68[0] = fTemp134;
			float fTemp135 = std::max<float>(fTemp134, fVec68[4]);
			fVec69[0] = fTemp135;
			float fTemp136 = std::max<float>(fTemp135, fVec69[8]);
			fVec70[IOTA0 & 31] = fTemp136;
			float fTemp137 = std::max<float>(fTemp136, fVec70[(IOTA0 - 16) & 31]);
			fVec71[IOTA0 & 63] = fTemp137;
			float fTemp138 = std::max<float>(fTemp137, fVec71[(IOTA0 - 32) & 63]);
			fVec72[IOTA0 & 127] = fTemp138;
			float fTemp139 = std::max<float>(fTemp138, fVec72[(IOTA0 - 64) & 127]);
			fVec73[IOTA0 & 255] = fTemp139;
			float fTemp140 = std::max<float>(fTemp139, fVec73[(IOTA0 - 128) & 255]);
			fVec74[IOTA0 & 511] = fTemp140;
			fVec75[IOTA0 & 511] = std::max<float>(fTemp140, fVec74[(IOTA0 - 256) & 511]);
			float fTemp141 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst1) ? fTemp132 : -3.4028235e+38f), ((iConst165) ? fVec67[iConst1] : -3.4028235e+38f)), ((iConst166) ? fVec68[iConst167] : -3.4028235e+38f)), ((iConst168) ? fVec69[iConst169] : -3.4028235e+38f)), ((iConst170) ? fVec70[(IOTA0 - iConst171) & 31] : -3.4028235e+38f)), ((iConst172) ? fVec71[(IOTA0 - iConst173) & 63] : -3.4028235e+38f)), ((iConst174) ? fVec72[(IOTA0 - iConst175) & 127] : -3.4028235e+38f)), ((iConst176) ? fVec73[(IOTA0 - iConst177) & 255] : -3.4028235e+38f)), ((iConst178) ? fVec74[(IOTA0 - iConst179) & 511] : -3.4028235e+38f)), ((iConst180) ? fVec75[(IOTA0 - iConst181) & 511] : -3.4028235e+38f))));
			int iTemp142 = (fTemp141 > fSlow17) + (fTemp141 > fSlow3);
			float fTemp143 = std::max<float>(-12.0f, 0.75f * ((iTemp142 == 0) ? fTemp141 + 12.0f - fSlow1 : ((iTemp142 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp141 + 9.0f - fSlow1)) : 0.0f)));
			float fTemp144 = ((fTemp143 > fRec1[1]) ? fConst91 : fConst90);
			fRec1[0] = fTemp143 * (1.0f - fTemp144) + fRec1[1] * fTemp144;
			float fTemp145 = fRec143[1] + fConst128 * (fRec77 - fRec144[1]);
			fRec143[0] = fConst130 * fTemp145 - fRec143[1];
			float fTemp146 = fRec144[1] + fConst131 * fTemp145;
			fRec144[0] = 2.0f * fTemp146 - fRec144[1];
			float fRec145 = fTemp146;
			float fTemp147 = fRec140[1] + fConst144 * (fRec145 - fRec141[1]);
			fRec140[0] = fConst146 * fTemp147 - fRec140[1];
			float fTemp148 = fRec141[1] + fConst147 * fTemp147;
			fRec141[0] = 2.0f * fTemp148 - fRec141[1];
			float fRec142 = fConst148 * fTemp147;
			float fTemp149 = 2.828427f * fRec142;
			float fTemp150 = fRec137[1] + fConst149 * (fRec145 - (fTemp149 + fRec138[1]));
			fRec137[0] = fConst151 * fTemp150 - fRec137[1];
			float fTemp151 = fRec138[1] + fConst152 * fTemp150;
			fRec138[0] = 2.0f * fTemp151 - fRec138[1];
			float fRec139 = fConst153 * fTemp150;
			float fTemp152 = fRec142 + fRec139;
			float fTemp153 = 2.828427f * fTemp152;
			float fTemp154 = fRec146[1] + fConst154 * (fRec145 - (fTemp153 + fRec147[1]));
			fRec146[0] = fConst156 * fTemp154 - fRec146[1];
			float fTemp155 = fRec147[1] + fConst157 * fTemp154;
			fRec147[0] = 2.0f * fTemp155 - fRec147[1];
			float fRec148 = fConst158 * fTemp154;
			float fTemp156 = fRec148 + fTemp152;
			float fTemp157 = 2.828427f * fTemp156;
			float fTemp158 = fRec133[1] + fConst133 * (fRec145 - (fTemp157 + fRec134[1]));
			fRec133[0] = fConst135 * fTemp158 - fRec133[1];
			float fTemp159 = fRec134[1] + fConst136 * fTemp158;
			fRec134[0] = 2.0f * fTemp159 - fRec134[1];
			float fRec135 = fConst137 * fTemp158;
			float fRec136 = fTemp159;
			float fTemp160 = fRec130[1] + fConst133 * (fRec136 - fRec131[1]);
			fRec130[0] = fConst135 * fTemp160 - fRec130[1];
			float fTemp161 = fRec131[1] + fConst136 * fTemp160;
			fRec131[0] = 2.0f * fTemp161 - fRec131[1];
			float fRec132 = fTemp161;
			float fTemp162 = fRec127[1] + fConst71 * (fRec132 - fRec128[1]);
			fRec127[0] = fConst73 * fTemp162 - fRec127[1];
			float fTemp163 = fRec128[1] + fConst74 * fTemp162;
			fRec128[0] = 2.0f * fTemp163 - fRec128[1];
			float fRec129 = fConst143 * fTemp162;
			float fTemp164 = 2.828427f * fRec129;
			float fTemp165 = fRec123[1] + fConst138 * (fRec132 - (fTemp164 + fRec124[1]));
			fRec123[0] = fConst140 * fTemp165 - fRec123[1];
			float fTemp166 = fRec124[1] + fConst141 * fTemp165;
			fRec124[0] = 2.0f * fTemp166 - fRec124[1];
			float fRec125 = fConst142 * fTemp165;
			float fRec126 = fTemp166;
			float fTemp167 = fRec120[1] + fConst138 * (fRec126 - fRec121[1]);
			fRec120[0] = fConst140 * fTemp167 - fRec120[1];
			float fTemp168 = fRec121[1] + fConst141 * fTemp167;
			fRec121[0] = 2.0f * fTemp168 - fRec121[1];
			fRec122[0] = fTemp168;
			fVec76[0] = fConst161 * fRec122[1] - fConst101 * fRec118[1];
			fRec119[0] = fConst104 * (fVec76[1] - fConst98 * fRec119[1] + fConst160 * fRec122[1] + fConst159 * fRec122[0]);
			fRec118[0] = fRec119[0];
			fVec77[0] = 0.50032705f * fRec118[1] - fConst109 * fRec116[1];
			fRec117[0] = fConst110 * (fVec77[1] - fConst107 * fRec117[1] - 1.0006541f * fRec118[1] + 0.50032705f * fRec118[0]);
			fRec116[0] = fRec117[0];
			float fTemp169 = std::fabs(0.92736715f * fRec116[0]);
			fRec115[0] = std::max<float>(fTemp169, fConst162 * fRec115[1] + fConst163 * fTemp169);
			fRec114[0] = fConst29 * fRec115[0] + fConst28 * fRec114[1];
			float fTemp170 = 2e+01f * (std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec114[0]))) - fTemp128);
			fVbargraph6 = FAUSTFLOAT(fTemp170);
			fRec113[0] = fConst182 * (fSlow18 - fTemp170) + fConst90 * fRec113[1];
			float fTemp171 = std::pow(1e+01f, fSlow16 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec113[0])) * fTemp81);
			fVbargraph7 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp171)));
			float fTemp172 = fRec122[0] * fTemp171;
			float fTemp173 = std::fabs(fTemp172);
			fVec78[0] = fTemp173;
			float fTemp174 = std::max<float>(fTemp173, fVec78[1]);
			fVec79[0] = fTemp174;
			float fTemp175 = std::max<float>(fTemp174, fVec79[2]);
			fVec80[0] = fTemp175;
			float fTemp176 = std::max<float>(fTemp175, fVec80[4]);
			fVec81[0] = fTemp176;
			float fTemp177 = std::max<float>(fTemp176, fVec81[8]);
			fVec82[IOTA0 & 31] = fTemp177;
			float fTemp178 = std::max<float>(fTemp177, fVec82[(IOTA0 - 16) & 31]);
			fVec83[IOTA0 & 63] = fTemp178;
			float fTemp179 = std::max<float>(fTemp178, fVec83[(IOTA0 - 32) & 63]);
			fVec84[IOTA0 & 127] = fTemp179;
			float fTemp180 = std::max<float>(fTemp179, fVec84[(IOTA0 - 64) & 127]);
			fVec85[IOTA0 & 255] = fTemp180;
			float fTemp181 = std::max<float>(fTemp180, fVec85[(IOTA0 - 128) & 255]);
			fVec86[IOTA0 & 511] = fTemp181;
			fVec87[IOTA0 & 511] = std::max<float>(fTemp181, fVec86[(IOTA0 - 256) & 511]);
			float fTemp182 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst1) ? fTemp173 : -3.4028235e+38f), ((iConst165) ? fVec79[iConst1] : -3.4028235e+38f)), ((iConst166) ? fVec80[iConst167] : -3.4028235e+38f)), ((iConst168) ? fVec81[iConst169] : -3.4028235e+38f)), ((iConst170) ? fVec82[(IOTA0 - iConst171) & 31] : -3.4028235e+38f)), ((iConst172) ? fVec83[(IOTA0 - iConst173) & 63] : -3.4028235e+38f)), ((iConst174) ? fVec84[(IOTA0 - iConst175) & 127] : -3.4028235e+38f)), ((iConst176) ? fVec85[(IOTA0 - iConst177) & 255] : -3.4028235e+38f)), ((iConst178) ? fVec86[(IOTA0 - iConst179) & 511] : -3.4028235e+38f)), ((iConst180) ? fVec87[(IOTA0 - iConst181) & 511] : -3.4028235e+38f))));
			int iTemp183 = (fTemp182 > fSlow17) + (fTemp182 > fSlow3);
			float fTemp184 = std::max<float>(-12.0f, 0.75f * ((iTemp183 == 0) ? fTemp182 + 12.0f - fSlow1 : ((iTemp183 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp182 + 9.0f - fSlow1)) : 0.0f)));
			float fTemp185 = ((fTemp184 > fRec112[1]) ? fConst91 : fConst90);
			fRec112[0] = fTemp184 * (1.0f - fTemp185) + fRec112[1] * fTemp185;
			float fTemp186 = fRec126 + fTemp164 + 1.4142135f * fRec125;
			float fTemp187 = fRec157[1] + fConst138 * (fRec132 - (fTemp186 + fRec158[1]));
			fRec157[0] = fConst140 * fTemp187 - fRec157[1];
			float fTemp188 = fRec158[1] + fConst141 * fTemp187;
			fRec158[0] = 2.0f * fTemp188 - fRec158[1];
			float fRec159 = fConst142 * fTemp187;
			float fRec160 = fTemp188;
			float fTemp189 = fRec132 - (1.4142135f * (fRec125 + fRec159) + fRec160 + fRec126 + fTemp164);
			fVec88[0] = fTemp189;
			fVec89[0] = fConst161 * fVec88[1] - fConst101 * fRec155[1];
			fRec156[0] = fConst104 * (fVec89[1] - fConst98 * fRec156[1] + fConst160 * fVec88[1] + fConst159 * fTemp189);
			fRec155[0] = fRec156[0];
			fVec90[0] = 0.50032705f * fRec155[1] - fConst109 * fRec153[1];
			fRec154[0] = fConst110 * (fVec90[1] - fConst107 * fRec154[1] - 1.0006541f * fRec155[1] + 0.50032705f * fRec155[0]);
			fRec153[0] = fRec154[0];
			float fTemp190 = std::fabs(0.92736715f * fRec153[0]);
			fRec152[0] = std::max<float>(fTemp190, fConst162 * fRec152[1] + fConst163 * fTemp190);
			fRec151[0] = fConst29 * fRec152[0] + fConst28 * fRec151[1];
			float fTemp191 = 2e+01f * (fTemp128 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec151[0]))));
			fVbargraph8 = FAUSTFLOAT(-fTemp191);
			fRec150[0] = fConst184 * (fSlow19 - -fTemp191) + fConst183 * fRec150[1];
			float fTemp192 = std::pow(1e+01f, fSlow16 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec150[0])) * fTemp81);
			fVbargraph9 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp192)));
			float fTemp193 = fTemp189 * fTemp192;
			float fTemp194 = std::fabs(fTemp193);
			fVec91[0] = fTemp194;
			float fTemp195 = std::max<float>(fTemp194, fVec91[1]);
			fVec92[0] = fTemp195;
			float fTemp196 = std::max<float>(fTemp195, fVec92[2]);
			fVec93[0] = fTemp196;
			float fTemp197 = std::max<float>(fTemp196, fVec93[4]);
			fVec94[0] = fTemp197;
			float fTemp198 = std::max<float>(fTemp197, fVec94[8]);
			fVec95[IOTA0 & 31] = fTemp198;
			float fTemp199 = std::max<float>(fTemp198, fVec95[(IOTA0 - 16) & 31]);
			fVec96[IOTA0 & 63] = fTemp199;
			float fTemp200 = std::max<float>(fTemp199, fVec96[(IOTA0 - 32) & 63]);
			fVec97[IOTA0 & 127] = fTemp200;
			float fTemp201 = std::max<float>(fTemp200, fVec97[(IOTA0 - 64) & 127]);
			fVec98[IOTA0 & 255] = fTemp201;
			float fTemp202 = std::max<float>(fTemp201, fVec98[(IOTA0 - 128) & 255]);
			fVec99[IOTA0 & 511] = fTemp202;
			fVec100[IOTA0 & 511] = std::max<float>(fTemp202, fVec99[(IOTA0 - 256) & 511]);
			float fTemp203 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst1) ? fTemp194 : -3.4028235e+38f), ((iConst165) ? fVec92[iConst1] : -3.4028235e+38f)), ((iConst166) ? fVec93[iConst167] : -3.4028235e+38f)), ((iConst168) ? fVec94[iConst169] : -3.4028235e+38f)), ((iConst170) ? fVec95[(IOTA0 - iConst171) & 31] : -3.4028235e+38f)), ((iConst172) ? fVec96[(IOTA0 - iConst173) & 63] : -3.4028235e+38f)), ((iConst174) ? fVec97[(IOTA0 - iConst175) & 127] : -3.4028235e+38f)), ((iConst176) ? fVec98[(IOTA0 - iConst177) & 255] : -3.4028235e+38f)), ((iConst178) ? fVec99[(IOTA0 - iConst179) & 511] : -3.4028235e+38f)), ((iConst180) ? fVec100[(IOTA0 - iConst181) & 511] : -3.4028235e+38f))));
			int iTemp204 = (fTemp203 > fSlow17) + (fTemp203 > fSlow3);
			float fTemp205 = std::max<float>(-12.0f, 0.75f * ((iTemp204 == 0) ? fTemp203 + 12.0f - fSlow1 : ((iTemp204 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp203 + 9.0f - fSlow1)) : 0.0f)));
			float fTemp206 = ((fTemp205 > fRec149[1]) ? fConst91 : fConst90);
			fRec149[0] = fTemp205 * (1.0f - fTemp206) + fRec149[1] * fTemp206;
			float fTemp207 = fTemp157 + fRec136 + 1.4142135f * fRec135;
			float fTemp208 = fRec179[1] + fConst133 * (fRec145 - (fTemp207 + fRec180[1]));
			fRec179[0] = fConst135 * fTemp208 - fRec179[1];
			float fTemp209 = fRec180[1] + fConst136 * fTemp208;
			fRec180[0] = 2.0f * fTemp209 - fRec180[1];
			float fRec181 = fConst137 * fTemp208;
			float fRec182 = fTemp209;
			float fTemp210 = fRec136 + fRec182;
			float fTemp211 = fRec135 + fRec181;
			float fTemp212 = 1.4142135f * fTemp211;
			float fTemp213 = fTemp212 + fTemp157 + fTemp210;
			float fTemp214 = fRec176[1] + fConst138 * (fRec145 - (fTemp213 + fRec177[1]));
			fRec176[0] = fConst140 * fTemp214 - fRec176[1];
			float fTemp215 = fRec177[1] + fConst141 * fTemp214;
			fRec177[0] = 2.0f * fTemp215 - fRec177[1];
			float fRec178 = fConst142 * fTemp214;
			float fTemp216 = 2.828427f * (fRec178 + fTemp156);
			float fTemp217 = fTemp212 + fTemp210 + fTemp216;
			float fTemp218 = fRec172[1] + fConst71 * (fRec145 - (fTemp217 + fRec173[1]));
			fRec172[0] = fConst73 * fTemp218 - fRec172[1];
			float fTemp219 = fRec173[1] + fConst74 * fTemp218;
			fRec173[0] = 2.0f * fTemp219 - fRec173[1];
			float fRec174 = fConst143 * fTemp218;
			float fRec175 = fTemp219;
			float fTemp220 = fRec169[1] + fConst71 * (fRec175 - fRec170[1]);
			fRec169[0] = fConst73 * fTemp220 - fRec169[1];
			float fTemp221 = fRec170[1] + fConst74 * fTemp220;
			fRec170[0] = 2.0f * fTemp221 - fRec170[1];
			fRec171[0] = fTemp221;
			fVec101[0] = fConst161 * fRec171[1] - fConst101 * fRec167[1];
			fRec168[0] = fConst104 * (fVec101[1] - fConst98 * fRec168[1] + fConst160 * fRec171[1] + fConst159 * fRec171[0]);
			fRec167[0] = fRec168[0];
			fVec102[0] = 0.50032705f * fRec167[1] - fConst109 * fRec165[1];
			fRec166[0] = fConst110 * (fVec102[1] - fConst107 * fRec166[1] - 1.0006541f * fRec167[1] + 0.50032705f * fRec167[0]);
			fRec165[0] = fRec166[0];
			float fTemp222 = std::fabs(0.92736715f * fRec165[0]);
			fRec164[0] = std::max<float>(fTemp222, fConst162 * fRec164[1] + fConst163 * fTemp222);
			fRec163[0] = fConst29 * fRec164[0] + fConst28 * fRec163[1];
			float fTemp223 = 2e+01f * (fTemp128 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec163[0]))));
			fVbargraph10 = FAUSTFLOAT(-fTemp223);
			fRec162[0] = fConst186 * (fSlow20 - -fTemp223) + fConst185 * fRec162[1];
			float fTemp224 = std::pow(1e+01f, fSlow16 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec162[0])) * fTemp81);
			fVbargraph11 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp224)));
			float fTemp225 = fRec171[0] * fTemp224;
			float fTemp226 = std::fabs(fTemp225);
			fVec103[0] = fTemp226;
			float fTemp227 = std::max<float>(fTemp226, fVec103[1]);
			fVec104[0] = fTemp227;
			float fTemp228 = std::max<float>(fTemp227, fVec104[2]);
			fVec105[0] = fTemp228;
			float fTemp229 = std::max<float>(fTemp228, fVec105[4]);
			fVec106[0] = fTemp229;
			float fTemp230 = std::max<float>(fTemp229, fVec106[8]);
			fVec107[IOTA0 & 31] = fTemp230;
			float fTemp231 = std::max<float>(fTemp230, fVec107[(IOTA0 - 16) & 31]);
			fVec108[IOTA0 & 63] = fTemp231;
			float fTemp232 = std::max<float>(fTemp231, fVec108[(IOTA0 - 32) & 63]);
			fVec109[IOTA0 & 127] = fTemp232;
			float fTemp233 = std::max<float>(fTemp232, fVec109[(IOTA0 - 64) & 127]);
			fVec110[IOTA0 & 255] = fTemp233;
			float fTemp234 = std::max<float>(fTemp233, fVec110[(IOTA0 - 128) & 255]);
			fVec111[IOTA0 & 511] = fTemp234;
			fVec112[IOTA0 & 511] = std::max<float>(fTemp234, fVec111[(IOTA0 - 256) & 511]);
			float fTemp235 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst1) ? fTemp226 : -3.4028235e+38f), ((iConst165) ? fVec104[iConst1] : -3.4028235e+38f)), ((iConst166) ? fVec105[iConst167] : -3.4028235e+38f)), ((iConst168) ? fVec106[iConst169] : -3.4028235e+38f)), ((iConst170) ? fVec107[(IOTA0 - iConst171) & 31] : -3.4028235e+38f)), ((iConst172) ? fVec108[(IOTA0 - iConst173) & 63] : -3.4028235e+38f)), ((iConst174) ? fVec109[(IOTA0 - iConst175) & 127] : -3.4028235e+38f)), ((iConst176) ? fVec110[(IOTA0 - iConst177) & 255] : -3.4028235e+38f)), ((iConst178) ? fVec111[(IOTA0 - iConst179) & 511] : -3.4028235e+38f)), ((iConst180) ? fVec112[(IOTA0 - iConst181) & 511] : -3.4028235e+38f))));
			int iTemp236 = (fTemp235 > fSlow17) + (fTemp235 > fSlow3);
			float fTemp237 = std::max<float>(-12.0f, 0.75f * ((iTemp236 == 0) ? fTemp235 + 12.0f - fSlow1 : ((iTemp236 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp235 + 9.0f - fSlow1)) : 0.0f)));
			float fTemp238 = ((fTemp237 > fRec161[1]) ? fConst91 : fConst90);
			fRec161[0] = fTemp237 * (1.0f - fTemp238) + fRec161[1] * fTemp238;
			float fTemp239 = fRec175 + fTemp210;
			float fTemp240 = fRec174 + fTemp211;
			float fTemp241 = 1.4142135f * fTemp240 + fTemp216 + fTemp239;
			float fTemp242 = fRec191[1] + fConst71 * (fRec145 - (fTemp241 + fRec192[1]));
			fRec191[0] = fConst73 * fTemp242 - fRec191[1];
			float fTemp243 = fRec192[1] + fConst74 * fTemp242;
			fRec192[0] = 2.0f * fTemp243 - fRec192[1];
			float fRec193 = fConst143 * fTemp242;
			float fRec194 = fTemp243;
			float fTemp244 = fRec145 - (1.4142135f * (fRec193 + fTemp240) + fTemp216 + fRec194 + fTemp239);
			fVec113[0] = fTemp244;
			fVec114[0] = fConst161 * fVec113[1] - fConst101 * fRec189[1];
			fRec190[0] = fConst104 * (fVec114[1] - fConst98 * fRec190[1] + fConst160 * fVec113[1] + fConst159 * fTemp244);
			fRec189[0] = fRec190[0];
			fVec115[0] = 0.50032705f * fRec189[1] - fConst109 * fRec187[1];
			fRec188[0] = fConst110 * (fVec115[1] - fConst107 * fRec188[1] - 1.0006541f * fRec189[1] + 0.50032705f * fRec189[0]);
			fRec187[0] = fRec188[0];
			float fTemp245 = std::fabs(0.92736715f * fRec187[0]);
			fRec186[0] = std::max<float>(fTemp245, fConst162 * fRec186[1] + fConst163 * fTemp245);
			fRec185[0] = fConst29 * fRec186[0] + fConst28 * fRec185[1];
			float fTemp246 = 2e+01f * (fTemp128 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec185[0]))));
			fVbargraph12 = FAUSTFLOAT(-fTemp246);
			fRec184[0] = fConst188 * (fSlow21 - -fTemp246) + fConst187 * fRec184[1];
			float fTemp247 = std::pow(1e+01f, fSlow16 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec184[0])) * fTemp81);
			fVbargraph13 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp247)));
			float fTemp248 = fTemp244 * fTemp247;
			float fTemp249 = std::fabs(fTemp248);
			fVec116[0] = fTemp249;
			float fTemp250 = std::max<float>(fTemp249, fVec116[1]);
			fVec117[0] = fTemp250;
			float fTemp251 = std::max<float>(fTemp250, fVec117[2]);
			fVec118[0] = fTemp251;
			float fTemp252 = std::max<float>(fTemp251, fVec118[4]);
			fVec119[0] = fTemp252;
			float fTemp253 = std::max<float>(fTemp252, fVec119[8]);
			fVec120[IOTA0 & 31] = fTemp253;
			float fTemp254 = std::max<float>(fTemp253, fVec120[(IOTA0 - 16) & 31]);
			fVec121[IOTA0 & 63] = fTemp254;
			float fTemp255 = std::max<float>(fTemp254, fVec121[(IOTA0 - 32) & 63]);
			fVec122[IOTA0 & 127] = fTemp255;
			float fTemp256 = std::max<float>(fTemp255, fVec122[(IOTA0 - 64) & 127]);
			fVec123[IOTA0 & 255] = fTemp256;
			float fTemp257 = std::max<float>(fTemp256, fVec123[(IOTA0 - 128) & 255]);
			fVec124[IOTA0 & 511] = fTemp257;
			fVec125[IOTA0 & 511] = std::max<float>(fTemp257, fVec124[(IOTA0 - 256) & 511]);
			float fTemp258 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst1) ? fTemp249 : -3.4028235e+38f), ((iConst165) ? fVec117[iConst1] : -3.4028235e+38f)), ((iConst166) ? fVec118[iConst167] : -3.4028235e+38f)), ((iConst168) ? fVec119[iConst169] : -3.4028235e+38f)), ((iConst170) ? fVec120[(IOTA0 - iConst171) & 31] : -3.4028235e+38f)), ((iConst172) ? fVec121[(IOTA0 - iConst173) & 63] : -3.4028235e+38f)), ((iConst174) ? fVec122[(IOTA0 - iConst175) & 127] : -3.4028235e+38f)), ((iConst176) ? fVec123[(IOTA0 - iConst177) & 255] : -3.4028235e+38f)), ((iConst178) ? fVec124[(IOTA0 - iConst179) & 511] : -3.4028235e+38f)), ((iConst180) ? fVec125[(IOTA0 - iConst181) & 511] : -3.4028235e+38f))));
			int iTemp259 = (fTemp258 > fSlow17) + (fTemp258 > fSlow3);
			float fTemp260 = std::max<float>(-12.0f, 0.75f * ((iTemp259 == 0) ? fTemp258 + 12.0f - fSlow1 : ((iTemp259 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp258 + 9.0f - fSlow1)) : 0.0f)));
			float fTemp261 = ((fTemp260 > fRec183[1]) ? fConst91 : fConst90);
			fRec183[0] = fTemp260 * (1.0f - fTemp261) + fRec183[1] * fTemp261;
			float fTemp262 = fRec213[1] + fConst144 * (fRec81 - fRec214[1]);
			fRec213[0] = fConst146 * fTemp262 - fRec213[1];
			float fTemp263 = fRec214[1] + fConst147 * fTemp262;
			fRec214[0] = 2.0f * fTemp263 - fRec214[1];
			float fRec215 = fTemp263;
			float fTemp264 = fRec210[1] + fConst154 * (fRec215 - fRec211[1]);
			fRec210[0] = fConst156 * fTemp264 - fRec210[1];
			float fTemp265 = fRec211[1] + fConst157 * fTemp264;
			fRec211[0] = 2.0f * fTemp265 - fRec211[1];
			float fRec212 = fConst158 * fTemp264;
			float fTemp266 = 2.828427f * fRec212;
			float fTemp267 = fRec206[1] + fConst149 * (fRec215 - (fTemp266 + fRec207[1]));
			fRec206[0] = fConst151 * fTemp267 - fRec206[1];
			float fTemp268 = fRec207[1] + fConst152 * fTemp267;
			fRec207[0] = 2.0f * fTemp268 - fRec207[1];
			float fRec208 = fConst153 * fTemp267;
			float fRec209 = fTemp268;
			float fTemp269 = fRec203[1] + fConst149 * (fRec209 - fRec204[1]);
			fRec203[0] = fConst151 * fTemp269 - fRec203[1];
			float fTemp270 = fRec204[1] + fConst152 * fTemp269;
			fRec204[0] = 2.0f * fTemp270 - fRec204[1];
			fRec205[0] = fTemp270;
			fVec126[0] = fConst161 * fRec205[1] - fConst101 * fRec201[1];
			fRec202[0] = fConst104 * (fVec126[1] - fConst98 * fRec202[1] + fConst160 * fRec205[1] + fConst159 * fRec205[0]);
			fRec201[0] = fRec202[0];
			fVec127[0] = 0.50032705f * fRec201[1] - fConst109 * fRec199[1];
			fRec200[0] = fConst110 * (fVec127[1] - fConst107 * fRec200[1] - 1.0006541f * fRec201[1] + 0.50032705f * fRec201[0]);
			fRec199[0] = fRec200[0];
			float fTemp271 = std::fabs(0.92736715f * fRec199[0]);
			fRec198[0] = std::max<float>(fTemp271, fConst162 * fRec198[1] + fConst163 * fTemp271);
			fRec197[0] = fConst29 * fRec198[0] + fConst28 * fRec197[1];
			float fTemp272 = 2e+01f * (fTemp128 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec197[0]))));
			fVbargraph14 = FAUSTFLOAT(-fTemp272);
			fRec196[0] = fConst163 * (fSlow22 - -fTemp272) + fConst162 * fRec196[1];
			float fTemp273 = std::pow(1e+01f, fSlow16 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec196[0])) * fTemp81);
			fVbargraph15 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp273)));
			float fTemp274 = fRec205[0] * fTemp273;
			float fTemp275 = std::fabs(fTemp274);
			fVec128[0] = fTemp275;
			float fTemp276 = std::max<float>(fTemp275, fVec128[1]);
			fVec129[0] = fTemp276;
			float fTemp277 = std::max<float>(fTemp276, fVec129[2]);
			fVec130[0] = fTemp277;
			float fTemp278 = std::max<float>(fTemp277, fVec130[4]);
			fVec131[0] = fTemp278;
			float fTemp279 = std::max<float>(fTemp278, fVec131[8]);
			fVec132[IOTA0 & 31] = fTemp279;
			float fTemp280 = std::max<float>(fTemp279, fVec132[(IOTA0 - 16) & 31]);
			fVec133[IOTA0 & 63] = fTemp280;
			float fTemp281 = std::max<float>(fTemp280, fVec133[(IOTA0 - 32) & 63]);
			fVec134[IOTA0 & 127] = fTemp281;
			float fTemp282 = std::max<float>(fTemp281, fVec134[(IOTA0 - 64) & 127]);
			fVec135[IOTA0 & 255] = fTemp282;
			float fTemp283 = std::max<float>(fTemp282, fVec135[(IOTA0 - 128) & 255]);
			fVec136[IOTA0 & 511] = fTemp283;
			fVec137[IOTA0 & 511] = std::max<float>(fTemp283, fVec136[(IOTA0 - 256) & 511]);
			float fTemp284 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst1) ? fTemp275 : -3.4028235e+38f), ((iConst165) ? fVec129[iConst1] : -3.4028235e+38f)), ((iConst166) ? fVec130[iConst167] : -3.4028235e+38f)), ((iConst168) ? fVec131[iConst169] : -3.4028235e+38f)), ((iConst170) ? fVec132[(IOTA0 - iConst171) & 31] : -3.4028235e+38f)), ((iConst172) ? fVec133[(IOTA0 - iConst173) & 63] : -3.4028235e+38f)), ((iConst174) ? fVec134[(IOTA0 - iConst175) & 127] : -3.4028235e+38f)), ((iConst176) ? fVec135[(IOTA0 - iConst177) & 255] : -3.4028235e+38f)), ((iConst178) ? fVec136[(IOTA0 - iConst179) & 511] : -3.4028235e+38f)), ((iConst180) ? fVec137[(IOTA0 - iConst181) & 511] : -3.4028235e+38f))));
			int iTemp285 = (fTemp284 > fSlow17) + (fTemp284 > fSlow3);
			float fTemp286 = std::max<float>(-12.0f, 0.75f * ((iTemp285 == 0) ? fTemp284 + 12.0f - fSlow1 : ((iTemp285 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp284 + 9.0f - fSlow1)) : 0.0f)));
			float fTemp287 = ((fTemp286 > fRec195[1]) ? fConst91 : fConst90);
			fRec195[0] = fTemp286 * (1.0f - fTemp287) + fRec195[1] * fTemp287;
			float fTemp288 = fRec209 + fTemp266 + 1.4142135f * fRec208;
			float fTemp289 = fRec224[1] + fConst149 * (fRec215 - (fTemp288 + fRec225[1]));
			fRec224[0] = fConst151 * fTemp289 - fRec224[1];
			float fTemp290 = fRec225[1] + fConst152 * fTemp289;
			fRec225[0] = 2.0f * fTemp290 - fRec225[1];
			float fRec226 = fConst153 * fTemp289;
			float fRec227 = fTemp290;
			float fTemp291 = fRec215 - (1.4142135f * (fRec208 + fRec226) + fRec227 + fRec209 + fTemp266);
			fVec138[0] = fTemp291;
			fVec139[0] = fConst161 * fVec138[1] - fConst101 * fRec222[1];
			fRec223[0] = fConst104 * (fVec139[1] - fConst98 * fRec223[1] + fConst160 * fVec138[1] + fConst159 * fTemp291);
			fRec222[0] = fRec223[0];
			fVec140[0] = 0.50032705f * fRec222[1] - fConst109 * fRec220[1];
			fRec221[0] = fConst110 * (fVec140[1] - fConst107 * fRec221[1] - 1.0006541f * fRec222[1] + 0.50032705f * fRec222[0]);
			fRec220[0] = fRec221[0];
			float fTemp292 = std::fabs(0.92736715f * fRec220[0]);
			fRec219[0] = std::max<float>(fTemp292, fConst162 * fRec219[1] + fConst163 * fTemp292);
			fRec218[0] = fConst29 * fRec219[0] + fConst28 * fRec218[1];
			float fTemp293 = 2e+01f * (fTemp128 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec218[0]))));
			fVbargraph16 = FAUSTFLOAT(-fTemp293);
			fRec217[0] = fConst190 * (fSlow23 - -fTemp293) + fConst189 * fRec217[1];
			float fTemp294 = std::pow(1e+01f, fSlow16 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec217[0])) * fTemp81);
			fVbargraph17 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp294)));
			float fTemp295 = fTemp291 * fTemp294;
			float fTemp296 = std::fabs(fTemp295);
			fVec141[0] = fTemp296;
			float fTemp297 = std::max<float>(fTemp296, fVec141[1]);
			fVec142[0] = fTemp297;
			float fTemp298 = std::max<float>(fTemp297, fVec142[2]);
			fVec143[0] = fTemp298;
			float fTemp299 = std::max<float>(fTemp298, fVec143[4]);
			fVec144[0] = fTemp299;
			float fTemp300 = std::max<float>(fTemp299, fVec144[8]);
			fVec145[IOTA0 & 31] = fTemp300;
			float fTemp301 = std::max<float>(fTemp300, fVec145[(IOTA0 - 16) & 31]);
			fVec146[IOTA0 & 63] = fTemp301;
			float fTemp302 = std::max<float>(fTemp301, fVec146[(IOTA0 - 32) & 63]);
			fVec147[IOTA0 & 127] = fTemp302;
			float fTemp303 = std::max<float>(fTemp302, fVec147[(IOTA0 - 64) & 127]);
			fVec148[IOTA0 & 255] = fTemp303;
			float fTemp304 = std::max<float>(fTemp303, fVec148[(IOTA0 - 128) & 255]);
			fVec149[IOTA0 & 511] = fTemp304;
			fVec150[IOTA0 & 511] = std::max<float>(fTemp304, fVec149[(IOTA0 - 256) & 511]);
			float fTemp305 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst1) ? fTemp296 : -3.4028235e+38f), ((iConst165) ? fVec142[iConst1] : -3.4028235e+38f)), ((iConst166) ? fVec143[iConst167] : -3.4028235e+38f)), ((iConst168) ? fVec144[iConst169] : -3.4028235e+38f)), ((iConst170) ? fVec145[(IOTA0 - iConst171) & 31] : -3.4028235e+38f)), ((iConst172) ? fVec146[(IOTA0 - iConst173) & 63] : -3.4028235e+38f)), ((iConst174) ? fVec147[(IOTA0 - iConst175) & 127] : -3.4028235e+38f)), ((iConst176) ? fVec148[(IOTA0 - iConst177) & 255] : -3.4028235e+38f)), ((iConst178) ? fVec149[(IOTA0 - iConst179) & 511] : -3.4028235e+38f)), ((iConst180) ? fVec150[(IOTA0 - iConst181) & 511] : -3.4028235e+38f))));
			int iTemp306 = (fTemp305 > fSlow17) + (fTemp305 > fSlow3);
			float fTemp307 = std::max<float>(-12.0f, 0.75f * ((iTemp306 == 0) ? fTemp305 + 12.0f - fSlow1 : ((iTemp306 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp305 + 9.0f - fSlow1)) : 0.0f)));
			float fTemp308 = ((fTemp307 > fRec216[1]) ? fConst91 : fConst90);
			fRec216[0] = fTemp307 * (1.0f - fTemp308) + fRec216[1] * fTemp308;
			float fTemp309 = fRec236[1] + fConst154 * (fRec98 - fRec237[1]);
			fRec236[0] = fConst156 * fTemp309 - fRec236[1];
			float fTemp310 = fRec237[1] + fConst157 * fTemp309;
			fRec237[0] = 2.0f * fTemp310 - fRec237[1];
			fRec238[0] = fTemp310;
			fVec151[0] = fConst161 * fRec238[1] - fConst101 * fRec234[1];
			fRec235[0] = fConst104 * (fVec151[1] - fConst98 * fRec235[1] + fConst160 * fRec238[1] + fConst159 * fRec238[0]);
			fRec234[0] = fRec235[0];
			fVec152[0] = 0.50032705f * fRec234[1] - fConst109 * fRec232[1];
			fRec233[0] = fConst110 * (fVec152[1] - fConst107 * fRec233[1] - 1.0006541f * fRec234[1] + 0.50032705f * fRec234[0]);
			fRec232[0] = fRec233[0];
			float fTemp311 = std::fabs(0.92736715f * fRec232[0]);
			fRec231[0] = std::max<float>(fTemp311, fConst162 * fRec231[1] + fConst163 * fTemp311);
			fRec230[0] = fConst29 * fRec231[0] + fConst28 * fRec230[1];
			float fTemp312 = 2e+01f * (fTemp128 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec230[0]))));
			fVbargraph18 = FAUSTFLOAT(-fTemp312);
			fRec229[0] = fConst192 * (fSlow24 - -fTemp312) + fConst191 * fRec229[1];
			float fTemp313 = std::pow(1e+01f, fSlow16 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec229[0])) * fTemp81);
			fVbargraph19 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp313)));
			float fTemp314 = fRec238[0] * fTemp313;
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
			float fTemp324 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst1) ? fTemp315 : -3.4028235e+38f), ((iConst165) ? fVec154[iConst1] : -3.4028235e+38f)), ((iConst166) ? fVec155[iConst167] : -3.4028235e+38f)), ((iConst168) ? fVec156[iConst169] : -3.4028235e+38f)), ((iConst170) ? fVec157[(IOTA0 - iConst171) & 31] : -3.4028235e+38f)), ((iConst172) ? fVec158[(IOTA0 - iConst173) & 63] : -3.4028235e+38f)), ((iConst174) ? fVec159[(IOTA0 - iConst175) & 127] : -3.4028235e+38f)), ((iConst176) ? fVec160[(IOTA0 - iConst177) & 255] : -3.4028235e+38f)), ((iConst178) ? fVec161[(IOTA0 - iConst179) & 511] : -3.4028235e+38f)), ((iConst180) ? fVec162[(IOTA0 - iConst181) & 511] : -3.4028235e+38f))));
			int iTemp325 = (fTemp324 > fSlow17) + (fTemp324 > fSlow3);
			float fTemp326 = std::max<float>(-12.0f, 0.75f * ((iTemp325 == 0) ? fTemp324 + 12.0f - fSlow1 : ((iTemp325 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp324 + 9.0f - fSlow1)) : 0.0f)));
			float fTemp327 = ((fTemp326 > fRec228[1]) ? fConst91 : fConst90);
			fRec228[0] = fTemp326 * (1.0f - fTemp327) + fRec228[1] * fTemp327;
			float fTemp328 = std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(fRec112[0], fRec149[0]), fRec161[0]), fRec183[0]), fRec195[0]), fRec216[0]), fRec228[0]), fRec1[0]);
			float fTemp329 = fRec1[0] + 0.25f * (fTemp328 - fRec1[0]);
			fVbargraph20 = FAUSTFLOAT(fTemp329);
			float fTemp330 = fTemp131 * std::pow(1e+01f, 0.05f * fTemp329);
			float fTemp331 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp330)));
			int iTemp332 = (fTemp331 > fSlow3) + (fTemp331 > fSlow2);
			float fTemp333 = std::max<float>(0.0f, ((iTemp332 == 0) ? 0.0f : ((iTemp332 == 1) ? 0.083333336f * mydsp_faustpower2_f(fTemp331 + 9.0f - fSlow1) : fTemp331 + 6.0f - fSlow1)));
			float fTemp334 = ((-(0.2857143f * fTemp333) > fRec0[1]) ? fConst162 : fConst91);
			fRec0[0] = fRec0[1] * fTemp334 - 0.2857143f * fTemp333 * (1.0f - fTemp334);
			float fTemp335 = std::pow(1e+01f, 0.05f * fRec0[0]);
			fVbargraph21 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp335)));
			float fTemp336 = fRec228[0] + 0.25f * (fTemp328 - fRec228[0]);
			fVbargraph22 = FAUSTFLOAT(fTemp336);
			float fTemp337 = fTemp314 * std::pow(1e+01f, 0.05f * fTemp336);
			float fTemp338 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp337)));
			int iTemp339 = (fTemp338 > fSlow3) + (fTemp338 > fSlow2);
			float fTemp340 = std::max<float>(0.0f, ((iTemp339 == 0) ? 0.0f : ((iTemp339 == 1) ? 0.083333336f * mydsp_faustpower2_f(fTemp338 + 9.0f - fSlow1) : fTemp338 + 6.0f - fSlow1)));
			float fTemp341 = ((-(0.2857143f * fTemp340) > fRec239[1]) ? fConst162 : fConst91);
			fRec239[0] = fRec239[1] * fTemp341 - 0.2857143f * fTemp340 * (1.0f - fTemp341);
			float fTemp342 = std::pow(1e+01f, 0.05f * fRec239[0]);
			fVbargraph23 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp342)));
			float fTemp343 = fRec216[0] + 0.25f * (fTemp328 - fRec216[0]);
			fVbargraph24 = FAUSTFLOAT(fTemp343);
			float fTemp344 = fTemp295 * std::pow(1e+01f, 0.05f * fTemp343);
			float fTemp345 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp344)));
			int iTemp346 = (fTemp345 > fSlow3) + (fTemp345 > fSlow2);
			float fTemp347 = std::max<float>(0.0f, ((iTemp346 == 0) ? 0.0f : ((iTemp346 == 1) ? 0.083333336f * mydsp_faustpower2_f(fTemp345 + 9.0f - fSlow1) : fTemp345 + 6.0f - fSlow1)));
			float fTemp348 = ((-(0.2857143f * fTemp347) > fRec240[1]) ? fConst162 : fConst91);
			fRec240[0] = fRec240[1] * fTemp348 - 0.2857143f * fTemp347 * (1.0f - fTemp348);
			float fTemp349 = std::pow(1e+01f, 0.05f * fRec240[0]);
			fVbargraph25 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp349)));
			float fTemp350 = fRec195[0] + 0.25f * (fTemp328 - fRec195[0]);
			fVbargraph26 = FAUSTFLOAT(fTemp350);
			float fTemp351 = fTemp274 * std::pow(1e+01f, 0.05f * fTemp350);
			float fTemp352 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp351)));
			int iTemp353 = (fTemp352 > fSlow3) + (fTemp352 > fSlow2);
			float fTemp354 = std::max<float>(0.0f, ((iTemp353 == 0) ? 0.0f : ((iTemp353 == 1) ? 0.083333336f * mydsp_faustpower2_f(fTemp352 + 9.0f - fSlow1) : fTemp352 + 6.0f - fSlow1)));
			float fTemp355 = ((-(0.2857143f * fTemp354) > fRec241[1]) ? fConst162 : fConst91);
			fRec241[0] = fRec241[1] * fTemp355 - 0.2857143f * fTemp354 * (1.0f - fTemp355);
			float fTemp356 = std::pow(1e+01f, 0.05f * fRec241[0]);
			fVbargraph27 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp356)));
			float fTemp357 = fRec183[0] + 0.25f * (fTemp328 - fRec183[0]);
			fVbargraph28 = FAUSTFLOAT(fTemp357);
			float fTemp358 = fTemp248 * std::pow(1e+01f, 0.05f * fTemp357);
			float fTemp359 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp358)));
			int iTemp360 = (fTemp359 > fSlow3) + (fTemp359 > fSlow2);
			float fTemp361 = std::max<float>(0.0f, ((iTemp360 == 0) ? 0.0f : ((iTemp360 == 1) ? 0.083333336f * mydsp_faustpower2_f(fTemp359 + 9.0f - fSlow1) : fTemp359 + 6.0f - fSlow1)));
			float fTemp362 = ((-(0.2857143f * fTemp361) > fRec242[1]) ? fConst162 : fConst91);
			fRec242[0] = fRec242[1] * fTemp362 - 0.2857143f * fTemp361 * (1.0f - fTemp362);
			float fTemp363 = std::pow(1e+01f, 0.05f * fRec242[0]);
			fVbargraph29 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp363)));
			float fTemp364 = fRec161[0] + 0.25f * (fTemp328 - fRec161[0]);
			fVbargraph30 = FAUSTFLOAT(fTemp364);
			float fTemp365 = fTemp225 * std::pow(1e+01f, 0.05f * fTemp364);
			float fTemp366 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp365)));
			int iTemp367 = (fTemp366 > fSlow3) + (fTemp366 > fSlow2);
			float fTemp368 = std::max<float>(0.0f, ((iTemp367 == 0) ? 0.0f : ((iTemp367 == 1) ? 0.083333336f * mydsp_faustpower2_f(fTemp366 + 9.0f - fSlow1) : fTemp366 + 6.0f - fSlow1)));
			float fTemp369 = ((-(0.2857143f * fTemp368) > fRec243[1]) ? fConst162 : fConst91);
			fRec243[0] = fRec243[1] * fTemp369 - 0.2857143f * fTemp368 * (1.0f - fTemp369);
			float fTemp370 = std::pow(1e+01f, 0.05f * fRec243[0]);
			fVbargraph31 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp370)));
			float fTemp371 = fRec149[0] + 0.25f * (fTemp328 - fRec149[0]);
			fVbargraph32 = FAUSTFLOAT(fTemp371);
			float fTemp372 = fTemp193 * std::pow(1e+01f, 0.05f * fTemp371);
			float fTemp373 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp372)));
			int iTemp374 = (fTemp373 > fSlow3) + (fTemp373 > fSlow2);
			float fTemp375 = std::max<float>(0.0f, ((iTemp374 == 0) ? 0.0f : ((iTemp374 == 1) ? 0.083333336f * mydsp_faustpower2_f(fTemp373 + 9.0f - fSlow1) : fTemp373 + 6.0f - fSlow1)));
			float fTemp376 = ((-(0.2857143f * fTemp375) > fRec244[1]) ? fConst162 : fConst91);
			fRec244[0] = fRec244[1] * fTemp376 - 0.2857143f * fTemp375 * (1.0f - fTemp376);
			float fTemp377 = std::pow(1e+01f, 0.05f * fRec244[0]);
			fVbargraph33 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp377)));
			float fTemp378 = fRec112[0] + 0.25f * (fTemp328 - fRec112[0]);
			fVbargraph34 = FAUSTFLOAT(fTemp378);
			float fTemp379 = fTemp172 * std::pow(1e+01f, 0.05f * fTemp378);
			float fTemp380 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp379)));
			int iTemp381 = (fTemp380 > fSlow3) + (fTemp380 > fSlow2);
			float fTemp382 = std::max<float>(0.0f, ((iTemp381 == 0) ? 0.0f : ((iTemp381 == 1) ? 0.083333336f * mydsp_faustpower2_f(fTemp380 + 9.0f - fSlow1) : fTemp380 + 6.0f - fSlow1)));
			float fTemp383 = ((-(0.2857143f * fTemp382) > fRec245[1]) ? fConst162 : fConst91);
			fRec245[0] = fRec245[1] * fTemp383 - 0.2857143f * fTemp382 * (1.0f - fTemp383);
			float fTemp384 = std::pow(1e+01f, 0.05f * fRec245[0]);
			fVbargraph35 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp384)));
			output0[i0] = FAUSTFLOAT(((iSlow0) ? fTemp0 : fTemp379 * fTemp384 + fTemp372 * fTemp377 + fTemp365 * fTemp370 + fTemp358 * fTemp363 + fTemp351 * fTemp356 + fTemp344 * fTemp349 + fTemp337 * fTemp342 + fTemp330 * fTemp335));
			fVec0[1] = fVec0[0];
			fRec16[1] = fRec16[0];
			fRec15[2] = fRec15[1];
			fRec15[1] = fRec15[0];
			fVec1[1] = fVec1[0];
			fRec14[1] = fRec14[0];
			fRec13[2] = fRec13[1];
			fRec13[1] = fRec13[0];
			fRec17[1] = fRec17[0];
			IOTA0 = IOTA0 + 1;
			fRec12[1] = fRec12[0];
			fRec19[1] = fRec19[0];
			fRec18[1] = fRec18[0];
			fRec21[1] = fRec21[0];
			fRec20[1] = fRec20[0];
			fRec23[1] = fRec23[0];
			fRec22[1] = fRec22[0];
			fRec25[1] = fRec25[0];
			fRec24[1] = fRec24[0];
			fRec27[1] = fRec27[0];
			fRec26[1] = fRec26[0];
			fRec29[1] = fRec29[0];
			fRec28[1] = fRec28[0];
			fRec31[1] = fRec31[0];
			fRec30[1] = fRec30[0];
			fRec10[1] = fRec10[0];
			fRec8[1] = fRec8[0];
			fRec6[1] = fRec6[0];
			fRec4[1] = fRec4[0];
			fRec42[1] = fRec42[0];
			fVec14[2] = fVec14[1];
			fVec14[1] = fVec14[0];
			for (int j0 = 4; j0 > 0; j0 = j0 - 1) {
				fVec15[j0] = fVec15[j0 - 1];
			}
			for (int j1 = 11; j1 > 0; j1 = j1 - 1) {
				fVec16[j1] = fVec16[j1 - 1];
			}
			fRec41[1] = fRec41[0];
			fRec54[1] = fRec54[0];
			fRec55[1] = fRec55[0];
			fRec49[1] = fRec49[0];
			fRec50[1] = fRec50[0];
			fRec46[1] = fRec46[0];
			fRec47[1] = fRec47[0];
			fRec43[1] = fRec43[0];
			fRec44[1] = fRec44[0];
			fVec32[1] = fVec32[0];
			fVec33[2] = fVec33[1];
			fVec33[1] = fVec33[0];
			for (int j2 = 4; j2 > 0; j2 = j2 - 1) {
				fVec34[j2] = fVec34[j2 - 1];
			}
			for (int j3 = 11; j3 > 0; j3 = j3 - 1) {
				fVec35[j3] = fVec35[j3 - 1];
			}
			fRec40[1] = fRec40[0];
			fVec41[1] = fVec41[0];
			fRec62[1] = fRec62[0];
			fRec61[1] = fRec61[0];
			fVec42[1] = fVec42[0];
			fRec60[1] = fRec60[0];
			fRec59[1] = fRec59[0];
			fVec43[1] = fVec43[0];
			fVec44[2] = fVec44[1];
			fVec44[1] = fVec44[0];
			for (int j4 = 4; j4 > 0; j4 = j4 - 1) {
				fVec45[j4] = fVec45[j4 - 1];
			}
			for (int j5 = 11; j5 > 0; j5 = j5 - 1) {
				fVec46[j5] = fVec46[j5 - 1];
			}
			fRec35[1] = fRec35[0];
			fRec36[1] = fRec36[0];
			fRec33[1] = fRec33[0];
			fRec32[1] = fRec32[0];
			fRec3[2] = fRec3[1];
			fRec3[1] = fRec3[0];
			fVec52[1] = fVec52[0];
			fVec53[2] = fVec53[1];
			fVec53[1] = fVec53[0];
			for (int j6 = 4; j6 > 0; j6 = j6 - 1) {
				fVec54[j6] = fVec54[j6 - 1];
			}
			for (int j7 = 11; j7 > 0; j7 = j7 - 1) {
				fVec55[j7] = fVec55[j7 - 1];
			}
			fRec2[1] = fRec2[0];
			fRec74[1] = fRec74[0];
			fRec75[1] = fRec75[0];
			fRec70[1] = fRec70[0];
			fRec71[1] = fRec71[0];
			fRec85[1] = fRec85[0];
			fRec86[1] = fRec86[0];
			fRec82[1] = fRec82[0];
			fRec83[1] = fRec83[0];
			fRec88[1] = fRec88[0];
			fRec89[1] = fRec89[0];
			fRec78[1] = fRec78[0];
			fRec79[1] = fRec79[0];
			fRec91[1] = fRec91[0];
			fRec92[1] = fRec92[0];
			fRec99[1] = fRec99[0];
			fRec100[1] = fRec100[0];
			fRec95[1] = fRec95[0];
			fRec96[1] = fRec96[0];
			fRec102[1] = fRec102[0];
			fRec103[1] = fRec103[0];
			fVec61[1] = fVec61[0];
			fVec62[1] = fVec62[0];
			fRec69[1] = fRec69[0];
			fRec68[1] = fRec68[0];
			fVec63[1] = fVec63[0];
			fRec67[1] = fRec67[0];
			fRec66[1] = fRec66[0];
			fRec65[1] = fRec65[0];
			fRec64[1] = fRec64[0];
			fVec64[1] = fVec64[0];
			fRec111[1] = fRec111[0];
			fRec110[1] = fRec110[0];
			fVec65[1] = fVec65[0];
			fRec109[1] = fRec109[0];
			fRec108[1] = fRec108[0];
			fRec107[1] = fRec107[0];
			fRec106[1] = fRec106[0];
			fRec63[1] = fRec63[0];
			fVec66[1] = fVec66[0];
			fVec67[2] = fVec67[1];
			fVec67[1] = fVec67[0];
			for (int j8 = 4; j8 > 0; j8 = j8 - 1) {
				fVec68[j8] = fVec68[j8 - 1];
			}
			for (int j9 = 11; j9 > 0; j9 = j9 - 1) {
				fVec69[j9] = fVec69[j9 - 1];
			}
			fRec1[1] = fRec1[0];
			fRec143[1] = fRec143[0];
			fRec144[1] = fRec144[0];
			fRec140[1] = fRec140[0];
			fRec141[1] = fRec141[0];
			fRec137[1] = fRec137[0];
			fRec138[1] = fRec138[0];
			fRec146[1] = fRec146[0];
			fRec147[1] = fRec147[0];
			fRec133[1] = fRec133[0];
			fRec134[1] = fRec134[0];
			fRec130[1] = fRec130[0];
			fRec131[1] = fRec131[0];
			fRec127[1] = fRec127[0];
			fRec128[1] = fRec128[0];
			fRec123[1] = fRec123[0];
			fRec124[1] = fRec124[0];
			fRec120[1] = fRec120[0];
			fRec121[1] = fRec121[0];
			fRec122[1] = fRec122[0];
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
			fRec112[1] = fRec112[0];
			fRec157[1] = fRec157[0];
			fRec158[1] = fRec158[0];
			fVec88[1] = fVec88[0];
			fVec89[1] = fVec89[0];
			fRec156[1] = fRec156[0];
			fRec155[1] = fRec155[0];
			fVec90[1] = fVec90[0];
			fRec154[1] = fRec154[0];
			fRec153[1] = fRec153[0];
			fRec152[1] = fRec152[0];
			fRec151[1] = fRec151[0];
			fRec150[1] = fRec150[0];
			fVec91[1] = fVec91[0];
			fVec92[2] = fVec92[1];
			fVec92[1] = fVec92[0];
			for (int j12 = 4; j12 > 0; j12 = j12 - 1) {
				fVec93[j12] = fVec93[j12 - 1];
			}
			for (int j13 = 11; j13 > 0; j13 = j13 - 1) {
				fVec94[j13] = fVec94[j13 - 1];
			}
			fRec149[1] = fRec149[0];
			fRec179[1] = fRec179[0];
			fRec180[1] = fRec180[0];
			fRec176[1] = fRec176[0];
			fRec177[1] = fRec177[0];
			fRec172[1] = fRec172[0];
			fRec173[1] = fRec173[0];
			fRec169[1] = fRec169[0];
			fRec170[1] = fRec170[0];
			fRec171[1] = fRec171[0];
			fVec101[1] = fVec101[0];
			fRec168[1] = fRec168[0];
			fRec167[1] = fRec167[0];
			fVec102[1] = fVec102[0];
			fRec166[1] = fRec166[0];
			fRec165[1] = fRec165[0];
			fRec164[1] = fRec164[0];
			fRec163[1] = fRec163[0];
			fRec162[1] = fRec162[0];
			fVec103[1] = fVec103[0];
			fVec104[2] = fVec104[1];
			fVec104[1] = fVec104[0];
			for (int j14 = 4; j14 > 0; j14 = j14 - 1) {
				fVec105[j14] = fVec105[j14 - 1];
			}
			for (int j15 = 11; j15 > 0; j15 = j15 - 1) {
				fVec106[j15] = fVec106[j15 - 1];
			}
			fRec161[1] = fRec161[0];
			fRec191[1] = fRec191[0];
			fRec192[1] = fRec192[0];
			fVec113[1] = fVec113[0];
			fVec114[1] = fVec114[0];
			fRec190[1] = fRec190[0];
			fRec189[1] = fRec189[0];
			fVec115[1] = fVec115[0];
			fRec188[1] = fRec188[0];
			fRec187[1] = fRec187[0];
			fRec186[1] = fRec186[0];
			fRec185[1] = fRec185[0];
			fRec184[1] = fRec184[0];
			fVec116[1] = fVec116[0];
			fVec117[2] = fVec117[1];
			fVec117[1] = fVec117[0];
			for (int j16 = 4; j16 > 0; j16 = j16 - 1) {
				fVec118[j16] = fVec118[j16 - 1];
			}
			for (int j17 = 11; j17 > 0; j17 = j17 - 1) {
				fVec119[j17] = fVec119[j17 - 1];
			}
			fRec183[1] = fRec183[0];
			fRec213[1] = fRec213[0];
			fRec214[1] = fRec214[0];
			fRec210[1] = fRec210[0];
			fRec211[1] = fRec211[0];
			fRec206[1] = fRec206[0];
			fRec207[1] = fRec207[0];
			fRec203[1] = fRec203[0];
			fRec204[1] = fRec204[0];
			fRec205[1] = fRec205[0];
			fVec126[1] = fVec126[0];
			fRec202[1] = fRec202[0];
			fRec201[1] = fRec201[0];
			fVec127[1] = fVec127[0];
			fRec200[1] = fRec200[0];
			fRec199[1] = fRec199[0];
			fRec198[1] = fRec198[0];
			fRec197[1] = fRec197[0];
			fRec196[1] = fRec196[0];
			fVec128[1] = fVec128[0];
			fVec129[2] = fVec129[1];
			fVec129[1] = fVec129[0];
			for (int j18 = 4; j18 > 0; j18 = j18 - 1) {
				fVec130[j18] = fVec130[j18 - 1];
			}
			for (int j19 = 11; j19 > 0; j19 = j19 - 1) {
				fVec131[j19] = fVec131[j19 - 1];
			}
			fRec195[1] = fRec195[0];
			fRec224[1] = fRec224[0];
			fRec225[1] = fRec225[0];
			fVec138[1] = fVec138[0];
			fVec139[1] = fVec139[0];
			fRec223[1] = fRec223[0];
			fRec222[1] = fRec222[0];
			fVec140[1] = fVec140[0];
			fRec221[1] = fRec221[0];
			fRec220[1] = fRec220[0];
			fRec219[1] = fRec219[0];
			fRec218[1] = fRec218[0];
			fRec217[1] = fRec217[0];
			fVec141[1] = fVec141[0];
			fVec142[2] = fVec142[1];
			fVec142[1] = fVec142[0];
			for (int j20 = 4; j20 > 0; j20 = j20 - 1) {
				fVec143[j20] = fVec143[j20 - 1];
			}
			for (int j21 = 11; j21 > 0; j21 = j21 - 1) {
				fVec144[j21] = fVec144[j21 - 1];
			}
			fRec216[1] = fRec216[0];
			fRec236[1] = fRec236[0];
			fRec237[1] = fRec237[0];
			fRec238[1] = fRec238[0];
			fVec151[1] = fVec151[0];
			fRec235[1] = fRec235[0];
			fRec234[1] = fRec234[0];
			fVec152[1] = fVec152[0];
			fRec233[1] = fRec233[0];
			fRec232[1] = fRec232[0];
			fRec231[1] = fRec231[0];
			fRec230[1] = fRec230[0];
			fRec229[1] = fRec229[0];
			fVec153[1] = fVec153[0];
			fVec154[2] = fVec154[1];
			fVec154[1] = fVec154[0];
			for (int j22 = 4; j22 > 0; j22 = j22 - 1) {
				fVec155[j22] = fVec155[j22 - 1];
			}
			for (int j23 = 11; j23 > 0; j23 = j23 - 1) {
				fVec156[j23] = fVec156[j23 - 1];
			}
			fRec228[1] = fRec228[0];
			fRec0[1] = fRec0[0];
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
        dsp->fVbargraph3 = 0;
        dsp->fVbargraph6 = 0;
        dsp->fVbargraph8 = 0;
        dsp->fVbargraph10 = 0;
        dsp->fVbargraph12 = 0;
        dsp->fVbargraph14 = 0;
        dsp->fVbargraph16 = 0;
        dsp->fVbargraph18 = 0;
        dsp->fVbargraph4 = 0;
        dsp->fVbargraph7 = 0;
        dsp->fVbargraph9 = 0;
        dsp->fVbargraph11 = 0;
        dsp->fVbargraph13 = 0;
        dsp->fVbargraph15 = 0;
        dsp->fVbargraph17 = 0;
        dsp->fVbargraph19 = 0;
        dsp->fVbargraph5 = 0;
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
        printf("%.12g,", dsp->fVslider4);
        printf("%.12g,", dsp->fVslider5);
        printf("%.12g,", dsp->fVslider6);
        printf("%.12g,", dsp->fVslider7);
        printf("%.12g,", dsp->fVslider8);
        printf("%.12g,", dsp->fVslider9);
        printf("%.12g,", dsp->fVslider10);
        printf("%.12g,", dsp->fVslider11);
        printf("%.12g,", dsp->fVslider3);
        printf("%.12g,", dsp->fCheckbox0);
        printf("%.12g,", dsp->fVslider0);
        printf("%.12g,", dsp->fVslider2);
        printf("%.12g,", dsp->fVslider1);
        
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
        case kParameter_spec_0:
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
        case kParameter_spec_1:
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
        case kParameter_spec_2:
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
        case kParameter_spec_3:
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
        case kParameter_spec_4:
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
        case kParameter_spec_5:
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
        case kParameter_spec_6:
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
        case kParameter_spec_7:
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
        case kParameter__10:
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
        case kParameter__11:
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
        case kParameter__12:
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
        case kParameter__13:
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
        
        case kParameter__14:
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
        case kParameter__15:
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
        case kParameter__16:
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
        case kParameter__17:
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
        case kParameter__18:
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
        case kParameter__19:
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
        case kParameter__20:
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
        case kParameter__21:
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
        case kParameter__22:
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
        case kParameter__31:
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
        case kParameter__32:
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
        case kParameter__33:
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
        case kParameter__34:
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
        case kParameter__35:
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
        case kParameter__36:
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
        case kParameter__37:
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
        case kParameter__38:
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
        case kParameter__39:
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
        case kParameter__40:
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
        case kParameter__41:
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
        case kParameter__42:
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
        case kParameter__43:
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
        case kParameter__44:
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
        case kParameter__45:
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
        case kParameter__46:
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
        case kParameter__47:
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
        case kParameter__48:
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
        case kParameter__49:
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
            return dsp->fVslider4;
        case kParameter_spec_0:
            return dsp->fVslider5;
        case kParameter_spec_1:
            return dsp->fVslider6;
        case kParameter_spec_2:
            return dsp->fVslider7;
        case kParameter_spec_3:
            return dsp->fVslider8;
        case kParameter_spec_4:
            return dsp->fVslider9;
        case kParameter_spec_5:
            return dsp->fVslider10;
        case kParameter_spec_6:
            return dsp->fVslider11;
        case kParameter_spec_7:
            return dsp->fVslider3;
        case kParameter__10:
            return dsp->fCheckbox0;
        case kParameter__11:
            return dsp->fVslider0;
        case kParameter__12:
            return dsp->fVslider2;
        case kParameter__13:
            return dsp->fVslider1;
        case kParameter__14:
            return dsp->fVbargraph3;
        case kParameter__15:
            return dsp->fVbargraph6;
        case kParameter__16:
            return dsp->fVbargraph8;
        case kParameter__17:
            return dsp->fVbargraph10;
        case kParameter__18:
            return dsp->fVbargraph12;
        case kParameter__19:
            return dsp->fVbargraph14;
        case kParameter__20:
            return dsp->fVbargraph16;
        case kParameter__21:
            return dsp->fVbargraph18;
        case kParameter__22:
            return dsp->fVbargraph4;
        case kParameter_spectral_ballancer_gain_band__0:
            return dsp->fVbargraph7;
        case kParameter_spectral_ballancer_gain_band__1:
            return dsp->fVbargraph9;
        case kParameter_spectral_ballancer_gain_band__2:
            return dsp->fVbargraph11;
        case kParameter_spectral_ballancer_gain_band__3:
            return dsp->fVbargraph13;
        case kParameter_spectral_ballancer_gain_band__4:
            return dsp->fVbargraph15;
        case kParameter_spectral_ballancer_gain_band__5:
            return dsp->fVbargraph17;
        case kParameter_spectral_ballancer_gain_band__6:
            return dsp->fVbargraph19;
        case kParameter_spectral_ballancer_gain_band__7:
            return dsp->fVbargraph5;
        case kParameter__31:
            return dsp->fVbargraph1;
        case kParameter__32:
            return dsp->fVbargraph2;
        case kParameter__33:
            return dsp->fVbargraph0;
        case kParameter__34:
            return dsp->fVbargraph20;
        case kParameter__35:
            return dsp->fVbargraph22;
        case kParameter__36:
            return dsp->fVbargraph24;
        case kParameter__37:
            return dsp->fVbargraph26;
        case kParameter__38:
            return dsp->fVbargraph28;
        case kParameter__39:
            return dsp->fVbargraph30;
        case kParameter__40:
            return dsp->fVbargraph32;
        case kParameter__41:
            return dsp->fVbargraph34;
        case kParameter__42:
            return dsp->fVbargraph21;
        case kParameter__43:
            return dsp->fVbargraph23;
        case kParameter__44:
            return dsp->fVbargraph25;
        case kParameter__45:
            return dsp->fVbargraph27;
        case kParameter__46:
            return dsp->fVbargraph29;
        case kParameter__47:
            return dsp->fVbargraph31;
        case kParameter__48:
            return dsp->fVbargraph33;
        case kParameter__49:
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
            dsp->fVslider4 = value;
            break;
        case kParameter_spec_0:
            dsp->fVslider5 = value;
            break;
        case kParameter_spec_1:
            dsp->fVslider6 = value;
            break;
        case kParameter_spec_2:
            dsp->fVslider7 = value;
            break;
        case kParameter_spec_3:
            dsp->fVslider8 = value;
            break;
        case kParameter_spec_4:
            dsp->fVslider9 = value;
            break;
        case kParameter_spec_5:
            dsp->fVslider10 = value;
            break;
        case kParameter_spec_6:
            dsp->fVslider11 = value;
            break;
        case kParameter_spec_7:
            dsp->fVslider3 = value;
            break;
        case kParameter__10:
            dsp->fCheckbox0 = value;
            break;
        case kParameter__11:
            dsp->fVslider0 = value;
            break;
        case kParameter__12:
            dsp->fVslider2 = value;
            break;
        case kParameter__13:
            dsp->fVslider1 = value;
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
            dsp->fVslider4,
            dsp->fVslider5,
            dsp->fVslider6,
            dsp->fVslider7,
            dsp->fVslider8,
            dsp->fVslider9,
            dsp->fVslider10,
            dsp->fVslider11,
            dsp->fVslider3,
            dsp->fCheckbox0,
            dsp->fVslider0,
            dsp->fVslider2,
            dsp->fVslider1,
            
        };

        // tell dsp to change sample rate
        dsp->init(newSampleRate);

        // set parameters back, which have been reset in the dsp
        dsp->fVslider4 = params[0];
        dsp->fVslider5 = params[1];
        dsp->fVslider6 = params[2];
        dsp->fVslider7 = params[3];
        dsp->fVslider8 = params[4];
        dsp->fVslider9 = params[5];
        dsp->fVslider10 = params[6];
        dsp->fVslider11 = params[7];
        dsp->fVslider3 = params[8];
        dsp->fCheckbox0 = params[9];
        dsp->fVslider0 = params[10];
        dsp->fVslider2 = params[11];
        dsp->fVslider1 = params[12];
        
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