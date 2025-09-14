
//------------------------------------------------------------------------------
// This file was generated using the Faust compiler (https://faust.grame.fr),
// and the Faust post-processor (https://github.com/jpcima/faustpp).
//
// Source: bbba06.dsp
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
	float fRec7[2];
	float fRec6[3];
	float fVec1[2];
	float fConst10;
	float fConst11;
	float fRec5[2];
	float fRec4[3];
	float fConst12;
	float fConst13;
	float fConst14;
	int iConst15;
	float fConst16;
	float fConst17;
	float fRec18[2];
	int iConst18;
	float fVec2[3];
	int iConst19;
	float fVec3[5];
	int iConst20;
	int iConst21;
	float fVec4[12];
	int iConst22;
	int iConst23;
	int IOTA0;
	float fVec5[32];
	int iConst24;
	int iConst25;
	float fVec6[64];
	int iConst26;
	int iConst27;
	float fVec7[128];
	int iConst28;
	int iConst29;
	float fVec8[256];
	int iConst30;
	int iConst31;
	float fVec9[512];
	int iConst32;
	int iConst33;
	float fVec10[1024];
	int iConst34;
	int iConst35;
	float fVec11[2048];
	int iConst36;
	int iConst37;
	float fVec12[4096];
	int iConst38;
	int iConst39;
	float fVec13[8192];
	int iConst40;
	int iConst41;
	float fVec14[16384];
	int iConst42;
	int iConst43;
	float fVec15[32768];
	int iConst44;
	int iConst45;
	float fVec16[65536];
	int iConst46;
	int iConst47;
	float fVec17[131072];
	int iConst48;
	int iConst49;
	float fVec18[262144];
	int iConst50;
	int iConst51;
	float fVec19[524288];
	int iConst52;
	float fConst53;
	float fRec17[2];
	FAUSTFLOAT fVbargraph0;
	FAUSTFLOAT fVslider2;
	float fConst54;
	float fConst55;
	float fConst56;
	float fRec30[2];
	float fConst57;
	float fRec31[2];
	float fConst58;
	float fRec25[2];
	float fRec26[2];
	float fConst59;
	float fConst60;
	float fConst61;
	float fRec22[2];
	float fConst62;
	float fRec23[2];
	float fRec19[2];
	float fRec20[2];
	float fVec20[2];
	int iConst63;
	float fVec21[3];
	int iConst64;
	float fVec22[5];
	int iConst65;
	int iConst66;
	float fVec23[12];
	int iConst67;
	int iConst68;
	float fVec24[32];
	int iConst69;
	int iConst70;
	float fVec25[64];
	int iConst71;
	int iConst72;
	float fVec26[128];
	int iConst73;
	int iConst74;
	float fVec27[256];
	int iConst75;
	int iConst76;
	float fVec28[512];
	int iConst77;
	float fConst78;
	float fConst79;
	float fRec16[2];
	FAUSTFLOAT fVbargraph1;
	float fConst80;
	int iConst81;
	float fConst82;
	float fConst83;
	float fConst84;
	float fConst85;
	float fConst86;
	float fConst87;
	float fConst88;
	float fConst89;
	float fVec29[2];
	float fConst90;
	float fConst91;
	float fConst92;
	float fRec38[2];
	float fRec37[2];
	float fConst93;
	float fConst94;
	float fConst95;
	float fConst96;
	float fConst97;
	float fVec30[2];
	float fConst98;
	float fRec36[2];
	float fRec35[2];
	float fVec31[2];
	float fVec32[3];
	int iConst99;
	int iConst100;
	float fVec33[5];
	int iConst101;
	int iConst102;
	float fVec34[12];
	int iConst103;
	int iConst104;
	float fVec35[32];
	int iConst105;
	int iConst106;
	float fVec36[64];
	int iConst107;
	int iConst108;
	float fVec37[128];
	int iConst109;
	int iConst110;
	float fVec38[256];
	int iConst111;
	int iConst112;
	float fVec39[512];
	int iConst113;
	float fConst114;
	float fRec11[2];
	float fRec12[2];
	float fRec9[2];
	FAUSTFLOAT fVbargraph2;
	float fRec8[2];
	float fRec3[3];
	float fVec40[2];
	float fVec41[3];
	float fVec42[5];
	float fVec43[12];
	float fVec44[32];
	float fVec45[64];
	float fVec46[128];
	float fVec47[256];
	float fVec48[512];
	float fConst115;
	float fRec2[2];
	FAUSTFLOAT fVbargraph3;
	float fConst116;
	float fConst117;
	float fConst118;
	float fRec50[2];
	float fConst119;
	float fRec51[2];
	float fConst120;
	float fRec46[2];
	float fRec47[2];
	float fConst121;
	float fConst122;
	float fConst123;
	float fRec61[2];
	float fConst124;
	float fRec62[2];
	float fConst125;
	float fConst126;
	float fConst127;
	float fConst128;
	float fRec58[2];
	float fConst129;
	float fRec59[2];
	float fConst130;
	float fRec64[2];
	float fRec65[2];
	float fConst131;
	float fConst132;
	float fConst133;
	float fConst134;
	float fRec54[2];
	float fConst135;
	float fRec55[2];
	float fConst136;
	float fRec67[2];
	float fRec68[2];
	float fConst137;
	float fConst138;
	float fConst139;
	float fRec75[2];
	float fConst140;
	float fRec76[2];
	float fConst141;
	float fConst142;
	float fConst143;
	float fConst144;
	float fRec71[2];
	float fConst145;
	float fRec72[2];
	float fConst146;
	float fRec78[2];
	float fRec79[2];
	float fVec49[2];
	float fConst147;
	float fConst148;
	float fConst149;
	float fVec50[2];
	float fRec45[2];
	float fRec44[2];
	float fVec51[2];
	float fRec43[2];
	float fRec42[2];
	float fConst150;
	float fConst151;
	float fRec41[2];
	float fRec40[2];
	float fVec52[2];
	float fRec87[2];
	float fRec86[2];
	float fVec53[2];
	float fRec85[2];
	float fRec84[2];
	float fRec83[2];
	float fRec82[2];
	FAUSTFLOAT fVbargraph4;
	FAUSTFLOAT fVslider3;
	float fConst152;
	float fRec39[2];
	FAUSTFLOAT fVslider4;
	FAUSTFLOAT fVbargraph5;
	float fVec54[2];
	int iConst153;
	float fVec55[3];
	int iConst154;
	float fVec56[5];
	int iConst155;
	int iConst156;
	float fVec57[12];
	int iConst157;
	int iConst158;
	float fVec58[32];
	int iConst159;
	int iConst160;
	float fVec59[64];
	int iConst161;
	int iConst162;
	float fVec60[128];
	int iConst163;
	int iConst164;
	float fVec61[256];
	int iConst165;
	int iConst166;
	float fVec62[512];
	int iConst167;
	int iConst168;
	float fVec63[512];
	int iConst169;
	float fRec1[2];
	float fRec119[2];
	float fRec120[2];
	float fRec116[2];
	float fRec117[2];
	float fRec113[2];
	float fRec114[2];
	float fRec122[2];
	float fRec123[2];
	float fRec109[2];
	float fRec110[2];
	float fRec106[2];
	float fRec107[2];
	float fRec103[2];
	float fRec104[2];
	float fRec99[2];
	float fRec100[2];
	float fRec96[2];
	float fRec97[2];
	float fRec98[2];
	float fVec64[2];
	float fRec95[2];
	float fRec94[2];
	float fVec65[2];
	float fRec93[2];
	float fRec92[2];
	float fRec91[2];
	float fRec90[2];
	FAUSTFLOAT fVbargraph6;
	FAUSTFLOAT fVslider5;
	float fConst170;
	float fRec89[2];
	FAUSTFLOAT fVbargraph7;
	float fVec66[2];
	float fVec67[3];
	float fVec68[5];
	float fVec69[12];
	float fVec70[32];
	float fVec71[64];
	float fVec72[128];
	float fVec73[256];
	float fVec74[512];
	float fVec75[512];
	float fRec88[2];
	float fConst171;
	float fRec133[2];
	float fRec134[2];
	float fVec76[2];
	float fVec77[2];
	float fRec132[2];
	float fRec131[2];
	float fVec78[2];
	float fRec130[2];
	float fRec129[2];
	float fRec128[2];
	float fRec127[2];
	FAUSTFLOAT fVbargraph8;
	FAUSTFLOAT fVslider6;
	float fConst172;
	float fRec126[2];
	FAUSTFLOAT fVbargraph9;
	float fVec79[2];
	float fVec80[3];
	float fVec81[5];
	float fVec82[12];
	float fVec83[32];
	float fVec84[64];
	float fVec85[128];
	float fVec86[256];
	float fVec87[512];
	float fVec88[512];
	float fRec125[2];
	float fConst173;
	float fRec155[2];
	float fRec156[2];
	float fRec152[2];
	float fRec153[2];
	float fRec148[2];
	float fRec149[2];
	float fRec145[2];
	float fRec146[2];
	float fRec147[2];
	float fVec89[2];
	float fRec144[2];
	float fRec143[2];
	float fVec90[2];
	float fRec142[2];
	float fRec141[2];
	float fRec140[2];
	float fRec139[2];
	FAUSTFLOAT fVbargraph10;
	FAUSTFLOAT fVslider7;
	float fConst174;
	float fRec138[2];
	FAUSTFLOAT fVbargraph11;
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
	float fRec137[2];
	float fConst175;
	float fRec167[2];
	float fRec168[2];
	float fVec101[2];
	float fVec102[2];
	float fRec166[2];
	float fRec165[2];
	float fVec103[2];
	float fRec164[2];
	float fRec163[2];
	float fRec162[2];
	float fRec161[2];
	FAUSTFLOAT fVbargraph12;
	FAUSTFLOAT fVslider8;
	float fConst176;
	float fRec160[2];
	FAUSTFLOAT fVbargraph13;
	float fVec104[2];
	float fVec105[3];
	float fVec106[5];
	float fVec107[12];
	float fVec108[32];
	float fVec109[64];
	float fVec110[128];
	float fVec111[256];
	float fVec112[512];
	float fVec113[512];
	float fRec159[2];
	float fRec189[2];
	float fRec190[2];
	float fRec186[2];
	float fRec187[2];
	float fRec182[2];
	float fRec183[2];
	float fRec179[2];
	float fRec180[2];
	float fRec181[2];
	float fVec114[2];
	float fRec178[2];
	float fRec177[2];
	float fVec115[2];
	float fRec176[2];
	float fRec175[2];
	float fRec174[2];
	float fRec173[2];
	FAUSTFLOAT fVbargraph14;
	FAUSTFLOAT fVslider9;
	float fRec172[2];
	FAUSTFLOAT fVbargraph15;
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
	float fRec171[2];
	float fConst177;
	float fRec200[2];
	float fRec201[2];
	float fVec126[2];
	float fVec127[2];
	float fRec199[2];
	float fRec198[2];
	float fVec128[2];
	float fRec197[2];
	float fRec196[2];
	float fRec195[2];
	float fRec194[2];
	FAUSTFLOAT fVbargraph16;
	FAUSTFLOAT fVslider10;
	float fConst178;
	float fRec193[2];
	FAUSTFLOAT fVbargraph17;
	float fVec129[2];
	float fVec130[3];
	float fVec131[5];
	float fVec132[12];
	float fVec133[32];
	float fVec134[64];
	float fVec135[128];
	float fVec136[256];
	float fVec137[512];
	float fVec138[512];
	float fRec192[2];
	float fConst179;
	float fRec212[2];
	float fRec213[2];
	float fRec214[2];
	float fVec139[2];
	float fRec211[2];
	float fRec210[2];
	float fVec140[2];
	float fRec209[2];
	float fRec208[2];
	float fRec207[2];
	float fRec206[2];
	FAUSTFLOAT fVbargraph18;
	FAUSTFLOAT fVslider11;
	float fConst180;
	float fRec205[2];
	FAUSTFLOAT fVbargraph19;
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
	float fRec204[2];
	FAUSTFLOAT fVbargraph20;
	float fRec0[2];
	FAUSTFLOAT fVbargraph21;
	FAUSTFLOAT fVbargraph22;
	float fRec215[2];
	FAUSTFLOAT fVbargraph23;
	FAUSTFLOAT fVbargraph24;
	float fRec216[2];
	FAUSTFLOAT fVbargraph25;
	FAUSTFLOAT fVbargraph26;
	float fRec217[2];
	FAUSTFLOAT fVbargraph27;
	FAUSTFLOAT fVbargraph28;
	float fRec218[2];
	FAUSTFLOAT fVbargraph29;
	FAUSTFLOAT fVbargraph30;
	float fRec219[2];
	FAUSTFLOAT fVbargraph31;
	FAUSTFLOAT fVbargraph32;
	float fRec220[2];
	FAUSTFLOAT fVbargraph33;
	FAUSTFLOAT fVbargraph34;
	float fRec221[2];
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
		m->declare("compile_options", "-a /tmp/tmpghwb4erc.cpp -lang cpp -ct 1 -es 1 -mcd 16 -mdd 1024 -mdy 33 -single -ftz 0");
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
		m->declare("filename", "bbba06.dsp");
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
		fConst12 = 0.125f * fConst0;
		fConst13 = 9.964212e-07f * fConst0;
		fConst14 = std::exp(-(1.0f / fConst0));
		iConst15 = int(std::floor(3.0f * fConst0)) % 2;
		fConst16 = std::exp(-(1e+02f / fConst0));
		fConst17 = 1.0f - fConst16;
		iConst18 = int(std::floor(1.5f * fConst0)) % 2;
		iConst19 = int(std::floor(0.75f * fConst0)) % 2;
		iConst20 = iConst15 + 2 * iConst18;
		iConst21 = int(std::floor(0.375f * fConst0)) % 2;
		iConst22 = iConst20 + 4 * iConst19;
		iConst23 = int(std::floor(0.1875f * fConst0)) % 2;
		iConst24 = iConst22 + 8 * iConst21;
		iConst25 = int(std::floor(0.09375f * fConst0)) % 2;
		iConst26 = iConst24 + 16 * iConst23;
		iConst27 = int(std::floor(0.046875f * fConst0)) % 2;
		iConst28 = iConst26 + 32 * iConst25;
		iConst29 = int(std::floor(0.0234375f * fConst0)) % 2;
		iConst30 = iConst28 + 64 * iConst27;
		iConst31 = int(std::floor(0.01171875f * fConst0)) % 2;
		iConst32 = iConst30 + 128 * iConst29;
		iConst33 = int(std::floor(0.005859375f * fConst0)) % 2;
		iConst34 = iConst32 + 256 * iConst31;
		iConst35 = int(std::floor(0.0029296875f * fConst0)) % 2;
		iConst36 = iConst34 + 512 * iConst33;
		iConst37 = int(std::floor(0.0014648438f * fConst0)) % 2;
		iConst38 = iConst36 + 1024 * iConst35;
		iConst39 = int(std::floor(0.0007324219f * fConst0)) % 2;
		iConst40 = iConst38 + 2048 * iConst37;
		iConst41 = int(std::floor(0.00036621094f * fConst0)) % 2;
		iConst42 = iConst40 + 4096 * iConst39;
		iConst43 = int(std::floor(0.00018310547f * fConst0)) % 2;
		iConst44 = iConst42 + 8192 * iConst41;
		iConst45 = int(std::floor(9.1552734e-05f * fConst0)) % 2;
		iConst46 = iConst44 + 16384 * iConst43;
		iConst47 = int(std::floor(4.5776367e-05f * fConst0)) % 2;
		iConst48 = iConst46 + 32768 * iConst45;
		iConst49 = int(std::floor(2.2888184e-05f * fConst0)) % 2;
		iConst50 = iConst48 + 65536 * iConst47;
		iConst51 = int(std::floor(1.1444092e-05f * fConst0)) % 2;
		iConst52 = iConst50 + 131072 * iConst49;
		fConst53 = 1.0f - fConst14;
		fConst54 = std::tan(879.64594f / fConst0);
		fConst55 = fConst54 * (fConst54 + 1.4142135f) + 1.0f;
		fConst56 = 2.0f / fConst55;
		fConst57 = fConst54 / fConst55;
		fConst58 = 1.0f / fConst55;
		fConst59 = std::tan(1256.6371f / fConst0);
		fConst60 = fConst59 * (fConst59 + 1.4142135f) + 1.0f;
		fConst61 = 2.0f / fConst60;
		fConst62 = fConst59 / fConst60;
		iConst63 = int(std::floor(0.005f * fConst0)) % 2;
		iConst64 = int(std::floor(0.0025f * fConst0)) % 2;
		iConst65 = iConst3 + 2 * iConst63;
		iConst66 = int(std::floor(0.00125f * fConst0)) % 2;
		iConst67 = iConst65 + 4 * iConst64;
		iConst68 = int(std::floor(0.000625f * fConst0)) % 2;
		iConst69 = iConst67 + 8 * iConst66;
		iConst70 = int(std::floor(0.0003125f * fConst0)) % 2;
		iConst71 = iConst69 + 16 * iConst68;
		iConst72 = int(std::floor(0.00015625f * fConst0)) % 2;
		iConst73 = iConst71 + 32 * iConst70;
		iConst74 = int(std::floor(7.8125e-05f * fConst0)) % 2;
		iConst75 = iConst73 + 64 * iConst72;
		iConst76 = int(std::floor(3.90625e-05f * fConst0)) % 2;
		iConst77 = iConst75 + 128 * iConst74;
		fConst78 = std::exp(-(5.0f / fConst0));
		fConst79 = std::exp(-(1e+03f / fConst0));
		fConst80 = std::rint(fConst2);
		iConst81 = int(std::floor(0.5f * fConst80)) % 2;
		fConst82 = std::tan(5283.415f / fConst0);
		fConst83 = 1.7803667f * fConst82;
		fConst84 = mydsp_faustpower2_f(fConst82);
		fConst85 = fConst84 + fConst83 + 1.5848527f;
		fConst86 = 2.0f * (fConst84 + -1.0f);
		fConst87 = fConst84 + (1.5848527f - fConst83);
		fConst88 = 1.4142135f * fConst82;
		fConst89 = fConst84 + (1.0f - fConst88);
		fConst90 = fConst84 + -1.5848527f;
		fConst91 = 2.0f * fConst90;
		fConst92 = 1.0f / (fConst84 + fConst88 + 1.0f);
		fConst93 = std::tan(119.806114f / fConst0);
		fConst94 = mydsp_faustpower2_f(fConst93);
		fConst95 = 1.0006541f * (fConst94 + -1.0f);
		fConst96 = 0.50032705f * (fConst94 + 1.0f);
		fConst97 = fConst96 - fConst93;
		fConst98 = 1.0f / (fConst93 + fConst96);
		iConst99 = int(std::floor(fConst80)) % 2;
		iConst100 = int(std::floor(0.25f * fConst80)) % 2;
		iConst101 = iConst99 + 2 * iConst81;
		iConst102 = int(std::floor(0.125f * fConst80)) % 2;
		iConst103 = iConst101 + 4 * iConst100;
		iConst104 = int(std::floor(0.0625f * fConst80)) % 2;
		iConst105 = iConst103 + 8 * iConst102;
		iConst106 = int(std::floor(0.03125f * fConst80)) % 2;
		iConst107 = iConst105 + 16 * iConst104;
		iConst108 = int(std::floor(0.015625f * fConst80)) % 2;
		iConst109 = iConst107 + 32 * iConst106;
		iConst110 = int(std::floor(0.0078125f * fConst80)) % 2;
		iConst111 = iConst109 + 64 * iConst108;
		iConst112 = int(std::floor(0.00390625f * fConst80)) % 2;
		iConst113 = iConst111 + 128 * iConst110;
		fConst114 = 1.0f / std::max<float>(fConst80, 1.1920929e-07f);
		fConst115 = std::exp(-(4e+01f / fConst0));
		fConst116 = std::tan(2513.2742f / fConst0);
		fConst117 = fConst116 * (fConst116 + 1.4142135f) + 1.0f;
		fConst118 = 2.0f / fConst117;
		fConst119 = fConst116 / fConst117;
		fConst120 = 1.0f / fConst117;
		fConst121 = std::tan(628.31854f / fConst0);
		fConst122 = fConst121 * (fConst121 + 1.4142135f) + 1.0f;
		fConst123 = 2.0f / fConst122;
		fConst124 = fConst121 / fConst122;
		fConst125 = 1.0f / fConst122;
		fConst126 = std::tan(314.15927f / fConst0);
		fConst127 = fConst126 * (fConst126 + 1.4142135f) + 1.0f;
		fConst128 = 2.0f / fConst127;
		fConst129 = fConst126 / fConst127;
		fConst130 = 1.0f / fConst127;
		fConst131 = 1.0f / fConst60;
		fConst132 = std::tan(10053.097f / fConst0);
		fConst133 = fConst132 * (fConst132 + 1.4142135f) + 1.0f;
		fConst134 = 2.0f / fConst133;
		fConst135 = fConst132 / fConst133;
		fConst136 = 1.0f / fConst133;
		fConst137 = std::tan(5026.5483f / fConst0);
		fConst138 = fConst137 * (fConst137 + 1.4142135f) + 1.0f;
		fConst139 = 2.0f / fConst138;
		fConst140 = fConst137 / fConst138;
		fConst141 = 1.0f / fConst138;
		fConst142 = std::tan(20106.193f / fConst0);
		fConst143 = fConst142 * (fConst142 + 1.4142135f) + 1.0f;
		fConst144 = 2.0f / fConst143;
		fConst145 = fConst142 / fConst143;
		fConst146 = 1.0f / fConst143;
		fConst147 = 3.9810717f * fConst85;
		fConst148 = 7.9621434f * fConst90;
		fConst149 = 3.9810717f * fConst87;
		fConst150 = std::exp(-(1e+01f / fConst0));
		fConst151 = 1.0f - fConst150;
		fConst152 = 1.0f - fConst115;
		iConst153 = int(std::floor(0.0005f * fConst0)) % 2;
		iConst154 = int(std::floor(0.00025f * fConst0)) % 2;
		iConst155 = iConst1 + 2 * iConst153;
		iConst156 = int(std::floor(0.000125f * fConst0)) % 2;
		iConst157 = iConst155 + 4 * iConst154;
		iConst158 = int(std::floor(6.25e-05f * fConst0)) % 2;
		iConst159 = iConst157 + 8 * iConst156;
		iConst160 = int(std::floor(3.125e-05f * fConst0)) % 2;
		iConst161 = iConst159 + 16 * iConst158;
		iConst162 = int(std::floor(1.5625e-05f * fConst0)) % 2;
		iConst163 = iConst161 + 32 * iConst160;
		iConst164 = int(std::floor(7.8125e-06f * fConst0)) % 2;
		iConst165 = iConst163 + 64 * iConst162;
		iConst166 = int(std::floor(3.90625e-06f * fConst0)) % 2;
		iConst167 = iConst165 + 128 * iConst164;
		iConst168 = int(std::floor(1.953125e-06f * fConst0)) % 2;
		iConst169 = iConst167 + 256 * iConst166;
		fConst170 = 1.0f - fConst78;
		fConst171 = std::exp(-(5.714286f / fConst0));
		fConst172 = 1.0f - fConst171;
		fConst173 = std::exp(-(6.6666665f / fConst0));
		fConst174 = 1.0f - fConst173;
		fConst175 = std::exp(-(8.0f / fConst0));
		fConst176 = 1.0f - fConst175;
		fConst177 = std::exp(-(13.333333f / fConst0));
		fConst178 = 1.0f - fConst177;
		fConst179 = std::exp(-(2e+01f / fConst0));
		fConst180 = 1.0f - fConst179;
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
			fRec7[l1] = 0.0f;
		}
		for (int l2 = 0; l2 < 3; l2 = l2 + 1) {
			fRec6[l2] = 0.0f;
		}
		for (int l3 = 0; l3 < 2; l3 = l3 + 1) {
			fVec1[l3] = 0.0f;
		}
		for (int l4 = 0; l4 < 2; l4 = l4 + 1) {
			fRec5[l4] = 0.0f;
		}
		for (int l5 = 0; l5 < 3; l5 = l5 + 1) {
			fRec4[l5] = 0.0f;
		}
		for (int l6 = 0; l6 < 2; l6 = l6 + 1) {
			fRec18[l6] = 0.0f;
		}
		for (int l7 = 0; l7 < 3; l7 = l7 + 1) {
			fVec2[l7] = 0.0f;
		}
		for (int l8 = 0; l8 < 5; l8 = l8 + 1) {
			fVec3[l8] = 0.0f;
		}
		for (int l9 = 0; l9 < 12; l9 = l9 + 1) {
			fVec4[l9] = 0.0f;
		}
		IOTA0 = 0;
		for (int l10 = 0; l10 < 32; l10 = l10 + 1) {
			fVec5[l10] = 0.0f;
		}
		for (int l11 = 0; l11 < 64; l11 = l11 + 1) {
			fVec6[l11] = 0.0f;
		}
		for (int l12 = 0; l12 < 128; l12 = l12 + 1) {
			fVec7[l12] = 0.0f;
		}
		for (int l13 = 0; l13 < 256; l13 = l13 + 1) {
			fVec8[l13] = 0.0f;
		}
		for (int l14 = 0; l14 < 512; l14 = l14 + 1) {
			fVec9[l14] = 0.0f;
		}
		for (int l15 = 0; l15 < 1024; l15 = l15 + 1) {
			fVec10[l15] = 0.0f;
		}
		for (int l16 = 0; l16 < 2048; l16 = l16 + 1) {
			fVec11[l16] = 0.0f;
		}
		for (int l17 = 0; l17 < 4096; l17 = l17 + 1) {
			fVec12[l17] = 0.0f;
		}
		for (int l18 = 0; l18 < 8192; l18 = l18 + 1) {
			fVec13[l18] = 0.0f;
		}
		for (int l19 = 0; l19 < 16384; l19 = l19 + 1) {
			fVec14[l19] = 0.0f;
		}
		for (int l20 = 0; l20 < 32768; l20 = l20 + 1) {
			fVec15[l20] = 0.0f;
		}
		for (int l21 = 0; l21 < 65536; l21 = l21 + 1) {
			fVec16[l21] = 0.0f;
		}
		for (int l22 = 0; l22 < 131072; l22 = l22 + 1) {
			fVec17[l22] = 0.0f;
		}
		for (int l23 = 0; l23 < 262144; l23 = l23 + 1) {
			fVec18[l23] = 0.0f;
		}
		for (int l24 = 0; l24 < 524288; l24 = l24 + 1) {
			fVec19[l24] = 0.0f;
		}
		for (int l25 = 0; l25 < 2; l25 = l25 + 1) {
			fRec17[l25] = 0.0f;
		}
		for (int l26 = 0; l26 < 2; l26 = l26 + 1) {
			fRec30[l26] = 0.0f;
		}
		for (int l27 = 0; l27 < 2; l27 = l27 + 1) {
			fRec31[l27] = 0.0f;
		}
		for (int l28 = 0; l28 < 2; l28 = l28 + 1) {
			fRec25[l28] = 0.0f;
		}
		for (int l29 = 0; l29 < 2; l29 = l29 + 1) {
			fRec26[l29] = 0.0f;
		}
		for (int l30 = 0; l30 < 2; l30 = l30 + 1) {
			fRec22[l30] = 0.0f;
		}
		for (int l31 = 0; l31 < 2; l31 = l31 + 1) {
			fRec23[l31] = 0.0f;
		}
		for (int l32 = 0; l32 < 2; l32 = l32 + 1) {
			fRec19[l32] = 0.0f;
		}
		for (int l33 = 0; l33 < 2; l33 = l33 + 1) {
			fRec20[l33] = 0.0f;
		}
		for (int l34 = 0; l34 < 2; l34 = l34 + 1) {
			fVec20[l34] = 0.0f;
		}
		for (int l35 = 0; l35 < 3; l35 = l35 + 1) {
			fVec21[l35] = 0.0f;
		}
		for (int l36 = 0; l36 < 5; l36 = l36 + 1) {
			fVec22[l36] = 0.0f;
		}
		for (int l37 = 0; l37 < 12; l37 = l37 + 1) {
			fVec23[l37] = 0.0f;
		}
		for (int l38 = 0; l38 < 32; l38 = l38 + 1) {
			fVec24[l38] = 0.0f;
		}
		for (int l39 = 0; l39 < 64; l39 = l39 + 1) {
			fVec25[l39] = 0.0f;
		}
		for (int l40 = 0; l40 < 128; l40 = l40 + 1) {
			fVec26[l40] = 0.0f;
		}
		for (int l41 = 0; l41 < 256; l41 = l41 + 1) {
			fVec27[l41] = 0.0f;
		}
		for (int l42 = 0; l42 < 512; l42 = l42 + 1) {
			fVec28[l42] = 0.0f;
		}
		for (int l43 = 0; l43 < 2; l43 = l43 + 1) {
			fRec16[l43] = 0.0f;
		}
		for (int l44 = 0; l44 < 2; l44 = l44 + 1) {
			fVec29[l44] = 0.0f;
		}
		for (int l45 = 0; l45 < 2; l45 = l45 + 1) {
			fRec38[l45] = 0.0f;
		}
		for (int l46 = 0; l46 < 2; l46 = l46 + 1) {
			fRec37[l46] = 0.0f;
		}
		for (int l47 = 0; l47 < 2; l47 = l47 + 1) {
			fVec30[l47] = 0.0f;
		}
		for (int l48 = 0; l48 < 2; l48 = l48 + 1) {
			fRec36[l48] = 0.0f;
		}
		for (int l49 = 0; l49 < 2; l49 = l49 + 1) {
			fRec35[l49] = 0.0f;
		}
		for (int l50 = 0; l50 < 2; l50 = l50 + 1) {
			fVec31[l50] = 0.0f;
		}
		for (int l51 = 0; l51 < 3; l51 = l51 + 1) {
			fVec32[l51] = 0.0f;
		}
		for (int l52 = 0; l52 < 5; l52 = l52 + 1) {
			fVec33[l52] = 0.0f;
		}
		for (int l53 = 0; l53 < 12; l53 = l53 + 1) {
			fVec34[l53] = 0.0f;
		}
		for (int l54 = 0; l54 < 32; l54 = l54 + 1) {
			fVec35[l54] = 0.0f;
		}
		for (int l55 = 0; l55 < 64; l55 = l55 + 1) {
			fVec36[l55] = 0.0f;
		}
		for (int l56 = 0; l56 < 128; l56 = l56 + 1) {
			fVec37[l56] = 0.0f;
		}
		for (int l57 = 0; l57 < 256; l57 = l57 + 1) {
			fVec38[l57] = 0.0f;
		}
		for (int l58 = 0; l58 < 512; l58 = l58 + 1) {
			fVec39[l58] = 0.0f;
		}
		for (int l59 = 0; l59 < 2; l59 = l59 + 1) {
			fRec11[l59] = 0.0f;
		}
		for (int l60 = 0; l60 < 2; l60 = l60 + 1) {
			fRec12[l60] = 0.0f;
		}
		for (int l61 = 0; l61 < 2; l61 = l61 + 1) {
			fRec9[l61] = 0.0f;
		}
		for (int l62 = 0; l62 < 2; l62 = l62 + 1) {
			fRec8[l62] = 0.0f;
		}
		for (int l63 = 0; l63 < 3; l63 = l63 + 1) {
			fRec3[l63] = 0.0f;
		}
		for (int l64 = 0; l64 < 2; l64 = l64 + 1) {
			fVec40[l64] = 0.0f;
		}
		for (int l65 = 0; l65 < 3; l65 = l65 + 1) {
			fVec41[l65] = 0.0f;
		}
		for (int l66 = 0; l66 < 5; l66 = l66 + 1) {
			fVec42[l66] = 0.0f;
		}
		for (int l67 = 0; l67 < 12; l67 = l67 + 1) {
			fVec43[l67] = 0.0f;
		}
		for (int l68 = 0; l68 < 32; l68 = l68 + 1) {
			fVec44[l68] = 0.0f;
		}
		for (int l69 = 0; l69 < 64; l69 = l69 + 1) {
			fVec45[l69] = 0.0f;
		}
		for (int l70 = 0; l70 < 128; l70 = l70 + 1) {
			fVec46[l70] = 0.0f;
		}
		for (int l71 = 0; l71 < 256; l71 = l71 + 1) {
			fVec47[l71] = 0.0f;
		}
		for (int l72 = 0; l72 < 512; l72 = l72 + 1) {
			fVec48[l72] = 0.0f;
		}
		for (int l73 = 0; l73 < 2; l73 = l73 + 1) {
			fRec2[l73] = 0.0f;
		}
		for (int l74 = 0; l74 < 2; l74 = l74 + 1) {
			fRec50[l74] = 0.0f;
		}
		for (int l75 = 0; l75 < 2; l75 = l75 + 1) {
			fRec51[l75] = 0.0f;
		}
		for (int l76 = 0; l76 < 2; l76 = l76 + 1) {
			fRec46[l76] = 0.0f;
		}
		for (int l77 = 0; l77 < 2; l77 = l77 + 1) {
			fRec47[l77] = 0.0f;
		}
		for (int l78 = 0; l78 < 2; l78 = l78 + 1) {
			fRec61[l78] = 0.0f;
		}
		for (int l79 = 0; l79 < 2; l79 = l79 + 1) {
			fRec62[l79] = 0.0f;
		}
		for (int l80 = 0; l80 < 2; l80 = l80 + 1) {
			fRec58[l80] = 0.0f;
		}
		for (int l81 = 0; l81 < 2; l81 = l81 + 1) {
			fRec59[l81] = 0.0f;
		}
		for (int l82 = 0; l82 < 2; l82 = l82 + 1) {
			fRec64[l82] = 0.0f;
		}
		for (int l83 = 0; l83 < 2; l83 = l83 + 1) {
			fRec65[l83] = 0.0f;
		}
		for (int l84 = 0; l84 < 2; l84 = l84 + 1) {
			fRec54[l84] = 0.0f;
		}
		for (int l85 = 0; l85 < 2; l85 = l85 + 1) {
			fRec55[l85] = 0.0f;
		}
		for (int l86 = 0; l86 < 2; l86 = l86 + 1) {
			fRec67[l86] = 0.0f;
		}
		for (int l87 = 0; l87 < 2; l87 = l87 + 1) {
			fRec68[l87] = 0.0f;
		}
		for (int l88 = 0; l88 < 2; l88 = l88 + 1) {
			fRec75[l88] = 0.0f;
		}
		for (int l89 = 0; l89 < 2; l89 = l89 + 1) {
			fRec76[l89] = 0.0f;
		}
		for (int l90 = 0; l90 < 2; l90 = l90 + 1) {
			fRec71[l90] = 0.0f;
		}
		for (int l91 = 0; l91 < 2; l91 = l91 + 1) {
			fRec72[l91] = 0.0f;
		}
		for (int l92 = 0; l92 < 2; l92 = l92 + 1) {
			fRec78[l92] = 0.0f;
		}
		for (int l93 = 0; l93 < 2; l93 = l93 + 1) {
			fRec79[l93] = 0.0f;
		}
		for (int l94 = 0; l94 < 2; l94 = l94 + 1) {
			fVec49[l94] = 0.0f;
		}
		for (int l95 = 0; l95 < 2; l95 = l95 + 1) {
			fVec50[l95] = 0.0f;
		}
		for (int l96 = 0; l96 < 2; l96 = l96 + 1) {
			fRec45[l96] = 0.0f;
		}
		for (int l97 = 0; l97 < 2; l97 = l97 + 1) {
			fRec44[l97] = 0.0f;
		}
		for (int l98 = 0; l98 < 2; l98 = l98 + 1) {
			fVec51[l98] = 0.0f;
		}
		for (int l99 = 0; l99 < 2; l99 = l99 + 1) {
			fRec43[l99] = 0.0f;
		}
		for (int l100 = 0; l100 < 2; l100 = l100 + 1) {
			fRec42[l100] = 0.0f;
		}
		for (int l101 = 0; l101 < 2; l101 = l101 + 1) {
			fRec41[l101] = 0.0f;
		}
		for (int l102 = 0; l102 < 2; l102 = l102 + 1) {
			fRec40[l102] = 0.0f;
		}
		for (int l103 = 0; l103 < 2; l103 = l103 + 1) {
			fVec52[l103] = 0.0f;
		}
		for (int l104 = 0; l104 < 2; l104 = l104 + 1) {
			fRec87[l104] = 0.0f;
		}
		for (int l105 = 0; l105 < 2; l105 = l105 + 1) {
			fRec86[l105] = 0.0f;
		}
		for (int l106 = 0; l106 < 2; l106 = l106 + 1) {
			fVec53[l106] = 0.0f;
		}
		for (int l107 = 0; l107 < 2; l107 = l107 + 1) {
			fRec85[l107] = 0.0f;
		}
		for (int l108 = 0; l108 < 2; l108 = l108 + 1) {
			fRec84[l108] = 0.0f;
		}
		for (int l109 = 0; l109 < 2; l109 = l109 + 1) {
			fRec83[l109] = 0.0f;
		}
		for (int l110 = 0; l110 < 2; l110 = l110 + 1) {
			fRec82[l110] = 0.0f;
		}
		for (int l111 = 0; l111 < 2; l111 = l111 + 1) {
			fRec39[l111] = 0.0f;
		}
		for (int l112 = 0; l112 < 2; l112 = l112 + 1) {
			fVec54[l112] = 0.0f;
		}
		for (int l113 = 0; l113 < 3; l113 = l113 + 1) {
			fVec55[l113] = 0.0f;
		}
		for (int l114 = 0; l114 < 5; l114 = l114 + 1) {
			fVec56[l114] = 0.0f;
		}
		for (int l115 = 0; l115 < 12; l115 = l115 + 1) {
			fVec57[l115] = 0.0f;
		}
		for (int l116 = 0; l116 < 32; l116 = l116 + 1) {
			fVec58[l116] = 0.0f;
		}
		for (int l117 = 0; l117 < 64; l117 = l117 + 1) {
			fVec59[l117] = 0.0f;
		}
		for (int l118 = 0; l118 < 128; l118 = l118 + 1) {
			fVec60[l118] = 0.0f;
		}
		for (int l119 = 0; l119 < 256; l119 = l119 + 1) {
			fVec61[l119] = 0.0f;
		}
		for (int l120 = 0; l120 < 512; l120 = l120 + 1) {
			fVec62[l120] = 0.0f;
		}
		for (int l121 = 0; l121 < 512; l121 = l121 + 1) {
			fVec63[l121] = 0.0f;
		}
		for (int l122 = 0; l122 < 2; l122 = l122 + 1) {
			fRec1[l122] = 0.0f;
		}
		for (int l123 = 0; l123 < 2; l123 = l123 + 1) {
			fRec119[l123] = 0.0f;
		}
		for (int l124 = 0; l124 < 2; l124 = l124 + 1) {
			fRec120[l124] = 0.0f;
		}
		for (int l125 = 0; l125 < 2; l125 = l125 + 1) {
			fRec116[l125] = 0.0f;
		}
		for (int l126 = 0; l126 < 2; l126 = l126 + 1) {
			fRec117[l126] = 0.0f;
		}
		for (int l127 = 0; l127 < 2; l127 = l127 + 1) {
			fRec113[l127] = 0.0f;
		}
		for (int l128 = 0; l128 < 2; l128 = l128 + 1) {
			fRec114[l128] = 0.0f;
		}
		for (int l129 = 0; l129 < 2; l129 = l129 + 1) {
			fRec122[l129] = 0.0f;
		}
		for (int l130 = 0; l130 < 2; l130 = l130 + 1) {
			fRec123[l130] = 0.0f;
		}
		for (int l131 = 0; l131 < 2; l131 = l131 + 1) {
			fRec109[l131] = 0.0f;
		}
		for (int l132 = 0; l132 < 2; l132 = l132 + 1) {
			fRec110[l132] = 0.0f;
		}
		for (int l133 = 0; l133 < 2; l133 = l133 + 1) {
			fRec106[l133] = 0.0f;
		}
		for (int l134 = 0; l134 < 2; l134 = l134 + 1) {
			fRec107[l134] = 0.0f;
		}
		for (int l135 = 0; l135 < 2; l135 = l135 + 1) {
			fRec103[l135] = 0.0f;
		}
		for (int l136 = 0; l136 < 2; l136 = l136 + 1) {
			fRec104[l136] = 0.0f;
		}
		for (int l137 = 0; l137 < 2; l137 = l137 + 1) {
			fRec99[l137] = 0.0f;
		}
		for (int l138 = 0; l138 < 2; l138 = l138 + 1) {
			fRec100[l138] = 0.0f;
		}
		for (int l139 = 0; l139 < 2; l139 = l139 + 1) {
			fRec96[l139] = 0.0f;
		}
		for (int l140 = 0; l140 < 2; l140 = l140 + 1) {
			fRec97[l140] = 0.0f;
		}
		for (int l141 = 0; l141 < 2; l141 = l141 + 1) {
			fRec98[l141] = 0.0f;
		}
		for (int l142 = 0; l142 < 2; l142 = l142 + 1) {
			fVec64[l142] = 0.0f;
		}
		for (int l143 = 0; l143 < 2; l143 = l143 + 1) {
			fRec95[l143] = 0.0f;
		}
		for (int l144 = 0; l144 < 2; l144 = l144 + 1) {
			fRec94[l144] = 0.0f;
		}
		for (int l145 = 0; l145 < 2; l145 = l145 + 1) {
			fVec65[l145] = 0.0f;
		}
		for (int l146 = 0; l146 < 2; l146 = l146 + 1) {
			fRec93[l146] = 0.0f;
		}
		for (int l147 = 0; l147 < 2; l147 = l147 + 1) {
			fRec92[l147] = 0.0f;
		}
		for (int l148 = 0; l148 < 2; l148 = l148 + 1) {
			fRec91[l148] = 0.0f;
		}
		for (int l149 = 0; l149 < 2; l149 = l149 + 1) {
			fRec90[l149] = 0.0f;
		}
		for (int l150 = 0; l150 < 2; l150 = l150 + 1) {
			fRec89[l150] = 0.0f;
		}
		for (int l151 = 0; l151 < 2; l151 = l151 + 1) {
			fVec66[l151] = 0.0f;
		}
		for (int l152 = 0; l152 < 3; l152 = l152 + 1) {
			fVec67[l152] = 0.0f;
		}
		for (int l153 = 0; l153 < 5; l153 = l153 + 1) {
			fVec68[l153] = 0.0f;
		}
		for (int l154 = 0; l154 < 12; l154 = l154 + 1) {
			fVec69[l154] = 0.0f;
		}
		for (int l155 = 0; l155 < 32; l155 = l155 + 1) {
			fVec70[l155] = 0.0f;
		}
		for (int l156 = 0; l156 < 64; l156 = l156 + 1) {
			fVec71[l156] = 0.0f;
		}
		for (int l157 = 0; l157 < 128; l157 = l157 + 1) {
			fVec72[l157] = 0.0f;
		}
		for (int l158 = 0; l158 < 256; l158 = l158 + 1) {
			fVec73[l158] = 0.0f;
		}
		for (int l159 = 0; l159 < 512; l159 = l159 + 1) {
			fVec74[l159] = 0.0f;
		}
		for (int l160 = 0; l160 < 512; l160 = l160 + 1) {
			fVec75[l160] = 0.0f;
		}
		for (int l161 = 0; l161 < 2; l161 = l161 + 1) {
			fRec88[l161] = 0.0f;
		}
		for (int l162 = 0; l162 < 2; l162 = l162 + 1) {
			fRec133[l162] = 0.0f;
		}
		for (int l163 = 0; l163 < 2; l163 = l163 + 1) {
			fRec134[l163] = 0.0f;
		}
		for (int l164 = 0; l164 < 2; l164 = l164 + 1) {
			fVec76[l164] = 0.0f;
		}
		for (int l165 = 0; l165 < 2; l165 = l165 + 1) {
			fVec77[l165] = 0.0f;
		}
		for (int l166 = 0; l166 < 2; l166 = l166 + 1) {
			fRec132[l166] = 0.0f;
		}
		for (int l167 = 0; l167 < 2; l167 = l167 + 1) {
			fRec131[l167] = 0.0f;
		}
		for (int l168 = 0; l168 < 2; l168 = l168 + 1) {
			fVec78[l168] = 0.0f;
		}
		for (int l169 = 0; l169 < 2; l169 = l169 + 1) {
			fRec130[l169] = 0.0f;
		}
		for (int l170 = 0; l170 < 2; l170 = l170 + 1) {
			fRec129[l170] = 0.0f;
		}
		for (int l171 = 0; l171 < 2; l171 = l171 + 1) {
			fRec128[l171] = 0.0f;
		}
		for (int l172 = 0; l172 < 2; l172 = l172 + 1) {
			fRec127[l172] = 0.0f;
		}
		for (int l173 = 0; l173 < 2; l173 = l173 + 1) {
			fRec126[l173] = 0.0f;
		}
		for (int l174 = 0; l174 < 2; l174 = l174 + 1) {
			fVec79[l174] = 0.0f;
		}
		for (int l175 = 0; l175 < 3; l175 = l175 + 1) {
			fVec80[l175] = 0.0f;
		}
		for (int l176 = 0; l176 < 5; l176 = l176 + 1) {
			fVec81[l176] = 0.0f;
		}
		for (int l177 = 0; l177 < 12; l177 = l177 + 1) {
			fVec82[l177] = 0.0f;
		}
		for (int l178 = 0; l178 < 32; l178 = l178 + 1) {
			fVec83[l178] = 0.0f;
		}
		for (int l179 = 0; l179 < 64; l179 = l179 + 1) {
			fVec84[l179] = 0.0f;
		}
		for (int l180 = 0; l180 < 128; l180 = l180 + 1) {
			fVec85[l180] = 0.0f;
		}
		for (int l181 = 0; l181 < 256; l181 = l181 + 1) {
			fVec86[l181] = 0.0f;
		}
		for (int l182 = 0; l182 < 512; l182 = l182 + 1) {
			fVec87[l182] = 0.0f;
		}
		for (int l183 = 0; l183 < 512; l183 = l183 + 1) {
			fVec88[l183] = 0.0f;
		}
		for (int l184 = 0; l184 < 2; l184 = l184 + 1) {
			fRec125[l184] = 0.0f;
		}
		for (int l185 = 0; l185 < 2; l185 = l185 + 1) {
			fRec155[l185] = 0.0f;
		}
		for (int l186 = 0; l186 < 2; l186 = l186 + 1) {
			fRec156[l186] = 0.0f;
		}
		for (int l187 = 0; l187 < 2; l187 = l187 + 1) {
			fRec152[l187] = 0.0f;
		}
		for (int l188 = 0; l188 < 2; l188 = l188 + 1) {
			fRec153[l188] = 0.0f;
		}
		for (int l189 = 0; l189 < 2; l189 = l189 + 1) {
			fRec148[l189] = 0.0f;
		}
		for (int l190 = 0; l190 < 2; l190 = l190 + 1) {
			fRec149[l190] = 0.0f;
		}
		for (int l191 = 0; l191 < 2; l191 = l191 + 1) {
			fRec145[l191] = 0.0f;
		}
		for (int l192 = 0; l192 < 2; l192 = l192 + 1) {
			fRec146[l192] = 0.0f;
		}
		for (int l193 = 0; l193 < 2; l193 = l193 + 1) {
			fRec147[l193] = 0.0f;
		}
		for (int l194 = 0; l194 < 2; l194 = l194 + 1) {
			fVec89[l194] = 0.0f;
		}
		for (int l195 = 0; l195 < 2; l195 = l195 + 1) {
			fRec144[l195] = 0.0f;
		}
		for (int l196 = 0; l196 < 2; l196 = l196 + 1) {
			fRec143[l196] = 0.0f;
		}
		for (int l197 = 0; l197 < 2; l197 = l197 + 1) {
			fVec90[l197] = 0.0f;
		}
		for (int l198 = 0; l198 < 2; l198 = l198 + 1) {
			fRec142[l198] = 0.0f;
		}
		for (int l199 = 0; l199 < 2; l199 = l199 + 1) {
			fRec141[l199] = 0.0f;
		}
		for (int l200 = 0; l200 < 2; l200 = l200 + 1) {
			fRec140[l200] = 0.0f;
		}
		for (int l201 = 0; l201 < 2; l201 = l201 + 1) {
			fRec139[l201] = 0.0f;
		}
		for (int l202 = 0; l202 < 2; l202 = l202 + 1) {
			fRec138[l202] = 0.0f;
		}
		for (int l203 = 0; l203 < 2; l203 = l203 + 1) {
			fVec91[l203] = 0.0f;
		}
		for (int l204 = 0; l204 < 3; l204 = l204 + 1) {
			fVec92[l204] = 0.0f;
		}
		for (int l205 = 0; l205 < 5; l205 = l205 + 1) {
			fVec93[l205] = 0.0f;
		}
		for (int l206 = 0; l206 < 12; l206 = l206 + 1) {
			fVec94[l206] = 0.0f;
		}
		for (int l207 = 0; l207 < 32; l207 = l207 + 1) {
			fVec95[l207] = 0.0f;
		}
		for (int l208 = 0; l208 < 64; l208 = l208 + 1) {
			fVec96[l208] = 0.0f;
		}
		for (int l209 = 0; l209 < 128; l209 = l209 + 1) {
			fVec97[l209] = 0.0f;
		}
		for (int l210 = 0; l210 < 256; l210 = l210 + 1) {
			fVec98[l210] = 0.0f;
		}
		for (int l211 = 0; l211 < 512; l211 = l211 + 1) {
			fVec99[l211] = 0.0f;
		}
		for (int l212 = 0; l212 < 512; l212 = l212 + 1) {
			fVec100[l212] = 0.0f;
		}
		for (int l213 = 0; l213 < 2; l213 = l213 + 1) {
			fRec137[l213] = 0.0f;
		}
		for (int l214 = 0; l214 < 2; l214 = l214 + 1) {
			fRec167[l214] = 0.0f;
		}
		for (int l215 = 0; l215 < 2; l215 = l215 + 1) {
			fRec168[l215] = 0.0f;
		}
		for (int l216 = 0; l216 < 2; l216 = l216 + 1) {
			fVec101[l216] = 0.0f;
		}
		for (int l217 = 0; l217 < 2; l217 = l217 + 1) {
			fVec102[l217] = 0.0f;
		}
		for (int l218 = 0; l218 < 2; l218 = l218 + 1) {
			fRec166[l218] = 0.0f;
		}
		for (int l219 = 0; l219 < 2; l219 = l219 + 1) {
			fRec165[l219] = 0.0f;
		}
		for (int l220 = 0; l220 < 2; l220 = l220 + 1) {
			fVec103[l220] = 0.0f;
		}
		for (int l221 = 0; l221 < 2; l221 = l221 + 1) {
			fRec164[l221] = 0.0f;
		}
		for (int l222 = 0; l222 < 2; l222 = l222 + 1) {
			fRec163[l222] = 0.0f;
		}
		for (int l223 = 0; l223 < 2; l223 = l223 + 1) {
			fRec162[l223] = 0.0f;
		}
		for (int l224 = 0; l224 < 2; l224 = l224 + 1) {
			fRec161[l224] = 0.0f;
		}
		for (int l225 = 0; l225 < 2; l225 = l225 + 1) {
			fRec160[l225] = 0.0f;
		}
		for (int l226 = 0; l226 < 2; l226 = l226 + 1) {
			fVec104[l226] = 0.0f;
		}
		for (int l227 = 0; l227 < 3; l227 = l227 + 1) {
			fVec105[l227] = 0.0f;
		}
		for (int l228 = 0; l228 < 5; l228 = l228 + 1) {
			fVec106[l228] = 0.0f;
		}
		for (int l229 = 0; l229 < 12; l229 = l229 + 1) {
			fVec107[l229] = 0.0f;
		}
		for (int l230 = 0; l230 < 32; l230 = l230 + 1) {
			fVec108[l230] = 0.0f;
		}
		for (int l231 = 0; l231 < 64; l231 = l231 + 1) {
			fVec109[l231] = 0.0f;
		}
		for (int l232 = 0; l232 < 128; l232 = l232 + 1) {
			fVec110[l232] = 0.0f;
		}
		for (int l233 = 0; l233 < 256; l233 = l233 + 1) {
			fVec111[l233] = 0.0f;
		}
		for (int l234 = 0; l234 < 512; l234 = l234 + 1) {
			fVec112[l234] = 0.0f;
		}
		for (int l235 = 0; l235 < 512; l235 = l235 + 1) {
			fVec113[l235] = 0.0f;
		}
		for (int l236 = 0; l236 < 2; l236 = l236 + 1) {
			fRec159[l236] = 0.0f;
		}
		for (int l237 = 0; l237 < 2; l237 = l237 + 1) {
			fRec189[l237] = 0.0f;
		}
		for (int l238 = 0; l238 < 2; l238 = l238 + 1) {
			fRec190[l238] = 0.0f;
		}
		for (int l239 = 0; l239 < 2; l239 = l239 + 1) {
			fRec186[l239] = 0.0f;
		}
		for (int l240 = 0; l240 < 2; l240 = l240 + 1) {
			fRec187[l240] = 0.0f;
		}
		for (int l241 = 0; l241 < 2; l241 = l241 + 1) {
			fRec182[l241] = 0.0f;
		}
		for (int l242 = 0; l242 < 2; l242 = l242 + 1) {
			fRec183[l242] = 0.0f;
		}
		for (int l243 = 0; l243 < 2; l243 = l243 + 1) {
			fRec179[l243] = 0.0f;
		}
		for (int l244 = 0; l244 < 2; l244 = l244 + 1) {
			fRec180[l244] = 0.0f;
		}
		for (int l245 = 0; l245 < 2; l245 = l245 + 1) {
			fRec181[l245] = 0.0f;
		}
		for (int l246 = 0; l246 < 2; l246 = l246 + 1) {
			fVec114[l246] = 0.0f;
		}
		for (int l247 = 0; l247 < 2; l247 = l247 + 1) {
			fRec178[l247] = 0.0f;
		}
		for (int l248 = 0; l248 < 2; l248 = l248 + 1) {
			fRec177[l248] = 0.0f;
		}
		for (int l249 = 0; l249 < 2; l249 = l249 + 1) {
			fVec115[l249] = 0.0f;
		}
		for (int l250 = 0; l250 < 2; l250 = l250 + 1) {
			fRec176[l250] = 0.0f;
		}
		for (int l251 = 0; l251 < 2; l251 = l251 + 1) {
			fRec175[l251] = 0.0f;
		}
		for (int l252 = 0; l252 < 2; l252 = l252 + 1) {
			fRec174[l252] = 0.0f;
		}
		for (int l253 = 0; l253 < 2; l253 = l253 + 1) {
			fRec173[l253] = 0.0f;
		}
		for (int l254 = 0; l254 < 2; l254 = l254 + 1) {
			fRec172[l254] = 0.0f;
		}
		for (int l255 = 0; l255 < 2; l255 = l255 + 1) {
			fVec116[l255] = 0.0f;
		}
		for (int l256 = 0; l256 < 3; l256 = l256 + 1) {
			fVec117[l256] = 0.0f;
		}
		for (int l257 = 0; l257 < 5; l257 = l257 + 1) {
			fVec118[l257] = 0.0f;
		}
		for (int l258 = 0; l258 < 12; l258 = l258 + 1) {
			fVec119[l258] = 0.0f;
		}
		for (int l259 = 0; l259 < 32; l259 = l259 + 1) {
			fVec120[l259] = 0.0f;
		}
		for (int l260 = 0; l260 < 64; l260 = l260 + 1) {
			fVec121[l260] = 0.0f;
		}
		for (int l261 = 0; l261 < 128; l261 = l261 + 1) {
			fVec122[l261] = 0.0f;
		}
		for (int l262 = 0; l262 < 256; l262 = l262 + 1) {
			fVec123[l262] = 0.0f;
		}
		for (int l263 = 0; l263 < 512; l263 = l263 + 1) {
			fVec124[l263] = 0.0f;
		}
		for (int l264 = 0; l264 < 512; l264 = l264 + 1) {
			fVec125[l264] = 0.0f;
		}
		for (int l265 = 0; l265 < 2; l265 = l265 + 1) {
			fRec171[l265] = 0.0f;
		}
		for (int l266 = 0; l266 < 2; l266 = l266 + 1) {
			fRec200[l266] = 0.0f;
		}
		for (int l267 = 0; l267 < 2; l267 = l267 + 1) {
			fRec201[l267] = 0.0f;
		}
		for (int l268 = 0; l268 < 2; l268 = l268 + 1) {
			fVec126[l268] = 0.0f;
		}
		for (int l269 = 0; l269 < 2; l269 = l269 + 1) {
			fVec127[l269] = 0.0f;
		}
		for (int l270 = 0; l270 < 2; l270 = l270 + 1) {
			fRec199[l270] = 0.0f;
		}
		for (int l271 = 0; l271 < 2; l271 = l271 + 1) {
			fRec198[l271] = 0.0f;
		}
		for (int l272 = 0; l272 < 2; l272 = l272 + 1) {
			fVec128[l272] = 0.0f;
		}
		for (int l273 = 0; l273 < 2; l273 = l273 + 1) {
			fRec197[l273] = 0.0f;
		}
		for (int l274 = 0; l274 < 2; l274 = l274 + 1) {
			fRec196[l274] = 0.0f;
		}
		for (int l275 = 0; l275 < 2; l275 = l275 + 1) {
			fRec195[l275] = 0.0f;
		}
		for (int l276 = 0; l276 < 2; l276 = l276 + 1) {
			fRec194[l276] = 0.0f;
		}
		for (int l277 = 0; l277 < 2; l277 = l277 + 1) {
			fRec193[l277] = 0.0f;
		}
		for (int l278 = 0; l278 < 2; l278 = l278 + 1) {
			fVec129[l278] = 0.0f;
		}
		for (int l279 = 0; l279 < 3; l279 = l279 + 1) {
			fVec130[l279] = 0.0f;
		}
		for (int l280 = 0; l280 < 5; l280 = l280 + 1) {
			fVec131[l280] = 0.0f;
		}
		for (int l281 = 0; l281 < 12; l281 = l281 + 1) {
			fVec132[l281] = 0.0f;
		}
		for (int l282 = 0; l282 < 32; l282 = l282 + 1) {
			fVec133[l282] = 0.0f;
		}
		for (int l283 = 0; l283 < 64; l283 = l283 + 1) {
			fVec134[l283] = 0.0f;
		}
		for (int l284 = 0; l284 < 128; l284 = l284 + 1) {
			fVec135[l284] = 0.0f;
		}
		for (int l285 = 0; l285 < 256; l285 = l285 + 1) {
			fVec136[l285] = 0.0f;
		}
		for (int l286 = 0; l286 < 512; l286 = l286 + 1) {
			fVec137[l286] = 0.0f;
		}
		for (int l287 = 0; l287 < 512; l287 = l287 + 1) {
			fVec138[l287] = 0.0f;
		}
		for (int l288 = 0; l288 < 2; l288 = l288 + 1) {
			fRec192[l288] = 0.0f;
		}
		for (int l289 = 0; l289 < 2; l289 = l289 + 1) {
			fRec212[l289] = 0.0f;
		}
		for (int l290 = 0; l290 < 2; l290 = l290 + 1) {
			fRec213[l290] = 0.0f;
		}
		for (int l291 = 0; l291 < 2; l291 = l291 + 1) {
			fRec214[l291] = 0.0f;
		}
		for (int l292 = 0; l292 < 2; l292 = l292 + 1) {
			fVec139[l292] = 0.0f;
		}
		for (int l293 = 0; l293 < 2; l293 = l293 + 1) {
			fRec211[l293] = 0.0f;
		}
		for (int l294 = 0; l294 < 2; l294 = l294 + 1) {
			fRec210[l294] = 0.0f;
		}
		for (int l295 = 0; l295 < 2; l295 = l295 + 1) {
			fVec140[l295] = 0.0f;
		}
		for (int l296 = 0; l296 < 2; l296 = l296 + 1) {
			fRec209[l296] = 0.0f;
		}
		for (int l297 = 0; l297 < 2; l297 = l297 + 1) {
			fRec208[l297] = 0.0f;
		}
		for (int l298 = 0; l298 < 2; l298 = l298 + 1) {
			fRec207[l298] = 0.0f;
		}
		for (int l299 = 0; l299 < 2; l299 = l299 + 1) {
			fRec206[l299] = 0.0f;
		}
		for (int l300 = 0; l300 < 2; l300 = l300 + 1) {
			fRec205[l300] = 0.0f;
		}
		for (int l301 = 0; l301 < 2; l301 = l301 + 1) {
			fVec141[l301] = 0.0f;
		}
		for (int l302 = 0; l302 < 3; l302 = l302 + 1) {
			fVec142[l302] = 0.0f;
		}
		for (int l303 = 0; l303 < 5; l303 = l303 + 1) {
			fVec143[l303] = 0.0f;
		}
		for (int l304 = 0; l304 < 12; l304 = l304 + 1) {
			fVec144[l304] = 0.0f;
		}
		for (int l305 = 0; l305 < 32; l305 = l305 + 1) {
			fVec145[l305] = 0.0f;
		}
		for (int l306 = 0; l306 < 64; l306 = l306 + 1) {
			fVec146[l306] = 0.0f;
		}
		for (int l307 = 0; l307 < 128; l307 = l307 + 1) {
			fVec147[l307] = 0.0f;
		}
		for (int l308 = 0; l308 < 256; l308 = l308 + 1) {
			fVec148[l308] = 0.0f;
		}
		for (int l309 = 0; l309 < 512; l309 = l309 + 1) {
			fVec149[l309] = 0.0f;
		}
		for (int l310 = 0; l310 < 512; l310 = l310 + 1) {
			fVec150[l310] = 0.0f;
		}
		for (int l311 = 0; l311 < 2; l311 = l311 + 1) {
			fRec204[l311] = 0.0f;
		}
		for (int l312 = 0; l312 < 2; l312 = l312 + 1) {
			fRec0[l312] = 0.0f;
		}
		for (int l313 = 0; l313 < 2; l313 = l313 + 1) {
			fRec215[l313] = 0.0f;
		}
		for (int l314 = 0; l314 < 2; l314 = l314 + 1) {
			fRec216[l314] = 0.0f;
		}
		for (int l315 = 0; l315 < 2; l315 = l315 + 1) {
			fRec217[l315] = 0.0f;
		}
		for (int l316 = 0; l316 < 2; l316 = l316 + 1) {
			fRec218[l316] = 0.0f;
		}
		for (int l317 = 0; l317 < 2; l317 = l317 + 1) {
			fRec219[l317] = 0.0f;
		}
		for (int l318 = 0; l318 < 2; l318 = l318 + 1) {
			fRec220[l318] = 0.0f;
		}
		for (int l319 = 0; l319 < 2; l319 = l319 + 1) {
			fRec221[l319] = 0.0f;
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
		ui_interface->addVerticalSlider("spec 0", &fVslider5, FAUSTFLOAT(-1e+01f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->addVerticalSlider("spec 1", &fVslider6, FAUSTFLOAT(-5.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->addVerticalSlider("spec 2", &fVslider7, FAUSTFLOAT(-5.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->addVerticalSlider("spec 3", &fVslider8, FAUSTFLOAT(-8.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->addVerticalSlider("spec 4", &fVslider9, FAUSTFLOAT(-9.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->addVerticalSlider("spec 5", &fVslider10, FAUSTFLOAT(-1e+01f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->addVerticalSlider("spec 6", &fVslider11, FAUSTFLOAT(-7.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
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
			fRec7[0] = -(fSlow12 * (fSlow11 * fRec7[1] - fSlow7 * (fTemp1 - fVec0[1])));
			fRec6[0] = fRec7[0] - fSlow10 * (fSlow8 * fRec6[2] + fSlow6 * fRec6[1]);
			float fTemp2 = fSlow13 * (fRec6[2] + (fRec6[0] - 2.0f * fRec6[1]));
			fVec1[0] = fTemp2;
			fRec5[0] = -(fConst11 * (fConst10 * fRec5[1] - (fTemp2 + fVec1[1])));
			fRec4[0] = fRec5[0] - fConst8 * (fConst7 * fRec4[2] + fConst5 * fRec4[1]);
			float fTemp3 = std::fabs(fRec3[1]);
			fRec18[0] = fConst17 * fTemp3 + fConst16 * fRec18[1];
			float fTemp4 = std::min<float>(fRec18[0], fRec18[1]);
			fVec2[0] = fTemp4;
			float fTemp5 = std::min<float>(fTemp4, fVec2[2]);
			fVec3[0] = fTemp5;
			float fTemp6 = std::min<float>(fTemp5, fVec3[4]);
			fVec4[0] = fTemp6;
			float fTemp7 = std::min<float>(fTemp6, fVec4[8]);
			fVec5[IOTA0 & 31] = fTemp7;
			float fTemp8 = std::min<float>(fTemp7, fVec5[(IOTA0 - 16) & 31]);
			fVec6[IOTA0 & 63] = fTemp8;
			float fTemp9 = std::min<float>(fTemp8, fVec6[(IOTA0 - 32) & 63]);
			fVec7[IOTA0 & 127] = fTemp9;
			float fTemp10 = std::min<float>(fTemp9, fVec7[(IOTA0 - 64) & 127]);
			fVec8[IOTA0 & 255] = fTemp10;
			float fTemp11 = std::min<float>(fTemp10, fVec8[(IOTA0 - 128) & 255]);
			fVec9[IOTA0 & 511] = fTemp11;
			float fTemp12 = std::min<float>(fTemp11, fVec9[(IOTA0 - 256) & 511]);
			fVec10[IOTA0 & 1023] = fTemp12;
			float fTemp13 = std::min<float>(fTemp12, fVec10[(IOTA0 - 512) & 1023]);
			fVec11[IOTA0 & 2047] = fTemp13;
			float fTemp14 = std::min<float>(fTemp13, fVec11[(IOTA0 - 1024) & 2047]);
			fVec12[IOTA0 & 4095] = fTemp14;
			float fTemp15 = std::min<float>(fTemp14, fVec12[(IOTA0 - 2048) & 4095]);
			fVec13[IOTA0 & 8191] = fTemp15;
			float fTemp16 = std::min<float>(fTemp15, fVec13[(IOTA0 - 4096) & 8191]);
			fVec14[IOTA0 & 16383] = fTemp16;
			float fTemp17 = std::min<float>(fTemp16, fVec14[(IOTA0 - 8192) & 16383]);
			fVec15[IOTA0 & 32767] = fTemp17;
			float fTemp18 = std::min<float>(fTemp17, fVec15[(IOTA0 - 16384) & 32767]);
			fVec16[IOTA0 & 65535] = fTemp18;
			float fTemp19 = std::min<float>(fTemp18, fVec16[(IOTA0 - 32768) & 65535]);
			fVec17[IOTA0 & 131071] = fTemp19;
			float fTemp20 = std::min<float>(fTemp19, fVec17[(IOTA0 - 65536) & 131071]);
			fVec18[IOTA0 & 262143] = fTemp20;
			fVec19[IOTA0 & 524287] = std::min<float>(fTemp20, fVec18[(IOTA0 - 131072) & 262143]);
			fRec17[0] = fConst53 * std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(((iConst15) ? fRec18[0] : 3.4028235e+38f), ((iConst18) ? fVec2[iConst15] : 3.4028235e+38f)), ((iConst19) ? fVec3[iConst20] : 3.4028235e+38f)), ((iConst21) ? fVec4[iConst22] : 3.4028235e+38f)), ((iConst23) ? fVec5[(IOTA0 - iConst24) & 31] : 3.4028235e+38f)), ((iConst25) ? fVec6[(IOTA0 - iConst26) & 63] : 3.4028235e+38f)), ((iConst27) ? fVec7[(IOTA0 - iConst28) & 127] : 3.4028235e+38f)), ((iConst29) ? fVec8[(IOTA0 - iConst30) & 255] : 3.4028235e+38f)), ((iConst31) ? fVec9[(IOTA0 - iConst32) & 511] : 3.4028235e+38f)), ((iConst33) ? fVec10[(IOTA0 - iConst34) & 1023] : 3.4028235e+38f)), ((iConst35) ? fVec11[(IOTA0 - iConst36) & 2047] : 3.4028235e+38f)), ((iConst37) ? fVec12[(IOTA0 - iConst38) & 4095] : 3.4028235e+38f)), ((iConst39) ? fVec13[(IOTA0 - iConst40) & 8191] : 3.4028235e+38f)), ((iConst41) ? fVec14[(IOTA0 - iConst42) & 16383] : 3.4028235e+38f)), ((iConst43) ? fVec15[(IOTA0 - iConst44) & 32767] : 3.4028235e+38f)), ((iConst45) ? fVec16[(IOTA0 - iConst46) & 65535] : 3.4028235e+38f)), ((iConst47) ? fVec17[(IOTA0 - iConst48) & 131071] : 3.4028235e+38f)), ((iConst49) ? fVec18[(IOTA0 - iConst50) & 262143] : 3.4028235e+38f)), ((iConst51) ? fVec19[(IOTA0 - iConst52) & 524287] : 3.4028235e+38f)) + fConst14 * fRec17[1];
			float fTemp21 = std::max<float>(-6e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fRec17[0])));
			fVbargraph0 = FAUSTFLOAT(fTemp21);
			float fTemp22 = fTemp21;
			float fTemp23 = fRec30[1] + fConst54 * (fTemp3 - fRec31[1]);
			fRec30[0] = fConst56 * fTemp23 - fRec30[1];
			float fTemp24 = fRec31[1] + fConst57 * fTemp23;
			fRec31[0] = 2.0f * fTemp24 - fRec31[1];
			float fRec32 = fTemp3;
			float fRec33 = fConst58 * fTemp23;
			float fRec34 = fTemp24;
			float fTemp25 = fRec34 + 1.4142135f * fRec33;
			float fTemp26 = fRec25[1] + fConst54 * (fRec32 - (fTemp25 + fRec26[1]));
			fRec25[0] = fConst56 * fTemp26 - fRec25[1];
			float fTemp27 = fRec26[1] + fConst57 * fTemp26;
			fRec26[0] = 2.0f * fTemp27 - fRec26[1];
			float fRec27 = fRec32 - fTemp25;
			float fRec28 = fConst58 * fTemp26;
			float fRec29 = fTemp27;
			float fTemp28 = fRec29 + 1.4142135f * fRec28;
			float fTemp29 = fRec22[1] + fConst59 * (fRec27 - (fTemp28 + fRec23[1]));
			fRec22[0] = fConst61 * fTemp29 - fRec22[1];
			float fTemp30 = fRec23[1] + fConst62 * fTemp29;
			fRec23[0] = 2.0f * fTemp30 - fRec23[1];
			float fRec24 = fTemp30;
			float fTemp31 = fRec19[1] + fConst59 * (fRec24 - fRec20[1]);
			fRec19[0] = fConst61 * fTemp31 - fRec19[1];
			float fTemp32 = fRec20[1] + fConst62 * fTemp31;
			fRec20[0] = 2.0f * fTemp32 - fRec20[1];
			float fRec21 = fTemp32;
			float fTemp33 = std::fabs(fRec21);
			fVec20[0] = fTemp33;
			float fTemp34 = std::max<float>(fTemp33, fVec20[1]);
			fVec21[0] = fTemp34;
			float fTemp35 = std::max<float>(fTemp34, fVec21[2]);
			fVec22[0] = fTemp35;
			float fTemp36 = std::max<float>(fTemp35, fVec22[4]);
			fVec23[0] = fTemp36;
			float fTemp37 = std::max<float>(fTemp36, fVec23[8]);
			fVec24[IOTA0 & 31] = fTemp37;
			float fTemp38 = std::max<float>(fTemp37, fVec24[(IOTA0 - 16) & 31]);
			fVec25[IOTA0 & 63] = fTemp38;
			float fTemp39 = std::max<float>(fTemp38, fVec25[(IOTA0 - 32) & 63]);
			fVec26[IOTA0 & 127] = fTemp39;
			float fTemp40 = std::max<float>(fTemp39, fVec26[(IOTA0 - 64) & 127]);
			fVec27[IOTA0 & 255] = fTemp40;
			fVec28[IOTA0 & 511] = std::max<float>(fTemp40, fVec27[(IOTA0 - 128) & 255]);
			float fTemp41 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst3) ? fTemp33 : -3.4028235e+38f), ((iConst63) ? fVec21[iConst3] : -3.4028235e+38f)), ((iConst64) ? fVec22[iConst65] : -3.4028235e+38f)), ((iConst66) ? fVec23[iConst67] : -3.4028235e+38f)), ((iConst68) ? fVec24[(IOTA0 - iConst69) & 31] : -3.4028235e+38f)), ((iConst70) ? fVec25[(IOTA0 - iConst71) & 63] : -3.4028235e+38f)), ((iConst72) ? fVec26[(IOTA0 - iConst73) & 127] : -3.4028235e+38f)), ((iConst74) ? fVec27[(IOTA0 - iConst75) & 255] : -3.4028235e+38f)), ((iConst76) ? fVec28[(IOTA0 - iConst77) & 511] : -3.4028235e+38f))));
			int iTemp42 = (fTemp41 > (fSlow14 + fTemp22 + -12.0f)) + (fTemp41 > (fSlow14 + fTemp22 + 12.0f));
			float fTemp43 = std::max<float>(-3.4028235e+38f, 1e+02f * ((iTemp42 == 0) ? fTemp41 - fTemp22 - fSlow14 : ((iTemp42 == 1) ? -(0.020833334f * mydsp_faustpower2_f(fTemp41 + (-12.0f - fTemp22) - fSlow14)) : 0.0f)));
			float fTemp44 = ((fTemp43 > fRec16[1]) ? fConst79 : fConst78);
			fRec16[0] = fTemp43 * (1.0f - fTemp44) + fRec16[1] * fTemp44;
			float fTemp45 = std::min<float>(1.0f, std::max<float>(0.0f, std::pow(1e+01f, 0.05f * fRec16[0])));
			fVbargraph1 = FAUSTFLOAT(1e+02f * (1.0f - fTemp45));
			float fTemp46 = std::tan(fConst9 * std::min<float>(fConst12, fTemp45 * (fConst13 * std::fabs(fRec9[1]) + 0.0784f)));
			float fTemp47 = fTemp46 + 2.0f;
			float fTemp48 = fTemp46 * fTemp47 + 1.0f;
			fVec29[0] = fConst89 * fRec37[1] - fConst87 * fRec3[2];
			fRec38[0] = fConst92 * (fConst91 * fRec3[2] - (fVec29[1] + fConst86 * fRec38[1]) + fConst85 * fRec3[1]);
			fRec37[0] = fRec38[0];
			fVec30[0] = 0.50032705f * fRec37[1] - fConst97 * fRec35[1];
			fRec36[0] = fConst98 * (fVec30[1] - fConst95 * fRec36[1] - 1.0006541f * fRec37[1] + 0.50032705f * fRec37[0]);
			fRec35[0] = fRec36[0];
			float fTemp49 = mydsp_faustpower2_f(fRec35[0]);
			fVec31[0] = fTemp49;
			float fTemp50 = fTemp49 + fVec31[1];
			fVec32[0] = fTemp50;
			float fTemp51 = fTemp50 + fVec32[2];
			fVec33[0] = fTemp51;
			float fTemp52 = fTemp51 + fVec33[4];
			fVec34[0] = fTemp52;
			float fTemp53 = fTemp52 + fVec34[8];
			fVec35[IOTA0 & 31] = fTemp53;
			float fTemp54 = fTemp53 + fVec35[(IOTA0 - 16) & 31];
			fVec36[IOTA0 & 63] = fTemp54;
			float fTemp55 = fTemp54 + fVec36[(IOTA0 - 32) & 63];
			fVec37[IOTA0 & 127] = fTemp55;
			float fTemp56 = fTemp55 + fVec37[(IOTA0 - 64) & 127];
			fVec38[IOTA0 & 255] = fTemp56;
			fVec39[IOTA0 & 511] = fTemp56 + fVec38[(IOTA0 - 128) & 255];
			float fTemp57 = std::max<float>(-2e+01f, std::min<float>(2e+01f, fSlow1 + fRec8[1] + (0.691f - 4.3429446f * std::log(std::max<float>(1e-12f, fConst114 * (((iConst112) ? 0.86000985f * fVec39[(IOTA0 - iConst113) & 511] : 0.0f) + ((iConst110) ? 0.86000985f * fVec38[(IOTA0 - iConst111) & 255] : 0.0f) + ((iConst108) ? 0.86000985f * fVec37[(IOTA0 - iConst109) & 127] : 0.0f) + ((iConst106) ? 0.86000985f * fVec36[(IOTA0 - iConst107) & 63] : 0.0f) + ((iConst104) ? 0.86000985f * fVec35[(IOTA0 - iConst105) & 31] : 0.0f) + ((iConst102) ? 0.86000985f * fVec34[iConst103] : 0.0f) + ((iConst100) ? 0.86000985f * fVec33[iConst101] : 0.0f) + ((iConst99) ? 0.86000985f * fTemp49 : 0.0f) + ((iConst81) ? 0.86000985f * fVec32[iConst99] : 0.0f))))))) - (fRec11[1] * fTemp47 + fRec12[1]);
			float fTemp58 = fTemp46 * fTemp57 / fTemp48;
			fRec11[0] = fRec11[1] + 2.0f * fTemp58;
			float fTemp59 = fRec11[1] + fTemp58;
			float fTemp60 = fTemp46 * fTemp59;
			fRec12[0] = fRec12[1] + 2.0f * fTemp60;
			float fRec13 = fTemp59;
			float fRec14 = fTemp57 / fTemp48;
			float fRec15 = fRec12[1] + fTemp60;
			fRec9[0] = fRec13;
			float fRec10 = fRec15;
			fVbargraph2 = FAUSTFLOAT(fRec10);
			fRec8[0] = fVbargraph2;
			fRec3[0] = fConst8 * std::pow(1e+01f, 0.05f * fRec8[0]) * (fRec4[2] + fRec4[0] + 2.0f * fRec4[1]);
			float fTemp61 = std::fabs(fRec3[0]);
			fVec40[0] = fTemp61;
			float fTemp62 = std::max<float>(fTemp61, fVec40[1]);
			fVec41[0] = fTemp62;
			float fTemp63 = std::max<float>(fTemp62, fVec41[2]);
			fVec42[0] = fTemp63;
			float fTemp64 = std::max<float>(fTemp63, fVec42[4]);
			fVec43[0] = fTemp64;
			float fTemp65 = std::max<float>(fTemp64, fVec43[8]);
			fVec44[IOTA0 & 31] = fTemp65;
			float fTemp66 = std::max<float>(fTemp65, fVec44[(IOTA0 - 16) & 31]);
			fVec45[IOTA0 & 63] = fTemp66;
			float fTemp67 = std::max<float>(fTemp66, fVec45[(IOTA0 - 32) & 63]);
			fVec46[IOTA0 & 127] = fTemp67;
			float fTemp68 = std::max<float>(fTemp67, fVec46[(IOTA0 - 64) & 127]);
			fVec47[IOTA0 & 255] = fTemp68;
			fVec48[IOTA0 & 511] = std::max<float>(fTemp68, fVec47[(IOTA0 - 128) & 255]);
			float fTemp69 = std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst3) ? fTemp61 : -3.4028235e+38f), ((iConst63) ? fVec41[iConst3] : -3.4028235e+38f)), ((iConst64) ? fVec42[iConst65] : -3.4028235e+38f)), ((iConst66) ? fVec43[iConst67] : -3.4028235e+38f)), ((iConst68) ? fVec44[(IOTA0 - iConst69) & 31] : -3.4028235e+38f)), ((iConst70) ? fVec45[(IOTA0 - iConst71) & 63] : -3.4028235e+38f)), ((iConst72) ? fVec46[(IOTA0 - iConst73) & 127] : -3.4028235e+38f)), ((iConst74) ? fVec47[(IOTA0 - iConst75) & 255] : -3.4028235e+38f)), ((iConst76) ? fVec48[(IOTA0 - iConst77) & 511] : -3.4028235e+38f))));
			float fTemp70 = 2e+01f * fTemp69;
			int iTemp71 = (fTemp70 > -2e+01f) + (fTemp70 > -2e+01f);
			float fTemp72 = 2e+01f * (fTemp69 + 1.0f);
			float fTemp73 = std::max<float>(-3.4028235e+38f, 0.8f * ((iTemp71 == 0) ? fTemp72 : ((iTemp71 == 1) ? -(4194304.0f * mydsp_faustpower2_f(fTemp72 + -5.9604645e-08f)) : 0.0f)));
			float fTemp74 = ((fTemp73 > fRec2[1]) ? fConst115 : fConst14);
			fRec2[0] = fTemp73 * (1.0f - fTemp74) + fRec2[1] * fTemp74;
			float fTemp75 = std::min<float>(1.0f, std::max<float>(0.0f, std::pow(1e+01f, 0.05f * fRec2[0])));
			fVbargraph3 = FAUSTFLOAT(fTemp75);
			float fTemp76 = fTemp75;
			float fTemp77 = fRec50[1] + fConst116 * (fRec3[0] - fRec51[1]);
			fRec50[0] = fConst118 * fTemp77 - fRec50[1];
			float fTemp78 = fRec51[1] + fConst119 * fTemp77;
			fRec51[0] = 2.0f * fTemp78 - fRec51[1];
			float fRec52 = fConst120 * fTemp77;
			float fRec53 = fTemp78;
			float fTemp79 = fRec53 + 1.4142135f * fRec52;
			float fTemp80 = fRec46[1] + fConst116 * (fRec3[0] - (fTemp79 + fRec47[1]));
			fRec46[0] = fConst118 * fTemp80 - fRec46[1];
			float fTemp81 = fRec47[1] + fConst119 * fTemp80;
			fRec47[0] = 2.0f * fTemp81 - fRec47[1];
			float fRec48 = fConst120 * fTemp80;
			float fRec49 = fTemp81;
			float fTemp82 = fRec53 + fRec49;
			float fTemp83 = fRec52 + fRec48;
			float fTemp84 = 1.4142135f * fTemp83;
			float fTemp85 = fTemp84 + fTemp82;
			float fTemp86 = fRec61[1] + fConst121 * (fRec3[0] - (fTemp85 + fRec62[1]));
			fRec61[0] = fConst123 * fTemp86 - fRec61[1];
			float fTemp87 = fRec62[1] + fConst124 * fTemp86;
			fRec62[0] = 2.0f * fTemp87 - fRec62[1];
			float fRec63 = fConst125 * fTemp86;
			float fTemp88 = fTemp84 + fTemp82 + 2.828427f * fRec63;
			float fTemp89 = fRec58[1] + fConst126 * (fRec3[0] - (fTemp88 + fRec59[1]));
			fRec58[0] = fConst128 * fTemp89 - fRec58[1];
			float fTemp90 = fRec59[1] + fConst129 * fTemp89;
			fRec59[0] = 2.0f * fTemp90 - fRec59[1];
			float fRec60 = fConst130 * fTemp89;
			float fTemp91 = fRec63 + fRec60;
			float fTemp92 = fTemp85 + 2.828427f * fTemp91;
			float fTemp93 = fRec64[1] + fConst59 * (fRec3[0] - (fTemp92 + fRec65[1]));
			fRec64[0] = fConst61 * fTemp93 - fRec64[1];
			float fTemp94 = fRec65[1] + fConst62 * fTemp93;
			fRec65[0] = 2.0f * fTemp94 - fRec65[1];
			float fRec66 = fConst131 * fTemp93;
			float fTemp95 = fRec66 + fTemp91;
			float fTemp96 = 2.828427f * fTemp95;
			float fTemp97 = fTemp85 + fTemp96;
			float fTemp98 = fRec54[1] + fConst132 * (fRec3[0] - (fTemp97 + fRec55[1]));
			fRec54[0] = fConst134 * fTemp98 - fRec54[1];
			float fTemp99 = fRec55[1] + fConst135 * fTemp98;
			fRec55[0] = 2.0f * fTemp99 - fRec55[1];
			float fRec56 = fConst136 * fTemp98;
			float fRec57 = fTemp99;
			float fTemp100 = fRec57 + fTemp82;
			float fTemp101 = fRec56 + fTemp83;
			float fTemp102 = 1.4142135f * fTemp101 + fTemp96 + fTemp100;
			float fTemp103 = fRec67[1] + fConst132 * (fRec3[0] - (fTemp102 + fRec68[1]));
			fRec67[0] = fConst134 * fTemp103 - fRec67[1];
			float fTemp104 = fRec68[1] + fConst135 * fTemp103;
			fRec68[0] = 2.0f * fTemp104 - fRec68[1];
			float fRec69 = fConst136 * fTemp103;
			float fRec70 = fTemp104;
			float fTemp105 = fRec70 + fTemp100;
			float fTemp106 = fRec69 + fTemp101;
			float fTemp107 = 1.4142135f * fTemp106;
			float fTemp108 = fTemp107 + fTemp96 + fTemp105;
			float fTemp109 = fRec75[1] + fConst137 * (fRec3[0] - (fTemp108 + fRec76[1]));
			fRec75[0] = fConst139 * fTemp109 - fRec75[1];
			float fTemp110 = fRec76[1] + fConst140 * fTemp109;
			fRec76[0] = 2.0f * fTemp110 - fRec76[1];
			float fRec77 = fConst141 * fTemp109;
			float fTemp111 = 2.828427f * (fRec77 + fTemp95);
			float fTemp112 = fTemp107 + fTemp105 + fTemp111;
			float fTemp113 = fRec71[1] + fConst142 * (fRec3[0] - (fTemp112 + fRec72[1]));
			fRec71[0] = fConst144 * fTemp113 - fRec71[1];
			float fTemp114 = fRec72[1] + fConst145 * fTemp113;
			fRec72[0] = 2.0f * fTemp114 - fRec72[1];
			float fRec73 = fConst146 * fTemp113;
			float fRec74 = fTemp114;
			float fTemp115 = fRec74 + fTemp105;
			float fTemp116 = fRec73 + fTemp106;
			float fTemp117 = 1.4142135f * fTemp116 + fTemp111 + fTemp115;
			float fTemp118 = fRec78[1] + fConst142 * (fRec3[0] - (fTemp117 + fRec79[1]));
			fRec78[0] = fConst144 * fTemp118 - fRec78[1];
			float fTemp119 = fRec79[1] + fConst145 * fTemp118;
			fRec79[0] = 2.0f * fTemp119 - fRec79[1];
			float fRec80 = fConst146 * fTemp118;
			float fRec81 = fTemp119;
			float fTemp120 = fRec3[0] - (1.4142135f * (fRec80 + fTemp116) + fTemp111 + fRec81 + fTemp115);
			fVec49[0] = fTemp120;
			fVec50[0] = fConst149 * fVec49[1] - fConst89 * fRec44[1];
			fRec45[0] = fConst92 * (fVec50[1] - fConst86 * fRec45[1] + fConst148 * fVec49[1] + fConst147 * fTemp120);
			fRec44[0] = fRec45[0];
			fVec51[0] = 0.50032705f * fRec44[1] - fConst97 * fRec42[1];
			fRec43[0] = fConst98 * (fVec51[1] - fConst95 * fRec43[1] - 1.0006541f * fRec44[1] + 0.50032705f * fRec44[0]);
			fRec42[0] = fRec43[0];
			float fTemp121 = std::fabs(0.92736715f * fRec42[0]);
			fRec41[0] = std::max<float>(fTemp121, fConst150 * fRec41[1] + fConst151 * fTemp121);
			fRec40[0] = fConst17 * fRec41[0] + fConst16 * fRec40[1];
			fVec52[0] = fConst87 * fRec3[1] - fConst89 * fRec86[1];
			fRec87[0] = fConst92 * (fVec52[1] - fConst86 * fRec87[1] + fConst91 * fRec3[1] + fConst85 * fRec3[0]);
			fRec86[0] = fRec87[0];
			fVec53[0] = 0.50032705f * fRec86[1] - fConst97 * fRec84[1];
			fRec85[0] = fConst98 * (fVec53[1] - fConst95 * fRec85[1] - 1.0006541f * fRec86[1] + 0.50032705f * fRec86[0]);
			fRec84[0] = fRec85[0];
			float fTemp122 = std::fabs(0.92736715f * fRec84[0]);
			fRec83[0] = std::max<float>(fTemp122, fConst150 * fRec83[1] + fConst151 * fTemp122);
			fRec82[0] = fConst17 * fRec83[0] + fConst16 * fRec82[1];
			float fTemp123 = std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec82[0])));
			float fTemp124 = 2e+01f * (fTemp123 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec40[0]))));
			fVbargraph4 = FAUSTFLOAT(-fTemp124);
			fRec39[0] = fConst152 * (fSlow15 - -fTemp124) + fConst115 * fRec39[1];
			float fTemp125 = std::pow(1e+01f, fSlow16 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec39[0])) * fTemp76);
			fVbargraph5 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp125)));
			float fTemp126 = fTemp120 * fTemp125;
			float fTemp127 = std::fabs(fTemp126);
			fVec54[0] = fTemp127;
			float fTemp128 = std::max<float>(fTemp127, fVec54[1]);
			fVec55[0] = fTemp128;
			float fTemp129 = std::max<float>(fTemp128, fVec55[2]);
			fVec56[0] = fTemp129;
			float fTemp130 = std::max<float>(fTemp129, fVec56[4]);
			fVec57[0] = fTemp130;
			float fTemp131 = std::max<float>(fTemp130, fVec57[8]);
			fVec58[IOTA0 & 31] = fTemp131;
			float fTemp132 = std::max<float>(fTemp131, fVec58[(IOTA0 - 16) & 31]);
			fVec59[IOTA0 & 63] = fTemp132;
			float fTemp133 = std::max<float>(fTemp132, fVec59[(IOTA0 - 32) & 63]);
			fVec60[IOTA0 & 127] = fTemp133;
			float fTemp134 = std::max<float>(fTemp133, fVec60[(IOTA0 - 64) & 127]);
			fVec61[IOTA0 & 255] = fTemp134;
			float fTemp135 = std::max<float>(fTemp134, fVec61[(IOTA0 - 128) & 255]);
			fVec62[IOTA0 & 511] = fTemp135;
			fVec63[IOTA0 & 511] = std::max<float>(fTemp135, fVec62[(IOTA0 - 256) & 511]);
			float fTemp136 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst1) ? fTemp127 : -3.4028235e+38f), ((iConst153) ? fVec55[iConst1] : -3.4028235e+38f)), ((iConst154) ? fVec56[iConst155] : -3.4028235e+38f)), ((iConst156) ? fVec57[iConst157] : -3.4028235e+38f)), ((iConst158) ? fVec58[(IOTA0 - iConst159) & 31] : -3.4028235e+38f)), ((iConst160) ? fVec59[(IOTA0 - iConst161) & 63] : -3.4028235e+38f)), ((iConst162) ? fVec60[(IOTA0 - iConst163) & 127] : -3.4028235e+38f)), ((iConst164) ? fVec61[(IOTA0 - iConst165) & 255] : -3.4028235e+38f)), ((iConst166) ? fVec62[(IOTA0 - iConst167) & 511] : -3.4028235e+38f)), ((iConst168) ? fVec63[(IOTA0 - iConst169) & 511] : -3.4028235e+38f))));
			int iTemp137 = (fTemp136 > fSlow17) + (fTemp136 > fSlow3);
			float fTemp138 = std::max<float>(-12.0f, 0.75f * ((iTemp137 == 0) ? fTemp136 + 12.0f - fSlow1 : ((iTemp137 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp136 + 9.0f - fSlow1)) : 0.0f)));
			float fTemp139 = ((fTemp138 > fRec1[1]) ? fConst79 : fConst78);
			fRec1[0] = fTemp138 * (1.0f - fTemp139) + fRec1[1] * fTemp139;
			float fTemp140 = fRec119[1] + fConst116 * (fRec53 - fRec120[1]);
			fRec119[0] = fConst118 * fTemp140 - fRec119[1];
			float fTemp141 = fRec120[1] + fConst119 * fTemp140;
			fRec120[0] = 2.0f * fTemp141 - fRec120[1];
			float fRec121 = fTemp141;
			float fTemp142 = fRec116[1] + fConst132 * (fRec121 - fRec117[1]);
			fRec116[0] = fConst134 * fTemp142 - fRec116[1];
			float fTemp143 = fRec117[1] + fConst135 * fTemp142;
			fRec117[0] = 2.0f * fTemp143 - fRec117[1];
			float fRec118 = fConst136 * fTemp142;
			float fTemp144 = 2.828427f * fRec118;
			float fTemp145 = fRec113[1] + fConst137 * (fRec121 - (fTemp144 + fRec114[1]));
			fRec113[0] = fConst139 * fTemp145 - fRec113[1];
			float fTemp146 = fRec114[1] + fConst140 * fTemp145;
			fRec114[0] = 2.0f * fTemp146 - fRec114[1];
			float fRec115 = fConst141 * fTemp145;
			float fTemp147 = fRec118 + fRec115;
			float fTemp148 = 2.828427f * fTemp147;
			float fTemp149 = fRec122[1] + fConst142 * (fRec121 - (fTemp148 + fRec123[1]));
			fRec122[0] = fConst144 * fTemp149 - fRec122[1];
			float fTemp150 = fRec123[1] + fConst145 * fTemp149;
			fRec123[0] = 2.0f * fTemp150 - fRec123[1];
			float fRec124 = fConst146 * fTemp149;
			float fTemp151 = fRec124 + fTemp147;
			float fTemp152 = 2.828427f * fTemp151;
			float fTemp153 = fRec109[1] + fConst121 * (fRec121 - (fTemp152 + fRec110[1]));
			fRec109[0] = fConst123 * fTemp153 - fRec109[1];
			float fTemp154 = fRec110[1] + fConst124 * fTemp153;
			fRec110[0] = 2.0f * fTemp154 - fRec110[1];
			float fRec111 = fConst125 * fTemp153;
			float fRec112 = fTemp154;
			float fTemp155 = fRec106[1] + fConst121 * (fRec112 - fRec107[1]);
			fRec106[0] = fConst123 * fTemp155 - fRec106[1];
			float fTemp156 = fRec107[1] + fConst124 * fTemp155;
			fRec107[0] = 2.0f * fTemp156 - fRec107[1];
			float fRec108 = fTemp156;
			float fTemp157 = fRec103[1] + fConst59 * (fRec108 - fRec104[1]);
			fRec103[0] = fConst61 * fTemp157 - fRec103[1];
			float fTemp158 = fRec104[1] + fConst62 * fTemp157;
			fRec104[0] = 2.0f * fTemp158 - fRec104[1];
			float fRec105 = fConst131 * fTemp157;
			float fTemp159 = 2.828427f * fRec105;
			float fTemp160 = fRec99[1] + fConst126 * (fRec108 - (fTemp159 + fRec100[1]));
			fRec99[0] = fConst128 * fTemp160 - fRec99[1];
			float fTemp161 = fRec100[1] + fConst129 * fTemp160;
			fRec100[0] = 2.0f * fTemp161 - fRec100[1];
			float fRec101 = fConst130 * fTemp160;
			float fRec102 = fTemp161;
			float fTemp162 = fRec96[1] + fConst126 * (fRec102 - fRec97[1]);
			fRec96[0] = fConst128 * fTemp162 - fRec96[1];
			float fTemp163 = fRec97[1] + fConst129 * fTemp162;
			fRec97[0] = 2.0f * fTemp163 - fRec97[1];
			fRec98[0] = fTemp163;
			fVec64[0] = fConst149 * fRec98[1] - fConst89 * fRec94[1];
			fRec95[0] = fConst92 * (fVec64[1] - fConst86 * fRec95[1] + fConst148 * fRec98[1] + fConst147 * fRec98[0]);
			fRec94[0] = fRec95[0];
			fVec65[0] = 0.50032705f * fRec94[1] - fConst97 * fRec92[1];
			fRec93[0] = fConst98 * (fVec65[1] - fConst95 * fRec93[1] - 1.0006541f * fRec94[1] + 0.50032705f * fRec94[0]);
			fRec92[0] = fRec93[0];
			float fTemp164 = std::fabs(0.92736715f * fRec92[0]);
			fRec91[0] = std::max<float>(fTemp164, fConst150 * fRec91[1] + fConst151 * fTemp164);
			fRec90[0] = fConst17 * fRec91[0] + fConst16 * fRec90[1];
			float fTemp165 = 2e+01f * (std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec90[0]))) - fTemp123);
			fVbargraph6 = FAUSTFLOAT(fTemp165);
			fRec89[0] = fConst170 * (fSlow18 - fTemp165) + fConst78 * fRec89[1];
			float fTemp166 = std::pow(1e+01f, fSlow16 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec89[0])) * fTemp76);
			fVbargraph7 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp166)));
			float fTemp167 = fRec98[0] * fTemp166;
			float fTemp168 = std::fabs(fTemp167);
			fVec66[0] = fTemp168;
			float fTemp169 = std::max<float>(fTemp168, fVec66[1]);
			fVec67[0] = fTemp169;
			float fTemp170 = std::max<float>(fTemp169, fVec67[2]);
			fVec68[0] = fTemp170;
			float fTemp171 = std::max<float>(fTemp170, fVec68[4]);
			fVec69[0] = fTemp171;
			float fTemp172 = std::max<float>(fTemp171, fVec69[8]);
			fVec70[IOTA0 & 31] = fTemp172;
			float fTemp173 = std::max<float>(fTemp172, fVec70[(IOTA0 - 16) & 31]);
			fVec71[IOTA0 & 63] = fTemp173;
			float fTemp174 = std::max<float>(fTemp173, fVec71[(IOTA0 - 32) & 63]);
			fVec72[IOTA0 & 127] = fTemp174;
			float fTemp175 = std::max<float>(fTemp174, fVec72[(IOTA0 - 64) & 127]);
			fVec73[IOTA0 & 255] = fTemp175;
			float fTemp176 = std::max<float>(fTemp175, fVec73[(IOTA0 - 128) & 255]);
			fVec74[IOTA0 & 511] = fTemp176;
			fVec75[IOTA0 & 511] = std::max<float>(fTemp176, fVec74[(IOTA0 - 256) & 511]);
			float fTemp177 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst1) ? fTemp168 : -3.4028235e+38f), ((iConst153) ? fVec67[iConst1] : -3.4028235e+38f)), ((iConst154) ? fVec68[iConst155] : -3.4028235e+38f)), ((iConst156) ? fVec69[iConst157] : -3.4028235e+38f)), ((iConst158) ? fVec70[(IOTA0 - iConst159) & 31] : -3.4028235e+38f)), ((iConst160) ? fVec71[(IOTA0 - iConst161) & 63] : -3.4028235e+38f)), ((iConst162) ? fVec72[(IOTA0 - iConst163) & 127] : -3.4028235e+38f)), ((iConst164) ? fVec73[(IOTA0 - iConst165) & 255] : -3.4028235e+38f)), ((iConst166) ? fVec74[(IOTA0 - iConst167) & 511] : -3.4028235e+38f)), ((iConst168) ? fVec75[(IOTA0 - iConst169) & 511] : -3.4028235e+38f))));
			int iTemp178 = (fTemp177 > fSlow17) + (fTemp177 > fSlow3);
			float fTemp179 = std::max<float>(-12.0f, 0.75f * ((iTemp178 == 0) ? fTemp177 + 12.0f - fSlow1 : ((iTemp178 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp177 + 9.0f - fSlow1)) : 0.0f)));
			float fTemp180 = ((fTemp179 > fRec88[1]) ? fConst79 : fConst78);
			fRec88[0] = fTemp179 * (1.0f - fTemp180) + fRec88[1] * fTemp180;
			float fTemp181 = fRec102 + fTemp159 + 1.4142135f * fRec101;
			float fTemp182 = fRec133[1] + fConst126 * (fRec108 - (fTemp181 + fRec134[1]));
			fRec133[0] = fConst128 * fTemp182 - fRec133[1];
			float fTemp183 = fRec134[1] + fConst129 * fTemp182;
			fRec134[0] = 2.0f * fTemp183 - fRec134[1];
			float fRec135 = fConst130 * fTemp182;
			float fRec136 = fTemp183;
			float fTemp184 = fRec108 - (1.4142135f * (fRec101 + fRec135) + fRec136 + fRec102 + fTemp159);
			fVec76[0] = fTemp184;
			fVec77[0] = fConst149 * fVec76[1] - fConst89 * fRec131[1];
			fRec132[0] = fConst92 * (fVec77[1] - fConst86 * fRec132[1] + fConst148 * fVec76[1] + fConst147 * fTemp184);
			fRec131[0] = fRec132[0];
			fVec78[0] = 0.50032705f * fRec131[1] - fConst97 * fRec129[1];
			fRec130[0] = fConst98 * (fVec78[1] - fConst95 * fRec130[1] - 1.0006541f * fRec131[1] + 0.50032705f * fRec131[0]);
			fRec129[0] = fRec130[0];
			float fTemp185 = std::fabs(0.92736715f * fRec129[0]);
			fRec128[0] = std::max<float>(fTemp185, fConst150 * fRec128[1] + fConst151 * fTemp185);
			fRec127[0] = fConst17 * fRec128[0] + fConst16 * fRec127[1];
			float fTemp186 = 2e+01f * (fTemp123 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec127[0]))));
			fVbargraph8 = FAUSTFLOAT(-fTemp186);
			fRec126[0] = fConst172 * (fSlow19 - -fTemp186) + fConst171 * fRec126[1];
			float fTemp187 = std::pow(1e+01f, fSlow16 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec126[0])) * fTemp76);
			fVbargraph9 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp187)));
			float fTemp188 = fTemp184 * fTemp187;
			float fTemp189 = std::fabs(fTemp188);
			fVec79[0] = fTemp189;
			float fTemp190 = std::max<float>(fTemp189, fVec79[1]);
			fVec80[0] = fTemp190;
			float fTemp191 = std::max<float>(fTemp190, fVec80[2]);
			fVec81[0] = fTemp191;
			float fTemp192 = std::max<float>(fTemp191, fVec81[4]);
			fVec82[0] = fTemp192;
			float fTemp193 = std::max<float>(fTemp192, fVec82[8]);
			fVec83[IOTA0 & 31] = fTemp193;
			float fTemp194 = std::max<float>(fTemp193, fVec83[(IOTA0 - 16) & 31]);
			fVec84[IOTA0 & 63] = fTemp194;
			float fTemp195 = std::max<float>(fTemp194, fVec84[(IOTA0 - 32) & 63]);
			fVec85[IOTA0 & 127] = fTemp195;
			float fTemp196 = std::max<float>(fTemp195, fVec85[(IOTA0 - 64) & 127]);
			fVec86[IOTA0 & 255] = fTemp196;
			float fTemp197 = std::max<float>(fTemp196, fVec86[(IOTA0 - 128) & 255]);
			fVec87[IOTA0 & 511] = fTemp197;
			fVec88[IOTA0 & 511] = std::max<float>(fTemp197, fVec87[(IOTA0 - 256) & 511]);
			float fTemp198 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst1) ? fTemp189 : -3.4028235e+38f), ((iConst153) ? fVec80[iConst1] : -3.4028235e+38f)), ((iConst154) ? fVec81[iConst155] : -3.4028235e+38f)), ((iConst156) ? fVec82[iConst157] : -3.4028235e+38f)), ((iConst158) ? fVec83[(IOTA0 - iConst159) & 31] : -3.4028235e+38f)), ((iConst160) ? fVec84[(IOTA0 - iConst161) & 63] : -3.4028235e+38f)), ((iConst162) ? fVec85[(IOTA0 - iConst163) & 127] : -3.4028235e+38f)), ((iConst164) ? fVec86[(IOTA0 - iConst165) & 255] : -3.4028235e+38f)), ((iConst166) ? fVec87[(IOTA0 - iConst167) & 511] : -3.4028235e+38f)), ((iConst168) ? fVec88[(IOTA0 - iConst169) & 511] : -3.4028235e+38f))));
			int iTemp199 = (fTemp198 > fSlow17) + (fTemp198 > fSlow3);
			float fTemp200 = std::max<float>(-12.0f, 0.75f * ((iTemp199 == 0) ? fTemp198 + 12.0f - fSlow1 : ((iTemp199 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp198 + 9.0f - fSlow1)) : 0.0f)));
			float fTemp201 = ((fTemp200 > fRec125[1]) ? fConst79 : fConst78);
			fRec125[0] = fTemp200 * (1.0f - fTemp201) + fRec125[1] * fTemp201;
			float fTemp202 = fTemp152 + fRec112 + 1.4142135f * fRec111;
			float fTemp203 = fRec155[1] + fConst121 * (fRec121 - (fTemp202 + fRec156[1]));
			fRec155[0] = fConst123 * fTemp203 - fRec155[1];
			float fTemp204 = fRec156[1] + fConst124 * fTemp203;
			fRec156[0] = 2.0f * fTemp204 - fRec156[1];
			float fRec157 = fConst125 * fTemp203;
			float fRec158 = fTemp204;
			float fTemp205 = fRec112 + fRec158;
			float fTemp206 = fRec111 + fRec157;
			float fTemp207 = 1.4142135f * fTemp206;
			float fTemp208 = fTemp207 + fTemp152 + fTemp205;
			float fTemp209 = fRec152[1] + fConst126 * (fRec121 - (fTemp208 + fRec153[1]));
			fRec152[0] = fConst128 * fTemp209 - fRec152[1];
			float fTemp210 = fRec153[1] + fConst129 * fTemp209;
			fRec153[0] = 2.0f * fTemp210 - fRec153[1];
			float fRec154 = fConst130 * fTemp209;
			float fTemp211 = 2.828427f * (fRec154 + fTemp151);
			float fTemp212 = fTemp207 + fTemp205 + fTemp211;
			float fTemp213 = fRec148[1] + fConst59 * (fRec121 - (fTemp212 + fRec149[1]));
			fRec148[0] = fConst61 * fTemp213 - fRec148[1];
			float fTemp214 = fRec149[1] + fConst62 * fTemp213;
			fRec149[0] = 2.0f * fTemp214 - fRec149[1];
			float fRec150 = fConst131 * fTemp213;
			float fRec151 = fTemp214;
			float fTemp215 = fRec145[1] + fConst59 * (fRec151 - fRec146[1]);
			fRec145[0] = fConst61 * fTemp215 - fRec145[1];
			float fTemp216 = fRec146[1] + fConst62 * fTemp215;
			fRec146[0] = 2.0f * fTemp216 - fRec146[1];
			fRec147[0] = fTemp216;
			fVec89[0] = fConst149 * fRec147[1] - fConst89 * fRec143[1];
			fRec144[0] = fConst92 * (fVec89[1] - fConst86 * fRec144[1] + fConst148 * fRec147[1] + fConst147 * fRec147[0]);
			fRec143[0] = fRec144[0];
			fVec90[0] = 0.50032705f * fRec143[1] - fConst97 * fRec141[1];
			fRec142[0] = fConst98 * (fVec90[1] - fConst95 * fRec142[1] - 1.0006541f * fRec143[1] + 0.50032705f * fRec143[0]);
			fRec141[0] = fRec142[0];
			float fTemp217 = std::fabs(0.92736715f * fRec141[0]);
			fRec140[0] = std::max<float>(fTemp217, fConst150 * fRec140[1] + fConst151 * fTemp217);
			fRec139[0] = fConst17 * fRec140[0] + fConst16 * fRec139[1];
			float fTemp218 = 2e+01f * (fTemp123 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec139[0]))));
			fVbargraph10 = FAUSTFLOAT(-fTemp218);
			fRec138[0] = fConst174 * (fSlow20 - -fTemp218) + fConst173 * fRec138[1];
			float fTemp219 = std::pow(1e+01f, fSlow16 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec138[0])) * fTemp76);
			fVbargraph11 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp219)));
			float fTemp220 = fRec147[0] * fTemp219;
			float fTemp221 = std::fabs(fTemp220);
			fVec91[0] = fTemp221;
			float fTemp222 = std::max<float>(fTemp221, fVec91[1]);
			fVec92[0] = fTemp222;
			float fTemp223 = std::max<float>(fTemp222, fVec92[2]);
			fVec93[0] = fTemp223;
			float fTemp224 = std::max<float>(fTemp223, fVec93[4]);
			fVec94[0] = fTemp224;
			float fTemp225 = std::max<float>(fTemp224, fVec94[8]);
			fVec95[IOTA0 & 31] = fTemp225;
			float fTemp226 = std::max<float>(fTemp225, fVec95[(IOTA0 - 16) & 31]);
			fVec96[IOTA0 & 63] = fTemp226;
			float fTemp227 = std::max<float>(fTemp226, fVec96[(IOTA0 - 32) & 63]);
			fVec97[IOTA0 & 127] = fTemp227;
			float fTemp228 = std::max<float>(fTemp227, fVec97[(IOTA0 - 64) & 127]);
			fVec98[IOTA0 & 255] = fTemp228;
			float fTemp229 = std::max<float>(fTemp228, fVec98[(IOTA0 - 128) & 255]);
			fVec99[IOTA0 & 511] = fTemp229;
			fVec100[IOTA0 & 511] = std::max<float>(fTemp229, fVec99[(IOTA0 - 256) & 511]);
			float fTemp230 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst1) ? fTemp221 : -3.4028235e+38f), ((iConst153) ? fVec92[iConst1] : -3.4028235e+38f)), ((iConst154) ? fVec93[iConst155] : -3.4028235e+38f)), ((iConst156) ? fVec94[iConst157] : -3.4028235e+38f)), ((iConst158) ? fVec95[(IOTA0 - iConst159) & 31] : -3.4028235e+38f)), ((iConst160) ? fVec96[(IOTA0 - iConst161) & 63] : -3.4028235e+38f)), ((iConst162) ? fVec97[(IOTA0 - iConst163) & 127] : -3.4028235e+38f)), ((iConst164) ? fVec98[(IOTA0 - iConst165) & 255] : -3.4028235e+38f)), ((iConst166) ? fVec99[(IOTA0 - iConst167) & 511] : -3.4028235e+38f)), ((iConst168) ? fVec100[(IOTA0 - iConst169) & 511] : -3.4028235e+38f))));
			int iTemp231 = (fTemp230 > fSlow17) + (fTemp230 > fSlow3);
			float fTemp232 = std::max<float>(-12.0f, 0.75f * ((iTemp231 == 0) ? fTemp230 + 12.0f - fSlow1 : ((iTemp231 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp230 + 9.0f - fSlow1)) : 0.0f)));
			float fTemp233 = ((fTemp232 > fRec137[1]) ? fConst79 : fConst78);
			fRec137[0] = fTemp232 * (1.0f - fTemp233) + fRec137[1] * fTemp233;
			float fTemp234 = fRec151 + fTemp205;
			float fTemp235 = fRec150 + fTemp206;
			float fTemp236 = 1.4142135f * fTemp235 + fTemp211 + fTemp234;
			float fTemp237 = fRec167[1] + fConst59 * (fRec121 - (fTemp236 + fRec168[1]));
			fRec167[0] = fConst61 * fTemp237 - fRec167[1];
			float fTemp238 = fRec168[1] + fConst62 * fTemp237;
			fRec168[0] = 2.0f * fTemp238 - fRec168[1];
			float fRec169 = fConst131 * fTemp237;
			float fRec170 = fTemp238;
			float fTemp239 = fRec121 - (1.4142135f * (fRec169 + fTemp235) + fTemp211 + fRec170 + fTemp234);
			fVec101[0] = fTemp239;
			fVec102[0] = fConst149 * fVec101[1] - fConst89 * fRec165[1];
			fRec166[0] = fConst92 * (fVec102[1] - fConst86 * fRec166[1] + fConst148 * fVec101[1] + fConst147 * fTemp239);
			fRec165[0] = fRec166[0];
			fVec103[0] = 0.50032705f * fRec165[1] - fConst97 * fRec163[1];
			fRec164[0] = fConst98 * (fVec103[1] - fConst95 * fRec164[1] - 1.0006541f * fRec165[1] + 0.50032705f * fRec165[0]);
			fRec163[0] = fRec164[0];
			float fTemp240 = std::fabs(0.92736715f * fRec163[0]);
			fRec162[0] = std::max<float>(fTemp240, fConst150 * fRec162[1] + fConst151 * fTemp240);
			fRec161[0] = fConst17 * fRec162[0] + fConst16 * fRec161[1];
			float fTemp241 = 2e+01f * (fTemp123 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec161[0]))));
			fVbargraph12 = FAUSTFLOAT(-fTemp241);
			fRec160[0] = fConst176 * (fSlow21 - -fTemp241) + fConst175 * fRec160[1];
			float fTemp242 = std::pow(1e+01f, fSlow16 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec160[0])) * fTemp76);
			fVbargraph13 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp242)));
			float fTemp243 = fTemp239 * fTemp242;
			float fTemp244 = std::fabs(fTemp243);
			fVec104[0] = fTemp244;
			float fTemp245 = std::max<float>(fTemp244, fVec104[1]);
			fVec105[0] = fTemp245;
			float fTemp246 = std::max<float>(fTemp245, fVec105[2]);
			fVec106[0] = fTemp246;
			float fTemp247 = std::max<float>(fTemp246, fVec106[4]);
			fVec107[0] = fTemp247;
			float fTemp248 = std::max<float>(fTemp247, fVec107[8]);
			fVec108[IOTA0 & 31] = fTemp248;
			float fTemp249 = std::max<float>(fTemp248, fVec108[(IOTA0 - 16) & 31]);
			fVec109[IOTA0 & 63] = fTemp249;
			float fTemp250 = std::max<float>(fTemp249, fVec109[(IOTA0 - 32) & 63]);
			fVec110[IOTA0 & 127] = fTemp250;
			float fTemp251 = std::max<float>(fTemp250, fVec110[(IOTA0 - 64) & 127]);
			fVec111[IOTA0 & 255] = fTemp251;
			float fTemp252 = std::max<float>(fTemp251, fVec111[(IOTA0 - 128) & 255]);
			fVec112[IOTA0 & 511] = fTemp252;
			fVec113[IOTA0 & 511] = std::max<float>(fTemp252, fVec112[(IOTA0 - 256) & 511]);
			float fTemp253 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst1) ? fTemp244 : -3.4028235e+38f), ((iConst153) ? fVec105[iConst1] : -3.4028235e+38f)), ((iConst154) ? fVec106[iConst155] : -3.4028235e+38f)), ((iConst156) ? fVec107[iConst157] : -3.4028235e+38f)), ((iConst158) ? fVec108[(IOTA0 - iConst159) & 31] : -3.4028235e+38f)), ((iConst160) ? fVec109[(IOTA0 - iConst161) & 63] : -3.4028235e+38f)), ((iConst162) ? fVec110[(IOTA0 - iConst163) & 127] : -3.4028235e+38f)), ((iConst164) ? fVec111[(IOTA0 - iConst165) & 255] : -3.4028235e+38f)), ((iConst166) ? fVec112[(IOTA0 - iConst167) & 511] : -3.4028235e+38f)), ((iConst168) ? fVec113[(IOTA0 - iConst169) & 511] : -3.4028235e+38f))));
			int iTemp254 = (fTemp253 > fSlow17) + (fTemp253 > fSlow3);
			float fTemp255 = std::max<float>(-12.0f, 0.75f * ((iTemp254 == 0) ? fTemp253 + 12.0f - fSlow1 : ((iTemp254 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp253 + 9.0f - fSlow1)) : 0.0f)));
			float fTemp256 = ((fTemp255 > fRec159[1]) ? fConst79 : fConst78);
			fRec159[0] = fTemp255 * (1.0f - fTemp256) + fRec159[1] * fTemp256;
			float fTemp257 = fRec189[1] + fConst132 * (fRec57 - fRec190[1]);
			fRec189[0] = fConst134 * fTemp257 - fRec189[1];
			float fTemp258 = fRec190[1] + fConst135 * fTemp257;
			fRec190[0] = 2.0f * fTemp258 - fRec190[1];
			float fRec191 = fTemp258;
			float fTemp259 = fRec186[1] + fConst142 * (fRec191 - fRec187[1]);
			fRec186[0] = fConst144 * fTemp259 - fRec186[1];
			float fTemp260 = fRec187[1] + fConst145 * fTemp259;
			fRec187[0] = 2.0f * fTemp260 - fRec187[1];
			float fRec188 = fConst146 * fTemp259;
			float fTemp261 = 2.828427f * fRec188;
			float fTemp262 = fRec182[1] + fConst137 * (fRec191 - (fTemp261 + fRec183[1]));
			fRec182[0] = fConst139 * fTemp262 - fRec182[1];
			float fTemp263 = fRec183[1] + fConst140 * fTemp262;
			fRec183[0] = 2.0f * fTemp263 - fRec183[1];
			float fRec184 = fConst141 * fTemp262;
			float fRec185 = fTemp263;
			float fTemp264 = fRec179[1] + fConst137 * (fRec185 - fRec180[1]);
			fRec179[0] = fConst139 * fTemp264 - fRec179[1];
			float fTemp265 = fRec180[1] + fConst140 * fTemp264;
			fRec180[0] = 2.0f * fTemp265 - fRec180[1];
			fRec181[0] = fTemp265;
			fVec114[0] = fConst149 * fRec181[1] - fConst89 * fRec177[1];
			fRec178[0] = fConst92 * (fVec114[1] - fConst86 * fRec178[1] + fConst148 * fRec181[1] + fConst147 * fRec181[0]);
			fRec177[0] = fRec178[0];
			fVec115[0] = 0.50032705f * fRec177[1] - fConst97 * fRec175[1];
			fRec176[0] = fConst98 * (fVec115[1] - fConst95 * fRec176[1] - 1.0006541f * fRec177[1] + 0.50032705f * fRec177[0]);
			fRec175[0] = fRec176[0];
			float fTemp266 = std::fabs(0.92736715f * fRec175[0]);
			fRec174[0] = std::max<float>(fTemp266, fConst150 * fRec174[1] + fConst151 * fTemp266);
			fRec173[0] = fConst17 * fRec174[0] + fConst16 * fRec173[1];
			float fTemp267 = 2e+01f * (fTemp123 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec173[0]))));
			fVbargraph14 = FAUSTFLOAT(-fTemp267);
			fRec172[0] = fConst151 * (fSlow22 - -fTemp267) + fConst150 * fRec172[1];
			float fTemp268 = std::pow(1e+01f, fSlow16 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec172[0])) * fTemp76);
			fVbargraph15 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp268)));
			float fTemp269 = fRec181[0] * fTemp268;
			float fTemp270 = std::fabs(fTemp269);
			fVec116[0] = fTemp270;
			float fTemp271 = std::max<float>(fTemp270, fVec116[1]);
			fVec117[0] = fTemp271;
			float fTemp272 = std::max<float>(fTemp271, fVec117[2]);
			fVec118[0] = fTemp272;
			float fTemp273 = std::max<float>(fTemp272, fVec118[4]);
			fVec119[0] = fTemp273;
			float fTemp274 = std::max<float>(fTemp273, fVec119[8]);
			fVec120[IOTA0 & 31] = fTemp274;
			float fTemp275 = std::max<float>(fTemp274, fVec120[(IOTA0 - 16) & 31]);
			fVec121[IOTA0 & 63] = fTemp275;
			float fTemp276 = std::max<float>(fTemp275, fVec121[(IOTA0 - 32) & 63]);
			fVec122[IOTA0 & 127] = fTemp276;
			float fTemp277 = std::max<float>(fTemp276, fVec122[(IOTA0 - 64) & 127]);
			fVec123[IOTA0 & 255] = fTemp277;
			float fTemp278 = std::max<float>(fTemp277, fVec123[(IOTA0 - 128) & 255]);
			fVec124[IOTA0 & 511] = fTemp278;
			fVec125[IOTA0 & 511] = std::max<float>(fTemp278, fVec124[(IOTA0 - 256) & 511]);
			float fTemp279 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst1) ? fTemp270 : -3.4028235e+38f), ((iConst153) ? fVec117[iConst1] : -3.4028235e+38f)), ((iConst154) ? fVec118[iConst155] : -3.4028235e+38f)), ((iConst156) ? fVec119[iConst157] : -3.4028235e+38f)), ((iConst158) ? fVec120[(IOTA0 - iConst159) & 31] : -3.4028235e+38f)), ((iConst160) ? fVec121[(IOTA0 - iConst161) & 63] : -3.4028235e+38f)), ((iConst162) ? fVec122[(IOTA0 - iConst163) & 127] : -3.4028235e+38f)), ((iConst164) ? fVec123[(IOTA0 - iConst165) & 255] : -3.4028235e+38f)), ((iConst166) ? fVec124[(IOTA0 - iConst167) & 511] : -3.4028235e+38f)), ((iConst168) ? fVec125[(IOTA0 - iConst169) & 511] : -3.4028235e+38f))));
			int iTemp280 = (fTemp279 > fSlow17) + (fTemp279 > fSlow3);
			float fTemp281 = std::max<float>(-12.0f, 0.75f * ((iTemp280 == 0) ? fTemp279 + 12.0f - fSlow1 : ((iTemp280 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp279 + 9.0f - fSlow1)) : 0.0f)));
			float fTemp282 = ((fTemp281 > fRec171[1]) ? fConst79 : fConst78);
			fRec171[0] = fTemp281 * (1.0f - fTemp282) + fRec171[1] * fTemp282;
			float fTemp283 = fRec185 + fTemp261 + 1.4142135f * fRec184;
			float fTemp284 = fRec200[1] + fConst137 * (fRec191 - (fTemp283 + fRec201[1]));
			fRec200[0] = fConst139 * fTemp284 - fRec200[1];
			float fTemp285 = fRec201[1] + fConst140 * fTemp284;
			fRec201[0] = 2.0f * fTemp285 - fRec201[1];
			float fRec202 = fConst141 * fTemp284;
			float fRec203 = fTemp285;
			float fTemp286 = fRec191 - (1.4142135f * (fRec184 + fRec202) + fRec203 + fRec185 + fTemp261);
			fVec126[0] = fTemp286;
			fVec127[0] = fConst149 * fVec126[1] - fConst89 * fRec198[1];
			fRec199[0] = fConst92 * (fVec127[1] - fConst86 * fRec199[1] + fConst148 * fVec126[1] + fConst147 * fTemp286);
			fRec198[0] = fRec199[0];
			fVec128[0] = 0.50032705f * fRec198[1] - fConst97 * fRec196[1];
			fRec197[0] = fConst98 * (fVec128[1] - fConst95 * fRec197[1] - 1.0006541f * fRec198[1] + 0.50032705f * fRec198[0]);
			fRec196[0] = fRec197[0];
			float fTemp287 = std::fabs(0.92736715f * fRec196[0]);
			fRec195[0] = std::max<float>(fTemp287, fConst150 * fRec195[1] + fConst151 * fTemp287);
			fRec194[0] = fConst17 * fRec195[0] + fConst16 * fRec194[1];
			float fTemp288 = 2e+01f * (fTemp123 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec194[0]))));
			fVbargraph16 = FAUSTFLOAT(-fTemp288);
			fRec193[0] = fConst178 * (fSlow23 - -fTemp288) + fConst177 * fRec193[1];
			float fTemp289 = std::pow(1e+01f, fSlow16 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec193[0])) * fTemp76);
			fVbargraph17 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp289)));
			float fTemp290 = fTemp286 * fTemp289;
			float fTemp291 = std::fabs(fTemp290);
			fVec129[0] = fTemp291;
			float fTemp292 = std::max<float>(fTemp291, fVec129[1]);
			fVec130[0] = fTemp292;
			float fTemp293 = std::max<float>(fTemp292, fVec130[2]);
			fVec131[0] = fTemp293;
			float fTemp294 = std::max<float>(fTemp293, fVec131[4]);
			fVec132[0] = fTemp294;
			float fTemp295 = std::max<float>(fTemp294, fVec132[8]);
			fVec133[IOTA0 & 31] = fTemp295;
			float fTemp296 = std::max<float>(fTemp295, fVec133[(IOTA0 - 16) & 31]);
			fVec134[IOTA0 & 63] = fTemp296;
			float fTemp297 = std::max<float>(fTemp296, fVec134[(IOTA0 - 32) & 63]);
			fVec135[IOTA0 & 127] = fTemp297;
			float fTemp298 = std::max<float>(fTemp297, fVec135[(IOTA0 - 64) & 127]);
			fVec136[IOTA0 & 255] = fTemp298;
			float fTemp299 = std::max<float>(fTemp298, fVec136[(IOTA0 - 128) & 255]);
			fVec137[IOTA0 & 511] = fTemp299;
			fVec138[IOTA0 & 511] = std::max<float>(fTemp299, fVec137[(IOTA0 - 256) & 511]);
			float fTemp300 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst1) ? fTemp291 : -3.4028235e+38f), ((iConst153) ? fVec130[iConst1] : -3.4028235e+38f)), ((iConst154) ? fVec131[iConst155] : -3.4028235e+38f)), ((iConst156) ? fVec132[iConst157] : -3.4028235e+38f)), ((iConst158) ? fVec133[(IOTA0 - iConst159) & 31] : -3.4028235e+38f)), ((iConst160) ? fVec134[(IOTA0 - iConst161) & 63] : -3.4028235e+38f)), ((iConst162) ? fVec135[(IOTA0 - iConst163) & 127] : -3.4028235e+38f)), ((iConst164) ? fVec136[(IOTA0 - iConst165) & 255] : -3.4028235e+38f)), ((iConst166) ? fVec137[(IOTA0 - iConst167) & 511] : -3.4028235e+38f)), ((iConst168) ? fVec138[(IOTA0 - iConst169) & 511] : -3.4028235e+38f))));
			int iTemp301 = (fTemp300 > fSlow17) + (fTemp300 > fSlow3);
			float fTemp302 = std::max<float>(-12.0f, 0.75f * ((iTemp301 == 0) ? fTemp300 + 12.0f - fSlow1 : ((iTemp301 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp300 + 9.0f - fSlow1)) : 0.0f)));
			float fTemp303 = ((fTemp302 > fRec192[1]) ? fConst79 : fConst78);
			fRec192[0] = fTemp302 * (1.0f - fTemp303) + fRec192[1] * fTemp303;
			float fTemp304 = fRec212[1] + fConst142 * (fRec74 - fRec213[1]);
			fRec212[0] = fConst144 * fTemp304 - fRec212[1];
			float fTemp305 = fRec213[1] + fConst145 * fTemp304;
			fRec213[0] = 2.0f * fTemp305 - fRec213[1];
			fRec214[0] = fTemp305;
			fVec139[0] = fConst149 * fRec214[1] - fConst89 * fRec210[1];
			fRec211[0] = fConst92 * (fVec139[1] - fConst86 * fRec211[1] + fConst148 * fRec214[1] + fConst147 * fRec214[0]);
			fRec210[0] = fRec211[0];
			fVec140[0] = 0.50032705f * fRec210[1] - fConst97 * fRec208[1];
			fRec209[0] = fConst98 * (fVec140[1] - fConst95 * fRec209[1] - 1.0006541f * fRec210[1] + 0.50032705f * fRec210[0]);
			fRec208[0] = fRec209[0];
			float fTemp306 = std::fabs(0.92736715f * fRec208[0]);
			fRec207[0] = std::max<float>(fTemp306, fConst150 * fRec207[1] + fConst151 * fTemp306);
			fRec206[0] = fConst17 * fRec207[0] + fConst16 * fRec206[1];
			float fTemp307 = 2e+01f * (fTemp123 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec206[0]))));
			fVbargraph18 = FAUSTFLOAT(-fTemp307);
			fRec205[0] = fConst180 * (fSlow24 - -fTemp307) + fConst179 * fRec205[1];
			float fTemp308 = std::pow(1e+01f, fSlow16 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec205[0])) * fTemp76);
			fVbargraph19 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp308)));
			float fTemp309 = fRec214[0] * fTemp308;
			float fTemp310 = std::fabs(fTemp309);
			fVec141[0] = fTemp310;
			float fTemp311 = std::max<float>(fTemp310, fVec141[1]);
			fVec142[0] = fTemp311;
			float fTemp312 = std::max<float>(fTemp311, fVec142[2]);
			fVec143[0] = fTemp312;
			float fTemp313 = std::max<float>(fTemp312, fVec143[4]);
			fVec144[0] = fTemp313;
			float fTemp314 = std::max<float>(fTemp313, fVec144[8]);
			fVec145[IOTA0 & 31] = fTemp314;
			float fTemp315 = std::max<float>(fTemp314, fVec145[(IOTA0 - 16) & 31]);
			fVec146[IOTA0 & 63] = fTemp315;
			float fTemp316 = std::max<float>(fTemp315, fVec146[(IOTA0 - 32) & 63]);
			fVec147[IOTA0 & 127] = fTemp316;
			float fTemp317 = std::max<float>(fTemp316, fVec147[(IOTA0 - 64) & 127]);
			fVec148[IOTA0 & 255] = fTemp317;
			float fTemp318 = std::max<float>(fTemp317, fVec148[(IOTA0 - 128) & 255]);
			fVec149[IOTA0 & 511] = fTemp318;
			fVec150[IOTA0 & 511] = std::max<float>(fTemp318, fVec149[(IOTA0 - 256) & 511]);
			float fTemp319 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst1) ? fTemp310 : -3.4028235e+38f), ((iConst153) ? fVec142[iConst1] : -3.4028235e+38f)), ((iConst154) ? fVec143[iConst155] : -3.4028235e+38f)), ((iConst156) ? fVec144[iConst157] : -3.4028235e+38f)), ((iConst158) ? fVec145[(IOTA0 - iConst159) & 31] : -3.4028235e+38f)), ((iConst160) ? fVec146[(IOTA0 - iConst161) & 63] : -3.4028235e+38f)), ((iConst162) ? fVec147[(IOTA0 - iConst163) & 127] : -3.4028235e+38f)), ((iConst164) ? fVec148[(IOTA0 - iConst165) & 255] : -3.4028235e+38f)), ((iConst166) ? fVec149[(IOTA0 - iConst167) & 511] : -3.4028235e+38f)), ((iConst168) ? fVec150[(IOTA0 - iConst169) & 511] : -3.4028235e+38f))));
			int iTemp320 = (fTemp319 > fSlow17) + (fTemp319 > fSlow3);
			float fTemp321 = std::max<float>(-12.0f, 0.75f * ((iTemp320 == 0) ? fTemp319 + 12.0f - fSlow1 : ((iTemp320 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp319 + 9.0f - fSlow1)) : 0.0f)));
			float fTemp322 = ((fTemp321 > fRec204[1]) ? fConst79 : fConst78);
			fRec204[0] = fTemp321 * (1.0f - fTemp322) + fRec204[1] * fTemp322;
			float fTemp323 = std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(fRec88[0], fRec125[0]), fRec137[0]), fRec159[0]), fRec171[0]), fRec192[0]), fRec204[0]), fRec1[0]);
			float fTemp324 = fRec1[0] + 0.25f * (fTemp323 - fRec1[0]);
			fVbargraph20 = FAUSTFLOAT(fTemp324);
			float fTemp325 = fTemp126 * std::pow(1e+01f, 0.05f * fTemp324);
			float fTemp326 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp325)));
			int iTemp327 = (fTemp326 > fSlow3) + (fTemp326 > fSlow2);
			float fTemp328 = std::max<float>(0.0f, ((iTemp327 == 0) ? 0.0f : ((iTemp327 == 1) ? 0.083333336f * mydsp_faustpower2_f(fTemp326 + 9.0f - fSlow1) : fTemp326 + 6.0f - fSlow1)));
			float fTemp329 = ((-(0.2857143f * fTemp328) > fRec0[1]) ? fConst150 : fConst79);
			fRec0[0] = fRec0[1] * fTemp329 - 0.2857143f * fTemp328 * (1.0f - fTemp329);
			float fTemp330 = std::pow(1e+01f, 0.05f * fRec0[0]);
			fVbargraph21 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp330)));
			float fTemp331 = fRec204[0] + 0.25f * (fTemp323 - fRec204[0]);
			fVbargraph22 = FAUSTFLOAT(fTemp331);
			float fTemp332 = fTemp309 * std::pow(1e+01f, 0.05f * fTemp331);
			float fTemp333 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp332)));
			int iTemp334 = (fTemp333 > fSlow3) + (fTemp333 > fSlow2);
			float fTemp335 = std::max<float>(0.0f, ((iTemp334 == 0) ? 0.0f : ((iTemp334 == 1) ? 0.083333336f * mydsp_faustpower2_f(fTemp333 + 9.0f - fSlow1) : fTemp333 + 6.0f - fSlow1)));
			float fTemp336 = ((-(0.2857143f * fTemp335) > fRec215[1]) ? fConst150 : fConst79);
			fRec215[0] = fRec215[1] * fTemp336 - 0.2857143f * fTemp335 * (1.0f - fTemp336);
			float fTemp337 = std::pow(1e+01f, 0.05f * fRec215[0]);
			fVbargraph23 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp337)));
			float fTemp338 = fRec192[0] + 0.25f * (fTemp323 - fRec192[0]);
			fVbargraph24 = FAUSTFLOAT(fTemp338);
			float fTemp339 = fTemp290 * std::pow(1e+01f, 0.05f * fTemp338);
			float fTemp340 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp339)));
			int iTemp341 = (fTemp340 > fSlow3) + (fTemp340 > fSlow2);
			float fTemp342 = std::max<float>(0.0f, ((iTemp341 == 0) ? 0.0f : ((iTemp341 == 1) ? 0.083333336f * mydsp_faustpower2_f(fTemp340 + 9.0f - fSlow1) : fTemp340 + 6.0f - fSlow1)));
			float fTemp343 = ((-(0.2857143f * fTemp342) > fRec216[1]) ? fConst150 : fConst79);
			fRec216[0] = fRec216[1] * fTemp343 - 0.2857143f * fTemp342 * (1.0f - fTemp343);
			float fTemp344 = std::pow(1e+01f, 0.05f * fRec216[0]);
			fVbargraph25 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp344)));
			float fTemp345 = fRec171[0] + 0.25f * (fTemp323 - fRec171[0]);
			fVbargraph26 = FAUSTFLOAT(fTemp345);
			float fTemp346 = fTemp269 * std::pow(1e+01f, 0.05f * fTemp345);
			float fTemp347 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp346)));
			int iTemp348 = (fTemp347 > fSlow3) + (fTemp347 > fSlow2);
			float fTemp349 = std::max<float>(0.0f, ((iTemp348 == 0) ? 0.0f : ((iTemp348 == 1) ? 0.083333336f * mydsp_faustpower2_f(fTemp347 + 9.0f - fSlow1) : fTemp347 + 6.0f - fSlow1)));
			float fTemp350 = ((-(0.2857143f * fTemp349) > fRec217[1]) ? fConst150 : fConst79);
			fRec217[0] = fRec217[1] * fTemp350 - 0.2857143f * fTemp349 * (1.0f - fTemp350);
			float fTemp351 = std::pow(1e+01f, 0.05f * fRec217[0]);
			fVbargraph27 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp351)));
			float fTemp352 = fRec159[0] + 0.25f * (fTemp323 - fRec159[0]);
			fVbargraph28 = FAUSTFLOAT(fTemp352);
			float fTemp353 = fTemp243 * std::pow(1e+01f, 0.05f * fTemp352);
			float fTemp354 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp353)));
			int iTemp355 = (fTemp354 > fSlow3) + (fTemp354 > fSlow2);
			float fTemp356 = std::max<float>(0.0f, ((iTemp355 == 0) ? 0.0f : ((iTemp355 == 1) ? 0.083333336f * mydsp_faustpower2_f(fTemp354 + 9.0f - fSlow1) : fTemp354 + 6.0f - fSlow1)));
			float fTemp357 = ((-(0.2857143f * fTemp356) > fRec218[1]) ? fConst150 : fConst79);
			fRec218[0] = fRec218[1] * fTemp357 - 0.2857143f * fTemp356 * (1.0f - fTemp357);
			float fTemp358 = std::pow(1e+01f, 0.05f * fRec218[0]);
			fVbargraph29 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp358)));
			float fTemp359 = fRec137[0] + 0.25f * (fTemp323 - fRec137[0]);
			fVbargraph30 = FAUSTFLOAT(fTemp359);
			float fTemp360 = fTemp220 * std::pow(1e+01f, 0.05f * fTemp359);
			float fTemp361 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp360)));
			int iTemp362 = (fTemp361 > fSlow3) + (fTemp361 > fSlow2);
			float fTemp363 = std::max<float>(0.0f, ((iTemp362 == 0) ? 0.0f : ((iTemp362 == 1) ? 0.083333336f * mydsp_faustpower2_f(fTemp361 + 9.0f - fSlow1) : fTemp361 + 6.0f - fSlow1)));
			float fTemp364 = ((-(0.2857143f * fTemp363) > fRec219[1]) ? fConst150 : fConst79);
			fRec219[0] = fRec219[1] * fTemp364 - 0.2857143f * fTemp363 * (1.0f - fTemp364);
			float fTemp365 = std::pow(1e+01f, 0.05f * fRec219[0]);
			fVbargraph31 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp365)));
			float fTemp366 = fRec125[0] + 0.25f * (fTemp323 - fRec125[0]);
			fVbargraph32 = FAUSTFLOAT(fTemp366);
			float fTemp367 = fTemp188 * std::pow(1e+01f, 0.05f * fTemp366);
			float fTemp368 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp367)));
			int iTemp369 = (fTemp368 > fSlow3) + (fTemp368 > fSlow2);
			float fTemp370 = std::max<float>(0.0f, ((iTemp369 == 0) ? 0.0f : ((iTemp369 == 1) ? 0.083333336f * mydsp_faustpower2_f(fTemp368 + 9.0f - fSlow1) : fTemp368 + 6.0f - fSlow1)));
			float fTemp371 = ((-(0.2857143f * fTemp370) > fRec220[1]) ? fConst150 : fConst79);
			fRec220[0] = fRec220[1] * fTemp371 - 0.2857143f * fTemp370 * (1.0f - fTemp371);
			float fTemp372 = std::pow(1e+01f, 0.05f * fRec220[0]);
			fVbargraph33 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp372)));
			float fTemp373 = fRec88[0] + 0.25f * (fTemp323 - fRec88[0]);
			fVbargraph34 = FAUSTFLOAT(fTemp373);
			float fTemp374 = fTemp167 * std::pow(1e+01f, 0.05f * fTemp373);
			float fTemp375 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp374)));
			int iTemp376 = (fTemp375 > fSlow3) + (fTemp375 > fSlow2);
			float fTemp377 = std::max<float>(0.0f, ((iTemp376 == 0) ? 0.0f : ((iTemp376 == 1) ? 0.083333336f * mydsp_faustpower2_f(fTemp375 + 9.0f - fSlow1) : fTemp375 + 6.0f - fSlow1)));
			float fTemp378 = ((-(0.2857143f * fTemp377) > fRec221[1]) ? fConst150 : fConst79);
			fRec221[0] = fRec221[1] * fTemp378 - 0.2857143f * fTemp377 * (1.0f - fTemp378);
			float fTemp379 = std::pow(1e+01f, 0.05f * fRec221[0]);
			fVbargraph35 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp379)));
			output0[i0] = FAUSTFLOAT(((iSlow0) ? fTemp0 : fTemp374 * fTemp379 + fTemp367 * fTemp372 + fTemp360 * fTemp365 + fTemp353 * fTemp358 + fTemp346 * fTemp351 + fTemp339 * fTemp344 + fTemp332 * fTemp337 + fTemp325 * fTemp330));
			fVec0[1] = fVec0[0];
			fRec7[1] = fRec7[0];
			fRec6[2] = fRec6[1];
			fRec6[1] = fRec6[0];
			fVec1[1] = fVec1[0];
			fRec5[1] = fRec5[0];
			fRec4[2] = fRec4[1];
			fRec4[1] = fRec4[0];
			fRec18[1] = fRec18[0];
			fVec2[2] = fVec2[1];
			fVec2[1] = fVec2[0];
			for (int j0 = 4; j0 > 0; j0 = j0 - 1) {
				fVec3[j0] = fVec3[j0 - 1];
			}
			for (int j1 = 11; j1 > 0; j1 = j1 - 1) {
				fVec4[j1] = fVec4[j1 - 1];
			}
			IOTA0 = IOTA0 + 1;
			fRec17[1] = fRec17[0];
			fRec30[1] = fRec30[0];
			fRec31[1] = fRec31[0];
			fRec25[1] = fRec25[0];
			fRec26[1] = fRec26[0];
			fRec22[1] = fRec22[0];
			fRec23[1] = fRec23[0];
			fRec19[1] = fRec19[0];
			fRec20[1] = fRec20[0];
			fVec20[1] = fVec20[0];
			fVec21[2] = fVec21[1];
			fVec21[1] = fVec21[0];
			for (int j2 = 4; j2 > 0; j2 = j2 - 1) {
				fVec22[j2] = fVec22[j2 - 1];
			}
			for (int j3 = 11; j3 > 0; j3 = j3 - 1) {
				fVec23[j3] = fVec23[j3 - 1];
			}
			fRec16[1] = fRec16[0];
			fVec29[1] = fVec29[0];
			fRec38[1] = fRec38[0];
			fRec37[1] = fRec37[0];
			fVec30[1] = fVec30[0];
			fRec36[1] = fRec36[0];
			fRec35[1] = fRec35[0];
			fVec31[1] = fVec31[0];
			fVec32[2] = fVec32[1];
			fVec32[1] = fVec32[0];
			for (int j4 = 4; j4 > 0; j4 = j4 - 1) {
				fVec33[j4] = fVec33[j4 - 1];
			}
			for (int j5 = 11; j5 > 0; j5 = j5 - 1) {
				fVec34[j5] = fVec34[j5 - 1];
			}
			fRec11[1] = fRec11[0];
			fRec12[1] = fRec12[0];
			fRec9[1] = fRec9[0];
			fRec8[1] = fRec8[0];
			fRec3[2] = fRec3[1];
			fRec3[1] = fRec3[0];
			fVec40[1] = fVec40[0];
			fVec41[2] = fVec41[1];
			fVec41[1] = fVec41[0];
			for (int j6 = 4; j6 > 0; j6 = j6 - 1) {
				fVec42[j6] = fVec42[j6 - 1];
			}
			for (int j7 = 11; j7 > 0; j7 = j7 - 1) {
				fVec43[j7] = fVec43[j7 - 1];
			}
			fRec2[1] = fRec2[0];
			fRec50[1] = fRec50[0];
			fRec51[1] = fRec51[0];
			fRec46[1] = fRec46[0];
			fRec47[1] = fRec47[0];
			fRec61[1] = fRec61[0];
			fRec62[1] = fRec62[0];
			fRec58[1] = fRec58[0];
			fRec59[1] = fRec59[0];
			fRec64[1] = fRec64[0];
			fRec65[1] = fRec65[0];
			fRec54[1] = fRec54[0];
			fRec55[1] = fRec55[0];
			fRec67[1] = fRec67[0];
			fRec68[1] = fRec68[0];
			fRec75[1] = fRec75[0];
			fRec76[1] = fRec76[0];
			fRec71[1] = fRec71[0];
			fRec72[1] = fRec72[0];
			fRec78[1] = fRec78[0];
			fRec79[1] = fRec79[0];
			fVec49[1] = fVec49[0];
			fVec50[1] = fVec50[0];
			fRec45[1] = fRec45[0];
			fRec44[1] = fRec44[0];
			fVec51[1] = fVec51[0];
			fRec43[1] = fRec43[0];
			fRec42[1] = fRec42[0];
			fRec41[1] = fRec41[0];
			fRec40[1] = fRec40[0];
			fVec52[1] = fVec52[0];
			fRec87[1] = fRec87[0];
			fRec86[1] = fRec86[0];
			fVec53[1] = fVec53[0];
			fRec85[1] = fRec85[0];
			fRec84[1] = fRec84[0];
			fRec83[1] = fRec83[0];
			fRec82[1] = fRec82[0];
			fRec39[1] = fRec39[0];
			fVec54[1] = fVec54[0];
			fVec55[2] = fVec55[1];
			fVec55[1] = fVec55[0];
			for (int j8 = 4; j8 > 0; j8 = j8 - 1) {
				fVec56[j8] = fVec56[j8 - 1];
			}
			for (int j9 = 11; j9 > 0; j9 = j9 - 1) {
				fVec57[j9] = fVec57[j9 - 1];
			}
			fRec1[1] = fRec1[0];
			fRec119[1] = fRec119[0];
			fRec120[1] = fRec120[0];
			fRec116[1] = fRec116[0];
			fRec117[1] = fRec117[0];
			fRec113[1] = fRec113[0];
			fRec114[1] = fRec114[0];
			fRec122[1] = fRec122[0];
			fRec123[1] = fRec123[0];
			fRec109[1] = fRec109[0];
			fRec110[1] = fRec110[0];
			fRec106[1] = fRec106[0];
			fRec107[1] = fRec107[0];
			fRec103[1] = fRec103[0];
			fRec104[1] = fRec104[0];
			fRec99[1] = fRec99[0];
			fRec100[1] = fRec100[0];
			fRec96[1] = fRec96[0];
			fRec97[1] = fRec97[0];
			fRec98[1] = fRec98[0];
			fVec64[1] = fVec64[0];
			fRec95[1] = fRec95[0];
			fRec94[1] = fRec94[0];
			fVec65[1] = fVec65[0];
			fRec93[1] = fRec93[0];
			fRec92[1] = fRec92[0];
			fRec91[1] = fRec91[0];
			fRec90[1] = fRec90[0];
			fRec89[1] = fRec89[0];
			fVec66[1] = fVec66[0];
			fVec67[2] = fVec67[1];
			fVec67[1] = fVec67[0];
			for (int j10 = 4; j10 > 0; j10 = j10 - 1) {
				fVec68[j10] = fVec68[j10 - 1];
			}
			for (int j11 = 11; j11 > 0; j11 = j11 - 1) {
				fVec69[j11] = fVec69[j11 - 1];
			}
			fRec88[1] = fRec88[0];
			fRec133[1] = fRec133[0];
			fRec134[1] = fRec134[0];
			fVec76[1] = fVec76[0];
			fVec77[1] = fVec77[0];
			fRec132[1] = fRec132[0];
			fRec131[1] = fRec131[0];
			fVec78[1] = fVec78[0];
			fRec130[1] = fRec130[0];
			fRec129[1] = fRec129[0];
			fRec128[1] = fRec128[0];
			fRec127[1] = fRec127[0];
			fRec126[1] = fRec126[0];
			fVec79[1] = fVec79[0];
			fVec80[2] = fVec80[1];
			fVec80[1] = fVec80[0];
			for (int j12 = 4; j12 > 0; j12 = j12 - 1) {
				fVec81[j12] = fVec81[j12 - 1];
			}
			for (int j13 = 11; j13 > 0; j13 = j13 - 1) {
				fVec82[j13] = fVec82[j13 - 1];
			}
			fRec125[1] = fRec125[0];
			fRec155[1] = fRec155[0];
			fRec156[1] = fRec156[0];
			fRec152[1] = fRec152[0];
			fRec153[1] = fRec153[0];
			fRec148[1] = fRec148[0];
			fRec149[1] = fRec149[0];
			fRec145[1] = fRec145[0];
			fRec146[1] = fRec146[0];
			fRec147[1] = fRec147[0];
			fVec89[1] = fVec89[0];
			fRec144[1] = fRec144[0];
			fRec143[1] = fRec143[0];
			fVec90[1] = fVec90[0];
			fRec142[1] = fRec142[0];
			fRec141[1] = fRec141[0];
			fRec140[1] = fRec140[0];
			fRec139[1] = fRec139[0];
			fRec138[1] = fRec138[0];
			fVec91[1] = fVec91[0];
			fVec92[2] = fVec92[1];
			fVec92[1] = fVec92[0];
			for (int j14 = 4; j14 > 0; j14 = j14 - 1) {
				fVec93[j14] = fVec93[j14 - 1];
			}
			for (int j15 = 11; j15 > 0; j15 = j15 - 1) {
				fVec94[j15] = fVec94[j15 - 1];
			}
			fRec137[1] = fRec137[0];
			fRec167[1] = fRec167[0];
			fRec168[1] = fRec168[0];
			fVec101[1] = fVec101[0];
			fVec102[1] = fVec102[0];
			fRec166[1] = fRec166[0];
			fRec165[1] = fRec165[0];
			fVec103[1] = fVec103[0];
			fRec164[1] = fRec164[0];
			fRec163[1] = fRec163[0];
			fRec162[1] = fRec162[0];
			fRec161[1] = fRec161[0];
			fRec160[1] = fRec160[0];
			fVec104[1] = fVec104[0];
			fVec105[2] = fVec105[1];
			fVec105[1] = fVec105[0];
			for (int j16 = 4; j16 > 0; j16 = j16 - 1) {
				fVec106[j16] = fVec106[j16 - 1];
			}
			for (int j17 = 11; j17 > 0; j17 = j17 - 1) {
				fVec107[j17] = fVec107[j17 - 1];
			}
			fRec159[1] = fRec159[0];
			fRec189[1] = fRec189[0];
			fRec190[1] = fRec190[0];
			fRec186[1] = fRec186[0];
			fRec187[1] = fRec187[0];
			fRec182[1] = fRec182[0];
			fRec183[1] = fRec183[0];
			fRec179[1] = fRec179[0];
			fRec180[1] = fRec180[0];
			fRec181[1] = fRec181[0];
			fVec114[1] = fVec114[0];
			fRec178[1] = fRec178[0];
			fRec177[1] = fRec177[0];
			fVec115[1] = fVec115[0];
			fRec176[1] = fRec176[0];
			fRec175[1] = fRec175[0];
			fRec174[1] = fRec174[0];
			fRec173[1] = fRec173[0];
			fRec172[1] = fRec172[0];
			fVec116[1] = fVec116[0];
			fVec117[2] = fVec117[1];
			fVec117[1] = fVec117[0];
			for (int j18 = 4; j18 > 0; j18 = j18 - 1) {
				fVec118[j18] = fVec118[j18 - 1];
			}
			for (int j19 = 11; j19 > 0; j19 = j19 - 1) {
				fVec119[j19] = fVec119[j19 - 1];
			}
			fRec171[1] = fRec171[0];
			fRec200[1] = fRec200[0];
			fRec201[1] = fRec201[0];
			fVec126[1] = fVec126[0];
			fVec127[1] = fVec127[0];
			fRec199[1] = fRec199[0];
			fRec198[1] = fRec198[0];
			fVec128[1] = fVec128[0];
			fRec197[1] = fRec197[0];
			fRec196[1] = fRec196[0];
			fRec195[1] = fRec195[0];
			fRec194[1] = fRec194[0];
			fRec193[1] = fRec193[0];
			fVec129[1] = fVec129[0];
			fVec130[2] = fVec130[1];
			fVec130[1] = fVec130[0];
			for (int j20 = 4; j20 > 0; j20 = j20 - 1) {
				fVec131[j20] = fVec131[j20 - 1];
			}
			for (int j21 = 11; j21 > 0; j21 = j21 - 1) {
				fVec132[j21] = fVec132[j21 - 1];
			}
			fRec192[1] = fRec192[0];
			fRec212[1] = fRec212[0];
			fRec213[1] = fRec213[0];
			fRec214[1] = fRec214[0];
			fVec139[1] = fVec139[0];
			fRec211[1] = fRec211[0];
			fRec210[1] = fRec210[0];
			fVec140[1] = fVec140[0];
			fRec209[1] = fRec209[0];
			fRec208[1] = fRec208[0];
			fRec207[1] = fRec207[0];
			fRec206[1] = fRec206[0];
			fRec205[1] = fRec205[0];
			fVec141[1] = fVec141[0];
			fVec142[2] = fVec142[1];
			fVec142[1] = fVec142[0];
			for (int j22 = 4; j22 > 0; j22 = j22 - 1) {
				fVec143[j22] = fVec143[j22 - 1];
			}
			for (int j23 = 11; j23 > 0; j23 = j23 - 1) {
				fVec144[j23] = fVec144[j23 - 1];
			}
			fRec204[1] = fRec204[0];
			fRec0[1] = fRec0[0];
			fRec215[1] = fRec215[0];
			fRec216[1] = fRec216[0];
			fRec217[1] = fRec217[0];
			fRec218[1] = fRec218[0];
			fRec219[1] = fRec219[0];
			fRec220[1] = fRec220[0];
			fRec221[1] = fRec221[0];
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
        case kParameter__2:
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
        case kParameter__3:
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
        case kParameter__4:
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
        case kParameter__5:
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
        case kParameter__6:
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
        case kParameter__7:
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
        case kParameter__8:
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
        case kParameter__9:
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
        case kParameter__2:
            return dsp->fVslider5;
        case kParameter__3:
            return dsp->fVslider6;
        case kParameter__4:
            return dsp->fVslider7;
        case kParameter__5:
            return dsp->fVslider8;
        case kParameter__6:
            return dsp->fVslider9;
        case kParameter__7:
            return dsp->fVslider10;
        case kParameter__8:
            return dsp->fVslider11;
        case kParameter__9:
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
        case kParameter__2:
            dsp->fVslider5 = value;
            break;
        case kParameter__3:
            dsp->fVslider6 = value;
            break;
        case kParameter__4:
            dsp->fVslider7 = value;
            break;
        case kParameter__5:
            dsp->fVslider8 = value;
            break;
        case kParameter__6:
            dsp->fVslider9 = value;
            break;
        case kParameter__7:
            dsp->fVslider10 = value;
            break;
        case kParameter__8:
            dsp->fVslider11 = value;
            break;
        case kParameter__9:
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