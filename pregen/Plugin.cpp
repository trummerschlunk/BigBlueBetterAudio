
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
// Version: 0.09
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
	float fConst9;
	FAUSTFLOAT fVslider1;
	float fConst10;
	float fVec0[2];
	float fRec15[2];
	float fRec14[3];
	float fVec1[2];
	float fConst11;
	float fConst12;
	float fRec13[2];
	float fRec12[3];
	float fConst13;
	float fConst14;
	float fConst15;
	int iConst16;
	float fConst17;
	float fConst18;
	float fRec26[2];
	int iConst19;
	float fVec2[3];
	int iConst20;
	float fVec3[5];
	int iConst21;
	int iConst22;
	float fVec4[12];
	int iConst23;
	int iConst24;
	int IOTA0;
	float fVec5[32];
	int iConst25;
	int iConst26;
	float fVec6[64];
	int iConst27;
	int iConst28;
	float fVec7[128];
	int iConst29;
	int iConst30;
	float fVec8[256];
	int iConst31;
	int iConst32;
	float fVec9[512];
	int iConst33;
	int iConst34;
	float fVec10[1024];
	int iConst35;
	int iConst36;
	float fVec11[2048];
	int iConst37;
	int iConst38;
	float fVec12[4096];
	int iConst39;
	int iConst40;
	float fVec13[8192];
	int iConst41;
	int iConst42;
	float fVec14[16384];
	int iConst43;
	int iConst44;
	float fVec15[32768];
	int iConst45;
	int iConst46;
	float fVec16[65536];
	int iConst47;
	int iConst48;
	float fVec17[131072];
	int iConst49;
	int iConst50;
	float fVec18[262144];
	int iConst51;
	int iConst52;
	float fVec19[524288];
	int iConst53;
	float fConst54;
	float fRec25[2];
	FAUSTFLOAT fVbargraph0;
	FAUSTFLOAT fVslider2;
	float fConst55;
	float fConst56;
	float fConst57;
	float fRec38[2];
	float fConst58;
	float fRec39[2];
	float fConst59;
	float fRec33[2];
	float fRec34[2];
	float fConst60;
	float fConst61;
	float fConst62;
	float fRec30[2];
	float fConst63;
	float fRec31[2];
	float fRec27[2];
	float fRec28[2];
	float fVec20[2];
	int iConst64;
	float fVec21[3];
	int iConst65;
	float fVec22[5];
	int iConst66;
	int iConst67;
	float fVec23[12];
	int iConst68;
	int iConst69;
	float fVec24[32];
	int iConst70;
	int iConst71;
	float fVec25[64];
	int iConst72;
	int iConst73;
	float fVec26[128];
	int iConst74;
	int iConst75;
	float fVec27[256];
	int iConst76;
	int iConst77;
	float fVec28[512];
	int iConst78;
	float fConst79;
	float fConst80;
	float fRec24[2];
	FAUSTFLOAT fVbargraph1;
	float fConst81;
	int iConst82;
	float fConst83;
	float fConst84;
	float fConst85;
	float fConst86;
	float fConst87;
	float fConst88;
	float fConst89;
	float fConst90;
	float fVec29[2];
	float fConst91;
	float fConst92;
	float fConst93;
	float fRec46[2];
	float fRec45[2];
	float fConst94;
	float fConst95;
	float fConst96;
	float fConst97;
	float fConst98;
	float fVec30[2];
	float fConst99;
	float fRec44[2];
	float fRec43[2];
	float fVec31[2];
	float fVec32[3];
	int iConst100;
	int iConst101;
	float fVec33[5];
	int iConst102;
	int iConst103;
	float fVec34[12];
	int iConst104;
	int iConst105;
	float fVec35[32];
	int iConst106;
	int iConst107;
	float fVec36[64];
	int iConst108;
	int iConst109;
	float fVec37[128];
	int iConst110;
	int iConst111;
	float fVec38[256];
	int iConst112;
	int iConst113;
	float fVec39[512];
	int iConst114;
	float fConst115;
	float fRec19[2];
	float fRec20[2];
	float fRec17[2];
	FAUSTFLOAT fVbargraph2;
	float fRec16[2];
	float fVec40[2];
	float fVec41[2];
	float fVec42[3];
	float fVec43[5];
	float fVec44[12];
	float fVec45[32];
	float fVec46[64];
	float fVec47[128];
	float fVec48[256];
	float fVec49[512];
	float fConst116;
	float fRec11[2];
	FAUSTFLOAT fVbargraph3;
	float fConst117;
	float fConst118;
	float fConst119;
	float fRec95[2];
	float fConst120;
	float fRec96[2];
	float fConst121;
	float fRec90[2];
	float fRec91[2];
	float fConst122;
	float fConst123;
	float fConst124;
	float fRec86[2];
	float fConst125;
	float fRec87[2];
	float fConst126;
	float fConst127;
	float fConst128;
	float fConst129;
	float fRec82[2];
	float fConst130;
	float fRec83[2];
	float fConst131;
	float fRec78[2];
	float fRec79[2];
	float fConst132;
	float fConst133;
	float fConst134;
	float fConst135;
	float fRec73[2];
	float fConst136;
	float fRec74[2];
	float fConst137;
	float fRec68[2];
	float fRec69[2];
	float fConst138;
	float fConst139;
	float fConst140;
	float fRec64[2];
	float fConst141;
	float fRec65[2];
	float fConst142;
	float fConst143;
	float fConst144;
	float fConst145;
	float fRec59[2];
	float fConst146;
	float fRec60[2];
	float fConst147;
	float fRec54[2];
	float fRec55[2];
	float fVec50[2];
	float fConst148;
	float fConst149;
	float fConst150;
	float fVec51[2];
	float fRec53[2];
	float fRec52[2];
	float fVec52[2];
	float fRec51[2];
	float fRec50[2];
	float fConst151;
	float fConst152;
	float fRec49[2];
	float fRec48[2];
	float fConst153;
	float fConst154;
	float fVec53[2];
	float fConst155;
	float fRec105[2];
	float fRec104[2];
	float fVec54[2];
	float fRec103[2];
	float fRec102[2];
	float fRec101[2];
	float fRec100[2];
	FAUSTFLOAT fVbargraph4;
	FAUSTFLOAT fVslider3;
	float fConst156;
	float fRec47[2];
	FAUSTFLOAT fVslider4;
	FAUSTFLOAT fVbargraph5;
	float fConst157;
	float fRec113[2];
	float fRec114[2];
	float fRec115[2];
	float fVec55[2];
	float fRec112[2];
	float fRec111[2];
	float fVec56[2];
	float fRec110[2];
	float fRec109[2];
	float fRec108[2];
	float fRec107[2];
	FAUSTFLOAT fVbargraph6;
	FAUSTFLOAT fVslider5;
	float fConst158;
	float fRec106[2];
	FAUSTFLOAT fVbargraph7;
	float fConst159;
	float fRec137[2];
	float fRec138[2];
	float fRec133[2];
	float fRec134[2];
	float fRec128[2];
	float fRec129[2];
	float fRec123[2];
	float fRec124[2];
	float fVec57[2];
	float fVec58[2];
	float fRec122[2];
	float fRec121[2];
	float fVec59[2];
	float fRec120[2];
	float fRec119[2];
	float fRec118[2];
	float fRec117[2];
	FAUSTFLOAT fVbargraph8;
	FAUSTFLOAT fVslider6;
	float fConst160;
	float fRec116[2];
	FAUSTFLOAT fVbargraph9;
	float fRec147[2];
	float fRec148[2];
	float fRec149[2];
	float fVec60[2];
	float fRec146[2];
	float fRec145[2];
	float fVec61[2];
	float fRec144[2];
	float fRec143[2];
	float fRec142[2];
	float fRec141[2];
	FAUSTFLOAT fVbargraph10;
	FAUSTFLOAT fVslider7;
	float fRec140[2];
	FAUSTFLOAT fVbargraph11;
	float fConst161;
	float fRec193[2];
	float fRec194[2];
	float fRec189[2];
	float fRec190[2];
	float fRec185[2];
	float fRec186[2];
	float fRec181[2];
	float fRec182[2];
	float fRec176[2];
	float fRec177[2];
	float fRec171[2];
	float fRec172[2];
	float fRec167[2];
	float fRec168[2];
	float fRec162[2];
	float fRec163[2];
	float fRec157[2];
	float fRec158[2];
	float fVec62[2];
	float fVec63[2];
	float fRec156[2];
	float fRec155[2];
	float fVec64[2];
	float fRec154[2];
	float fRec153[2];
	float fRec152[2];
	float fRec151[2];
	FAUSTFLOAT fVbargraph12;
	FAUSTFLOAT fVslider8;
	float fConst162;
	float fRec150[2];
	FAUSTFLOAT fVbargraph13;
	float fConst163;
	float fRec203[2];
	float fRec204[2];
	float fRec205[2];
	float fVec65[2];
	float fRec202[2];
	float fRec201[2];
	float fVec66[2];
	float fRec200[2];
	float fRec199[2];
	float fRec198[2];
	float fRec197[2];
	FAUSTFLOAT fVbargraph14;
	FAUSTFLOAT fVslider9;
	float fConst164;
	float fRec196[2];
	FAUSTFLOAT fVbargraph15;
	float fConst165;
	float fRec227[2];
	float fRec228[2];
	float fRec223[2];
	float fRec224[2];
	float fRec218[2];
	float fRec219[2];
	float fRec213[2];
	float fRec214[2];
	float fVec67[2];
	float fVec68[2];
	float fRec212[2];
	float fRec211[2];
	float fVec69[2];
	float fRec210[2];
	float fRec209[2];
	float fRec208[2];
	float fRec207[2];
	FAUSTFLOAT fVbargraph16;
	FAUSTFLOAT fVslider10;
	float fConst166;
	float fRec206[2];
	FAUSTFLOAT fVbargraph17;
	float fRec237[2];
	float fRec238[2];
	float fRec239[2];
	float fVec70[2];
	float fRec236[2];
	float fRec235[2];
	float fVec71[2];
	float fRec234[2];
	float fRec233[2];
	float fRec232[2];
	float fRec231[2];
	FAUSTFLOAT fVbargraph18;
	FAUSTFLOAT fVslider11;
	float fConst167;
	float fRec230[2];
	FAUSTFLOAT fVbargraph19;
	float fRec10[3];
	float fRec6[2];
	float fRec7[2];
	float fRec2[2];
	float fRec3[2];
	float fRec247[2];
	float fRec248[2];
	float fRec244[2];
	float fRec245[2];
	float fRec250[2];
	float fRec251[2];
	float fRec240[2];
	float fRec241[2];
	float fRec253[2];
	float fRec254[2];
	float fRec261[2];
	float fRec262[2];
	float fRec257[2];
	float fRec258[2];
	float fRec264[2];
	float fRec265[2];
	float fVec72[2];
	int iConst168;
	float fVec73[3];
	int iConst169;
	float fVec74[5];
	int iConst170;
	int iConst171;
	float fVec75[12];
	int iConst172;
	int iConst173;
	float fVec76[32];
	int iConst174;
	int iConst175;
	float fVec77[64];
	int iConst176;
	int iConst177;
	float fVec78[128];
	int iConst178;
	int iConst179;
	float fVec79[256];
	int iConst180;
	int iConst181;
	float fVec80[512];
	int iConst182;
	int iConst183;
	float fVec81[512];
	int iConst184;
	float fRec1[2];
	float fRec292[2];
	float fRec293[2];
	float fRec289[2];
	float fRec290[2];
	float fRec286[2];
	float fRec287[2];
	float fRec295[2];
	float fRec296[2];
	float fRec282[2];
	float fRec283[2];
	float fRec279[2];
	float fRec280[2];
	float fRec276[2];
	float fRec277[2];
	float fRec272[2];
	float fRec273[2];
	float fRec269[2];
	float fRec270[2];
	float fVec82[2];
	float fVec83[3];
	float fVec84[5];
	float fVec85[12];
	float fVec86[32];
	float fVec87[64];
	float fVec88[128];
	float fVec89[256];
	float fVec90[512];
	float fVec91[512];
	float fRec268[2];
	float fRec299[2];
	float fRec300[2];
	float fVec92[2];
	float fVec93[3];
	float fVec94[5];
	float fVec95[12];
	float fVec96[32];
	float fVec97[64];
	float fVec98[128];
	float fVec99[256];
	float fVec100[512];
	float fVec101[512];
	float fRec298[2];
	float fRec314[2];
	float fRec315[2];
	float fRec311[2];
	float fRec312[2];
	float fRec307[2];
	float fRec308[2];
	float fRec304[2];
	float fRec305[2];
	float fVec102[2];
	float fVec103[3];
	float fVec104[5];
	float fVec105[12];
	float fVec106[32];
	float fVec107[64];
	float fVec108[128];
	float fVec109[256];
	float fVec110[512];
	float fVec111[512];
	float fRec303[2];
	float fRec319[2];
	float fRec320[2];
	float fVec112[2];
	float fVec113[3];
	float fVec114[5];
	float fVec115[12];
	float fVec116[32];
	float fVec117[64];
	float fVec118[128];
	float fVec119[256];
	float fVec120[512];
	float fVec121[512];
	float fRec318[2];
	float fRec334[2];
	float fRec335[2];
	float fRec331[2];
	float fRec332[2];
	float fRec327[2];
	float fRec328[2];
	float fRec324[2];
	float fRec325[2];
	float fVec122[2];
	float fVec123[3];
	float fVec124[5];
	float fVec125[12];
	float fVec126[32];
	float fVec127[64];
	float fVec128[128];
	float fVec129[256];
	float fVec130[512];
	float fVec131[512];
	float fRec323[2];
	float fRec338[2];
	float fRec339[2];
	float fVec132[2];
	float fVec133[3];
	float fVec134[5];
	float fVec135[12];
	float fVec136[32];
	float fVec137[64];
	float fVec138[128];
	float fVec139[256];
	float fVec140[512];
	float fVec141[512];
	float fRec337[2];
	float fRec343[2];
	float fRec344[2];
	float fVec142[2];
	float fVec143[3];
	float fVec144[5];
	float fVec145[12];
	float fVec146[32];
	float fVec147[64];
	float fVec148[128];
	float fVec149[256];
	float fVec150[512];
	float fVec151[512];
	float fRec342[2];
	float fRec0[2];
	float fRec346[2];
	float fRec347[2];
	float fRec348[2];
	float fRec349[2];
	float fRec350[2];
	float fRec351[2];
	float fRec352[2];
	
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
		m->declare("compile_options", "-a /tmp/tmp5vi4c1w3.cpp -lang cpp -ct 1 -es 1 -mcd 16 -mdd 1024 -mdy 33 -single -ftz 0");
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
		m->declare("version", "0.09");
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
		fConst8 = (fConst6 + 1.0f) / fConst4 + 1.0f;
		fConst9 = 1.0f / fConst8;
		fConst10 = 3.1415927f / fConst0;
		fConst11 = 1.0f - fConst6;
		fConst12 = 1.0f / (fConst6 + 1.0f);
		fConst13 = 0.125f * fConst0;
		fConst14 = 9.964212e-07f * fConst0;
		fConst15 = std::exp(-(1.0f / fConst0));
		iConst16 = int(std::floor(3.0f * fConst0)) % 2;
		fConst17 = std::exp(-(1e+02f / fConst0));
		fConst18 = 1.0f - fConst17;
		iConst19 = int(std::floor(1.5f * fConst0)) % 2;
		iConst20 = int(std::floor(0.75f * fConst0)) % 2;
		iConst21 = iConst16 + 2 * iConst19;
		iConst22 = int(std::floor(0.375f * fConst0)) % 2;
		iConst23 = iConst21 + 4 * iConst20;
		iConst24 = int(std::floor(0.1875f * fConst0)) % 2;
		iConst25 = iConst23 + 8 * iConst22;
		iConst26 = int(std::floor(0.09375f * fConst0)) % 2;
		iConst27 = iConst25 + 16 * iConst24;
		iConst28 = int(std::floor(0.046875f * fConst0)) % 2;
		iConst29 = iConst27 + 32 * iConst26;
		iConst30 = int(std::floor(0.0234375f * fConst0)) % 2;
		iConst31 = iConst29 + 64 * iConst28;
		iConst32 = int(std::floor(0.01171875f * fConst0)) % 2;
		iConst33 = iConst31 + 128 * iConst30;
		iConst34 = int(std::floor(0.005859375f * fConst0)) % 2;
		iConst35 = iConst33 + 256 * iConst32;
		iConst36 = int(std::floor(0.0029296875f * fConst0)) % 2;
		iConst37 = iConst35 + 512 * iConst34;
		iConst38 = int(std::floor(0.0014648438f * fConst0)) % 2;
		iConst39 = iConst37 + 1024 * iConst36;
		iConst40 = int(std::floor(0.0007324219f * fConst0)) % 2;
		iConst41 = iConst39 + 2048 * iConst38;
		iConst42 = int(std::floor(0.00036621094f * fConst0)) % 2;
		iConst43 = iConst41 + 4096 * iConst40;
		iConst44 = int(std::floor(0.00018310547f * fConst0)) % 2;
		iConst45 = iConst43 + 8192 * iConst42;
		iConst46 = int(std::floor(9.1552734e-05f * fConst0)) % 2;
		iConst47 = iConst45 + 16384 * iConst44;
		iConst48 = int(std::floor(4.5776367e-05f * fConst0)) % 2;
		iConst49 = iConst47 + 32768 * iConst46;
		iConst50 = int(std::floor(2.2888184e-05f * fConst0)) % 2;
		iConst51 = iConst49 + 65536 * iConst48;
		iConst52 = int(std::floor(1.1444092e-05f * fConst0)) % 2;
		iConst53 = iConst51 + 131072 * iConst50;
		fConst54 = 1.0f - fConst15;
		fConst55 = std::tan(879.64594f / fConst0);
		fConst56 = fConst55 * (fConst55 + 1.4142135f) + 1.0f;
		fConst57 = 2.0f / fConst56;
		fConst58 = fConst55 / fConst56;
		fConst59 = 1.0f / fConst56;
		fConst60 = std::tan(1256.6371f / fConst0);
		fConst61 = fConst60 * (fConst60 + 1.4142135f) + 1.0f;
		fConst62 = 2.0f / fConst61;
		fConst63 = fConst60 / fConst61;
		iConst64 = int(std::floor(0.005f * fConst0)) % 2;
		iConst65 = int(std::floor(0.0025f * fConst0)) % 2;
		iConst66 = iConst3 + 2 * iConst64;
		iConst67 = int(std::floor(0.00125f * fConst0)) % 2;
		iConst68 = iConst66 + 4 * iConst65;
		iConst69 = int(std::floor(0.000625f * fConst0)) % 2;
		iConst70 = iConst68 + 8 * iConst67;
		iConst71 = int(std::floor(0.0003125f * fConst0)) % 2;
		iConst72 = iConst70 + 16 * iConst69;
		iConst73 = int(std::floor(0.00015625f * fConst0)) % 2;
		iConst74 = iConst72 + 32 * iConst71;
		iConst75 = int(std::floor(7.8125e-05f * fConst0)) % 2;
		iConst76 = iConst74 + 64 * iConst73;
		iConst77 = int(std::floor(3.90625e-05f * fConst0)) % 2;
		iConst78 = iConst76 + 128 * iConst75;
		fConst79 = std::exp(-(5.0f / fConst0));
		fConst80 = std::exp(-(1e+03f / fConst0));
		fConst81 = std::rint(fConst2);
		iConst82 = int(std::floor(0.5f * fConst81)) % 2;
		fConst83 = std::tan(5283.415f / fConst0);
		fConst84 = 1.7803667f * fConst83;
		fConst85 = mydsp_faustpower2_f(fConst83);
		fConst86 = fConst85 + fConst84 + 1.5848527f;
		fConst87 = 2.0f * (fConst85 + -1.0f);
		fConst88 = fConst85 + (1.5848527f - fConst84);
		fConst89 = 1.4142135f * fConst83;
		fConst90 = fConst85 + (1.0f - fConst89);
		fConst91 = fConst85 + -1.5848527f;
		fConst92 = 2.0f * fConst91;
		fConst93 = 1.0f / (fConst85 + fConst89 + 1.0f);
		fConst94 = std::tan(119.806114f / fConst0);
		fConst95 = mydsp_faustpower2_f(fConst94);
		fConst96 = 1.0006541f * (fConst95 + -1.0f);
		fConst97 = 0.50032705f * (fConst95 + 1.0f);
		fConst98 = fConst97 - fConst94;
		fConst99 = 1.0f / (fConst94 + fConst97);
		iConst100 = int(std::floor(fConst81)) % 2;
		iConst101 = int(std::floor(0.25f * fConst81)) % 2;
		iConst102 = iConst100 + 2 * iConst82;
		iConst103 = int(std::floor(0.125f * fConst81)) % 2;
		iConst104 = iConst102 + 4 * iConst101;
		iConst105 = int(std::floor(0.0625f * fConst81)) % 2;
		iConst106 = iConst104 + 8 * iConst103;
		iConst107 = int(std::floor(0.03125f * fConst81)) % 2;
		iConst108 = iConst106 + 16 * iConst105;
		iConst109 = int(std::floor(0.015625f * fConst81)) % 2;
		iConst110 = iConst108 + 32 * iConst107;
		iConst111 = int(std::floor(0.0078125f * fConst81)) % 2;
		iConst112 = iConst110 + 64 * iConst109;
		iConst113 = int(std::floor(0.00390625f * fConst81)) % 2;
		iConst114 = iConst112 + 128 * iConst111;
		fConst115 = 1.0f / std::max<float>(fConst81, 1.1920929e-07f);
		fConst116 = std::exp(-(4e+01f / fConst0));
		fConst117 = std::tan(2513.2742f / fConst0);
		fConst118 = fConst117 * (fConst117 + 1.4142135f) + 1.0f;
		fConst119 = 2.0f / fConst118;
		fConst120 = fConst117 / fConst118;
		fConst121 = 1.0f / fConst118;
		fConst122 = std::tan(628.31854f / fConst0);
		fConst123 = fConst122 * (fConst122 + 1.4142135f) + 1.0f;
		fConst124 = 2.0f / fConst123;
		fConst125 = fConst122 / fConst123;
		fConst126 = 1.0f / fConst123;
		fConst127 = std::tan(314.15927f / fConst0);
		fConst128 = fConst127 * (fConst127 + 1.4142135f) + 1.0f;
		fConst129 = 2.0f / fConst128;
		fConst130 = fConst127 / fConst128;
		fConst131 = 1.0f / fConst128;
		fConst132 = 1.0f / fConst61;
		fConst133 = std::tan(10053.097f / fConst0);
		fConst134 = fConst133 * (fConst133 + 1.4142135f) + 1.0f;
		fConst135 = 2.0f / fConst134;
		fConst136 = fConst133 / fConst134;
		fConst137 = 1.0f / fConst134;
		fConst138 = std::tan(5026.5483f / fConst0);
		fConst139 = fConst138 * (fConst138 + 1.4142135f) + 1.0f;
		fConst140 = 2.0f / fConst139;
		fConst141 = fConst138 / fConst139;
		fConst142 = 1.0f / fConst139;
		fConst143 = std::tan(20106.193f / fConst0);
		fConst144 = fConst143 * (fConst143 + 1.4142135f) + 1.0f;
		fConst145 = 2.0f / fConst144;
		fConst146 = fConst143 / fConst144;
		fConst147 = 1.0f / fConst144;
		fConst148 = 3.9810717f * fConst86;
		fConst149 = 7.9621434f * fConst91;
		fConst150 = 3.9810717f * fConst88;
		fConst151 = std::exp(-(1e+01f / fConst0));
		fConst152 = 1.0f - fConst151;
		fConst153 = fConst86 / fConst8;
		fConst154 = fConst88 / fConst8;
		fConst155 = 2.0f * (fConst91 / fConst8);
		fConst156 = 1.0f - fConst116;
		fConst157 = std::exp(-(2e+01f / fConst0));
		fConst158 = 1.0f - fConst157;
		fConst159 = std::exp(-(13.333333f / fConst0));
		fConst160 = 1.0f - fConst159;
		fConst161 = std::exp(-(8.0f / fConst0));
		fConst162 = 1.0f - fConst161;
		fConst163 = std::exp(-(6.6666665f / fConst0));
		fConst164 = 1.0f - fConst163;
		fConst165 = std::exp(-(5.714286f / fConst0));
		fConst166 = 1.0f - fConst165;
		fConst167 = 1.0f - fConst79;
		iConst168 = int(std::floor(0.0005f * fConst0)) % 2;
		iConst169 = int(std::floor(0.00025f * fConst0)) % 2;
		iConst170 = iConst1 + 2 * iConst168;
		iConst171 = int(std::floor(0.000125f * fConst0)) % 2;
		iConst172 = iConst170 + 4 * iConst169;
		iConst173 = int(std::floor(6.25e-05f * fConst0)) % 2;
		iConst174 = iConst172 + 8 * iConst171;
		iConst175 = int(std::floor(3.125e-05f * fConst0)) % 2;
		iConst176 = iConst174 + 16 * iConst173;
		iConst177 = int(std::floor(1.5625e-05f * fConst0)) % 2;
		iConst178 = iConst176 + 32 * iConst175;
		iConst179 = int(std::floor(7.8125e-06f * fConst0)) % 2;
		iConst180 = iConst178 + 64 * iConst177;
		iConst181 = int(std::floor(3.90625e-06f * fConst0)) % 2;
		iConst182 = iConst180 + 128 * iConst179;
		iConst183 = int(std::floor(1.953125e-06f * fConst0)) % 2;
		iConst184 = iConst182 + 256 * iConst181;
	}
	
	FAUSTPP_VIRTUAL void instanceResetUserInterface() {
		fCheckbox0 = FAUSTFLOAT(0.0f);
		fVslider0 = FAUSTFLOAT(-23.0f);
		fVslider1 = FAUSTFLOAT(8e+01f);
		fVslider2 = FAUSTFLOAT(6.0f);
		fVslider3 = FAUSTFLOAT(-3.0f);
		fVslider4 = FAUSTFLOAT(5e+01f);
		fVslider5 = FAUSTFLOAT(-7.0f);
		fVslider6 = FAUSTFLOAT(-1e+01f);
		fVslider7 = FAUSTFLOAT(-9.0f);
		fVslider8 = FAUSTFLOAT(-8.0f);
		fVslider9 = FAUSTFLOAT(-5.0f);
		fVslider10 = FAUSTFLOAT(-5.0f);
		fVslider11 = FAUSTFLOAT(-1e+01f);
	}
	
	FAUSTPP_VIRTUAL void instanceClear() {
		for (int l0 = 0; l0 < 2; l0 = l0 + 1) {
			fVec0[l0] = 0.0f;
		}
		for (int l1 = 0; l1 < 2; l1 = l1 + 1) {
			fRec15[l1] = 0.0f;
		}
		for (int l2 = 0; l2 < 3; l2 = l2 + 1) {
			fRec14[l2] = 0.0f;
		}
		for (int l3 = 0; l3 < 2; l3 = l3 + 1) {
			fVec1[l3] = 0.0f;
		}
		for (int l4 = 0; l4 < 2; l4 = l4 + 1) {
			fRec13[l4] = 0.0f;
		}
		for (int l5 = 0; l5 < 3; l5 = l5 + 1) {
			fRec12[l5] = 0.0f;
		}
		for (int l6 = 0; l6 < 2; l6 = l6 + 1) {
			fRec26[l6] = 0.0f;
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
			fRec25[l25] = 0.0f;
		}
		for (int l26 = 0; l26 < 2; l26 = l26 + 1) {
			fRec38[l26] = 0.0f;
		}
		for (int l27 = 0; l27 < 2; l27 = l27 + 1) {
			fRec39[l27] = 0.0f;
		}
		for (int l28 = 0; l28 < 2; l28 = l28 + 1) {
			fRec33[l28] = 0.0f;
		}
		for (int l29 = 0; l29 < 2; l29 = l29 + 1) {
			fRec34[l29] = 0.0f;
		}
		for (int l30 = 0; l30 < 2; l30 = l30 + 1) {
			fRec30[l30] = 0.0f;
		}
		for (int l31 = 0; l31 < 2; l31 = l31 + 1) {
			fRec31[l31] = 0.0f;
		}
		for (int l32 = 0; l32 < 2; l32 = l32 + 1) {
			fRec27[l32] = 0.0f;
		}
		for (int l33 = 0; l33 < 2; l33 = l33 + 1) {
			fRec28[l33] = 0.0f;
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
			fRec24[l43] = 0.0f;
		}
		for (int l44 = 0; l44 < 2; l44 = l44 + 1) {
			fVec29[l44] = 0.0f;
		}
		for (int l45 = 0; l45 < 2; l45 = l45 + 1) {
			fRec46[l45] = 0.0f;
		}
		for (int l46 = 0; l46 < 2; l46 = l46 + 1) {
			fRec45[l46] = 0.0f;
		}
		for (int l47 = 0; l47 < 2; l47 = l47 + 1) {
			fVec30[l47] = 0.0f;
		}
		for (int l48 = 0; l48 < 2; l48 = l48 + 1) {
			fRec44[l48] = 0.0f;
		}
		for (int l49 = 0; l49 < 2; l49 = l49 + 1) {
			fRec43[l49] = 0.0f;
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
			fRec19[l59] = 0.0f;
		}
		for (int l60 = 0; l60 < 2; l60 = l60 + 1) {
			fRec20[l60] = 0.0f;
		}
		for (int l61 = 0; l61 < 2; l61 = l61 + 1) {
			fRec17[l61] = 0.0f;
		}
		for (int l62 = 0; l62 < 2; l62 = l62 + 1) {
			fRec16[l62] = 0.0f;
		}
		for (int l63 = 0; l63 < 2; l63 = l63 + 1) {
			fVec40[l63] = 0.0f;
		}
		for (int l64 = 0; l64 < 2; l64 = l64 + 1) {
			fVec41[l64] = 0.0f;
		}
		for (int l65 = 0; l65 < 3; l65 = l65 + 1) {
			fVec42[l65] = 0.0f;
		}
		for (int l66 = 0; l66 < 5; l66 = l66 + 1) {
			fVec43[l66] = 0.0f;
		}
		for (int l67 = 0; l67 < 12; l67 = l67 + 1) {
			fVec44[l67] = 0.0f;
		}
		for (int l68 = 0; l68 < 32; l68 = l68 + 1) {
			fVec45[l68] = 0.0f;
		}
		for (int l69 = 0; l69 < 64; l69 = l69 + 1) {
			fVec46[l69] = 0.0f;
		}
		for (int l70 = 0; l70 < 128; l70 = l70 + 1) {
			fVec47[l70] = 0.0f;
		}
		for (int l71 = 0; l71 < 256; l71 = l71 + 1) {
			fVec48[l71] = 0.0f;
		}
		for (int l72 = 0; l72 < 512; l72 = l72 + 1) {
			fVec49[l72] = 0.0f;
		}
		for (int l73 = 0; l73 < 2; l73 = l73 + 1) {
			fRec11[l73] = 0.0f;
		}
		for (int l74 = 0; l74 < 2; l74 = l74 + 1) {
			fRec95[l74] = 0.0f;
		}
		for (int l75 = 0; l75 < 2; l75 = l75 + 1) {
			fRec96[l75] = 0.0f;
		}
		for (int l76 = 0; l76 < 2; l76 = l76 + 1) {
			fRec90[l76] = 0.0f;
		}
		for (int l77 = 0; l77 < 2; l77 = l77 + 1) {
			fRec91[l77] = 0.0f;
		}
		for (int l78 = 0; l78 < 2; l78 = l78 + 1) {
			fRec86[l78] = 0.0f;
		}
		for (int l79 = 0; l79 < 2; l79 = l79 + 1) {
			fRec87[l79] = 0.0f;
		}
		for (int l80 = 0; l80 < 2; l80 = l80 + 1) {
			fRec82[l80] = 0.0f;
		}
		for (int l81 = 0; l81 < 2; l81 = l81 + 1) {
			fRec83[l81] = 0.0f;
		}
		for (int l82 = 0; l82 < 2; l82 = l82 + 1) {
			fRec78[l82] = 0.0f;
		}
		for (int l83 = 0; l83 < 2; l83 = l83 + 1) {
			fRec79[l83] = 0.0f;
		}
		for (int l84 = 0; l84 < 2; l84 = l84 + 1) {
			fRec73[l84] = 0.0f;
		}
		for (int l85 = 0; l85 < 2; l85 = l85 + 1) {
			fRec74[l85] = 0.0f;
		}
		for (int l86 = 0; l86 < 2; l86 = l86 + 1) {
			fRec68[l86] = 0.0f;
		}
		for (int l87 = 0; l87 < 2; l87 = l87 + 1) {
			fRec69[l87] = 0.0f;
		}
		for (int l88 = 0; l88 < 2; l88 = l88 + 1) {
			fRec64[l88] = 0.0f;
		}
		for (int l89 = 0; l89 < 2; l89 = l89 + 1) {
			fRec65[l89] = 0.0f;
		}
		for (int l90 = 0; l90 < 2; l90 = l90 + 1) {
			fRec59[l90] = 0.0f;
		}
		for (int l91 = 0; l91 < 2; l91 = l91 + 1) {
			fRec60[l91] = 0.0f;
		}
		for (int l92 = 0; l92 < 2; l92 = l92 + 1) {
			fRec54[l92] = 0.0f;
		}
		for (int l93 = 0; l93 < 2; l93 = l93 + 1) {
			fRec55[l93] = 0.0f;
		}
		for (int l94 = 0; l94 < 2; l94 = l94 + 1) {
			fVec50[l94] = 0.0f;
		}
		for (int l95 = 0; l95 < 2; l95 = l95 + 1) {
			fVec51[l95] = 0.0f;
		}
		for (int l96 = 0; l96 < 2; l96 = l96 + 1) {
			fRec53[l96] = 0.0f;
		}
		for (int l97 = 0; l97 < 2; l97 = l97 + 1) {
			fRec52[l97] = 0.0f;
		}
		for (int l98 = 0; l98 < 2; l98 = l98 + 1) {
			fVec52[l98] = 0.0f;
		}
		for (int l99 = 0; l99 < 2; l99 = l99 + 1) {
			fRec51[l99] = 0.0f;
		}
		for (int l100 = 0; l100 < 2; l100 = l100 + 1) {
			fRec50[l100] = 0.0f;
		}
		for (int l101 = 0; l101 < 2; l101 = l101 + 1) {
			fRec49[l101] = 0.0f;
		}
		for (int l102 = 0; l102 < 2; l102 = l102 + 1) {
			fRec48[l102] = 0.0f;
		}
		for (int l103 = 0; l103 < 2; l103 = l103 + 1) {
			fVec53[l103] = 0.0f;
		}
		for (int l104 = 0; l104 < 2; l104 = l104 + 1) {
			fRec105[l104] = 0.0f;
		}
		for (int l105 = 0; l105 < 2; l105 = l105 + 1) {
			fRec104[l105] = 0.0f;
		}
		for (int l106 = 0; l106 < 2; l106 = l106 + 1) {
			fVec54[l106] = 0.0f;
		}
		for (int l107 = 0; l107 < 2; l107 = l107 + 1) {
			fRec103[l107] = 0.0f;
		}
		for (int l108 = 0; l108 < 2; l108 = l108 + 1) {
			fRec102[l108] = 0.0f;
		}
		for (int l109 = 0; l109 < 2; l109 = l109 + 1) {
			fRec101[l109] = 0.0f;
		}
		for (int l110 = 0; l110 < 2; l110 = l110 + 1) {
			fRec100[l110] = 0.0f;
		}
		for (int l111 = 0; l111 < 2; l111 = l111 + 1) {
			fRec47[l111] = 0.0f;
		}
		for (int l112 = 0; l112 < 2; l112 = l112 + 1) {
			fRec113[l112] = 0.0f;
		}
		for (int l113 = 0; l113 < 2; l113 = l113 + 1) {
			fRec114[l113] = 0.0f;
		}
		for (int l114 = 0; l114 < 2; l114 = l114 + 1) {
			fRec115[l114] = 0.0f;
		}
		for (int l115 = 0; l115 < 2; l115 = l115 + 1) {
			fVec55[l115] = 0.0f;
		}
		for (int l116 = 0; l116 < 2; l116 = l116 + 1) {
			fRec112[l116] = 0.0f;
		}
		for (int l117 = 0; l117 < 2; l117 = l117 + 1) {
			fRec111[l117] = 0.0f;
		}
		for (int l118 = 0; l118 < 2; l118 = l118 + 1) {
			fVec56[l118] = 0.0f;
		}
		for (int l119 = 0; l119 < 2; l119 = l119 + 1) {
			fRec110[l119] = 0.0f;
		}
		for (int l120 = 0; l120 < 2; l120 = l120 + 1) {
			fRec109[l120] = 0.0f;
		}
		for (int l121 = 0; l121 < 2; l121 = l121 + 1) {
			fRec108[l121] = 0.0f;
		}
		for (int l122 = 0; l122 < 2; l122 = l122 + 1) {
			fRec107[l122] = 0.0f;
		}
		for (int l123 = 0; l123 < 2; l123 = l123 + 1) {
			fRec106[l123] = 0.0f;
		}
		for (int l124 = 0; l124 < 2; l124 = l124 + 1) {
			fRec137[l124] = 0.0f;
		}
		for (int l125 = 0; l125 < 2; l125 = l125 + 1) {
			fRec138[l125] = 0.0f;
		}
		for (int l126 = 0; l126 < 2; l126 = l126 + 1) {
			fRec133[l126] = 0.0f;
		}
		for (int l127 = 0; l127 < 2; l127 = l127 + 1) {
			fRec134[l127] = 0.0f;
		}
		for (int l128 = 0; l128 < 2; l128 = l128 + 1) {
			fRec128[l128] = 0.0f;
		}
		for (int l129 = 0; l129 < 2; l129 = l129 + 1) {
			fRec129[l129] = 0.0f;
		}
		for (int l130 = 0; l130 < 2; l130 = l130 + 1) {
			fRec123[l130] = 0.0f;
		}
		for (int l131 = 0; l131 < 2; l131 = l131 + 1) {
			fRec124[l131] = 0.0f;
		}
		for (int l132 = 0; l132 < 2; l132 = l132 + 1) {
			fVec57[l132] = 0.0f;
		}
		for (int l133 = 0; l133 < 2; l133 = l133 + 1) {
			fVec58[l133] = 0.0f;
		}
		for (int l134 = 0; l134 < 2; l134 = l134 + 1) {
			fRec122[l134] = 0.0f;
		}
		for (int l135 = 0; l135 < 2; l135 = l135 + 1) {
			fRec121[l135] = 0.0f;
		}
		for (int l136 = 0; l136 < 2; l136 = l136 + 1) {
			fVec59[l136] = 0.0f;
		}
		for (int l137 = 0; l137 < 2; l137 = l137 + 1) {
			fRec120[l137] = 0.0f;
		}
		for (int l138 = 0; l138 < 2; l138 = l138 + 1) {
			fRec119[l138] = 0.0f;
		}
		for (int l139 = 0; l139 < 2; l139 = l139 + 1) {
			fRec118[l139] = 0.0f;
		}
		for (int l140 = 0; l140 < 2; l140 = l140 + 1) {
			fRec117[l140] = 0.0f;
		}
		for (int l141 = 0; l141 < 2; l141 = l141 + 1) {
			fRec116[l141] = 0.0f;
		}
		for (int l142 = 0; l142 < 2; l142 = l142 + 1) {
			fRec147[l142] = 0.0f;
		}
		for (int l143 = 0; l143 < 2; l143 = l143 + 1) {
			fRec148[l143] = 0.0f;
		}
		for (int l144 = 0; l144 < 2; l144 = l144 + 1) {
			fRec149[l144] = 0.0f;
		}
		for (int l145 = 0; l145 < 2; l145 = l145 + 1) {
			fVec60[l145] = 0.0f;
		}
		for (int l146 = 0; l146 < 2; l146 = l146 + 1) {
			fRec146[l146] = 0.0f;
		}
		for (int l147 = 0; l147 < 2; l147 = l147 + 1) {
			fRec145[l147] = 0.0f;
		}
		for (int l148 = 0; l148 < 2; l148 = l148 + 1) {
			fVec61[l148] = 0.0f;
		}
		for (int l149 = 0; l149 < 2; l149 = l149 + 1) {
			fRec144[l149] = 0.0f;
		}
		for (int l150 = 0; l150 < 2; l150 = l150 + 1) {
			fRec143[l150] = 0.0f;
		}
		for (int l151 = 0; l151 < 2; l151 = l151 + 1) {
			fRec142[l151] = 0.0f;
		}
		for (int l152 = 0; l152 < 2; l152 = l152 + 1) {
			fRec141[l152] = 0.0f;
		}
		for (int l153 = 0; l153 < 2; l153 = l153 + 1) {
			fRec140[l153] = 0.0f;
		}
		for (int l154 = 0; l154 < 2; l154 = l154 + 1) {
			fRec193[l154] = 0.0f;
		}
		for (int l155 = 0; l155 < 2; l155 = l155 + 1) {
			fRec194[l155] = 0.0f;
		}
		for (int l156 = 0; l156 < 2; l156 = l156 + 1) {
			fRec189[l156] = 0.0f;
		}
		for (int l157 = 0; l157 < 2; l157 = l157 + 1) {
			fRec190[l157] = 0.0f;
		}
		for (int l158 = 0; l158 < 2; l158 = l158 + 1) {
			fRec185[l158] = 0.0f;
		}
		for (int l159 = 0; l159 < 2; l159 = l159 + 1) {
			fRec186[l159] = 0.0f;
		}
		for (int l160 = 0; l160 < 2; l160 = l160 + 1) {
			fRec181[l160] = 0.0f;
		}
		for (int l161 = 0; l161 < 2; l161 = l161 + 1) {
			fRec182[l161] = 0.0f;
		}
		for (int l162 = 0; l162 < 2; l162 = l162 + 1) {
			fRec176[l162] = 0.0f;
		}
		for (int l163 = 0; l163 < 2; l163 = l163 + 1) {
			fRec177[l163] = 0.0f;
		}
		for (int l164 = 0; l164 < 2; l164 = l164 + 1) {
			fRec171[l164] = 0.0f;
		}
		for (int l165 = 0; l165 < 2; l165 = l165 + 1) {
			fRec172[l165] = 0.0f;
		}
		for (int l166 = 0; l166 < 2; l166 = l166 + 1) {
			fRec167[l166] = 0.0f;
		}
		for (int l167 = 0; l167 < 2; l167 = l167 + 1) {
			fRec168[l167] = 0.0f;
		}
		for (int l168 = 0; l168 < 2; l168 = l168 + 1) {
			fRec162[l168] = 0.0f;
		}
		for (int l169 = 0; l169 < 2; l169 = l169 + 1) {
			fRec163[l169] = 0.0f;
		}
		for (int l170 = 0; l170 < 2; l170 = l170 + 1) {
			fRec157[l170] = 0.0f;
		}
		for (int l171 = 0; l171 < 2; l171 = l171 + 1) {
			fRec158[l171] = 0.0f;
		}
		for (int l172 = 0; l172 < 2; l172 = l172 + 1) {
			fVec62[l172] = 0.0f;
		}
		for (int l173 = 0; l173 < 2; l173 = l173 + 1) {
			fVec63[l173] = 0.0f;
		}
		for (int l174 = 0; l174 < 2; l174 = l174 + 1) {
			fRec156[l174] = 0.0f;
		}
		for (int l175 = 0; l175 < 2; l175 = l175 + 1) {
			fRec155[l175] = 0.0f;
		}
		for (int l176 = 0; l176 < 2; l176 = l176 + 1) {
			fVec64[l176] = 0.0f;
		}
		for (int l177 = 0; l177 < 2; l177 = l177 + 1) {
			fRec154[l177] = 0.0f;
		}
		for (int l178 = 0; l178 < 2; l178 = l178 + 1) {
			fRec153[l178] = 0.0f;
		}
		for (int l179 = 0; l179 < 2; l179 = l179 + 1) {
			fRec152[l179] = 0.0f;
		}
		for (int l180 = 0; l180 < 2; l180 = l180 + 1) {
			fRec151[l180] = 0.0f;
		}
		for (int l181 = 0; l181 < 2; l181 = l181 + 1) {
			fRec150[l181] = 0.0f;
		}
		for (int l182 = 0; l182 < 2; l182 = l182 + 1) {
			fRec203[l182] = 0.0f;
		}
		for (int l183 = 0; l183 < 2; l183 = l183 + 1) {
			fRec204[l183] = 0.0f;
		}
		for (int l184 = 0; l184 < 2; l184 = l184 + 1) {
			fRec205[l184] = 0.0f;
		}
		for (int l185 = 0; l185 < 2; l185 = l185 + 1) {
			fVec65[l185] = 0.0f;
		}
		for (int l186 = 0; l186 < 2; l186 = l186 + 1) {
			fRec202[l186] = 0.0f;
		}
		for (int l187 = 0; l187 < 2; l187 = l187 + 1) {
			fRec201[l187] = 0.0f;
		}
		for (int l188 = 0; l188 < 2; l188 = l188 + 1) {
			fVec66[l188] = 0.0f;
		}
		for (int l189 = 0; l189 < 2; l189 = l189 + 1) {
			fRec200[l189] = 0.0f;
		}
		for (int l190 = 0; l190 < 2; l190 = l190 + 1) {
			fRec199[l190] = 0.0f;
		}
		for (int l191 = 0; l191 < 2; l191 = l191 + 1) {
			fRec198[l191] = 0.0f;
		}
		for (int l192 = 0; l192 < 2; l192 = l192 + 1) {
			fRec197[l192] = 0.0f;
		}
		for (int l193 = 0; l193 < 2; l193 = l193 + 1) {
			fRec196[l193] = 0.0f;
		}
		for (int l194 = 0; l194 < 2; l194 = l194 + 1) {
			fRec227[l194] = 0.0f;
		}
		for (int l195 = 0; l195 < 2; l195 = l195 + 1) {
			fRec228[l195] = 0.0f;
		}
		for (int l196 = 0; l196 < 2; l196 = l196 + 1) {
			fRec223[l196] = 0.0f;
		}
		for (int l197 = 0; l197 < 2; l197 = l197 + 1) {
			fRec224[l197] = 0.0f;
		}
		for (int l198 = 0; l198 < 2; l198 = l198 + 1) {
			fRec218[l198] = 0.0f;
		}
		for (int l199 = 0; l199 < 2; l199 = l199 + 1) {
			fRec219[l199] = 0.0f;
		}
		for (int l200 = 0; l200 < 2; l200 = l200 + 1) {
			fRec213[l200] = 0.0f;
		}
		for (int l201 = 0; l201 < 2; l201 = l201 + 1) {
			fRec214[l201] = 0.0f;
		}
		for (int l202 = 0; l202 < 2; l202 = l202 + 1) {
			fVec67[l202] = 0.0f;
		}
		for (int l203 = 0; l203 < 2; l203 = l203 + 1) {
			fVec68[l203] = 0.0f;
		}
		for (int l204 = 0; l204 < 2; l204 = l204 + 1) {
			fRec212[l204] = 0.0f;
		}
		for (int l205 = 0; l205 < 2; l205 = l205 + 1) {
			fRec211[l205] = 0.0f;
		}
		for (int l206 = 0; l206 < 2; l206 = l206 + 1) {
			fVec69[l206] = 0.0f;
		}
		for (int l207 = 0; l207 < 2; l207 = l207 + 1) {
			fRec210[l207] = 0.0f;
		}
		for (int l208 = 0; l208 < 2; l208 = l208 + 1) {
			fRec209[l208] = 0.0f;
		}
		for (int l209 = 0; l209 < 2; l209 = l209 + 1) {
			fRec208[l209] = 0.0f;
		}
		for (int l210 = 0; l210 < 2; l210 = l210 + 1) {
			fRec207[l210] = 0.0f;
		}
		for (int l211 = 0; l211 < 2; l211 = l211 + 1) {
			fRec206[l211] = 0.0f;
		}
		for (int l212 = 0; l212 < 2; l212 = l212 + 1) {
			fRec237[l212] = 0.0f;
		}
		for (int l213 = 0; l213 < 2; l213 = l213 + 1) {
			fRec238[l213] = 0.0f;
		}
		for (int l214 = 0; l214 < 2; l214 = l214 + 1) {
			fRec239[l214] = 0.0f;
		}
		for (int l215 = 0; l215 < 2; l215 = l215 + 1) {
			fVec70[l215] = 0.0f;
		}
		for (int l216 = 0; l216 < 2; l216 = l216 + 1) {
			fRec236[l216] = 0.0f;
		}
		for (int l217 = 0; l217 < 2; l217 = l217 + 1) {
			fRec235[l217] = 0.0f;
		}
		for (int l218 = 0; l218 < 2; l218 = l218 + 1) {
			fVec71[l218] = 0.0f;
		}
		for (int l219 = 0; l219 < 2; l219 = l219 + 1) {
			fRec234[l219] = 0.0f;
		}
		for (int l220 = 0; l220 < 2; l220 = l220 + 1) {
			fRec233[l220] = 0.0f;
		}
		for (int l221 = 0; l221 < 2; l221 = l221 + 1) {
			fRec232[l221] = 0.0f;
		}
		for (int l222 = 0; l222 < 2; l222 = l222 + 1) {
			fRec231[l222] = 0.0f;
		}
		for (int l223 = 0; l223 < 2; l223 = l223 + 1) {
			fRec230[l223] = 0.0f;
		}
		for (int l224 = 0; l224 < 3; l224 = l224 + 1) {
			fRec10[l224] = 0.0f;
		}
		for (int l225 = 0; l225 < 2; l225 = l225 + 1) {
			fRec6[l225] = 0.0f;
		}
		for (int l226 = 0; l226 < 2; l226 = l226 + 1) {
			fRec7[l226] = 0.0f;
		}
		for (int l227 = 0; l227 < 2; l227 = l227 + 1) {
			fRec2[l227] = 0.0f;
		}
		for (int l228 = 0; l228 < 2; l228 = l228 + 1) {
			fRec3[l228] = 0.0f;
		}
		for (int l229 = 0; l229 < 2; l229 = l229 + 1) {
			fRec247[l229] = 0.0f;
		}
		for (int l230 = 0; l230 < 2; l230 = l230 + 1) {
			fRec248[l230] = 0.0f;
		}
		for (int l231 = 0; l231 < 2; l231 = l231 + 1) {
			fRec244[l231] = 0.0f;
		}
		for (int l232 = 0; l232 < 2; l232 = l232 + 1) {
			fRec245[l232] = 0.0f;
		}
		for (int l233 = 0; l233 < 2; l233 = l233 + 1) {
			fRec250[l233] = 0.0f;
		}
		for (int l234 = 0; l234 < 2; l234 = l234 + 1) {
			fRec251[l234] = 0.0f;
		}
		for (int l235 = 0; l235 < 2; l235 = l235 + 1) {
			fRec240[l235] = 0.0f;
		}
		for (int l236 = 0; l236 < 2; l236 = l236 + 1) {
			fRec241[l236] = 0.0f;
		}
		for (int l237 = 0; l237 < 2; l237 = l237 + 1) {
			fRec253[l237] = 0.0f;
		}
		for (int l238 = 0; l238 < 2; l238 = l238 + 1) {
			fRec254[l238] = 0.0f;
		}
		for (int l239 = 0; l239 < 2; l239 = l239 + 1) {
			fRec261[l239] = 0.0f;
		}
		for (int l240 = 0; l240 < 2; l240 = l240 + 1) {
			fRec262[l240] = 0.0f;
		}
		for (int l241 = 0; l241 < 2; l241 = l241 + 1) {
			fRec257[l241] = 0.0f;
		}
		for (int l242 = 0; l242 < 2; l242 = l242 + 1) {
			fRec258[l242] = 0.0f;
		}
		for (int l243 = 0; l243 < 2; l243 = l243 + 1) {
			fRec264[l243] = 0.0f;
		}
		for (int l244 = 0; l244 < 2; l244 = l244 + 1) {
			fRec265[l244] = 0.0f;
		}
		for (int l245 = 0; l245 < 2; l245 = l245 + 1) {
			fVec72[l245] = 0.0f;
		}
		for (int l246 = 0; l246 < 3; l246 = l246 + 1) {
			fVec73[l246] = 0.0f;
		}
		for (int l247 = 0; l247 < 5; l247 = l247 + 1) {
			fVec74[l247] = 0.0f;
		}
		for (int l248 = 0; l248 < 12; l248 = l248 + 1) {
			fVec75[l248] = 0.0f;
		}
		for (int l249 = 0; l249 < 32; l249 = l249 + 1) {
			fVec76[l249] = 0.0f;
		}
		for (int l250 = 0; l250 < 64; l250 = l250 + 1) {
			fVec77[l250] = 0.0f;
		}
		for (int l251 = 0; l251 < 128; l251 = l251 + 1) {
			fVec78[l251] = 0.0f;
		}
		for (int l252 = 0; l252 < 256; l252 = l252 + 1) {
			fVec79[l252] = 0.0f;
		}
		for (int l253 = 0; l253 < 512; l253 = l253 + 1) {
			fVec80[l253] = 0.0f;
		}
		for (int l254 = 0; l254 < 512; l254 = l254 + 1) {
			fVec81[l254] = 0.0f;
		}
		for (int l255 = 0; l255 < 2; l255 = l255 + 1) {
			fRec1[l255] = 0.0f;
		}
		for (int l256 = 0; l256 < 2; l256 = l256 + 1) {
			fRec292[l256] = 0.0f;
		}
		for (int l257 = 0; l257 < 2; l257 = l257 + 1) {
			fRec293[l257] = 0.0f;
		}
		for (int l258 = 0; l258 < 2; l258 = l258 + 1) {
			fRec289[l258] = 0.0f;
		}
		for (int l259 = 0; l259 < 2; l259 = l259 + 1) {
			fRec290[l259] = 0.0f;
		}
		for (int l260 = 0; l260 < 2; l260 = l260 + 1) {
			fRec286[l260] = 0.0f;
		}
		for (int l261 = 0; l261 < 2; l261 = l261 + 1) {
			fRec287[l261] = 0.0f;
		}
		for (int l262 = 0; l262 < 2; l262 = l262 + 1) {
			fRec295[l262] = 0.0f;
		}
		for (int l263 = 0; l263 < 2; l263 = l263 + 1) {
			fRec296[l263] = 0.0f;
		}
		for (int l264 = 0; l264 < 2; l264 = l264 + 1) {
			fRec282[l264] = 0.0f;
		}
		for (int l265 = 0; l265 < 2; l265 = l265 + 1) {
			fRec283[l265] = 0.0f;
		}
		for (int l266 = 0; l266 < 2; l266 = l266 + 1) {
			fRec279[l266] = 0.0f;
		}
		for (int l267 = 0; l267 < 2; l267 = l267 + 1) {
			fRec280[l267] = 0.0f;
		}
		for (int l268 = 0; l268 < 2; l268 = l268 + 1) {
			fRec276[l268] = 0.0f;
		}
		for (int l269 = 0; l269 < 2; l269 = l269 + 1) {
			fRec277[l269] = 0.0f;
		}
		for (int l270 = 0; l270 < 2; l270 = l270 + 1) {
			fRec272[l270] = 0.0f;
		}
		for (int l271 = 0; l271 < 2; l271 = l271 + 1) {
			fRec273[l271] = 0.0f;
		}
		for (int l272 = 0; l272 < 2; l272 = l272 + 1) {
			fRec269[l272] = 0.0f;
		}
		for (int l273 = 0; l273 < 2; l273 = l273 + 1) {
			fRec270[l273] = 0.0f;
		}
		for (int l274 = 0; l274 < 2; l274 = l274 + 1) {
			fVec82[l274] = 0.0f;
		}
		for (int l275 = 0; l275 < 3; l275 = l275 + 1) {
			fVec83[l275] = 0.0f;
		}
		for (int l276 = 0; l276 < 5; l276 = l276 + 1) {
			fVec84[l276] = 0.0f;
		}
		for (int l277 = 0; l277 < 12; l277 = l277 + 1) {
			fVec85[l277] = 0.0f;
		}
		for (int l278 = 0; l278 < 32; l278 = l278 + 1) {
			fVec86[l278] = 0.0f;
		}
		for (int l279 = 0; l279 < 64; l279 = l279 + 1) {
			fVec87[l279] = 0.0f;
		}
		for (int l280 = 0; l280 < 128; l280 = l280 + 1) {
			fVec88[l280] = 0.0f;
		}
		for (int l281 = 0; l281 < 256; l281 = l281 + 1) {
			fVec89[l281] = 0.0f;
		}
		for (int l282 = 0; l282 < 512; l282 = l282 + 1) {
			fVec90[l282] = 0.0f;
		}
		for (int l283 = 0; l283 < 512; l283 = l283 + 1) {
			fVec91[l283] = 0.0f;
		}
		for (int l284 = 0; l284 < 2; l284 = l284 + 1) {
			fRec268[l284] = 0.0f;
		}
		for (int l285 = 0; l285 < 2; l285 = l285 + 1) {
			fRec299[l285] = 0.0f;
		}
		for (int l286 = 0; l286 < 2; l286 = l286 + 1) {
			fRec300[l286] = 0.0f;
		}
		for (int l287 = 0; l287 < 2; l287 = l287 + 1) {
			fVec92[l287] = 0.0f;
		}
		for (int l288 = 0; l288 < 3; l288 = l288 + 1) {
			fVec93[l288] = 0.0f;
		}
		for (int l289 = 0; l289 < 5; l289 = l289 + 1) {
			fVec94[l289] = 0.0f;
		}
		for (int l290 = 0; l290 < 12; l290 = l290 + 1) {
			fVec95[l290] = 0.0f;
		}
		for (int l291 = 0; l291 < 32; l291 = l291 + 1) {
			fVec96[l291] = 0.0f;
		}
		for (int l292 = 0; l292 < 64; l292 = l292 + 1) {
			fVec97[l292] = 0.0f;
		}
		for (int l293 = 0; l293 < 128; l293 = l293 + 1) {
			fVec98[l293] = 0.0f;
		}
		for (int l294 = 0; l294 < 256; l294 = l294 + 1) {
			fVec99[l294] = 0.0f;
		}
		for (int l295 = 0; l295 < 512; l295 = l295 + 1) {
			fVec100[l295] = 0.0f;
		}
		for (int l296 = 0; l296 < 512; l296 = l296 + 1) {
			fVec101[l296] = 0.0f;
		}
		for (int l297 = 0; l297 < 2; l297 = l297 + 1) {
			fRec298[l297] = 0.0f;
		}
		for (int l298 = 0; l298 < 2; l298 = l298 + 1) {
			fRec314[l298] = 0.0f;
		}
		for (int l299 = 0; l299 < 2; l299 = l299 + 1) {
			fRec315[l299] = 0.0f;
		}
		for (int l300 = 0; l300 < 2; l300 = l300 + 1) {
			fRec311[l300] = 0.0f;
		}
		for (int l301 = 0; l301 < 2; l301 = l301 + 1) {
			fRec312[l301] = 0.0f;
		}
		for (int l302 = 0; l302 < 2; l302 = l302 + 1) {
			fRec307[l302] = 0.0f;
		}
		for (int l303 = 0; l303 < 2; l303 = l303 + 1) {
			fRec308[l303] = 0.0f;
		}
		for (int l304 = 0; l304 < 2; l304 = l304 + 1) {
			fRec304[l304] = 0.0f;
		}
		for (int l305 = 0; l305 < 2; l305 = l305 + 1) {
			fRec305[l305] = 0.0f;
		}
		for (int l306 = 0; l306 < 2; l306 = l306 + 1) {
			fVec102[l306] = 0.0f;
		}
		for (int l307 = 0; l307 < 3; l307 = l307 + 1) {
			fVec103[l307] = 0.0f;
		}
		for (int l308 = 0; l308 < 5; l308 = l308 + 1) {
			fVec104[l308] = 0.0f;
		}
		for (int l309 = 0; l309 < 12; l309 = l309 + 1) {
			fVec105[l309] = 0.0f;
		}
		for (int l310 = 0; l310 < 32; l310 = l310 + 1) {
			fVec106[l310] = 0.0f;
		}
		for (int l311 = 0; l311 < 64; l311 = l311 + 1) {
			fVec107[l311] = 0.0f;
		}
		for (int l312 = 0; l312 < 128; l312 = l312 + 1) {
			fVec108[l312] = 0.0f;
		}
		for (int l313 = 0; l313 < 256; l313 = l313 + 1) {
			fVec109[l313] = 0.0f;
		}
		for (int l314 = 0; l314 < 512; l314 = l314 + 1) {
			fVec110[l314] = 0.0f;
		}
		for (int l315 = 0; l315 < 512; l315 = l315 + 1) {
			fVec111[l315] = 0.0f;
		}
		for (int l316 = 0; l316 < 2; l316 = l316 + 1) {
			fRec303[l316] = 0.0f;
		}
		for (int l317 = 0; l317 < 2; l317 = l317 + 1) {
			fRec319[l317] = 0.0f;
		}
		for (int l318 = 0; l318 < 2; l318 = l318 + 1) {
			fRec320[l318] = 0.0f;
		}
		for (int l319 = 0; l319 < 2; l319 = l319 + 1) {
			fVec112[l319] = 0.0f;
		}
		for (int l320 = 0; l320 < 3; l320 = l320 + 1) {
			fVec113[l320] = 0.0f;
		}
		for (int l321 = 0; l321 < 5; l321 = l321 + 1) {
			fVec114[l321] = 0.0f;
		}
		for (int l322 = 0; l322 < 12; l322 = l322 + 1) {
			fVec115[l322] = 0.0f;
		}
		for (int l323 = 0; l323 < 32; l323 = l323 + 1) {
			fVec116[l323] = 0.0f;
		}
		for (int l324 = 0; l324 < 64; l324 = l324 + 1) {
			fVec117[l324] = 0.0f;
		}
		for (int l325 = 0; l325 < 128; l325 = l325 + 1) {
			fVec118[l325] = 0.0f;
		}
		for (int l326 = 0; l326 < 256; l326 = l326 + 1) {
			fVec119[l326] = 0.0f;
		}
		for (int l327 = 0; l327 < 512; l327 = l327 + 1) {
			fVec120[l327] = 0.0f;
		}
		for (int l328 = 0; l328 < 512; l328 = l328 + 1) {
			fVec121[l328] = 0.0f;
		}
		for (int l329 = 0; l329 < 2; l329 = l329 + 1) {
			fRec318[l329] = 0.0f;
		}
		for (int l330 = 0; l330 < 2; l330 = l330 + 1) {
			fRec334[l330] = 0.0f;
		}
		for (int l331 = 0; l331 < 2; l331 = l331 + 1) {
			fRec335[l331] = 0.0f;
		}
		for (int l332 = 0; l332 < 2; l332 = l332 + 1) {
			fRec331[l332] = 0.0f;
		}
		for (int l333 = 0; l333 < 2; l333 = l333 + 1) {
			fRec332[l333] = 0.0f;
		}
		for (int l334 = 0; l334 < 2; l334 = l334 + 1) {
			fRec327[l334] = 0.0f;
		}
		for (int l335 = 0; l335 < 2; l335 = l335 + 1) {
			fRec328[l335] = 0.0f;
		}
		for (int l336 = 0; l336 < 2; l336 = l336 + 1) {
			fRec324[l336] = 0.0f;
		}
		for (int l337 = 0; l337 < 2; l337 = l337 + 1) {
			fRec325[l337] = 0.0f;
		}
		for (int l338 = 0; l338 < 2; l338 = l338 + 1) {
			fVec122[l338] = 0.0f;
		}
		for (int l339 = 0; l339 < 3; l339 = l339 + 1) {
			fVec123[l339] = 0.0f;
		}
		for (int l340 = 0; l340 < 5; l340 = l340 + 1) {
			fVec124[l340] = 0.0f;
		}
		for (int l341 = 0; l341 < 12; l341 = l341 + 1) {
			fVec125[l341] = 0.0f;
		}
		for (int l342 = 0; l342 < 32; l342 = l342 + 1) {
			fVec126[l342] = 0.0f;
		}
		for (int l343 = 0; l343 < 64; l343 = l343 + 1) {
			fVec127[l343] = 0.0f;
		}
		for (int l344 = 0; l344 < 128; l344 = l344 + 1) {
			fVec128[l344] = 0.0f;
		}
		for (int l345 = 0; l345 < 256; l345 = l345 + 1) {
			fVec129[l345] = 0.0f;
		}
		for (int l346 = 0; l346 < 512; l346 = l346 + 1) {
			fVec130[l346] = 0.0f;
		}
		for (int l347 = 0; l347 < 512; l347 = l347 + 1) {
			fVec131[l347] = 0.0f;
		}
		for (int l348 = 0; l348 < 2; l348 = l348 + 1) {
			fRec323[l348] = 0.0f;
		}
		for (int l349 = 0; l349 < 2; l349 = l349 + 1) {
			fRec338[l349] = 0.0f;
		}
		for (int l350 = 0; l350 < 2; l350 = l350 + 1) {
			fRec339[l350] = 0.0f;
		}
		for (int l351 = 0; l351 < 2; l351 = l351 + 1) {
			fVec132[l351] = 0.0f;
		}
		for (int l352 = 0; l352 < 3; l352 = l352 + 1) {
			fVec133[l352] = 0.0f;
		}
		for (int l353 = 0; l353 < 5; l353 = l353 + 1) {
			fVec134[l353] = 0.0f;
		}
		for (int l354 = 0; l354 < 12; l354 = l354 + 1) {
			fVec135[l354] = 0.0f;
		}
		for (int l355 = 0; l355 < 32; l355 = l355 + 1) {
			fVec136[l355] = 0.0f;
		}
		for (int l356 = 0; l356 < 64; l356 = l356 + 1) {
			fVec137[l356] = 0.0f;
		}
		for (int l357 = 0; l357 < 128; l357 = l357 + 1) {
			fVec138[l357] = 0.0f;
		}
		for (int l358 = 0; l358 < 256; l358 = l358 + 1) {
			fVec139[l358] = 0.0f;
		}
		for (int l359 = 0; l359 < 512; l359 = l359 + 1) {
			fVec140[l359] = 0.0f;
		}
		for (int l360 = 0; l360 < 512; l360 = l360 + 1) {
			fVec141[l360] = 0.0f;
		}
		for (int l361 = 0; l361 < 2; l361 = l361 + 1) {
			fRec337[l361] = 0.0f;
		}
		for (int l362 = 0; l362 < 2; l362 = l362 + 1) {
			fRec343[l362] = 0.0f;
		}
		for (int l363 = 0; l363 < 2; l363 = l363 + 1) {
			fRec344[l363] = 0.0f;
		}
		for (int l364 = 0; l364 < 2; l364 = l364 + 1) {
			fVec142[l364] = 0.0f;
		}
		for (int l365 = 0; l365 < 3; l365 = l365 + 1) {
			fVec143[l365] = 0.0f;
		}
		for (int l366 = 0; l366 < 5; l366 = l366 + 1) {
			fVec144[l366] = 0.0f;
		}
		for (int l367 = 0; l367 < 12; l367 = l367 + 1) {
			fVec145[l367] = 0.0f;
		}
		for (int l368 = 0; l368 < 32; l368 = l368 + 1) {
			fVec146[l368] = 0.0f;
		}
		for (int l369 = 0; l369 < 64; l369 = l369 + 1) {
			fVec147[l369] = 0.0f;
		}
		for (int l370 = 0; l370 < 128; l370 = l370 + 1) {
			fVec148[l370] = 0.0f;
		}
		for (int l371 = 0; l371 < 256; l371 = l371 + 1) {
			fVec149[l371] = 0.0f;
		}
		for (int l372 = 0; l372 < 512; l372 = l372 + 1) {
			fVec150[l372] = 0.0f;
		}
		for (int l373 = 0; l373 < 512; l373 = l373 + 1) {
			fVec151[l373] = 0.0f;
		}
		for (int l374 = 0; l374 < 2; l374 = l374 + 1) {
			fRec342[l374] = 0.0f;
		}
		for (int l375 = 0; l375 < 2; l375 = l375 + 1) {
			fRec0[l375] = 0.0f;
		}
		for (int l376 = 0; l376 < 2; l376 = l376 + 1) {
			fRec346[l376] = 0.0f;
		}
		for (int l377 = 0; l377 < 2; l377 = l377 + 1) {
			fRec347[l377] = 0.0f;
		}
		for (int l378 = 0; l378 < 2; l378 = l378 + 1) {
			fRec348[l378] = 0.0f;
		}
		for (int l379 = 0; l379 < 2; l379 = l379 + 1) {
			fRec349[l379] = 0.0f;
		}
		for (int l380 = 0; l380 < 2; l380 = l380 + 1) {
			fRec350[l380] = 0.0f;
		}
		for (int l381 = 0; l381 < 2; l381 = l381 + 1) {
			fRec351[l381] = 0.0f;
		}
		for (int l382 = 0; l382 < 2; l382 = l382 + 1) {
			fRec352[l382] = 0.0f;
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
		ui_interface->declare(&fVslider4, "symbol", "sb_strength");
		ui_interface->declare(&fVslider4, "unit", "%");
		ui_interface->addVerticalSlider("strength", &fVslider4, FAUSTFLOAT(5e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVbargraph3, "3", "");
		ui_interface->declare(&fVbargraph3, "symbol", "sb_expander");
		ui_interface->addVerticalBargraph("sb_expander", &fVbargraph3, FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("Target Curve");
		ui_interface->declare(&fVslider11, "symbol", "sb_target_spectrum_0");
		ui_interface->addVerticalSlider("spec 0", &fVslider11, FAUSTFLOAT(-1e+01f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider10, "symbol", "sb_target_spectrum_1");
		ui_interface->addVerticalSlider("spec 1", &fVslider10, FAUSTFLOAT(-5.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider9, "symbol", "sb_target_spectrum_2");
		ui_interface->addVerticalSlider("spec 2", &fVslider9, FAUSTFLOAT(-5.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider8, "symbol", "sb_target_spectrum_3");
		ui_interface->addVerticalSlider("spec 3", &fVslider8, FAUSTFLOAT(-8.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider7, "symbol", "sb_target_spectrum_4");
		ui_interface->addVerticalSlider("spec 4", &fVslider7, FAUSTFLOAT(-9.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider6, "symbol", "sb_target_spectrum_5");
		ui_interface->addVerticalSlider("spec 5", &fVslider6, FAUSTFLOAT(-1e+01f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider5, "symbol", "sb_target_spectrum_6");
		ui_interface->addVerticalSlider("spec 6", &fVslider5, FAUSTFLOAT(-7.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider3, "symbol", "sb_target_spectrum_7");
		ui_interface->addVerticalSlider("spec 7", &fVslider3, FAUSTFLOAT(-3.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->declare(0, "2", "");
		ui_interface->openHorizontalBox("loudness normalized spectrum");
		ui_interface->declare(&fVbargraph18, "1", "");
		ui_interface->declare(&fVbargraph18, "symbol", "sb_meter_ 0");
		ui_interface->declare(&fVbargraph18, "unit", "dB");
		ui_interface->addVerticalBargraph("band  0", &fVbargraph18, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph16, "1", "");
		ui_interface->declare(&fVbargraph16, "symbol", "sb_meter_ 1");
		ui_interface->declare(&fVbargraph16, "unit", "dB");
		ui_interface->addVerticalBargraph("band  1", &fVbargraph16, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph14, "1", "");
		ui_interface->declare(&fVbargraph14, "symbol", "sb_meter_ 2");
		ui_interface->declare(&fVbargraph14, "unit", "dB");
		ui_interface->addVerticalBargraph("band  2", &fVbargraph14, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph12, "1", "");
		ui_interface->declare(&fVbargraph12, "symbol", "sb_meter_ 3");
		ui_interface->declare(&fVbargraph12, "unit", "dB");
		ui_interface->addVerticalBargraph("band  3", &fVbargraph12, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph10, "1", "");
		ui_interface->declare(&fVbargraph10, "symbol", "sb_meter_ 4");
		ui_interface->declare(&fVbargraph10, "unit", "dB");
		ui_interface->addVerticalBargraph("band  4", &fVbargraph10, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph8, "1", "");
		ui_interface->declare(&fVbargraph8, "symbol", "sb_meter_ 5");
		ui_interface->declare(&fVbargraph8, "unit", "dB");
		ui_interface->addVerticalBargraph("band  5", &fVbargraph8, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph6, "1", "");
		ui_interface->declare(&fVbargraph6, "symbol", "sb_meter_ 6");
		ui_interface->declare(&fVbargraph6, "unit", "dB");
		ui_interface->addVerticalBargraph("band  6", &fVbargraph6, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph4, "1", "");
		ui_interface->declare(&fVbargraph4, "symbol", "sb_meter_ 7");
		ui_interface->declare(&fVbargraph4, "unit", "dB");
		ui_interface->addVerticalBargraph("band  7", &fVbargraph4, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->closeBox();
		ui_interface->declare(0, "3", "");
		ui_interface->openHorizontalBox("resulting gain");
		ui_interface->declare(&fVbargraph19, "1", "");
		ui_interface->declare(&fVbargraph19, "symbol", "sb_gain_ 0");
		ui_interface->addVerticalBargraph("sb_gain  0", &fVbargraph19, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph17, "1", "");
		ui_interface->declare(&fVbargraph17, "symbol", "sb_gain_ 1");
		ui_interface->addVerticalBargraph("sb_gain  1", &fVbargraph17, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph15, "1", "");
		ui_interface->declare(&fVbargraph15, "symbol", "sb_gain_ 2");
		ui_interface->addVerticalBargraph("sb_gain  2", &fVbargraph15, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph13, "1", "");
		ui_interface->declare(&fVbargraph13, "symbol", "sb_gain_ 3");
		ui_interface->addVerticalBargraph("sb_gain  3", &fVbargraph13, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph11, "1", "");
		ui_interface->declare(&fVbargraph11, "symbol", "sb_gain_ 4");
		ui_interface->addVerticalBargraph("sb_gain  4", &fVbargraph11, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph9, "1", "");
		ui_interface->declare(&fVbargraph9, "symbol", "sb_gain_ 5");
		ui_interface->addVerticalBargraph("sb_gain  5", &fVbargraph9, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph7, "1", "");
		ui_interface->declare(&fVbargraph7, "symbol", "sb_gain_ 6");
		ui_interface->addVerticalBargraph("sb_gain  6", &fVbargraph7, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph5, "1", "");
		ui_interface->declare(&fVbargraph5, "symbol", "sb_gain_ 7");
		ui_interface->addVerticalBargraph("sb_gain  7", &fVbargraph5, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->closeBox();
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("main");
		ui_interface->declare(&fCheckbox0, "0", "");
		ui_interface->declare(&fCheckbox0, "symbol", "bypass");
		ui_interface->addCheckButton("bypass", &fCheckbox0);
		ui_interface->openHorizontalBox("leveler");
		ui_interface->declare(&fVslider0, "1", "");
		ui_interface->declare(&fVslider0, "symbol", "leveler_target");
		ui_interface->declare(&fVslider0, "unit", "dB");
		ui_interface->addVerticalSlider("target", &fVslider0, FAUSTFLOAT(-23.0f), FAUSTFLOAT(-6e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVbargraph1, "7", "");
		ui_interface->declare(&fVbargraph1, "symbol", "leveler_brake");
		ui_interface->declare(&fVbargraph1, "unit", "%");
		ui_interface->addVerticalBargraph("brake", &fVbargraph1, FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f));
		ui_interface->declare(&fVbargraph2, "8", "");
		ui_interface->declare(&fVbargraph2, "symbol", "leveler_gain");
		ui_interface->declare(&fVbargraph2, "unit", "dB");
		ui_interface->addVerticalBargraph("gain", &fVbargraph2, FAUSTFLOAT(-5e+01f), FAUSTFLOAT(5e+01f));
		ui_interface->declare(&fVbargraph0, "symbol", "leveler_meter_minimum");
		ui_interface->addVerticalBargraph("min_track", &fVbargraph0, FAUSTFLOAT(-1e+02f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVslider2, "symbol", "leveler_expander_offset");
		ui_interface->addVerticalSlider("thresh offset", &fVslider2, FAUSTFLOAT(6.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(4e+01f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("mbExpComp");
		ui_interface->declare(&fVslider1, "scale", "log");
		ui_interface->declare(&fVslider1, "symbol", "pre_lowcut");
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
		float fSlow2 = fSlow1 + -1.0f;
		float fSlow3 = fSlow1 + -9.0f;
		float fSlow4 = std::tan(fConst10 * float(fVslider1));
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
		float fSlow17 = float(fVslider5);
		float fSlow18 = float(fVslider6);
		float fSlow19 = float(fVslider7);
		float fSlow20 = float(fVslider8);
		float fSlow21 = float(fVslider9);
		float fSlow22 = float(fVslider10);
		float fSlow23 = float(fVslider11);
		float fSlow24 = fSlow1 + -15.0f;
		float fSlow25 = fSlow1 + -7.0f;
		for (int i0 = 0; i0 < count; i0 = i0 + 1) {
			float fTemp0 = float(input0[i0]);
			float fTemp1 = ((iSlow0) ? 0.0f : fTemp0);
			fVec0[0] = fTemp1;
			fRec15[0] = -(fSlow12 * (fSlow11 * fRec15[1] - fSlow7 * (fTemp1 - fVec0[1])));
			fRec14[0] = fRec15[0] - fSlow10 * (fSlow8 * fRec14[2] + fSlow6 * fRec14[1]);
			float fTemp2 = fSlow13 * (fRec14[2] + (fRec14[0] - 2.0f * fRec14[1]));
			fVec1[0] = fTemp2;
			fRec13[0] = -(fConst12 * (fConst11 * fRec13[1] - (fTemp2 + fVec1[1])));
			fRec12[0] = fRec13[0] - fConst9 * (fConst7 * fRec12[2] + fConst5 * fRec12[1]);
			float fTemp3 = std::fabs(fRec10[1]);
			fRec26[0] = fConst18 * fTemp3 + fConst17 * fRec26[1];
			float fTemp4 = std::min<float>(fRec26[0], fRec26[1]);
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
			fRec25[0] = fConst54 * std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(((iConst16) ? fRec26[0] : 3.4028235e+38f), ((iConst19) ? fVec2[iConst16] : 3.4028235e+38f)), ((iConst20) ? fVec3[iConst21] : 3.4028235e+38f)), ((iConst22) ? fVec4[iConst23] : 3.4028235e+38f)), ((iConst24) ? fVec5[(IOTA0 - iConst25) & 31] : 3.4028235e+38f)), ((iConst26) ? fVec6[(IOTA0 - iConst27) & 63] : 3.4028235e+38f)), ((iConst28) ? fVec7[(IOTA0 - iConst29) & 127] : 3.4028235e+38f)), ((iConst30) ? fVec8[(IOTA0 - iConst31) & 255] : 3.4028235e+38f)), ((iConst32) ? fVec9[(IOTA0 - iConst33) & 511] : 3.4028235e+38f)), ((iConst34) ? fVec10[(IOTA0 - iConst35) & 1023] : 3.4028235e+38f)), ((iConst36) ? fVec11[(IOTA0 - iConst37) & 2047] : 3.4028235e+38f)), ((iConst38) ? fVec12[(IOTA0 - iConst39) & 4095] : 3.4028235e+38f)), ((iConst40) ? fVec13[(IOTA0 - iConst41) & 8191] : 3.4028235e+38f)), ((iConst42) ? fVec14[(IOTA0 - iConst43) & 16383] : 3.4028235e+38f)), ((iConst44) ? fVec15[(IOTA0 - iConst45) & 32767] : 3.4028235e+38f)), ((iConst46) ? fVec16[(IOTA0 - iConst47) & 65535] : 3.4028235e+38f)), ((iConst48) ? fVec17[(IOTA0 - iConst49) & 131071] : 3.4028235e+38f)), ((iConst50) ? fVec18[(IOTA0 - iConst51) & 262143] : 3.4028235e+38f)), ((iConst52) ? fVec19[(IOTA0 - iConst53) & 524287] : 3.4028235e+38f)) + fConst15 * fRec25[1];
			float fTemp21 = std::max<float>(-6e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fRec25[0])));
			fVbargraph0 = FAUSTFLOAT(fTemp21);
			float fTemp22 = fTemp21;
			float fTemp23 = fRec38[1] + fConst55 * (fTemp3 - fRec39[1]);
			fRec38[0] = fConst57 * fTemp23 - fRec38[1];
			float fTemp24 = fRec39[1] + fConst58 * fTemp23;
			fRec39[0] = 2.0f * fTemp24 - fRec39[1];
			float fRec40 = fTemp3;
			float fRec41 = fConst59 * fTemp23;
			float fRec42 = fTemp24;
			float fTemp25 = fRec42 + 1.4142135f * fRec41;
			float fTemp26 = fRec33[1] + fConst55 * (fRec40 - (fTemp25 + fRec34[1]));
			fRec33[0] = fConst57 * fTemp26 - fRec33[1];
			float fTemp27 = fRec34[1] + fConst58 * fTemp26;
			fRec34[0] = 2.0f * fTemp27 - fRec34[1];
			float fRec35 = fRec40 - fTemp25;
			float fRec36 = fConst59 * fTemp26;
			float fRec37 = fTemp27;
			float fTemp28 = fRec37 + 1.4142135f * fRec36;
			float fTemp29 = fRec30[1] + fConst60 * (fRec35 - (fTemp28 + fRec31[1]));
			fRec30[0] = fConst62 * fTemp29 - fRec30[1];
			float fTemp30 = fRec31[1] + fConst63 * fTemp29;
			fRec31[0] = 2.0f * fTemp30 - fRec31[1];
			float fRec32 = fTemp30;
			float fTemp31 = fRec27[1] + fConst60 * (fRec32 - fRec28[1]);
			fRec27[0] = fConst62 * fTemp31 - fRec27[1];
			float fTemp32 = fRec28[1] + fConst63 * fTemp31;
			fRec28[0] = 2.0f * fTemp32 - fRec28[1];
			float fRec29 = fTemp32;
			float fTemp33 = std::fabs(fRec29);
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
			float fTemp41 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst3) ? fTemp33 : -3.4028235e+38f), ((iConst64) ? fVec21[iConst3] : -3.4028235e+38f)), ((iConst65) ? fVec22[iConst66] : -3.4028235e+38f)), ((iConst67) ? fVec23[iConst68] : -3.4028235e+38f)), ((iConst69) ? fVec24[(IOTA0 - iConst70) & 31] : -3.4028235e+38f)), ((iConst71) ? fVec25[(IOTA0 - iConst72) & 63] : -3.4028235e+38f)), ((iConst73) ? fVec26[(IOTA0 - iConst74) & 127] : -3.4028235e+38f)), ((iConst75) ? fVec27[(IOTA0 - iConst76) & 255] : -3.4028235e+38f)), ((iConst77) ? fVec28[(IOTA0 - iConst78) & 511] : -3.4028235e+38f))));
			int iTemp42 = (fTemp41 > (fSlow14 + fTemp22 + -12.0f)) + (fTemp41 > (fSlow14 + fTemp22 + 12.0f));
			float fTemp43 = std::max<float>(-3.4028235e+38f, 1e+02f * ((iTemp42 == 0) ? fTemp41 - fTemp22 - fSlow14 : ((iTemp42 == 1) ? -(0.020833334f * mydsp_faustpower2_f(fTemp41 + (-12.0f - fTemp22) - fSlow14)) : 0.0f)));
			float fTemp44 = ((fTemp43 > fRec24[1]) ? fConst80 : fConst79);
			fRec24[0] = fTemp43 * (1.0f - fTemp44) + fRec24[1] * fTemp44;
			float fTemp45 = std::min<float>(1.0f, std::max<float>(0.0f, std::pow(1e+01f, 0.05f * fRec24[0])));
			fVbargraph1 = FAUSTFLOAT(1e+02f * (1.0f - fTemp45));
			float fTemp46 = std::tan(fConst10 * std::min<float>(fConst13, fTemp45 * (fConst14 * std::fabs(fRec17[1]) + 0.0784f)));
			float fTemp47 = fTemp46 + 2.0f;
			float fTemp48 = fTemp46 * fTemp47 + 1.0f;
			fVec29[0] = fConst90 * fRec45[1] - fConst88 * fRec10[2];
			fRec46[0] = fConst93 * (fConst92 * fRec10[2] - (fVec29[1] + fConst87 * fRec46[1]) + fConst86 * fRec10[1]);
			fRec45[0] = fRec46[0];
			fVec30[0] = 0.50032705f * fRec45[1] - fConst98 * fRec43[1];
			fRec44[0] = fConst99 * (fVec30[1] - fConst96 * fRec44[1] - 1.0006541f * fRec45[1] + 0.50032705f * fRec45[0]);
			fRec43[0] = fRec44[0];
			float fTemp49 = mydsp_faustpower2_f(fRec43[0]);
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
			float fTemp57 = std::max<float>(-2e+01f, std::min<float>(2e+01f, fSlow1 + fRec16[1] + (0.691f - 4.3429446f * std::log(std::max<float>(1e-12f, fConst115 * (((iConst113) ? 0.86000985f * fVec39[(IOTA0 - iConst114) & 511] : 0.0f) + ((iConst111) ? 0.86000985f * fVec38[(IOTA0 - iConst112) & 255] : 0.0f) + ((iConst109) ? 0.86000985f * fVec37[(IOTA0 - iConst110) & 127] : 0.0f) + ((iConst107) ? 0.86000985f * fVec36[(IOTA0 - iConst108) & 63] : 0.0f) + ((iConst105) ? 0.86000985f * fVec35[(IOTA0 - iConst106) & 31] : 0.0f) + ((iConst103) ? 0.86000985f * fVec34[iConst104] : 0.0f) + ((iConst101) ? 0.86000985f * fVec33[iConst102] : 0.0f) + ((iConst100) ? 0.86000985f * fTemp49 : 0.0f) + ((iConst82) ? 0.86000985f * fVec32[iConst100] : 0.0f))))))) - (fRec19[1] * fTemp47 + fRec20[1]);
			float fTemp58 = fTemp46 * fTemp57 / fTemp48;
			fRec19[0] = fRec19[1] + 2.0f * fTemp58;
			float fTemp59 = fRec19[1] + fTemp58;
			float fTemp60 = fTemp46 * fTemp59;
			fRec20[0] = fRec20[1] + 2.0f * fTemp60;
			float fRec21 = fTemp59;
			float fRec22 = fTemp57 / fTemp48;
			float fRec23 = fRec20[1] + fTemp60;
			fRec17[0] = fRec21;
			float fRec18 = fRec23;
			fVbargraph2 = FAUSTFLOAT(fRec18);
			fRec16[0] = fVbargraph2;
			float fTemp61 = std::pow(1e+01f, 0.05f * fRec16[0]) * (fRec12[2] + fRec12[0] + 2.0f * fRec12[1]);
			fVec40[0] = fTemp61;
			float fTemp62 = fConst9 * fTemp61;
			float fTemp63 = std::fabs(fTemp62);
			fVec41[0] = fTemp63;
			float fTemp64 = std::max<float>(fTemp63, fVec41[1]);
			fVec42[0] = fTemp64;
			float fTemp65 = std::max<float>(fTemp64, fVec42[2]);
			fVec43[0] = fTemp65;
			float fTemp66 = std::max<float>(fTemp65, fVec43[4]);
			fVec44[0] = fTemp66;
			float fTemp67 = std::max<float>(fTemp66, fVec44[8]);
			fVec45[IOTA0 & 31] = fTemp67;
			float fTemp68 = std::max<float>(fTemp67, fVec45[(IOTA0 - 16) & 31]);
			fVec46[IOTA0 & 63] = fTemp68;
			float fTemp69 = std::max<float>(fTemp68, fVec46[(IOTA0 - 32) & 63]);
			fVec47[IOTA0 & 127] = fTemp69;
			float fTemp70 = std::max<float>(fTemp69, fVec47[(IOTA0 - 64) & 127]);
			fVec48[IOTA0 & 255] = fTemp70;
			fVec49[IOTA0 & 511] = std::max<float>(fTemp70, fVec48[(IOTA0 - 128) & 255]);
			float fTemp71 = std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst3) ? fTemp63 : -3.4028235e+38f), ((iConst64) ? fVec42[iConst3] : -3.4028235e+38f)), ((iConst65) ? fVec43[iConst66] : -3.4028235e+38f)), ((iConst67) ? fVec44[iConst68] : -3.4028235e+38f)), ((iConst69) ? fVec45[(IOTA0 - iConst70) & 31] : -3.4028235e+38f)), ((iConst71) ? fVec46[(IOTA0 - iConst72) & 63] : -3.4028235e+38f)), ((iConst73) ? fVec47[(IOTA0 - iConst74) & 127] : -3.4028235e+38f)), ((iConst75) ? fVec48[(IOTA0 - iConst76) & 255] : -3.4028235e+38f)), ((iConst77) ? fVec49[(IOTA0 - iConst78) & 511] : -3.4028235e+38f))));
			float fTemp72 = 2e+01f * fTemp71;
			int iTemp73 = (fTemp72 > -2e+01f) + (fTemp72 > -2e+01f);
			float fTemp74 = 2e+01f * (fTemp71 + 1.0f);
			float fTemp75 = std::max<float>(-3.4028235e+38f, 0.8f * ((iTemp73 == 0) ? fTemp74 : ((iTemp73 == 1) ? -(4194304.0f * mydsp_faustpower2_f(fTemp74 + -5.9604645e-08f)) : 0.0f)));
			float fTemp76 = ((fTemp75 > fRec11[1]) ? fConst116 : fConst15);
			fRec11[0] = fTemp75 * (1.0f - fTemp76) + fRec11[1] * fTemp76;
			float fTemp77 = std::min<float>(1.0f, std::max<float>(0.0f, std::pow(1e+01f, 0.05f * fRec11[0])));
			fVbargraph3 = FAUSTFLOAT(fTemp77);
			float fTemp78 = fTemp77;
			float fTemp79 = fRec95[1] + fConst117 * (fTemp62 - fRec96[1]);
			fRec95[0] = fConst119 * fTemp79 - fRec95[1];
			float fTemp80 = fRec96[1] + fConst120 * fTemp79;
			fRec96[0] = 2.0f * fTemp80 - fRec96[1];
			float fRec97 = fTemp62;
			float fRec98 = fConst121 * fTemp79;
			float fRec99 = fTemp80;
			float fTemp81 = fRec99 + 1.4142135f * fRec98;
			float fTemp82 = fRec90[1] + fConst117 * (fRec97 - (fTemp81 + fRec91[1]));
			fRec90[0] = fConst119 * fTemp82 - fRec90[1];
			float fTemp83 = fRec91[1] + fConst120 * fTemp82;
			fRec91[0] = 2.0f * fTemp83 - fRec91[1];
			float fRec92 = fRec97 - fTemp81;
			float fRec93 = fConst121 * fTemp82;
			float fRec94 = fTemp83;
			float fTemp84 = fRec94 + 1.4142135f * fRec93;
			float fTemp85 = fRec86[1] + fConst122 * (fRec92 - (fTemp84 + fRec87[1]));
			fRec86[0] = fConst124 * fTemp85 - fRec86[1];
			float fTemp86 = fRec87[1] + fConst125 * fTemp85;
			fRec87[0] = 2.0f * fTemp86 - fRec87[1];
			float fRec88 = fRec92 - fTemp84;
			float fRec89 = fConst126 * fTemp85;
			float fTemp87 = 2.828427f * fRec89;
			float fTemp88 = fRec82[1] + fConst127 * (fRec88 - (fTemp87 + fRec83[1]));
			fRec82[0] = fConst129 * fTemp88 - fRec82[1];
			float fTemp89 = fRec83[1] + fConst130 * fTemp88;
			fRec83[0] = 2.0f * fTemp89 - fRec83[1];
			float fRec84 = fRec88 - fTemp87;
			float fRec85 = fConst131 * fTemp88;
			float fTemp90 = 2.828427f * fRec85;
			float fTemp91 = fRec78[1] + fConst60 * (fRec84 - (fTemp90 + fRec79[1]));
			fRec78[0] = fConst62 * fTemp91 - fRec78[1];
			float fTemp92 = fRec79[1] + fConst63 * fTemp91;
			fRec79[0] = 2.0f * fTemp92 - fRec79[1];
			float fRec80 = fRec84 - fTemp90;
			float fRec81 = fConst132 * fTemp91;
			float fTemp93 = 2.828427f * fRec81;
			float fTemp94 = fRec73[1] + fConst133 * (fRec80 - (fTemp93 + fRec74[1]));
			fRec73[0] = fConst135 * fTemp94 - fRec73[1];
			float fTemp95 = fRec74[1] + fConst136 * fTemp94;
			fRec74[0] = 2.0f * fTemp95 - fRec74[1];
			float fRec75 = fRec80 - fTemp93;
			float fRec76 = fConst137 * fTemp94;
			float fRec77 = fTemp95;
			float fTemp96 = fRec77 + 1.4142135f * fRec76;
			float fTemp97 = fRec68[1] + fConst133 * (fRec75 - (fTemp96 + fRec69[1]));
			fRec68[0] = fConst135 * fTemp97 - fRec68[1];
			float fTemp98 = fRec69[1] + fConst136 * fTemp97;
			fRec69[0] = 2.0f * fTemp98 - fRec69[1];
			float fRec70 = fRec75 - fTemp96;
			float fRec71 = fConst137 * fTemp97;
			float fRec72 = fTemp98;
			float fTemp99 = fRec72 + 1.4142135f * fRec71;
			float fTemp100 = fRec64[1] + fConst138 * (fRec70 - (fTemp99 + fRec65[1]));
			fRec64[0] = fConst140 * fTemp100 - fRec64[1];
			float fTemp101 = fRec65[1] + fConst141 * fTemp100;
			fRec65[0] = 2.0f * fTemp101 - fRec65[1];
			float fRec66 = fRec70 - fTemp99;
			float fRec67 = fConst142 * fTemp100;
			float fTemp102 = 2.828427f * fRec67;
			float fTemp103 = fRec59[1] + fConst143 * (fRec66 - (fTemp102 + fRec60[1]));
			fRec59[0] = fConst145 * fTemp103 - fRec59[1];
			float fTemp104 = fRec60[1] + fConst146 * fTemp103;
			fRec60[0] = 2.0f * fTemp104 - fRec60[1];
			float fRec61 = fRec66 - fTemp102;
			float fRec62 = fConst147 * fTemp103;
			float fRec63 = fTemp104;
			float fTemp105 = fRec63 + 1.4142135f * fRec62;
			float fTemp106 = fRec54[1] + fConst143 * (fRec61 - (fTemp105 + fRec55[1]));
			fRec54[0] = fConst145 * fTemp106 - fRec54[1];
			float fTemp107 = fRec55[1] + fConst146 * fTemp106;
			fRec55[0] = 2.0f * fTemp107 - fRec55[1];
			float fRec56 = fRec61 - fTemp105;
			float fRec57 = fConst147 * fTemp106;
			float fRec58 = fTemp107;
			float fTemp108 = fRec56 - (fRec58 + 1.4142135f * fRec57);
			fVec50[0] = fTemp108;
			fVec51[0] = fConst150 * fVec50[1] - fConst90 * fRec52[1];
			fRec53[0] = fConst93 * (fVec51[1] - fConst87 * fRec53[1] + fConst149 * fVec50[1] + fConst148 * fTemp108);
			fRec52[0] = fRec53[0];
			fVec52[0] = 0.50032705f * fRec52[1] - fConst98 * fRec50[1];
			fRec51[0] = fConst99 * (fVec52[1] - fConst96 * fRec51[1] - 1.0006541f * fRec52[1] + 0.50032705f * fRec52[0]);
			fRec50[0] = fRec51[0];
			float fTemp109 = std::fabs(0.92736715f * fRec50[0]);
			fRec49[0] = std::max<float>(fTemp109, fConst151 * fRec49[1] + fConst152 * fTemp109);
			fRec48[0] = fConst18 * fRec49[0] + fConst17 * fRec48[1];
			fVec53[0] = fConst90 * fRec104[1] - fConst154 * fVec40[1];
			fRec105[0] = fConst93 * (fConst155 * fVec40[1] - (fVec53[1] + fConst87 * fRec105[1]) + fConst153 * fTemp61);
			fRec104[0] = fRec105[0];
			fVec54[0] = 0.50032705f * fRec104[1] - fConst98 * fRec102[1];
			fRec103[0] = fConst99 * (fVec54[1] - fConst96 * fRec103[1] - 1.0006541f * fRec104[1] + 0.50032705f * fRec104[0]);
			fRec102[0] = fRec103[0];
			float fTemp110 = std::fabs(0.92736715f * fRec102[0]);
			fRec101[0] = std::max<float>(fTemp110, fConst151 * fRec101[1] + fConst152 * fTemp110);
			fRec100[0] = fConst18 * fRec101[0] + fConst17 * fRec100[1];
			float fTemp111 = std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec100[0])));
			float fTemp112 = 2e+01f * (fTemp111 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec48[0]))));
			fVbargraph4 = FAUSTFLOAT(-fTemp112);
			fRec47[0] = fConst156 * (fSlow15 - -fTemp112) + fConst116 * fRec47[1];
			float fTemp113 = std::pow(1e+01f, fSlow16 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec47[0])) * fTemp78);
			fVbargraph5 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp113)));
			float fTemp114 = fRec113[1] + fConst143 * (fRec63 - fRec114[1]);
			fRec113[0] = fConst145 * fTemp114 - fRec113[1];
			float fTemp115 = fRec114[1] + fConst146 * fTemp114;
			fRec114[0] = 2.0f * fTemp115 - fRec114[1];
			fRec115[0] = fTemp115;
			fVec55[0] = fConst150 * fRec115[1] - fConst90 * fRec111[1];
			fRec112[0] = fConst93 * (fVec55[1] - fConst87 * fRec112[1] + fConst149 * fRec115[1] + fConst148 * fRec115[0]);
			fRec111[0] = fRec112[0];
			fVec56[0] = 0.50032705f * fRec111[1] - fConst98 * fRec109[1];
			fRec110[0] = fConst99 * (fVec56[1] - fConst96 * fRec110[1] - 1.0006541f * fRec111[1] + 0.50032705f * fRec111[0]);
			fRec109[0] = fRec110[0];
			float fTemp116 = std::fabs(0.92736715f * fRec109[0]);
			fRec108[0] = std::max<float>(fTemp116, fConst151 * fRec108[1] + fConst152 * fTemp116);
			fRec107[0] = fConst18 * fRec108[0] + fConst17 * fRec107[1];
			float fTemp117 = 2e+01f * (fTemp111 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec107[0]))));
			fVbargraph6 = FAUSTFLOAT(-fTemp117);
			fRec106[0] = fConst158 * (fSlow17 - -fTemp117) + fConst157 * fRec106[1];
			float fTemp118 = std::pow(1e+01f, fSlow16 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec106[0])) * fTemp78);
			fVbargraph7 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp118)));
			float fTemp119 = fRec137[1] + fConst133 * (fRec77 - fRec138[1]);
			fRec137[0] = fConst135 * fTemp119 - fRec137[1];
			float fTemp120 = fRec138[1] + fConst136 * fTemp119;
			fRec138[0] = 2.0f * fTemp120 - fRec138[1];
			float fRec139 = fTemp120;
			float fTemp121 = fRec133[1] + fConst143 * (fRec139 - fRec134[1]);
			fRec133[0] = fConst145 * fTemp121 - fRec133[1];
			float fTemp122 = fRec134[1] + fConst146 * fTemp121;
			fRec134[0] = 2.0f * fTemp122 - fRec134[1];
			float fRec135 = fRec139;
			float fRec136 = fConst147 * fTemp121;
			float fTemp123 = 2.828427f * fRec136;
			float fTemp124 = fRec128[1] + fConst138 * (fRec135 - (fTemp123 + fRec129[1]));
			fRec128[0] = fConst140 * fTemp124 - fRec128[1];
			float fTemp125 = fRec129[1] + fConst141 * fTemp124;
			fRec129[0] = 2.0f * fTemp125 - fRec129[1];
			float fRec130 = fRec135 - fTemp123;
			float fRec131 = fConst142 * fTemp124;
			float fRec132 = fTemp125;
			float fTemp126 = fRec132 + 1.4142135f * fRec131;
			float fTemp127 = fRec123[1] + fConst138 * (fRec130 - (fTemp126 + fRec124[1]));
			fRec123[0] = fConst140 * fTemp127 - fRec123[1];
			float fTemp128 = fRec124[1] + fConst141 * fTemp127;
			fRec124[0] = 2.0f * fTemp128 - fRec124[1];
			float fRec125 = fRec130 - fTemp126;
			float fRec126 = fConst142 * fTemp127;
			float fRec127 = fTemp128;
			float fTemp129 = fRec125 - (fRec127 + 1.4142135f * fRec126);
			fVec57[0] = fTemp129;
			fVec58[0] = fConst150 * fVec57[1] - fConst90 * fRec121[1];
			fRec122[0] = fConst93 * (fVec58[1] - fConst87 * fRec122[1] + fConst149 * fVec57[1] + fConst148 * fTemp129);
			fRec121[0] = fRec122[0];
			fVec59[0] = 0.50032705f * fRec121[1] - fConst98 * fRec119[1];
			fRec120[0] = fConst99 * (fVec59[1] - fConst96 * fRec120[1] - 1.0006541f * fRec121[1] + 0.50032705f * fRec121[0]);
			fRec119[0] = fRec120[0];
			float fTemp130 = std::fabs(0.92736715f * fRec119[0]);
			fRec118[0] = std::max<float>(fTemp130, fConst151 * fRec118[1] + fConst152 * fTemp130);
			fRec117[0] = fConst18 * fRec118[0] + fConst17 * fRec117[1];
			float fTemp131 = 2e+01f * (fTemp111 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec117[0]))));
			fVbargraph8 = FAUSTFLOAT(-fTemp131);
			fRec116[0] = fConst160 * (fSlow18 - -fTemp131) + fConst159 * fRec116[1];
			float fTemp132 = std::pow(1e+01f, fSlow16 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec116[0])) * fTemp78);
			fVbargraph9 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp132)));
			float fTemp133 = fRec147[1] + fConst138 * (fRec132 - fRec148[1]);
			fRec147[0] = fConst140 * fTemp133 - fRec147[1];
			float fTemp134 = fRec148[1] + fConst141 * fTemp133;
			fRec148[0] = 2.0f * fTemp134 - fRec148[1];
			fRec149[0] = fTemp134;
			fVec60[0] = fConst150 * fRec149[1] - fConst90 * fRec145[1];
			fRec146[0] = fConst93 * (fVec60[1] - fConst87 * fRec146[1] + fConst149 * fRec149[1] + fConst148 * fRec149[0]);
			fRec145[0] = fRec146[0];
			fVec61[0] = 0.50032705f * fRec145[1] - fConst98 * fRec143[1];
			fRec144[0] = fConst99 * (fVec61[1] - fConst96 * fRec144[1] - 1.0006541f * fRec145[1] + 0.50032705f * fRec145[0]);
			fRec143[0] = fRec144[0];
			float fTemp135 = std::fabs(0.92736715f * fRec143[0]);
			fRec142[0] = std::max<float>(fTemp135, fConst151 * fRec142[1] + fConst152 * fTemp135);
			fRec141[0] = fConst18 * fRec142[0] + fConst17 * fRec141[1];
			float fTemp136 = 2e+01f * (fTemp111 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec141[0]))));
			fVbargraph10 = FAUSTFLOAT(-fTemp136);
			fRec140[0] = fConst152 * (fSlow19 - -fTemp136) + fConst151 * fRec140[1];
			float fTemp137 = std::pow(1e+01f, fSlow16 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec140[0])) * fTemp78);
			fVbargraph11 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp137)));
			float fTemp138 = fRec193[1] + fConst117 * (fRec99 - fRec194[1]);
			fRec193[0] = fConst119 * fTemp138 - fRec193[1];
			float fTemp139 = fRec194[1] + fConst120 * fTemp138;
			fRec194[0] = 2.0f * fTemp139 - fRec194[1];
			float fRec195 = fTemp139;
			float fTemp140 = fRec189[1] + fConst133 * (fRec195 - fRec190[1]);
			fRec189[0] = fConst135 * fTemp140 - fRec189[1];
			float fTemp141 = fRec190[1] + fConst136 * fTemp140;
			fRec190[0] = 2.0f * fTemp141 - fRec190[1];
			float fRec191 = fRec195;
			float fRec192 = fConst137 * fTemp140;
			float fTemp142 = 2.828427f * fRec192;
			float fTemp143 = fRec185[1] + fConst138 * (fRec191 - (fTemp142 + fRec186[1]));
			fRec185[0] = fConst140 * fTemp143 - fRec185[1];
			float fTemp144 = fRec186[1] + fConst141 * fTemp143;
			fRec186[0] = 2.0f * fTemp144 - fRec186[1];
			float fRec187 = fRec191 - fTemp142;
			float fRec188 = fConst142 * fTemp143;
			float fTemp145 = 2.828427f * fRec188;
			float fTemp146 = fRec181[1] + fConst143 * (fRec187 - (fTemp145 + fRec182[1]));
			fRec181[0] = fConst145 * fTemp146 - fRec181[1];
			float fTemp147 = fRec182[1] + fConst146 * fTemp146;
			fRec182[0] = 2.0f * fTemp147 - fRec182[1];
			float fRec183 = fRec187 - fTemp145;
			float fRec184 = fConst147 * fTemp146;
			float fTemp148 = 2.828427f * fRec184;
			float fTemp149 = fRec176[1] + fConst122 * (fRec183 - (fTemp148 + fRec177[1]));
			fRec176[0] = fConst124 * fTemp149 - fRec176[1];
			float fTemp150 = fRec177[1] + fConst125 * fTemp149;
			fRec177[0] = 2.0f * fTemp150 - fRec177[1];
			float fRec178 = fRec183 - fTemp148;
			float fRec179 = fConst126 * fTemp149;
			float fRec180 = fTemp150;
			float fTemp151 = fRec180 + 1.4142135f * fRec179;
			float fTemp152 = fRec171[1] + fConst122 * (fRec178 - (fTemp151 + fRec172[1]));
			fRec171[0] = fConst124 * fTemp152 - fRec171[1];
			float fTemp153 = fRec172[1] + fConst125 * fTemp152;
			fRec172[0] = 2.0f * fTemp153 - fRec172[1];
			float fRec173 = fRec178 - fTemp151;
			float fRec174 = fConst126 * fTemp152;
			float fRec175 = fTemp153;
			float fTemp154 = fRec175 + 1.4142135f * fRec174;
			float fTemp155 = fRec167[1] + fConst127 * (fRec173 - (fTemp154 + fRec168[1]));
			fRec167[0] = fConst129 * fTemp155 - fRec167[1];
			float fTemp156 = fRec168[1] + fConst130 * fTemp155;
			fRec168[0] = 2.0f * fTemp156 - fRec168[1];
			float fRec169 = fRec173 - fTemp154;
			float fRec170 = fConst131 * fTemp155;
			float fTemp157 = 2.828427f * fRec170;
			float fTemp158 = fRec162[1] + fConst60 * (fRec169 - (fTemp157 + fRec163[1]));
			fRec162[0] = fConst62 * fTemp158 - fRec162[1];
			float fTemp159 = fRec163[1] + fConst63 * fTemp158;
			fRec163[0] = 2.0f * fTemp159 - fRec163[1];
			float fRec164 = fRec169 - fTemp157;
			float fRec165 = fConst132 * fTemp158;
			float fRec166 = fTemp159;
			float fTemp160 = fRec166 + 1.4142135f * fRec165;
			float fTemp161 = fRec157[1] + fConst60 * (fRec164 - (fTemp160 + fRec158[1]));
			fRec157[0] = fConst62 * fTemp161 - fRec157[1];
			float fTemp162 = fRec158[1] + fConst63 * fTemp161;
			fRec158[0] = 2.0f * fTemp162 - fRec158[1];
			float fRec159 = fRec164 - fTemp160;
			float fRec160 = fConst132 * fTemp161;
			float fRec161 = fTemp162;
			float fTemp163 = fRec159 - (fRec161 + 1.4142135f * fRec160);
			fVec62[0] = fTemp163;
			fVec63[0] = fConst150 * fVec62[1] - fConst90 * fRec155[1];
			fRec156[0] = fConst93 * (fVec63[1] - fConst87 * fRec156[1] + fConst149 * fVec62[1] + fConst148 * fTemp163);
			fRec155[0] = fRec156[0];
			fVec64[0] = 0.50032705f * fRec155[1] - fConst98 * fRec153[1];
			fRec154[0] = fConst99 * (fVec64[1] - fConst96 * fRec154[1] - 1.0006541f * fRec155[1] + 0.50032705f * fRec155[0]);
			fRec153[0] = fRec154[0];
			float fTemp164 = std::fabs(0.92736715f * fRec153[0]);
			fRec152[0] = std::max<float>(fTemp164, fConst151 * fRec152[1] + fConst152 * fTemp164);
			fRec151[0] = fConst18 * fRec152[0] + fConst17 * fRec151[1];
			float fTemp165 = 2e+01f * (fTemp111 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec151[0]))));
			fVbargraph12 = FAUSTFLOAT(-fTemp165);
			fRec150[0] = fConst162 * (fSlow20 - -fTemp165) + fConst161 * fRec150[1];
			float fTemp166 = std::pow(1e+01f, fSlow16 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec150[0])) * fTemp78);
			fVbargraph13 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp166)));
			float fTemp167 = fRec203[1] + fConst60 * (fRec166 - fRec204[1]);
			fRec203[0] = fConst62 * fTemp167 - fRec203[1];
			float fTemp168 = fRec204[1] + fConst63 * fTemp167;
			fRec204[0] = 2.0f * fTemp168 - fRec204[1];
			fRec205[0] = fTemp168;
			fVec65[0] = fConst150 * fRec205[1] - fConst90 * fRec201[1];
			fRec202[0] = fConst93 * (fVec65[1] - fConst87 * fRec202[1] + fConst149 * fRec205[1] + fConst148 * fRec205[0]);
			fRec201[0] = fRec202[0];
			fVec66[0] = 0.50032705f * fRec201[1] - fConst98 * fRec199[1];
			fRec200[0] = fConst99 * (fVec66[1] - fConst96 * fRec200[1] - 1.0006541f * fRec201[1] + 0.50032705f * fRec201[0]);
			fRec199[0] = fRec200[0];
			float fTemp169 = std::fabs(0.92736715f * fRec199[0]);
			fRec198[0] = std::max<float>(fTemp169, fConst151 * fRec198[1] + fConst152 * fTemp169);
			fRec197[0] = fConst18 * fRec198[0] + fConst17 * fRec197[1];
			float fTemp170 = 2e+01f * (fTemp111 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec197[0]))));
			fVbargraph14 = FAUSTFLOAT(-fTemp170);
			fRec196[0] = fConst164 * (fSlow21 - -fTemp170) + fConst163 * fRec196[1];
			float fTemp171 = std::pow(1e+01f, fSlow16 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec196[0])) * fTemp78);
			fVbargraph15 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp171)));
			float fTemp172 = fRec227[1] + fConst122 * (fRec180 - fRec228[1]);
			fRec227[0] = fConst124 * fTemp172 - fRec227[1];
			float fTemp173 = fRec228[1] + fConst125 * fTemp172;
			fRec228[0] = 2.0f * fTemp173 - fRec228[1];
			float fRec229 = fTemp173;
			float fTemp174 = fRec223[1] + fConst60 * (fRec229 - fRec224[1]);
			fRec223[0] = fConst62 * fTemp174 - fRec223[1];
			float fTemp175 = fRec224[1] + fConst63 * fTemp174;
			fRec224[0] = 2.0f * fTemp175 - fRec224[1];
			float fRec225 = fRec229;
			float fRec226 = fConst132 * fTemp174;
			float fTemp176 = 2.828427f * fRec226;
			float fTemp177 = fRec218[1] + fConst127 * (fRec225 - (fTemp176 + fRec219[1]));
			fRec218[0] = fConst129 * fTemp177 - fRec218[1];
			float fTemp178 = fRec219[1] + fConst130 * fTemp177;
			fRec219[0] = 2.0f * fTemp178 - fRec219[1];
			float fRec220 = fRec225 - fTemp176;
			float fRec221 = fConst131 * fTemp177;
			float fRec222 = fTemp178;
			float fTemp179 = fRec222 + 1.4142135f * fRec221;
			float fTemp180 = fRec213[1] + fConst127 * (fRec220 - (fTemp179 + fRec214[1]));
			fRec213[0] = fConst129 * fTemp180 - fRec213[1];
			float fTemp181 = fRec214[1] + fConst130 * fTemp180;
			fRec214[0] = 2.0f * fTemp181 - fRec214[1];
			float fRec215 = fRec220 - fTemp179;
			float fRec216 = fConst131 * fTemp180;
			float fRec217 = fTemp181;
			float fTemp182 = fRec215 - (fRec217 + 1.4142135f * fRec216);
			fVec67[0] = fTemp182;
			fVec68[0] = fConst150 * fVec67[1] - fConst90 * fRec211[1];
			fRec212[0] = fConst93 * (fVec68[1] - fConst87 * fRec212[1] + fConst149 * fVec67[1] + fConst148 * fTemp182);
			fRec211[0] = fRec212[0];
			fVec69[0] = 0.50032705f * fRec211[1] - fConst98 * fRec209[1];
			fRec210[0] = fConst99 * (fVec69[1] - fConst96 * fRec210[1] - 1.0006541f * fRec211[1] + 0.50032705f * fRec211[0]);
			fRec209[0] = fRec210[0];
			float fTemp183 = std::fabs(0.92736715f * fRec209[0]);
			fRec208[0] = std::max<float>(fTemp183, fConst151 * fRec208[1] + fConst152 * fTemp183);
			fRec207[0] = fConst18 * fRec208[0] + fConst17 * fRec207[1];
			float fTemp184 = 2e+01f * (fTemp111 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec207[0]))));
			fVbargraph16 = FAUSTFLOAT(-fTemp184);
			fRec206[0] = fConst166 * (fSlow22 - -fTemp184) + fConst165 * fRec206[1];
			float fTemp185 = std::pow(1e+01f, fSlow16 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec206[0])) * fTemp78);
			fVbargraph17 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp185)));
			float fTemp186 = fRec237[1] + fConst127 * (fRec222 - fRec238[1]);
			fRec237[0] = fConst129 * fTemp186 - fRec237[1];
			float fTemp187 = fRec238[1] + fConst130 * fTemp186;
			fRec238[0] = 2.0f * fTemp187 - fRec238[1];
			fRec239[0] = fTemp187;
			fVec70[0] = fConst150 * fRec239[1] - fConst90 * fRec235[1];
			fRec236[0] = fConst93 * (fVec70[1] - fConst87 * fRec236[1] + fConst149 * fRec239[1] + fConst148 * fRec239[0]);
			fRec235[0] = fRec236[0];
			fVec71[0] = 0.50032705f * fRec235[1] - fConst98 * fRec233[1];
			fRec234[0] = fConst99 * (fVec71[1] - fConst96 * fRec234[1] - 1.0006541f * fRec235[1] + 0.50032705f * fRec235[0]);
			fRec233[0] = fRec234[0];
			float fTemp188 = std::fabs(0.92736715f * fRec233[0]);
			fRec232[0] = std::max<float>(fTemp188, fConst151 * fRec232[1] + fConst152 * fTemp188);
			fRec231[0] = fConst18 * fRec232[0] + fConst17 * fRec231[1];
			float fTemp189 = 2e+01f * (std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec231[0]))) - fTemp111);
			fVbargraph18 = FAUSTFLOAT(fTemp189);
			fRec230[0] = fConst167 * (fSlow23 - fTemp189) + fConst79 * fRec230[1];
			float fTemp190 = std::pow(1e+01f, fSlow16 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec230[0])) * fTemp78);
			fVbargraph19 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp190)));
			fRec10[0] = fRec239[0] * fTemp190 + fTemp182 * fTemp185 + fRec205[0] * fTemp171 + fTemp163 * fTemp166 + fRec149[0] * fTemp137 + fTemp129 * fTemp132 + fRec115[0] * fTemp118 + fTemp108 * fTemp113;
			float fTemp191 = fRec6[1] + fConst117 * (fRec10[0] - fRec7[1]);
			fRec6[0] = fConst119 * fTemp191 - fRec6[1];
			float fTemp192 = fRec7[1] + fConst120 * fTemp191;
			fRec7[0] = 2.0f * fTemp192 - fRec7[1];
			float fRec8 = fConst121 * fTemp191;
			float fRec9 = fTemp192;
			float fTemp193 = fRec9 + 1.4142135f * fRec8;
			float fTemp194 = fRec2[1] + fConst117 * (fRec10[0] - (fTemp193 + fRec3[1]));
			fRec2[0] = fConst119 * fTemp194 - fRec2[1];
			float fTemp195 = fRec3[1] + fConst120 * fTemp194;
			fRec3[0] = 2.0f * fTemp195 - fRec3[1];
			float fRec4 = fConst121 * fTemp194;
			float fRec5 = fTemp195;
			float fTemp196 = fRec9 + fRec5;
			float fTemp197 = fRec8 + fRec4;
			float fTemp198 = 1.4142135f * fTemp197;
			float fTemp199 = fTemp198 + fTemp196;
			float fTemp200 = fRec247[1] + fConst122 * (fRec10[0] - (fTemp199 + fRec248[1]));
			fRec247[0] = fConst124 * fTemp200 - fRec247[1];
			float fTemp201 = fRec248[1] + fConst125 * fTemp200;
			fRec248[0] = 2.0f * fTemp201 - fRec248[1];
			float fRec249 = fConst126 * fTemp200;
			float fTemp202 = fTemp198 + fTemp196 + 2.828427f * fRec249;
			float fTemp203 = fRec244[1] + fConst127 * (fRec10[0] - (fTemp202 + fRec245[1]));
			fRec244[0] = fConst129 * fTemp203 - fRec244[1];
			float fTemp204 = fRec245[1] + fConst130 * fTemp203;
			fRec245[0] = 2.0f * fTemp204 - fRec245[1];
			float fRec246 = fConst131 * fTemp203;
			float fTemp205 = fRec249 + fRec246;
			float fTemp206 = fTemp199 + 2.828427f * fTemp205;
			float fTemp207 = fRec250[1] + fConst60 * (fRec10[0] - (fTemp206 + fRec251[1]));
			fRec250[0] = fConst62 * fTemp207 - fRec250[1];
			float fTemp208 = fRec251[1] + fConst63 * fTemp207;
			fRec251[0] = 2.0f * fTemp208 - fRec251[1];
			float fRec252 = fConst132 * fTemp207;
			float fTemp209 = fRec252 + fTemp205;
			float fTemp210 = 2.828427f * fTemp209;
			float fTemp211 = fTemp199 + fTemp210;
			float fTemp212 = fRec240[1] + fConst133 * (fRec10[0] - (fTemp211 + fRec241[1]));
			fRec240[0] = fConst135 * fTemp212 - fRec240[1];
			float fTemp213 = fRec241[1] + fConst136 * fTemp212;
			fRec241[0] = 2.0f * fTemp213 - fRec241[1];
			float fRec242 = fConst137 * fTemp212;
			float fRec243 = fTemp213;
			float fTemp214 = fRec243 + fTemp196;
			float fTemp215 = fRec242 + fTemp197;
			float fTemp216 = 1.4142135f * fTemp215 + fTemp210 + fTemp214;
			float fTemp217 = fRec253[1] + fConst133 * (fRec10[0] - (fTemp216 + fRec254[1]));
			fRec253[0] = fConst135 * fTemp217 - fRec253[1];
			float fTemp218 = fRec254[1] + fConst136 * fTemp217;
			fRec254[0] = 2.0f * fTemp218 - fRec254[1];
			float fRec255 = fConst137 * fTemp217;
			float fRec256 = fTemp218;
			float fTemp219 = fRec256 + fTemp214;
			float fTemp220 = fRec255 + fTemp215;
			float fTemp221 = 1.4142135f * fTemp220;
			float fTemp222 = fTemp221 + fTemp210 + fTemp219;
			float fTemp223 = fRec261[1] + fConst138 * (fRec10[0] - (fTemp222 + fRec262[1]));
			fRec261[0] = fConst140 * fTemp223 - fRec261[1];
			float fTemp224 = fRec262[1] + fConst141 * fTemp223;
			fRec262[0] = 2.0f * fTemp224 - fRec262[1];
			float fRec263 = fConst142 * fTemp223;
			float fTemp225 = 2.828427f * (fRec263 + fTemp209);
			float fTemp226 = fTemp221 + fTemp219 + fTemp225;
			float fTemp227 = fRec257[1] + fConst143 * (fRec10[0] - (fTemp226 + fRec258[1]));
			fRec257[0] = fConst145 * fTemp227 - fRec257[1];
			float fTemp228 = fRec258[1] + fConst146 * fTemp227;
			fRec258[0] = 2.0f * fTemp228 - fRec258[1];
			float fRec259 = fConst147 * fTemp227;
			float fRec260 = fTemp228;
			float fTemp229 = fRec260 + fTemp219;
			float fTemp230 = fRec259 + fTemp220;
			float fTemp231 = 1.4142135f * fTemp230 + fTemp225 + fTemp229;
			float fTemp232 = fRec264[1] + fConst143 * (fRec10[0] - (fTemp231 + fRec265[1]));
			fRec264[0] = fConst145 * fTemp232 - fRec264[1];
			float fTemp233 = fRec265[1] + fConst146 * fTemp232;
			fRec265[0] = 2.0f * fTemp233 - fRec265[1];
			float fRec266 = fConst147 * fTemp232;
			float fRec267 = fTemp233;
			float fTemp234 = fRec10[0] - (1.4142135f * (fRec266 + fTemp230) + fTemp225 + fRec267 + fTemp229);
			float fTemp235 = std::fabs(fTemp234);
			fVec72[0] = fTemp235;
			float fTemp236 = std::max<float>(fTemp235, fVec72[1]);
			fVec73[0] = fTemp236;
			float fTemp237 = std::max<float>(fTemp236, fVec73[2]);
			fVec74[0] = fTemp237;
			float fTemp238 = std::max<float>(fTemp237, fVec74[4]);
			fVec75[0] = fTemp238;
			float fTemp239 = std::max<float>(fTemp238, fVec75[8]);
			fVec76[IOTA0 & 31] = fTemp239;
			float fTemp240 = std::max<float>(fTemp239, fVec76[(IOTA0 - 16) & 31]);
			fVec77[IOTA0 & 63] = fTemp240;
			float fTemp241 = std::max<float>(fTemp240, fVec77[(IOTA0 - 32) & 63]);
			fVec78[IOTA0 & 127] = fTemp241;
			float fTemp242 = std::max<float>(fTemp241, fVec78[(IOTA0 - 64) & 127]);
			fVec79[IOTA0 & 255] = fTemp242;
			float fTemp243 = std::max<float>(fTemp242, fVec79[(IOTA0 - 128) & 255]);
			fVec80[IOTA0 & 511] = fTemp243;
			fVec81[IOTA0 & 511] = std::max<float>(fTemp243, fVec80[(IOTA0 - 256) & 511]);
			float fTemp244 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst1) ? fTemp235 : -3.4028235e+38f), ((iConst168) ? fVec73[iConst1] : -3.4028235e+38f)), ((iConst169) ? fVec74[iConst170] : -3.4028235e+38f)), ((iConst171) ? fVec75[iConst172] : -3.4028235e+38f)), ((iConst173) ? fVec76[(IOTA0 - iConst174) & 31] : -3.4028235e+38f)), ((iConst175) ? fVec77[(IOTA0 - iConst176) & 63] : -3.4028235e+38f)), ((iConst177) ? fVec78[(IOTA0 - iConst178) & 127] : -3.4028235e+38f)), ((iConst179) ? fVec79[(IOTA0 - iConst180) & 255] : -3.4028235e+38f)), ((iConst181) ? fVec80[(IOTA0 - iConst182) & 511] : -3.4028235e+38f)), ((iConst183) ? fVec81[(IOTA0 - iConst184) & 511] : -3.4028235e+38f))));
			int iTemp245 = (fTemp244 > fSlow24) + (fTemp244 > fSlow3);
			float fTemp246 = std::max<float>(-12.0f, 0.75f * ((iTemp245 == 0) ? fTemp244 + 12.0f - fSlow1 : ((iTemp245 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp244 + 9.0f - fSlow1)) : 0.0f)));
			float fTemp247 = ((fTemp246 > fRec1[1]) ? fConst80 : fConst79);
			fRec1[0] = fTemp246 * (1.0f - fTemp247) + fRec1[1] * fTemp247;
			float fTemp248 = fRec292[1] + fConst117 * (fRec9 - fRec293[1]);
			fRec292[0] = fConst119 * fTemp248 - fRec292[1];
			float fTemp249 = fRec293[1] + fConst120 * fTemp248;
			fRec293[0] = 2.0f * fTemp249 - fRec293[1];
			float fRec294 = fTemp249;
			float fTemp250 = fRec289[1] + fConst133 * (fRec294 - fRec290[1]);
			fRec289[0] = fConst135 * fTemp250 - fRec289[1];
			float fTemp251 = fRec290[1] + fConst136 * fTemp250;
			fRec290[0] = 2.0f * fTemp251 - fRec290[1];
			float fRec291 = fConst137 * fTemp250;
			float fTemp252 = 2.828427f * fRec291;
			float fTemp253 = fRec286[1] + fConst138 * (fRec294 - (fTemp252 + fRec287[1]));
			fRec286[0] = fConst140 * fTemp253 - fRec286[1];
			float fTemp254 = fRec287[1] + fConst141 * fTemp253;
			fRec287[0] = 2.0f * fTemp254 - fRec287[1];
			float fRec288 = fConst142 * fTemp253;
			float fTemp255 = fRec291 + fRec288;
			float fTemp256 = 2.828427f * fTemp255;
			float fTemp257 = fRec295[1] + fConst143 * (fRec294 - (fTemp256 + fRec296[1]));
			fRec295[0] = fConst145 * fTemp257 - fRec295[1];
			float fTemp258 = fRec296[1] + fConst146 * fTemp257;
			fRec296[0] = 2.0f * fTemp258 - fRec296[1];
			float fRec297 = fConst147 * fTemp257;
			float fTemp259 = fRec297 + fTemp255;
			float fTemp260 = 2.828427f * fTemp259;
			float fTemp261 = fRec282[1] + fConst122 * (fRec294 - (fTemp260 + fRec283[1]));
			fRec282[0] = fConst124 * fTemp261 - fRec282[1];
			float fTemp262 = fRec283[1] + fConst125 * fTemp261;
			fRec283[0] = 2.0f * fTemp262 - fRec283[1];
			float fRec284 = fConst126 * fTemp261;
			float fRec285 = fTemp262;
			float fTemp263 = fRec279[1] + fConst122 * (fRec285 - fRec280[1]);
			fRec279[0] = fConst124 * fTemp263 - fRec279[1];
			float fTemp264 = fRec280[1] + fConst125 * fTemp263;
			fRec280[0] = 2.0f * fTemp264 - fRec280[1];
			float fRec281 = fTemp264;
			float fTemp265 = fRec276[1] + fConst60 * (fRec281 - fRec277[1]);
			fRec276[0] = fConst62 * fTemp265 - fRec276[1];
			float fTemp266 = fRec277[1] + fConst63 * fTemp265;
			fRec277[0] = 2.0f * fTemp266 - fRec277[1];
			float fRec278 = fConst132 * fTemp265;
			float fTemp267 = 2.828427f * fRec278;
			float fTemp268 = fRec272[1] + fConst127 * (fRec281 - (fTemp267 + fRec273[1]));
			fRec272[0] = fConst129 * fTemp268 - fRec272[1];
			float fTemp269 = fRec273[1] + fConst130 * fTemp268;
			fRec273[0] = 2.0f * fTemp269 - fRec273[1];
			float fRec274 = fConst131 * fTemp268;
			float fRec275 = fTemp269;
			float fTemp270 = fRec269[1] + fConst127 * (fRec275 - fRec270[1]);
			fRec269[0] = fConst129 * fTemp270 - fRec269[1];
			float fTemp271 = fRec270[1] + fConst130 * fTemp270;
			fRec270[0] = 2.0f * fTemp271 - fRec270[1];
			float fRec271 = fTemp271;
			float fTemp272 = std::fabs(fRec271);
			fVec82[0] = fTemp272;
			float fTemp273 = std::max<float>(fTemp272, fVec82[1]);
			fVec83[0] = fTemp273;
			float fTemp274 = std::max<float>(fTemp273, fVec83[2]);
			fVec84[0] = fTemp274;
			float fTemp275 = std::max<float>(fTemp274, fVec84[4]);
			fVec85[0] = fTemp275;
			float fTemp276 = std::max<float>(fTemp275, fVec85[8]);
			fVec86[IOTA0 & 31] = fTemp276;
			float fTemp277 = std::max<float>(fTemp276, fVec86[(IOTA0 - 16) & 31]);
			fVec87[IOTA0 & 63] = fTemp277;
			float fTemp278 = std::max<float>(fTemp277, fVec87[(IOTA0 - 32) & 63]);
			fVec88[IOTA0 & 127] = fTemp278;
			float fTemp279 = std::max<float>(fTemp278, fVec88[(IOTA0 - 64) & 127]);
			fVec89[IOTA0 & 255] = fTemp279;
			float fTemp280 = std::max<float>(fTemp279, fVec89[(IOTA0 - 128) & 255]);
			fVec90[IOTA0 & 511] = fTemp280;
			fVec91[IOTA0 & 511] = std::max<float>(fTemp280, fVec90[(IOTA0 - 256) & 511]);
			float fTemp281 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst1) ? fTemp272 : -3.4028235e+38f), ((iConst168) ? fVec83[iConst1] : -3.4028235e+38f)), ((iConst169) ? fVec84[iConst170] : -3.4028235e+38f)), ((iConst171) ? fVec85[iConst172] : -3.4028235e+38f)), ((iConst173) ? fVec86[(IOTA0 - iConst174) & 31] : -3.4028235e+38f)), ((iConst175) ? fVec87[(IOTA0 - iConst176) & 63] : -3.4028235e+38f)), ((iConst177) ? fVec88[(IOTA0 - iConst178) & 127] : -3.4028235e+38f)), ((iConst179) ? fVec89[(IOTA0 - iConst180) & 255] : -3.4028235e+38f)), ((iConst181) ? fVec90[(IOTA0 - iConst182) & 511] : -3.4028235e+38f)), ((iConst183) ? fVec91[(IOTA0 - iConst184) & 511] : -3.4028235e+38f))));
			int iTemp282 = (fTemp281 > fSlow24) + (fTemp281 > fSlow3);
			float fTemp283 = std::max<float>(-12.0f, 0.75f * ((iTemp282 == 0) ? fTemp281 + 12.0f - fSlow1 : ((iTemp282 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp281 + 9.0f - fSlow1)) : 0.0f)));
			float fTemp284 = ((fTemp283 > fRec268[1]) ? fConst80 : fConst79);
			fRec268[0] = fTemp283 * (1.0f - fTemp284) + fRec268[1] * fTemp284;
			float fTemp285 = fRec275 + fTemp267 + 1.4142135f * fRec274;
			float fTemp286 = fRec299[1] + fConst127 * (fRec281 - (fTemp285 + fRec300[1]));
			fRec299[0] = fConst129 * fTemp286 - fRec299[1];
			float fTemp287 = fRec300[1] + fConst130 * fTemp286;
			fRec300[0] = 2.0f * fTemp287 - fRec300[1];
			float fRec301 = fConst131 * fTemp286;
			float fRec302 = fTemp287;
			float fTemp288 = fRec281 - (1.4142135f * (fRec274 + fRec301) + fRec302 + fRec275 + fTemp267);
			float fTemp289 = std::fabs(fTemp288);
			fVec92[0] = fTemp289;
			float fTemp290 = std::max<float>(fTemp289, fVec92[1]);
			fVec93[0] = fTemp290;
			float fTemp291 = std::max<float>(fTemp290, fVec93[2]);
			fVec94[0] = fTemp291;
			float fTemp292 = std::max<float>(fTemp291, fVec94[4]);
			fVec95[0] = fTemp292;
			float fTemp293 = std::max<float>(fTemp292, fVec95[8]);
			fVec96[IOTA0 & 31] = fTemp293;
			float fTemp294 = std::max<float>(fTemp293, fVec96[(IOTA0 - 16) & 31]);
			fVec97[IOTA0 & 63] = fTemp294;
			float fTemp295 = std::max<float>(fTemp294, fVec97[(IOTA0 - 32) & 63]);
			fVec98[IOTA0 & 127] = fTemp295;
			float fTemp296 = std::max<float>(fTemp295, fVec98[(IOTA0 - 64) & 127]);
			fVec99[IOTA0 & 255] = fTemp296;
			float fTemp297 = std::max<float>(fTemp296, fVec99[(IOTA0 - 128) & 255]);
			fVec100[IOTA0 & 511] = fTemp297;
			fVec101[IOTA0 & 511] = std::max<float>(fTemp297, fVec100[(IOTA0 - 256) & 511]);
			float fTemp298 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst1) ? fTemp289 : -3.4028235e+38f), ((iConst168) ? fVec93[iConst1] : -3.4028235e+38f)), ((iConst169) ? fVec94[iConst170] : -3.4028235e+38f)), ((iConst171) ? fVec95[iConst172] : -3.4028235e+38f)), ((iConst173) ? fVec96[(IOTA0 - iConst174) & 31] : -3.4028235e+38f)), ((iConst175) ? fVec97[(IOTA0 - iConst176) & 63] : -3.4028235e+38f)), ((iConst177) ? fVec98[(IOTA0 - iConst178) & 127] : -3.4028235e+38f)), ((iConst179) ? fVec99[(IOTA0 - iConst180) & 255] : -3.4028235e+38f)), ((iConst181) ? fVec100[(IOTA0 - iConst182) & 511] : -3.4028235e+38f)), ((iConst183) ? fVec101[(IOTA0 - iConst184) & 511] : -3.4028235e+38f))));
			int iTemp299 = (fTemp298 > fSlow24) + (fTemp298 > fSlow3);
			float fTemp300 = std::max<float>(-12.0f, 0.75f * ((iTemp299 == 0) ? fTemp298 + 12.0f - fSlow1 : ((iTemp299 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp298 + 9.0f - fSlow1)) : 0.0f)));
			float fTemp301 = ((fTemp300 > fRec298[1]) ? fConst80 : fConst79);
			fRec298[0] = fTemp300 * (1.0f - fTemp301) + fRec298[1] * fTemp301;
			float fTemp302 = fTemp260 + fRec285 + 1.4142135f * fRec284;
			float fTemp303 = fRec314[1] + fConst122 * (fRec294 - (fTemp302 + fRec315[1]));
			fRec314[0] = fConst124 * fTemp303 - fRec314[1];
			float fTemp304 = fRec315[1] + fConst125 * fTemp303;
			fRec315[0] = 2.0f * fTemp304 - fRec315[1];
			float fRec316 = fConst126 * fTemp303;
			float fRec317 = fTemp304;
			float fTemp305 = fRec285 + fRec317;
			float fTemp306 = fRec284 + fRec316;
			float fTemp307 = 1.4142135f * fTemp306;
			float fTemp308 = fTemp307 + fTemp260 + fTemp305;
			float fTemp309 = fRec311[1] + fConst127 * (fRec294 - (fTemp308 + fRec312[1]));
			fRec311[0] = fConst129 * fTemp309 - fRec311[1];
			float fTemp310 = fRec312[1] + fConst130 * fTemp309;
			fRec312[0] = 2.0f * fTemp310 - fRec312[1];
			float fRec313 = fConst131 * fTemp309;
			float fTemp311 = 2.828427f * (fRec313 + fTemp259);
			float fTemp312 = fTemp307 + fTemp305 + fTemp311;
			float fTemp313 = fRec307[1] + fConst60 * (fRec294 - (fTemp312 + fRec308[1]));
			fRec307[0] = fConst62 * fTemp313 - fRec307[1];
			float fTemp314 = fRec308[1] + fConst63 * fTemp313;
			fRec308[0] = 2.0f * fTemp314 - fRec308[1];
			float fRec309 = fConst132 * fTemp313;
			float fRec310 = fTemp314;
			float fTemp315 = fRec304[1] + fConst60 * (fRec310 - fRec305[1]);
			fRec304[0] = fConst62 * fTemp315 - fRec304[1];
			float fTemp316 = fRec305[1] + fConst63 * fTemp315;
			fRec305[0] = 2.0f * fTemp316 - fRec305[1];
			float fRec306 = fTemp316;
			float fTemp317 = std::fabs(fRec306);
			fVec102[0] = fTemp317;
			float fTemp318 = std::max<float>(fTemp317, fVec102[1]);
			fVec103[0] = fTemp318;
			float fTemp319 = std::max<float>(fTemp318, fVec103[2]);
			fVec104[0] = fTemp319;
			float fTemp320 = std::max<float>(fTemp319, fVec104[4]);
			fVec105[0] = fTemp320;
			float fTemp321 = std::max<float>(fTemp320, fVec105[8]);
			fVec106[IOTA0 & 31] = fTemp321;
			float fTemp322 = std::max<float>(fTemp321, fVec106[(IOTA0 - 16) & 31]);
			fVec107[IOTA0 & 63] = fTemp322;
			float fTemp323 = std::max<float>(fTemp322, fVec107[(IOTA0 - 32) & 63]);
			fVec108[IOTA0 & 127] = fTemp323;
			float fTemp324 = std::max<float>(fTemp323, fVec108[(IOTA0 - 64) & 127]);
			fVec109[IOTA0 & 255] = fTemp324;
			float fTemp325 = std::max<float>(fTemp324, fVec109[(IOTA0 - 128) & 255]);
			fVec110[IOTA0 & 511] = fTemp325;
			fVec111[IOTA0 & 511] = std::max<float>(fTemp325, fVec110[(IOTA0 - 256) & 511]);
			float fTemp326 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst1) ? fTemp317 : -3.4028235e+38f), ((iConst168) ? fVec103[iConst1] : -3.4028235e+38f)), ((iConst169) ? fVec104[iConst170] : -3.4028235e+38f)), ((iConst171) ? fVec105[iConst172] : -3.4028235e+38f)), ((iConst173) ? fVec106[(IOTA0 - iConst174) & 31] : -3.4028235e+38f)), ((iConst175) ? fVec107[(IOTA0 - iConst176) & 63] : -3.4028235e+38f)), ((iConst177) ? fVec108[(IOTA0 - iConst178) & 127] : -3.4028235e+38f)), ((iConst179) ? fVec109[(IOTA0 - iConst180) & 255] : -3.4028235e+38f)), ((iConst181) ? fVec110[(IOTA0 - iConst182) & 511] : -3.4028235e+38f)), ((iConst183) ? fVec111[(IOTA0 - iConst184) & 511] : -3.4028235e+38f))));
			int iTemp327 = (fTemp326 > fSlow24) + (fTemp326 > fSlow3);
			float fTemp328 = std::max<float>(-12.0f, 0.75f * ((iTemp327 == 0) ? fTemp326 + 12.0f - fSlow1 : ((iTemp327 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp326 + 9.0f - fSlow1)) : 0.0f)));
			float fTemp329 = ((fTemp328 > fRec303[1]) ? fConst80 : fConst79);
			fRec303[0] = fTemp328 * (1.0f - fTemp329) + fRec303[1] * fTemp329;
			float fTemp330 = fRec310 + fTemp305;
			float fTemp331 = fRec309 + fTemp306;
			float fTemp332 = 1.4142135f * fTemp331 + fTemp311 + fTemp330;
			float fTemp333 = fRec319[1] + fConst60 * (fRec294 - (fTemp332 + fRec320[1]));
			fRec319[0] = fConst62 * fTemp333 - fRec319[1];
			float fTemp334 = fRec320[1] + fConst63 * fTemp333;
			fRec320[0] = 2.0f * fTemp334 - fRec320[1];
			float fRec321 = fConst132 * fTemp333;
			float fRec322 = fTemp334;
			float fTemp335 = fRec294 - (1.4142135f * (fRec321 + fTemp331) + fTemp311 + fRec322 + fTemp330);
			float fTemp336 = std::fabs(fTemp335);
			fVec112[0] = fTemp336;
			float fTemp337 = std::max<float>(fTemp336, fVec112[1]);
			fVec113[0] = fTemp337;
			float fTemp338 = std::max<float>(fTemp337, fVec113[2]);
			fVec114[0] = fTemp338;
			float fTemp339 = std::max<float>(fTemp338, fVec114[4]);
			fVec115[0] = fTemp339;
			float fTemp340 = std::max<float>(fTemp339, fVec115[8]);
			fVec116[IOTA0 & 31] = fTemp340;
			float fTemp341 = std::max<float>(fTemp340, fVec116[(IOTA0 - 16) & 31]);
			fVec117[IOTA0 & 63] = fTemp341;
			float fTemp342 = std::max<float>(fTemp341, fVec117[(IOTA0 - 32) & 63]);
			fVec118[IOTA0 & 127] = fTemp342;
			float fTemp343 = std::max<float>(fTemp342, fVec118[(IOTA0 - 64) & 127]);
			fVec119[IOTA0 & 255] = fTemp343;
			float fTemp344 = std::max<float>(fTemp343, fVec119[(IOTA0 - 128) & 255]);
			fVec120[IOTA0 & 511] = fTemp344;
			fVec121[IOTA0 & 511] = std::max<float>(fTemp344, fVec120[(IOTA0 - 256) & 511]);
			float fTemp345 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst1) ? fTemp336 : -3.4028235e+38f), ((iConst168) ? fVec113[iConst1] : -3.4028235e+38f)), ((iConst169) ? fVec114[iConst170] : -3.4028235e+38f)), ((iConst171) ? fVec115[iConst172] : -3.4028235e+38f)), ((iConst173) ? fVec116[(IOTA0 - iConst174) & 31] : -3.4028235e+38f)), ((iConst175) ? fVec117[(IOTA0 - iConst176) & 63] : -3.4028235e+38f)), ((iConst177) ? fVec118[(IOTA0 - iConst178) & 127] : -3.4028235e+38f)), ((iConst179) ? fVec119[(IOTA0 - iConst180) & 255] : -3.4028235e+38f)), ((iConst181) ? fVec120[(IOTA0 - iConst182) & 511] : -3.4028235e+38f)), ((iConst183) ? fVec121[(IOTA0 - iConst184) & 511] : -3.4028235e+38f))));
			int iTemp346 = (fTemp345 > fSlow24) + (fTemp345 > fSlow3);
			float fTemp347 = std::max<float>(-12.0f, 0.75f * ((iTemp346 == 0) ? fTemp345 + 12.0f - fSlow1 : ((iTemp346 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp345 + 9.0f - fSlow1)) : 0.0f)));
			float fTemp348 = ((fTemp347 > fRec318[1]) ? fConst80 : fConst79);
			fRec318[0] = fTemp347 * (1.0f - fTemp348) + fRec318[1] * fTemp348;
			float fTemp349 = fRec334[1] + fConst133 * (fRec243 - fRec335[1]);
			fRec334[0] = fConst135 * fTemp349 - fRec334[1];
			float fTemp350 = fRec335[1] + fConst136 * fTemp349;
			fRec335[0] = 2.0f * fTemp350 - fRec335[1];
			float fRec336 = fTemp350;
			float fTemp351 = fRec331[1] + fConst143 * (fRec336 - fRec332[1]);
			fRec331[0] = fConst145 * fTemp351 - fRec331[1];
			float fTemp352 = fRec332[1] + fConst146 * fTemp351;
			fRec332[0] = 2.0f * fTemp352 - fRec332[1];
			float fRec333 = fConst147 * fTemp351;
			float fTemp353 = 2.828427f * fRec333;
			float fTemp354 = fRec327[1] + fConst138 * (fRec336 - (fTemp353 + fRec328[1]));
			fRec327[0] = fConst140 * fTemp354 - fRec327[1];
			float fTemp355 = fRec328[1] + fConst141 * fTemp354;
			fRec328[0] = 2.0f * fTemp355 - fRec328[1];
			float fRec329 = fConst142 * fTemp354;
			float fRec330 = fTemp355;
			float fTemp356 = fRec324[1] + fConst138 * (fRec330 - fRec325[1]);
			fRec324[0] = fConst140 * fTemp356 - fRec324[1];
			float fTemp357 = fRec325[1] + fConst141 * fTemp356;
			fRec325[0] = 2.0f * fTemp357 - fRec325[1];
			float fRec326 = fTemp357;
			float fTemp358 = std::fabs(fRec326);
			fVec122[0] = fTemp358;
			float fTemp359 = std::max<float>(fTemp358, fVec122[1]);
			fVec123[0] = fTemp359;
			float fTemp360 = std::max<float>(fTemp359, fVec123[2]);
			fVec124[0] = fTemp360;
			float fTemp361 = std::max<float>(fTemp360, fVec124[4]);
			fVec125[0] = fTemp361;
			float fTemp362 = std::max<float>(fTemp361, fVec125[8]);
			fVec126[IOTA0 & 31] = fTemp362;
			float fTemp363 = std::max<float>(fTemp362, fVec126[(IOTA0 - 16) & 31]);
			fVec127[IOTA0 & 63] = fTemp363;
			float fTemp364 = std::max<float>(fTemp363, fVec127[(IOTA0 - 32) & 63]);
			fVec128[IOTA0 & 127] = fTemp364;
			float fTemp365 = std::max<float>(fTemp364, fVec128[(IOTA0 - 64) & 127]);
			fVec129[IOTA0 & 255] = fTemp365;
			float fTemp366 = std::max<float>(fTemp365, fVec129[(IOTA0 - 128) & 255]);
			fVec130[IOTA0 & 511] = fTemp366;
			fVec131[IOTA0 & 511] = std::max<float>(fTemp366, fVec130[(IOTA0 - 256) & 511]);
			float fTemp367 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst1) ? fTemp358 : -3.4028235e+38f), ((iConst168) ? fVec123[iConst1] : -3.4028235e+38f)), ((iConst169) ? fVec124[iConst170] : -3.4028235e+38f)), ((iConst171) ? fVec125[iConst172] : -3.4028235e+38f)), ((iConst173) ? fVec126[(IOTA0 - iConst174) & 31] : -3.4028235e+38f)), ((iConst175) ? fVec127[(IOTA0 - iConst176) & 63] : -3.4028235e+38f)), ((iConst177) ? fVec128[(IOTA0 - iConst178) & 127] : -3.4028235e+38f)), ((iConst179) ? fVec129[(IOTA0 - iConst180) & 255] : -3.4028235e+38f)), ((iConst181) ? fVec130[(IOTA0 - iConst182) & 511] : -3.4028235e+38f)), ((iConst183) ? fVec131[(IOTA0 - iConst184) & 511] : -3.4028235e+38f))));
			int iTemp368 = (fTemp367 > fSlow24) + (fTemp367 > fSlow3);
			float fTemp369 = std::max<float>(-12.0f, 0.75f * ((iTemp368 == 0) ? fTemp367 + 12.0f - fSlow1 : ((iTemp368 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp367 + 9.0f - fSlow1)) : 0.0f)));
			float fTemp370 = ((fTemp369 > fRec323[1]) ? fConst80 : fConst79);
			fRec323[0] = fTemp369 * (1.0f - fTemp370) + fRec323[1] * fTemp370;
			float fTemp371 = fRec330 + fTemp353 + 1.4142135f * fRec329;
			float fTemp372 = fRec338[1] + fConst138 * (fRec336 - (fTemp371 + fRec339[1]));
			fRec338[0] = fConst140 * fTemp372 - fRec338[1];
			float fTemp373 = fRec339[1] + fConst141 * fTemp372;
			fRec339[0] = 2.0f * fTemp373 - fRec339[1];
			float fRec340 = fConst142 * fTemp372;
			float fRec341 = fTemp373;
			float fTemp374 = fRec336 - (1.4142135f * (fRec329 + fRec340) + fRec341 + fRec330 + fTemp353);
			float fTemp375 = std::fabs(fTemp374);
			fVec132[0] = fTemp375;
			float fTemp376 = std::max<float>(fTemp375, fVec132[1]);
			fVec133[0] = fTemp376;
			float fTemp377 = std::max<float>(fTemp376, fVec133[2]);
			fVec134[0] = fTemp377;
			float fTemp378 = std::max<float>(fTemp377, fVec134[4]);
			fVec135[0] = fTemp378;
			float fTemp379 = std::max<float>(fTemp378, fVec135[8]);
			fVec136[IOTA0 & 31] = fTemp379;
			float fTemp380 = std::max<float>(fTemp379, fVec136[(IOTA0 - 16) & 31]);
			fVec137[IOTA0 & 63] = fTemp380;
			float fTemp381 = std::max<float>(fTemp380, fVec137[(IOTA0 - 32) & 63]);
			fVec138[IOTA0 & 127] = fTemp381;
			float fTemp382 = std::max<float>(fTemp381, fVec138[(IOTA0 - 64) & 127]);
			fVec139[IOTA0 & 255] = fTemp382;
			float fTemp383 = std::max<float>(fTemp382, fVec139[(IOTA0 - 128) & 255]);
			fVec140[IOTA0 & 511] = fTemp383;
			fVec141[IOTA0 & 511] = std::max<float>(fTemp383, fVec140[(IOTA0 - 256) & 511]);
			float fTemp384 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst1) ? fTemp375 : -3.4028235e+38f), ((iConst168) ? fVec133[iConst1] : -3.4028235e+38f)), ((iConst169) ? fVec134[iConst170] : -3.4028235e+38f)), ((iConst171) ? fVec135[iConst172] : -3.4028235e+38f)), ((iConst173) ? fVec136[(IOTA0 - iConst174) & 31] : -3.4028235e+38f)), ((iConst175) ? fVec137[(IOTA0 - iConst176) & 63] : -3.4028235e+38f)), ((iConst177) ? fVec138[(IOTA0 - iConst178) & 127] : -3.4028235e+38f)), ((iConst179) ? fVec139[(IOTA0 - iConst180) & 255] : -3.4028235e+38f)), ((iConst181) ? fVec140[(IOTA0 - iConst182) & 511] : -3.4028235e+38f)), ((iConst183) ? fVec141[(IOTA0 - iConst184) & 511] : -3.4028235e+38f))));
			int iTemp385 = (fTemp384 > fSlow24) + (fTemp384 > fSlow3);
			float fTemp386 = std::max<float>(-12.0f, 0.75f * ((iTemp385 == 0) ? fTemp384 + 12.0f - fSlow1 : ((iTemp385 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp384 + 9.0f - fSlow1)) : 0.0f)));
			float fTemp387 = ((fTemp386 > fRec337[1]) ? fConst80 : fConst79);
			fRec337[0] = fTemp386 * (1.0f - fTemp387) + fRec337[1] * fTemp387;
			float fTemp388 = fRec343[1] + fConst143 * (fRec260 - fRec344[1]);
			fRec343[0] = fConst145 * fTemp388 - fRec343[1];
			float fTemp389 = fRec344[1] + fConst146 * fTemp388;
			fRec344[0] = 2.0f * fTemp389 - fRec344[1];
			float fRec345 = fTemp389;
			float fTemp390 = std::fabs(fRec345);
			fVec142[0] = fTemp390;
			float fTemp391 = std::max<float>(fTemp390, fVec142[1]);
			fVec143[0] = fTemp391;
			float fTemp392 = std::max<float>(fTemp391, fVec143[2]);
			fVec144[0] = fTemp392;
			float fTemp393 = std::max<float>(fTemp392, fVec144[4]);
			fVec145[0] = fTemp393;
			float fTemp394 = std::max<float>(fTemp393, fVec145[8]);
			fVec146[IOTA0 & 31] = fTemp394;
			float fTemp395 = std::max<float>(fTemp394, fVec146[(IOTA0 - 16) & 31]);
			fVec147[IOTA0 & 63] = fTemp395;
			float fTemp396 = std::max<float>(fTemp395, fVec147[(IOTA0 - 32) & 63]);
			fVec148[IOTA0 & 127] = fTemp396;
			float fTemp397 = std::max<float>(fTemp396, fVec148[(IOTA0 - 64) & 127]);
			fVec149[IOTA0 & 255] = fTemp397;
			float fTemp398 = std::max<float>(fTemp397, fVec149[(IOTA0 - 128) & 255]);
			fVec150[IOTA0 & 511] = fTemp398;
			fVec151[IOTA0 & 511] = std::max<float>(fTemp398, fVec150[(IOTA0 - 256) & 511]);
			float fTemp399 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst1) ? fTemp390 : -3.4028235e+38f), ((iConst168) ? fVec143[iConst1] : -3.4028235e+38f)), ((iConst169) ? fVec144[iConst170] : -3.4028235e+38f)), ((iConst171) ? fVec145[iConst172] : -3.4028235e+38f)), ((iConst173) ? fVec146[(IOTA0 - iConst174) & 31] : -3.4028235e+38f)), ((iConst175) ? fVec147[(IOTA0 - iConst176) & 63] : -3.4028235e+38f)), ((iConst177) ? fVec148[(IOTA0 - iConst178) & 127] : -3.4028235e+38f)), ((iConst179) ? fVec149[(IOTA0 - iConst180) & 255] : -3.4028235e+38f)), ((iConst181) ? fVec150[(IOTA0 - iConst182) & 511] : -3.4028235e+38f)), ((iConst183) ? fVec151[(IOTA0 - iConst184) & 511] : -3.4028235e+38f))));
			int iTemp400 = (fTemp399 > fSlow24) + (fTemp399 > fSlow3);
			float fTemp401 = std::max<float>(-12.0f, 0.75f * ((iTemp400 == 0) ? fTemp399 + 12.0f - fSlow1 : ((iTemp400 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp399 + 9.0f - fSlow1)) : 0.0f)));
			float fTemp402 = ((fTemp401 > fRec342[1]) ? fConst80 : fConst79);
			fRec342[0] = fTemp401 * (1.0f - fTemp402) + fRec342[1] * fTemp402;
			float fTemp403 = std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(fRec268[0], fRec298[0]), fRec303[0]), fRec318[0]), fRec323[0]), fRec337[0]), fRec342[0]), fRec1[0]);
			float fTemp404 = fTemp234 * std::pow(1e+01f, 0.05f * (fRec1[0] + 0.25f * (fTemp403 - fRec1[0])));
			float fTemp405 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp404)));
			int iTemp406 = (fTemp405 > fSlow25) + (fTemp405 > fSlow2);
			float fTemp407 = std::max<float>(0.0f, ((iTemp406 == 0) ? 0.0f : ((iTemp406 == 1) ? 0.083333336f * mydsp_faustpower2_f(fTemp405 + 7.0f - fSlow1) : fTemp405 + 4.0f - fSlow1)));
			float fTemp408 = ((-(0.2857143f * fTemp407) > fRec0[1]) ? fConst151 : fConst80);
			fRec0[0] = fRec0[1] * fTemp408 - 0.2857143f * fTemp407 * (1.0f - fTemp408);
			float fTemp409 = fRec345 * std::pow(1e+01f, 0.05f * (fRec342[0] + 0.25f * (fTemp403 - fRec342[0])));
			float fTemp410 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp409)));
			int iTemp411 = (fTemp410 > fSlow25) + (fTemp410 > fSlow2);
			float fTemp412 = std::max<float>(0.0f, ((iTemp411 == 0) ? 0.0f : ((iTemp411 == 1) ? 0.083333336f * mydsp_faustpower2_f(fTemp410 + 7.0f - fSlow1) : fTemp410 + 4.0f - fSlow1)));
			float fTemp413 = ((-(0.2857143f * fTemp412) > fRec346[1]) ? fConst151 : fConst80);
			fRec346[0] = fRec346[1] * fTemp413 - 0.2857143f * fTemp412 * (1.0f - fTemp413);
			float fTemp414 = fTemp374 * std::pow(1e+01f, 0.05f * (fRec337[0] + 0.25f * (fTemp403 - fRec337[0])));
			float fTemp415 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp414)));
			int iTemp416 = (fTemp415 > fSlow25) + (fTemp415 > fSlow2);
			float fTemp417 = std::max<float>(0.0f, ((iTemp416 == 0) ? 0.0f : ((iTemp416 == 1) ? 0.083333336f * mydsp_faustpower2_f(fTemp415 + 7.0f - fSlow1) : fTemp415 + 4.0f - fSlow1)));
			float fTemp418 = ((-(0.2857143f * fTemp417) > fRec347[1]) ? fConst151 : fConst80);
			fRec347[0] = fRec347[1] * fTemp418 - 0.2857143f * fTemp417 * (1.0f - fTemp418);
			float fTemp419 = fRec326 * std::pow(1e+01f, 0.05f * (fRec323[0] + 0.25f * (fTemp403 - fRec323[0])));
			float fTemp420 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp419)));
			int iTemp421 = (fTemp420 > fSlow25) + (fTemp420 > fSlow2);
			float fTemp422 = std::max<float>(0.0f, ((iTemp421 == 0) ? 0.0f : ((iTemp421 == 1) ? 0.083333336f * mydsp_faustpower2_f(fTemp420 + 7.0f - fSlow1) : fTemp420 + 4.0f - fSlow1)));
			float fTemp423 = ((-(0.2857143f * fTemp422) > fRec348[1]) ? fConst151 : fConst80);
			fRec348[0] = fRec348[1] * fTemp423 - 0.2857143f * fTemp422 * (1.0f - fTemp423);
			float fTemp424 = fTemp335 * std::pow(1e+01f, 0.05f * (fRec318[0] + 0.25f * (fTemp403 - fRec318[0])));
			float fTemp425 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp424)));
			int iTemp426 = (fTemp425 > fSlow25) + (fTemp425 > fSlow2);
			float fTemp427 = std::max<float>(0.0f, ((iTemp426 == 0) ? 0.0f : ((iTemp426 == 1) ? 0.083333336f * mydsp_faustpower2_f(fTemp425 + 7.0f - fSlow1) : fTemp425 + 4.0f - fSlow1)));
			float fTemp428 = ((-(0.2857143f * fTemp427) > fRec349[1]) ? fConst151 : fConst80);
			fRec349[0] = fRec349[1] * fTemp428 - 0.2857143f * fTemp427 * (1.0f - fTemp428);
			float fTemp429 = fRec306 * std::pow(1e+01f, 0.05f * (fRec303[0] + 0.25f * (fTemp403 - fRec303[0])));
			float fTemp430 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp429)));
			int iTemp431 = (fTemp430 > fSlow25) + (fTemp430 > fSlow2);
			float fTemp432 = std::max<float>(0.0f, ((iTemp431 == 0) ? 0.0f : ((iTemp431 == 1) ? 0.083333336f * mydsp_faustpower2_f(fTemp430 + 7.0f - fSlow1) : fTemp430 + 4.0f - fSlow1)));
			float fTemp433 = ((-(0.2857143f * fTemp432) > fRec350[1]) ? fConst151 : fConst80);
			fRec350[0] = fRec350[1] * fTemp433 - 0.2857143f * fTemp432 * (1.0f - fTemp433);
			float fTemp434 = fTemp288 * std::pow(1e+01f, 0.05f * (fRec298[0] + 0.25f * (fTemp403 - fRec298[0])));
			float fTemp435 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp434)));
			int iTemp436 = (fTemp435 > fSlow25) + (fTemp435 > fSlow2);
			float fTemp437 = std::max<float>(0.0f, ((iTemp436 == 0) ? 0.0f : ((iTemp436 == 1) ? 0.083333336f * mydsp_faustpower2_f(fTemp435 + 7.0f - fSlow1) : fTemp435 + 4.0f - fSlow1)));
			float fTemp438 = ((-(0.2857143f * fTemp437) > fRec351[1]) ? fConst151 : fConst80);
			fRec351[0] = fRec351[1] * fTemp438 - 0.2857143f * fTemp437 * (1.0f - fTemp438);
			float fTemp439 = fRec271 * std::pow(1e+01f, 0.05f * (fRec268[0] + 0.25f * (fTemp403 - fRec268[0])));
			float fTemp440 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp439)));
			int iTemp441 = (fTemp440 > fSlow25) + (fTemp440 > fSlow2);
			float fTemp442 = std::max<float>(0.0f, ((iTemp441 == 0) ? 0.0f : ((iTemp441 == 1) ? 0.083333336f * mydsp_faustpower2_f(fTemp440 + 7.0f - fSlow1) : fTemp440 + 4.0f - fSlow1)));
			float fTemp443 = ((-(0.2857143f * fTemp442) > fRec352[1]) ? fConst151 : fConst80);
			fRec352[0] = fRec352[1] * fTemp443 - 0.2857143f * fTemp442 * (1.0f - fTemp443);
			output0[i0] = FAUSTFLOAT(((iSlow0) ? fTemp0 : fTemp439 * std::pow(1e+01f, 0.05f * fRec352[0]) + fTemp434 * std::pow(1e+01f, 0.05f * fRec351[0]) + fTemp429 * std::pow(1e+01f, 0.05f * fRec350[0]) + fTemp424 * std::pow(1e+01f, 0.05f * fRec349[0]) + fTemp419 * std::pow(1e+01f, 0.05f * fRec348[0]) + fTemp414 * std::pow(1e+01f, 0.05f * fRec347[0]) + fTemp409 * std::pow(1e+01f, 0.05f * fRec346[0]) + fTemp404 * std::pow(1e+01f, 0.05f * fRec0[0])));
			fVec0[1] = fVec0[0];
			fRec15[1] = fRec15[0];
			fRec14[2] = fRec14[1];
			fRec14[1] = fRec14[0];
			fVec1[1] = fVec1[0];
			fRec13[1] = fRec13[0];
			fRec12[2] = fRec12[1];
			fRec12[1] = fRec12[0];
			fRec26[1] = fRec26[0];
			fVec2[2] = fVec2[1];
			fVec2[1] = fVec2[0];
			for (int j0 = 4; j0 > 0; j0 = j0 - 1) {
				fVec3[j0] = fVec3[j0 - 1];
			}
			for (int j1 = 11; j1 > 0; j1 = j1 - 1) {
				fVec4[j1] = fVec4[j1 - 1];
			}
			IOTA0 = IOTA0 + 1;
			fRec25[1] = fRec25[0];
			fRec38[1] = fRec38[0];
			fRec39[1] = fRec39[0];
			fRec33[1] = fRec33[0];
			fRec34[1] = fRec34[0];
			fRec30[1] = fRec30[0];
			fRec31[1] = fRec31[0];
			fRec27[1] = fRec27[0];
			fRec28[1] = fRec28[0];
			fVec20[1] = fVec20[0];
			fVec21[2] = fVec21[1];
			fVec21[1] = fVec21[0];
			for (int j2 = 4; j2 > 0; j2 = j2 - 1) {
				fVec22[j2] = fVec22[j2 - 1];
			}
			for (int j3 = 11; j3 > 0; j3 = j3 - 1) {
				fVec23[j3] = fVec23[j3 - 1];
			}
			fRec24[1] = fRec24[0];
			fVec29[1] = fVec29[0];
			fRec46[1] = fRec46[0];
			fRec45[1] = fRec45[0];
			fVec30[1] = fVec30[0];
			fRec44[1] = fRec44[0];
			fRec43[1] = fRec43[0];
			fVec31[1] = fVec31[0];
			fVec32[2] = fVec32[1];
			fVec32[1] = fVec32[0];
			for (int j4 = 4; j4 > 0; j4 = j4 - 1) {
				fVec33[j4] = fVec33[j4 - 1];
			}
			for (int j5 = 11; j5 > 0; j5 = j5 - 1) {
				fVec34[j5] = fVec34[j5 - 1];
			}
			fRec19[1] = fRec19[0];
			fRec20[1] = fRec20[0];
			fRec17[1] = fRec17[0];
			fRec16[1] = fRec16[0];
			fVec40[1] = fVec40[0];
			fVec41[1] = fVec41[0];
			fVec42[2] = fVec42[1];
			fVec42[1] = fVec42[0];
			for (int j6 = 4; j6 > 0; j6 = j6 - 1) {
				fVec43[j6] = fVec43[j6 - 1];
			}
			for (int j7 = 11; j7 > 0; j7 = j7 - 1) {
				fVec44[j7] = fVec44[j7 - 1];
			}
			fRec11[1] = fRec11[0];
			fRec95[1] = fRec95[0];
			fRec96[1] = fRec96[0];
			fRec90[1] = fRec90[0];
			fRec91[1] = fRec91[0];
			fRec86[1] = fRec86[0];
			fRec87[1] = fRec87[0];
			fRec82[1] = fRec82[0];
			fRec83[1] = fRec83[0];
			fRec78[1] = fRec78[0];
			fRec79[1] = fRec79[0];
			fRec73[1] = fRec73[0];
			fRec74[1] = fRec74[0];
			fRec68[1] = fRec68[0];
			fRec69[1] = fRec69[0];
			fRec64[1] = fRec64[0];
			fRec65[1] = fRec65[0];
			fRec59[1] = fRec59[0];
			fRec60[1] = fRec60[0];
			fRec54[1] = fRec54[0];
			fRec55[1] = fRec55[0];
			fVec50[1] = fVec50[0];
			fVec51[1] = fVec51[0];
			fRec53[1] = fRec53[0];
			fRec52[1] = fRec52[0];
			fVec52[1] = fVec52[0];
			fRec51[1] = fRec51[0];
			fRec50[1] = fRec50[0];
			fRec49[1] = fRec49[0];
			fRec48[1] = fRec48[0];
			fVec53[1] = fVec53[0];
			fRec105[1] = fRec105[0];
			fRec104[1] = fRec104[0];
			fVec54[1] = fVec54[0];
			fRec103[1] = fRec103[0];
			fRec102[1] = fRec102[0];
			fRec101[1] = fRec101[0];
			fRec100[1] = fRec100[0];
			fRec47[1] = fRec47[0];
			fRec113[1] = fRec113[0];
			fRec114[1] = fRec114[0];
			fRec115[1] = fRec115[0];
			fVec55[1] = fVec55[0];
			fRec112[1] = fRec112[0];
			fRec111[1] = fRec111[0];
			fVec56[1] = fVec56[0];
			fRec110[1] = fRec110[0];
			fRec109[1] = fRec109[0];
			fRec108[1] = fRec108[0];
			fRec107[1] = fRec107[0];
			fRec106[1] = fRec106[0];
			fRec137[1] = fRec137[0];
			fRec138[1] = fRec138[0];
			fRec133[1] = fRec133[0];
			fRec134[1] = fRec134[0];
			fRec128[1] = fRec128[0];
			fRec129[1] = fRec129[0];
			fRec123[1] = fRec123[0];
			fRec124[1] = fRec124[0];
			fVec57[1] = fVec57[0];
			fVec58[1] = fVec58[0];
			fRec122[1] = fRec122[0];
			fRec121[1] = fRec121[0];
			fVec59[1] = fVec59[0];
			fRec120[1] = fRec120[0];
			fRec119[1] = fRec119[0];
			fRec118[1] = fRec118[0];
			fRec117[1] = fRec117[0];
			fRec116[1] = fRec116[0];
			fRec147[1] = fRec147[0];
			fRec148[1] = fRec148[0];
			fRec149[1] = fRec149[0];
			fVec60[1] = fVec60[0];
			fRec146[1] = fRec146[0];
			fRec145[1] = fRec145[0];
			fVec61[1] = fVec61[0];
			fRec144[1] = fRec144[0];
			fRec143[1] = fRec143[0];
			fRec142[1] = fRec142[0];
			fRec141[1] = fRec141[0];
			fRec140[1] = fRec140[0];
			fRec193[1] = fRec193[0];
			fRec194[1] = fRec194[0];
			fRec189[1] = fRec189[0];
			fRec190[1] = fRec190[0];
			fRec185[1] = fRec185[0];
			fRec186[1] = fRec186[0];
			fRec181[1] = fRec181[0];
			fRec182[1] = fRec182[0];
			fRec176[1] = fRec176[0];
			fRec177[1] = fRec177[0];
			fRec171[1] = fRec171[0];
			fRec172[1] = fRec172[0];
			fRec167[1] = fRec167[0];
			fRec168[1] = fRec168[0];
			fRec162[1] = fRec162[0];
			fRec163[1] = fRec163[0];
			fRec157[1] = fRec157[0];
			fRec158[1] = fRec158[0];
			fVec62[1] = fVec62[0];
			fVec63[1] = fVec63[0];
			fRec156[1] = fRec156[0];
			fRec155[1] = fRec155[0];
			fVec64[1] = fVec64[0];
			fRec154[1] = fRec154[0];
			fRec153[1] = fRec153[0];
			fRec152[1] = fRec152[0];
			fRec151[1] = fRec151[0];
			fRec150[1] = fRec150[0];
			fRec203[1] = fRec203[0];
			fRec204[1] = fRec204[0];
			fRec205[1] = fRec205[0];
			fVec65[1] = fVec65[0];
			fRec202[1] = fRec202[0];
			fRec201[1] = fRec201[0];
			fVec66[1] = fVec66[0];
			fRec200[1] = fRec200[0];
			fRec199[1] = fRec199[0];
			fRec198[1] = fRec198[0];
			fRec197[1] = fRec197[0];
			fRec196[1] = fRec196[0];
			fRec227[1] = fRec227[0];
			fRec228[1] = fRec228[0];
			fRec223[1] = fRec223[0];
			fRec224[1] = fRec224[0];
			fRec218[1] = fRec218[0];
			fRec219[1] = fRec219[0];
			fRec213[1] = fRec213[0];
			fRec214[1] = fRec214[0];
			fVec67[1] = fVec67[0];
			fVec68[1] = fVec68[0];
			fRec212[1] = fRec212[0];
			fRec211[1] = fRec211[0];
			fVec69[1] = fVec69[0];
			fRec210[1] = fRec210[0];
			fRec209[1] = fRec209[0];
			fRec208[1] = fRec208[0];
			fRec207[1] = fRec207[0];
			fRec206[1] = fRec206[0];
			fRec237[1] = fRec237[0];
			fRec238[1] = fRec238[0];
			fRec239[1] = fRec239[0];
			fVec70[1] = fVec70[0];
			fRec236[1] = fRec236[0];
			fRec235[1] = fRec235[0];
			fVec71[1] = fVec71[0];
			fRec234[1] = fRec234[0];
			fRec233[1] = fRec233[0];
			fRec232[1] = fRec232[0];
			fRec231[1] = fRec231[0];
			fRec230[1] = fRec230[0];
			fRec10[2] = fRec10[1];
			fRec10[1] = fRec10[0];
			fRec6[1] = fRec6[0];
			fRec7[1] = fRec7[0];
			fRec2[1] = fRec2[0];
			fRec3[1] = fRec3[0];
			fRec247[1] = fRec247[0];
			fRec248[1] = fRec248[0];
			fRec244[1] = fRec244[0];
			fRec245[1] = fRec245[0];
			fRec250[1] = fRec250[0];
			fRec251[1] = fRec251[0];
			fRec240[1] = fRec240[0];
			fRec241[1] = fRec241[0];
			fRec253[1] = fRec253[0];
			fRec254[1] = fRec254[0];
			fRec261[1] = fRec261[0];
			fRec262[1] = fRec262[0];
			fRec257[1] = fRec257[0];
			fRec258[1] = fRec258[0];
			fRec264[1] = fRec264[0];
			fRec265[1] = fRec265[0];
			fVec72[1] = fVec72[0];
			fVec73[2] = fVec73[1];
			fVec73[1] = fVec73[0];
			for (int j8 = 4; j8 > 0; j8 = j8 - 1) {
				fVec74[j8] = fVec74[j8 - 1];
			}
			for (int j9 = 11; j9 > 0; j9 = j9 - 1) {
				fVec75[j9] = fVec75[j9 - 1];
			}
			fRec1[1] = fRec1[0];
			fRec292[1] = fRec292[0];
			fRec293[1] = fRec293[0];
			fRec289[1] = fRec289[0];
			fRec290[1] = fRec290[0];
			fRec286[1] = fRec286[0];
			fRec287[1] = fRec287[0];
			fRec295[1] = fRec295[0];
			fRec296[1] = fRec296[0];
			fRec282[1] = fRec282[0];
			fRec283[1] = fRec283[0];
			fRec279[1] = fRec279[0];
			fRec280[1] = fRec280[0];
			fRec276[1] = fRec276[0];
			fRec277[1] = fRec277[0];
			fRec272[1] = fRec272[0];
			fRec273[1] = fRec273[0];
			fRec269[1] = fRec269[0];
			fRec270[1] = fRec270[0];
			fVec82[1] = fVec82[0];
			fVec83[2] = fVec83[1];
			fVec83[1] = fVec83[0];
			for (int j10 = 4; j10 > 0; j10 = j10 - 1) {
				fVec84[j10] = fVec84[j10 - 1];
			}
			for (int j11 = 11; j11 > 0; j11 = j11 - 1) {
				fVec85[j11] = fVec85[j11 - 1];
			}
			fRec268[1] = fRec268[0];
			fRec299[1] = fRec299[0];
			fRec300[1] = fRec300[0];
			fVec92[1] = fVec92[0];
			fVec93[2] = fVec93[1];
			fVec93[1] = fVec93[0];
			for (int j12 = 4; j12 > 0; j12 = j12 - 1) {
				fVec94[j12] = fVec94[j12 - 1];
			}
			for (int j13 = 11; j13 > 0; j13 = j13 - 1) {
				fVec95[j13] = fVec95[j13 - 1];
			}
			fRec298[1] = fRec298[0];
			fRec314[1] = fRec314[0];
			fRec315[1] = fRec315[0];
			fRec311[1] = fRec311[0];
			fRec312[1] = fRec312[0];
			fRec307[1] = fRec307[0];
			fRec308[1] = fRec308[0];
			fRec304[1] = fRec304[0];
			fRec305[1] = fRec305[0];
			fVec102[1] = fVec102[0];
			fVec103[2] = fVec103[1];
			fVec103[1] = fVec103[0];
			for (int j14 = 4; j14 > 0; j14 = j14 - 1) {
				fVec104[j14] = fVec104[j14 - 1];
			}
			for (int j15 = 11; j15 > 0; j15 = j15 - 1) {
				fVec105[j15] = fVec105[j15 - 1];
			}
			fRec303[1] = fRec303[0];
			fRec319[1] = fRec319[0];
			fRec320[1] = fRec320[0];
			fVec112[1] = fVec112[0];
			fVec113[2] = fVec113[1];
			fVec113[1] = fVec113[0];
			for (int j16 = 4; j16 > 0; j16 = j16 - 1) {
				fVec114[j16] = fVec114[j16 - 1];
			}
			for (int j17 = 11; j17 > 0; j17 = j17 - 1) {
				fVec115[j17] = fVec115[j17 - 1];
			}
			fRec318[1] = fRec318[0];
			fRec334[1] = fRec334[0];
			fRec335[1] = fRec335[0];
			fRec331[1] = fRec331[0];
			fRec332[1] = fRec332[0];
			fRec327[1] = fRec327[0];
			fRec328[1] = fRec328[0];
			fRec324[1] = fRec324[0];
			fRec325[1] = fRec325[0];
			fVec122[1] = fVec122[0];
			fVec123[2] = fVec123[1];
			fVec123[1] = fVec123[0];
			for (int j18 = 4; j18 > 0; j18 = j18 - 1) {
				fVec124[j18] = fVec124[j18 - 1];
			}
			for (int j19 = 11; j19 > 0; j19 = j19 - 1) {
				fVec125[j19] = fVec125[j19 - 1];
			}
			fRec323[1] = fRec323[0];
			fRec338[1] = fRec338[0];
			fRec339[1] = fRec339[0];
			fVec132[1] = fVec132[0];
			fVec133[2] = fVec133[1];
			fVec133[1] = fVec133[0];
			for (int j20 = 4; j20 > 0; j20 = j20 - 1) {
				fVec134[j20] = fVec134[j20 - 1];
			}
			for (int j21 = 11; j21 > 0; j21 = j21 - 1) {
				fVec135[j21] = fVec135[j21 - 1];
			}
			fRec337[1] = fRec337[0];
			fRec343[1] = fRec343[0];
			fRec344[1] = fRec344[0];
			fVec142[1] = fVec142[0];
			fVec143[2] = fVec143[1];
			fVec143[1] = fVec143[0];
			for (int j22 = 4; j22 > 0; j22 = j22 - 1) {
				fVec144[j22] = fVec144[j22 - 1];
			}
			for (int j23 = 11; j23 > 0; j23 = j23 - 1) {
				fVec145[j23] = fVec145[j23 - 1];
			}
			fRec342[1] = fRec342[0];
			fRec0[1] = fRec0[0];
			fRec346[1] = fRec346[0];
			fRec347[1] = fRec347[0];
			fRec348[1] = fRec348[0];
			fRec349[1] = fRec349[0];
			fRec350[1] = fRec350[0];
			fRec351[1] = fRec351[0];
			fRec352[1] = fRec352[0];
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
        dsp->fVbargraph18 = 0;
        dsp->fVbargraph16 = 0;
        dsp->fVbargraph14 = 0;
        dsp->fVbargraph12 = 0;
        dsp->fVbargraph10 = 0;
        dsp->fVbargraph8 = 0;
        dsp->fVbargraph6 = 0;
        dsp->fVbargraph4 = 0;
        dsp->fVbargraph19 = 0;
        dsp->fVbargraph17 = 0;
        dsp->fVbargraph15 = 0;
        dsp->fVbargraph13 = 0;
        dsp->fVbargraph11 = 0;
        dsp->fVbargraph9 = 0;
        dsp->fVbargraph7 = 0;
        dsp->fVbargraph5 = 0;
        dsp->fVbargraph1 = 0;
        dsp->fVbargraph2 = 0;
        dsp->fVbargraph0 = 0;
        
    }

    /*
    void printCurrentValues()
    {
        d_stdout("==== preset data start ===");
        printf("%.12g,", dsp->fVslider4);
        printf("%.12g,", dsp->fVslider11);
        printf("%.12g,", dsp->fVslider10);
        printf("%.12g,", dsp->fVslider9);
        printf("%.12g,", dsp->fVslider8);
        printf("%.12g,", dsp->fVslider7);
        printf("%.12g,", dsp->fVslider6);
        printf("%.12g,", dsp->fVslider5);
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
        case kParameter_sb_strength:
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
        case kParameter_sb_target_spectrum_0:
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
        case kParameter_sb_target_spectrum_1:
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
        case kParameter_sb_target_spectrum_2:
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
        case kParameter_sb_target_spectrum_3:
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
        case kParameter_sb_target_spectrum_4:
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
        case kParameter_sb_target_spectrum_5:
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
        case kParameter_sb_target_spectrum_6:
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
        case kParameter_sb_target_spectrum_7:
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
        case kParameter_bypass:
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
        case kParameter_leveler_target:
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
        case kParameter_leveler_expander_offset:
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
        case kParameter_pre_lowcut:
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
        
        case kParameter_sb_expander:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[13];
            param.unit = kParameterUnits[13];
            param.symbol = kParameterSymbols[13];
            param.shortName = "";
            param.ranges.def = kParameterRanges[13].def;
            param.ranges.min = kParameterRanges[13].min;
            param.ranges.max = kParameterRanges[13].max;
            break;
        case kParameter_sb_meter__0:
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
        case kParameter_sb_meter__1:
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
        case kParameter_sb_meter__2:
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
        case kParameter_sb_meter__3:
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
        case kParameter_sb_meter__4:
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
        case kParameter_sb_meter__5:
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
        case kParameter_sb_meter__6:
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
        case kParameter_sb_meter__7:
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
        case kParameter_sb_gain__0:
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
        case kParameter_sb_gain__1:
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
        case kParameter_sb_gain__2:
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
        case kParameter_sb_gain__3:
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
        case kParameter_sb_gain__4:
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
        case kParameter_sb_gain__5:
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
        case kParameter_sb_gain__6:
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
        case kParameter_sb_gain__7:
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
        case kParameter_leveler_brake:
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
        case kParameter_leveler_gain:
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
        case kParameter_leveler_meter_minimum:
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
        
        }
    }

   /* -----------------------------------------------------------------------------------------------------------------
    * Internal data */

    float getParameterValue(const uint32_t index) const override
    {
        switch (index)
        {
        case kParameter_sb_strength:
            return dsp->fVslider4;
        case kParameter_sb_target_spectrum_0:
            return dsp->fVslider11;
        case kParameter_sb_target_spectrum_1:
            return dsp->fVslider10;
        case kParameter_sb_target_spectrum_2:
            return dsp->fVslider9;
        case kParameter_sb_target_spectrum_3:
            return dsp->fVslider8;
        case kParameter_sb_target_spectrum_4:
            return dsp->fVslider7;
        case kParameter_sb_target_spectrum_5:
            return dsp->fVslider6;
        case kParameter_sb_target_spectrum_6:
            return dsp->fVslider5;
        case kParameter_sb_target_spectrum_7:
            return dsp->fVslider3;
        case kParameter_bypass:
            return dsp->fCheckbox0;
        case kParameter_leveler_target:
            return dsp->fVslider0;
        case kParameter_leveler_expander_offset:
            return dsp->fVslider2;
        case kParameter_pre_lowcut:
            return dsp->fVslider1;
        case kParameter_sb_expander:
            return dsp->fVbargraph3;
        case kParameter_sb_meter__0:
            return dsp->fVbargraph18;
        case kParameter_sb_meter__1:
            return dsp->fVbargraph16;
        case kParameter_sb_meter__2:
            return dsp->fVbargraph14;
        case kParameter_sb_meter__3:
            return dsp->fVbargraph12;
        case kParameter_sb_meter__4:
            return dsp->fVbargraph10;
        case kParameter_sb_meter__5:
            return dsp->fVbargraph8;
        case kParameter_sb_meter__6:
            return dsp->fVbargraph6;
        case kParameter_sb_meter__7:
            return dsp->fVbargraph4;
        case kParameter_sb_gain__0:
            return dsp->fVbargraph19;
        case kParameter_sb_gain__1:
            return dsp->fVbargraph17;
        case kParameter_sb_gain__2:
            return dsp->fVbargraph15;
        case kParameter_sb_gain__3:
            return dsp->fVbargraph13;
        case kParameter_sb_gain__4:
            return dsp->fVbargraph11;
        case kParameter_sb_gain__5:
            return dsp->fVbargraph9;
        case kParameter_sb_gain__6:
            return dsp->fVbargraph7;
        case kParameter_sb_gain__7:
            return dsp->fVbargraph5;
        case kParameter_leveler_brake:
            return dsp->fVbargraph1;
        case kParameter_leveler_gain:
            return dsp->fVbargraph2;
        case kParameter_leveler_meter_minimum:
            return dsp->fVbargraph0;
        
        default:
            return 0.0f;
        }
    }

    void setParameterValue(const uint32_t index, const float value) override
    {
        switch (index)
        {
        case kParameter_sb_strength:
            dsp->fVslider4 = value;
            break;
        case kParameter_sb_target_spectrum_0:
            dsp->fVslider11 = value;
            break;
        case kParameter_sb_target_spectrum_1:
            dsp->fVslider10 = value;
            break;
        case kParameter_sb_target_spectrum_2:
            dsp->fVslider9 = value;
            break;
        case kParameter_sb_target_spectrum_3:
            dsp->fVslider8 = value;
            break;
        case kParameter_sb_target_spectrum_4:
            dsp->fVslider7 = value;
            break;
        case kParameter_sb_target_spectrum_5:
            dsp->fVslider6 = value;
            break;
        case kParameter_sb_target_spectrum_6:
            dsp->fVslider5 = value;
            break;
        case kParameter_sb_target_spectrum_7:
            dsp->fVslider3 = value;
            break;
        case kParameter_bypass:
            dsp->fCheckbox0 = value;
            break;
        case kParameter_leveler_target:
            dsp->fVslider0 = value;
            break;
        case kParameter_leveler_expander_offset:
            dsp->fVslider2 = value;
            break;
        case kParameter_pre_lowcut:
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
            dsp->fVslider11,
            dsp->fVslider10,
            dsp->fVslider9,
            dsp->fVslider8,
            dsp->fVslider7,
            dsp->fVslider6,
            dsp->fVslider5,
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
        dsp->fVslider11 = params[1];
        dsp->fVslider10 = params[2];
        dsp->fVslider9 = params[3];
        dsp->fVslider8 = params[4];
        dsp->fVslider7 = params[5];
        dsp->fVslider6 = params[6];
        dsp->fVslider5 = params[7];
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