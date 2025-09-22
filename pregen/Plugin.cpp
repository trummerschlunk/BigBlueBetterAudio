
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
// Version: 0.10
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
	
	float fVec0[2];
	int fSampleRate;
	float fConst0;
	float fConst1;
	FAUSTFLOAT fCheckbox0;
	float fConst2;
	float fRec0[2];
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
	float fConst13;
	float fConst14;
	float fConst15;
	float fConst16;
	float fConst17;
	float fConst18;
	float fConst19;
	float fConst20;
	float fConst21;
	float fConst22;
	float fConst23;
	float fConst24;
	float fConst25;
	float fConst26;
	float fConst27;
	float fConst28;
	float fConst29;
	float fConst30;
	int iConst31;
	float fConst32;
	float fConst33;
	float fConst34;
	float fRec83[2];
	float fConst35;
	float fRec84[2];
	float fConst36;
	float fRec78[2];
	float fRec79[2];
	float fRec75[2];
	float fConst37;
	float fRec76[2];
	float fRec72[2];
	float fRec73[2];
	float fVec1[2];
	int iConst38;
	float fVec2[3];
	int iConst39;
	float fVec3[5];
	int iConst40;
	int iConst41;
	float fVec4[12];
	int iConst42;
	int iConst43;
	int IOTA0;
	float fVec5[32];
	int iConst44;
	int iConst45;
	float fVec6[64];
	int iConst46;
	int iConst47;
	float fVec7[128];
	int iConst48;
	int iConst49;
	float fVec8[256];
	int iConst50;
	int iConst51;
	float fVec9[512];
	int iConst52;
	FAUSTFLOAT fVslider0;
	float fConst53;
	float fConst54;
	int iConst55;
	float fConst56;
	float fConst57;
	float fRec89[2];
	int iConst58;
	float fVec10[3];
	int iConst59;
	float fVec11[5];
	int iConst60;
	int iConst61;
	float fVec12[12];
	int iConst62;
	int iConst63;
	float fVec13[32];
	int iConst64;
	int iConst65;
	float fVec14[64];
	int iConst66;
	int iConst67;
	float fVec15[128];
	int iConst68;
	int iConst69;
	float fVec16[256];
	int iConst70;
	int iConst71;
	float fVec17[512];
	int iConst72;
	int iConst73;
	float fVec18[1024];
	int iConst74;
	int iConst75;
	float fVec19[2048];
	int iConst76;
	int iConst77;
	float fVec20[4096];
	int iConst78;
	int iConst79;
	float fVec21[8192];
	int iConst80;
	int iConst81;
	float fVec22[16384];
	int iConst82;
	int iConst83;
	float fVec23[32768];
	int iConst84;
	int iConst85;
	float fVec24[65536];
	int iConst86;
	int iConst87;
	float fVec25[131072];
	int iConst88;
	int iConst89;
	float fVec26[262144];
	int iConst90;
	int iConst91;
	float fVec27[524288];
	int iConst92;
	float fRec88[2];
	FAUSTFLOAT fVbargraph0;
	float fConst93;
	float fConst94;
	float fRec71[2];
	FAUSTFLOAT fVbargraph1;
	float fConst95;
	FAUSTFLOAT fVslider1;
	float fConst96;
	float fConst97;
	int iConst98;
	float fConst99;
	float fConst100;
	float fConst101;
	float fConst102;
	float fConst103;
	float fConst104;
	float fConst105;
	float fConst106;
	float fConst107;
	float fConst108;
	float fConst109;
	float fConst110;
	float fConst111;
	float fVec28[2];
	float fConst112;
	float fConst113;
	float fRec93[2];
	float fRec92[2];
	float fConst114;
	float fVec29[2];
	float fConst115;
	float fRec91[2];
	float fRec90[2];
	float fVec30[2];
	float fVec31[3];
	float fVec32[5];
	float fVec33[12];
	float fVec34[32];
	float fVec35[64];
	float fVec36[128];
	float fVec37[256];
	float fVec38[512];
	int iConst116;
	int iConst117;
	int iConst118;
	int iConst119;
	int iConst120;
	int iConst121;
	int iConst122;
	int iConst123;
	int iConst124;
	int iConst125;
	int iConst126;
	int iConst127;
	int iConst128;
	int iConst129;
	int iConst130;
	float fRec66[2];
	float fRec67[2];
	float fRec64[2];
	FAUSTFLOAT fVbargraph2;
	float fRec63[2];
	float fConst131;
	float fConst132;
	FAUSTFLOAT fVslider2;
	float fRec97[2];
	float fRec96[3];
	float fVec39[2];
	float fRec95[2];
	float fConst133;
	float fConst134;
	float fRec94[3];
	float fVec40[2];
	float fRec58[2];
	float fConst135;
	float fRec59[2];
	float fConst136;
	float fRec55[2];
	float fRec56[2];
	float fRec51[2];
	float fConst137;
	float fRec52[2];
	float fConst138;
	float fRec47[2];
	float fConst139;
	float fRec48[2];
	float fConst140;
	float fRec43[2];
	float fConst141;
	float fRec44[2];
	float fConst142;
	float fRec38[2];
	float fConst143;
	float fRec39[2];
	float fConst144;
	float fRec35[2];
	float fRec36[2];
	float fRec31[2];
	float fRec32[2];
	float fConst145;
	float fRec26[2];
	float fConst146;
	float fRec27[2];
	float fConst147;
	float fRec23[2];
	float fRec24[2];
	float fRec25[2];
	FAUSTFLOAT fVslider3;
	float fConst148;
	FAUSTFLOAT fVslider4;
	float fConst149;
	float fVec41[2];
	float fConst150;
	float fConst151;
	float fRec104[2];
	float fRec103[2];
	float fVec42[2];
	float fRec102[2];
	float fRec101[2];
	float fConst152;
	float fConst153;
	float fRec100[2];
	float fRec99[2];
	float fConst154;
	float fConst155;
	float fVec43[2];
	float fConst156;
	float fRec110[2];
	float fRec109[2];
	float fVec44[2];
	float fRec108[2];
	float fRec107[2];
	float fRec106[2];
	float fRec105[2];
	FAUSTFLOAT fVbargraph3;
	float fRec98[2];
	float fVec45[2];
	float fVec46[3];
	float fVec47[5];
	float fVec48[12];
	float fVec49[32];
	float fVec50[64];
	float fVec51[128];
	float fVec52[256];
	float fVec53[512];
	float fConst157;
	float fRec111[2];
	FAUSTFLOAT fVbargraph4;
	FAUSTFLOAT fVbargraph5;
	float fRec112[2];
	float fRec113[2];
	float fVec54[2];
	float fConst158;
	float fConst159;
	FAUSTFLOAT fVslider5;
	float fVec55[2];
	float fRec123[2];
	float fRec122[2];
	float fVec56[2];
	float fRec121[2];
	float fRec120[2];
	float fRec119[2];
	float fRec118[2];
	FAUSTFLOAT fVbargraph6;
	float fRec117[2];
	FAUSTFLOAT fVbargraph7;
	float fRec136[2];
	float fRec137[2];
	float fRec132[2];
	float fRec133[2];
	float fRec127[2];
	float fRec128[2];
	float fRec124[2];
	float fRec125[2];
	float fRec126[2];
	float fConst160;
	float fConst161;
	FAUSTFLOAT fVslider6;
	float fVec57[2];
	float fRec147[2];
	float fRec146[2];
	float fVec58[2];
	float fRec145[2];
	float fRec144[2];
	float fRec143[2];
	float fRec142[2];
	FAUSTFLOAT fVbargraph8;
	float fRec141[2];
	FAUSTFLOAT fVbargraph9;
	float fRec148[2];
	float fRec149[2];
	float fVec59[2];
	float fConst162;
	float fConst163;
	FAUSTFLOAT fVslider7;
	float fVec60[2];
	float fRec159[2];
	float fRec158[2];
	float fVec61[2];
	float fRec157[2];
	float fRec156[2];
	float fRec155[2];
	float fRec154[2];
	FAUSTFLOAT fVbargraph10;
	float fRec153[2];
	FAUSTFLOAT fVbargraph11;
	float fRec192[2];
	float fRec193[2];
	float fRec188[2];
	float fRec189[2];
	float fRec184[2];
	float fRec185[2];
	float fRec180[2];
	float fRec181[2];
	float fRec175[2];
	float fRec176[2];
	float fRec172[2];
	float fRec173[2];
	float fRec168[2];
	float fRec169[2];
	float fRec163[2];
	float fRec164[2];
	float fRec160[2];
	float fRec161[2];
	float fRec162[2];
	FAUSTFLOAT fVslider8;
	float fVec62[2];
	float fRec203[2];
	float fRec202[2];
	float fVec63[2];
	float fRec201[2];
	float fRec200[2];
	float fRec199[2];
	float fRec198[2];
	FAUSTFLOAT fVbargraph12;
	float fRec197[2];
	FAUSTFLOAT fVbargraph13;
	float fRec204[2];
	float fRec205[2];
	float fVec64[2];
	float fConst164;
	float fConst165;
	FAUSTFLOAT fVslider9;
	float fVec65[2];
	float fRec215[2];
	float fRec214[2];
	float fVec66[2];
	float fRec213[2];
	float fRec212[2];
	float fRec211[2];
	float fRec210[2];
	FAUSTFLOAT fVbargraph14;
	float fRec209[2];
	FAUSTFLOAT fVbargraph15;
	float fRec228[2];
	float fRec229[2];
	float fRec224[2];
	float fRec225[2];
	float fRec219[2];
	float fRec220[2];
	float fRec216[2];
	float fRec217[2];
	float fRec218[2];
	float fConst166;
	float fConst167;
	FAUSTFLOAT fVslider10;
	float fVec67[2];
	float fRec239[2];
	float fRec238[2];
	float fVec68[2];
	float fRec237[2];
	float fRec236[2];
	float fRec235[2];
	float fRec234[2];
	FAUSTFLOAT fVbargraph16;
	float fRec233[2];
	FAUSTFLOAT fVbargraph17;
	float fRec240[2];
	float fRec241[2];
	float fVec69[2];
	float fConst168;
	FAUSTFLOAT fVslider11;
	float fVec70[2];
	float fRec251[2];
	float fRec250[2];
	float fVec71[2];
	float fRec249[2];
	float fRec248[2];
	float fRec247[2];
	float fRec246[2];
	FAUSTFLOAT fVbargraph18;
	float fRec245[2];
	FAUSTFLOAT fVbargraph19;
	float fRec22[3];
	float fRec18[2];
	float fRec19[2];
	float fRec15[2];
	float fRec16[2];
	float fRec255[2];
	float fRec256[2];
	float fRec258[2];
	float fRec259[2];
	float fRec252[2];
	float fRec253[2];
	float fRec11[2];
	float fRec12[2];
	float fRec8[2];
	float fRec9[2];
	float fRec261[2];
	float fRec262[2];
	float fRec4[2];
	float fRec5[2];
	float fRec1[2];
	float fRec2[2];
	int iConst169;
	float fVec72[2];
	int iConst170;
	float fVec73[3];
	int iConst171;
	float fVec74[5];
	int iConst172;
	int iConst173;
	float fVec75[12];
	int iConst174;
	int iConst175;
	float fVec76[32];
	int iConst176;
	int iConst177;
	float fVec77[64];
	int iConst178;
	int iConst179;
	float fVec78[128];
	int iConst180;
	int iConst181;
	float fVec79[256];
	int iConst182;
	int iConst183;
	float fVec80[512];
	int iConst184;
	int iConst185;
	float fVec81[512];
	int iConst186;
	float fRec264[2];
	float fRec266[2];
	float fRec267[2];
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
	float fRec265[2];
	float fRec278[2];
	float fRec279[2];
	float fRec282[2];
	float fRec283[2];
	float fRec274[2];
	float fRec275[2];
	float fRec271[2];
	float fRec272[2];
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
	float fRec270[2];
	float fRec286[2];
	float fRec287[2];
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
	float fRec285[2];
	float fRec305[2];
	float fRec306[2];
	float fRec312[2];
	float fRec313[2];
	float fRec315[2];
	float fRec316[2];
	float fRec309[2];
	float fRec310[2];
	float fRec301[2];
	float fRec302[2];
	float fRec298[2];
	float fRec299[2];
	float fRec318[2];
	float fRec319[2];
	float fRec294[2];
	float fRec295[2];
	float fRec291[2];
	float fRec292[2];
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
	float fRec290[2];
	float fRec322[2];
	float fRec323[2];
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
	float fRec321[2];
	float fRec334[2];
	float fRec335[2];
	float fRec338[2];
	float fRec339[2];
	float fRec330[2];
	float fRec331[2];
	float fRec327[2];
	float fRec328[2];
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
	float fRec326[2];
	float fRec342[2];
	float fRec343[2];
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
	float fRec341[2];
	float fRec346[2];
	float fRec347[2];
	float fRec348[2];
	float fRec349[2];
	float fRec350[2];
	float fRec351[2];
	float fRec352[2];
	float fRec353[2];
	
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
		m->declare("compile_options", "-a /Users/klausscheuermann/Library/Caches/TemporaryItems/faustpp/80028-md.cpp -lang cpp -ct 1 -es 1 -mcd 16 -mdd 1024 -mdy 33 -single -ftz 0");
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
		m->declare("routes.lib/name", "Faust Signal Routing Library");
		m->declare("routes.lib/version", "1.2.0");
		m->declare("signals.lib/name", "Faust Signal Routing Library");
		m->declare("signals.lib/onePoleSwitching:author", "Jonatan Liljedahl, revised by Dario Sanfilippo");
		m->declare("signals.lib/onePoleSwitching:licence", "STK-4.3");
		m->declare("signals.lib/version", "1.6.0");
		m->declare("version", "0.10");
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
		fConst1 = 44.1f / fConst0;
		fConst2 = 1.0f - fConst1;
		fConst3 = std::tan(314.15927f / fConst0);
		fConst4 = fConst3 * (fConst3 + 1.4142135f) + 1.0f;
		fConst5 = 2.0f / fConst4;
		fConst6 = std::tan(628.31854f / fConst0);
		fConst7 = fConst6 * (fConst6 + 1.4142135f) + 1.0f;
		fConst8 = 2.0f / fConst7;
		fConst9 = std::tan(2513.2742f / fConst0);
		fConst10 = fConst9 * (fConst9 + 1.4142135f) + 1.0f;
		fConst11 = 2.0f / fConst10;
		fConst12 = std::tan(1256.6371f / fConst0);
		fConst13 = fConst12 * (fConst12 + 1.4142135f) + 1.0f;
		fConst14 = 2.0f / fConst13;
		fConst15 = std::tan(20106.193f / fConst0);
		fConst16 = fConst15 * (fConst15 + 1.4142135f) + 1.0f;
		fConst17 = 2.0f / fConst16;
		fConst18 = std::tan(5026.5483f / fConst0);
		fConst19 = fConst18 * (fConst18 + 1.4142135f) + 1.0f;
		fConst20 = 2.0f / fConst19;
		fConst21 = std::tan(10053.097f / fConst0);
		fConst22 = fConst21 * (fConst21 + 1.4142135f) + 1.0f;
		fConst23 = 2.0f / fConst22;
		fConst24 = std::tan(69115.04f / fConst0);
		fConst25 = 1.0f / fConst24;
		fConst26 = (fConst25 + 1.0f) / fConst24 + 1.0f;
		fConst27 = 1.0f / fConst26;
		fConst28 = 3.1415927f / fConst0;
		fConst29 = 0.125f * fConst0;
		fConst30 = 0.01f * fConst0;
		iConst31 = int(std::floor(fConst30)) % 2;
		fConst32 = std::tan(879.64594f / fConst0);
		fConst33 = fConst32 * (fConst32 + 1.4142135f) + 1.0f;
		fConst34 = 2.0f / fConst33;
		fConst35 = fConst32 / fConst33;
		fConst36 = 1.0f / fConst33;
		fConst37 = fConst12 / fConst13;
		iConst38 = int(std::floor(0.005f * fConst0)) % 2;
		iConst39 = int(std::floor(0.0025f * fConst0)) % 2;
		iConst40 = iConst31 + 2 * iConst38;
		iConst41 = int(std::floor(0.00125f * fConst0)) % 2;
		iConst42 = iConst40 + 4 * iConst39;
		iConst43 = int(std::floor(0.000625f * fConst0)) % 2;
		iConst44 = iConst42 + 8 * iConst41;
		iConst45 = int(std::floor(0.0003125f * fConst0)) % 2;
		iConst46 = iConst44 + 16 * iConst43;
		iConst47 = int(std::floor(0.00015625f * fConst0)) % 2;
		iConst48 = iConst46 + 32 * iConst45;
		iConst49 = int(std::floor(7.8125e-05f * fConst0)) % 2;
		iConst50 = iConst48 + 64 * iConst47;
		iConst51 = int(std::floor(3.90625e-05f * fConst0)) % 2;
		iConst52 = iConst50 + 128 * iConst49;
		fConst53 = std::exp(-(1.0f / fConst0));
		fConst54 = 1.0f - fConst53;
		iConst55 = int(std::floor(3.0f * fConst0)) % 2;
		fConst56 = std::exp(-(1e+02f / fConst0));
		fConst57 = 1.0f - fConst56;
		iConst58 = int(std::floor(1.5f * fConst0)) % 2;
		iConst59 = int(std::floor(0.75f * fConst0)) % 2;
		iConst60 = iConst55 + 2 * iConst58;
		iConst61 = int(std::floor(0.375f * fConst0)) % 2;
		iConst62 = iConst60 + 4 * iConst59;
		iConst63 = int(std::floor(0.1875f * fConst0)) % 2;
		iConst64 = iConst62 + 8 * iConst61;
		iConst65 = int(std::floor(0.09375f * fConst0)) % 2;
		iConst66 = iConst64 + 16 * iConst63;
		iConst67 = int(std::floor(0.046875f * fConst0)) % 2;
		iConst68 = iConst66 + 32 * iConst65;
		iConst69 = int(std::floor(0.0234375f * fConst0)) % 2;
		iConst70 = iConst68 + 64 * iConst67;
		iConst71 = int(std::floor(0.01171875f * fConst0)) % 2;
		iConst72 = iConst70 + 128 * iConst69;
		iConst73 = int(std::floor(0.005859375f * fConst0)) % 2;
		iConst74 = iConst72 + 256 * iConst71;
		iConst75 = int(std::floor(0.0029296875f * fConst0)) % 2;
		iConst76 = iConst74 + 512 * iConst73;
		iConst77 = int(std::floor(0.0014648438f * fConst0)) % 2;
		iConst78 = iConst76 + 1024 * iConst75;
		iConst79 = int(std::floor(0.0007324219f * fConst0)) % 2;
		iConst80 = iConst78 + 2048 * iConst77;
		iConst81 = int(std::floor(0.00036621094f * fConst0)) % 2;
		iConst82 = iConst80 + 4096 * iConst79;
		iConst83 = int(std::floor(0.00018310547f * fConst0)) % 2;
		iConst84 = iConst82 + 8192 * iConst81;
		iConst85 = int(std::floor(9.1552734e-05f * fConst0)) % 2;
		iConst86 = iConst84 + 16384 * iConst83;
		iConst87 = int(std::floor(4.5776367e-05f * fConst0)) % 2;
		iConst88 = iConst86 + 32768 * iConst85;
		iConst89 = int(std::floor(2.2888184e-05f * fConst0)) % 2;
		iConst90 = iConst88 + 65536 * iConst87;
		iConst91 = int(std::floor(1.1444092e-05f * fConst0)) % 2;
		iConst92 = iConst90 + 131072 * iConst89;
		fConst93 = std::exp(-(5.0f / fConst0));
		fConst94 = std::exp(-(1e+03f / fConst0));
		fConst95 = 9.964212e-07f * fConst0;
		fConst96 = std::rint(fConst30);
		fConst97 = 1.0f / std::max<float>(fConst96, 1.1920929e-07f);
		iConst98 = int(std::floor(0.00390625f * fConst96)) % 2;
		fConst99 = std::tan(119.806114f / fConst0);
		fConst100 = mydsp_faustpower2_f(fConst99);
		fConst101 = 0.50032705f * (fConst100 + 1.0f);
		fConst102 = 1.0f / (fConst99 + fConst101);
		fConst103 = std::tan(5283.415f / fConst0);
		fConst104 = mydsp_faustpower2_f(fConst103);
		fConst105 = 1.4142135f * fConst103;
		fConst106 = 1.0f / (fConst104 + fConst105 + 1.0f);
		fConst107 = fConst104 + -1.5848527f;
		fConst108 = 2.0f * fConst107;
		fConst109 = fConst104 + (1.0f - fConst105);
		fConst110 = 1.7803667f * fConst103;
		fConst111 = fConst104 + (1.5848527f - fConst110);
		fConst112 = 2.0f * (fConst104 + -1.0f);
		fConst113 = fConst104 + fConst110 + 1.5848527f;
		fConst114 = fConst101 - fConst99;
		fConst115 = 1.0006541f * (fConst100 + -1.0f);
		iConst116 = int(std::floor(fConst96)) % 2;
		iConst117 = int(std::floor(0.5f * fConst96)) % 2;
		iConst118 = iConst116 + 2 * iConst117;
		iConst119 = int(std::floor(0.25f * fConst96)) % 2;
		iConst120 = iConst118 + 4 * iConst119;
		iConst121 = int(std::floor(0.125f * fConst96)) % 2;
		iConst122 = iConst120 + 8 * iConst121;
		iConst123 = int(std::floor(0.0625f * fConst96)) % 2;
		iConst124 = iConst122 + 16 * iConst123;
		iConst125 = int(std::floor(0.03125f * fConst96)) % 2;
		iConst126 = iConst124 + 32 * iConst125;
		iConst127 = int(std::floor(0.015625f * fConst96)) % 2;
		iConst128 = iConst126 + 64 * iConst127;
		iConst129 = int(std::floor(0.0078125f * fConst96)) % 2;
		iConst130 = iConst128 + 128 * iConst129;
		fConst131 = 1.0f / (fConst25 + 1.0f);
		fConst132 = 1.0f - fConst25;
		fConst133 = (fConst25 + -1.0f) / fConst24 + 1.0f;
		fConst134 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst24));
		fConst135 = fConst9 / fConst10;
		fConst136 = 1.0f / fConst10;
		fConst137 = fConst21 / fConst22;
		fConst138 = 1.0f / fConst22;
		fConst139 = fConst18 / fConst19;
		fConst140 = 1.0f / fConst19;
		fConst141 = fConst15 / fConst16;
		fConst142 = 1.0f / fConst16;
		fConst143 = fConst6 / fConst7;
		fConst144 = 1.0f / fConst7;
		fConst145 = 1.0f / fConst13;
		fConst146 = fConst3 / fConst4;
		fConst147 = 1.0f / fConst4;
		fConst148 = 1.0f - fConst93;
		fConst149 = 3.9810717f * fConst111;
		fConst150 = 7.9621434f * fConst107;
		fConst151 = 3.9810717f * fConst113;
		fConst152 = std::exp(-(1e+01f / fConst0));
		fConst153 = 1.0f - fConst152;
		fConst154 = 2.0f * (fConst107 / fConst26);
		fConst155 = fConst111 / fConst26;
		fConst156 = fConst113 / fConst26;
		fConst157 = std::exp(-(4e+01f / fConst0));
		fConst158 = std::exp(-(5.714286f / fConst0));
		fConst159 = 1.0f - fConst158;
		fConst160 = std::exp(-(6.6666665f / fConst0));
		fConst161 = 1.0f - fConst160;
		fConst162 = std::exp(-(8.0f / fConst0));
		fConst163 = 1.0f - fConst162;
		fConst164 = std::exp(-(13.333333f / fConst0));
		fConst165 = 1.0f - fConst164;
		fConst166 = std::exp(-(2e+01f / fConst0));
		fConst167 = 1.0f - fConst166;
		fConst168 = 1.0f - fConst157;
		iConst169 = int(std::floor(0.001f * fConst0)) % 2;
		iConst170 = int(std::floor(0.0005f * fConst0)) % 2;
		iConst171 = int(std::floor(0.00025f * fConst0)) % 2;
		iConst172 = iConst169 + 2 * iConst170;
		iConst173 = int(std::floor(0.000125f * fConst0)) % 2;
		iConst174 = iConst172 + 4 * iConst171;
		iConst175 = int(std::floor(6.25e-05f * fConst0)) % 2;
		iConst176 = iConst174 + 8 * iConst173;
		iConst177 = int(std::floor(3.125e-05f * fConst0)) % 2;
		iConst178 = iConst176 + 16 * iConst175;
		iConst179 = int(std::floor(1.5625e-05f * fConst0)) % 2;
		iConst180 = iConst178 + 32 * iConst177;
		iConst181 = int(std::floor(7.8125e-06f * fConst0)) % 2;
		iConst182 = iConst180 + 64 * iConst179;
		iConst183 = int(std::floor(3.90625e-06f * fConst0)) % 2;
		iConst184 = iConst182 + 128 * iConst181;
		iConst185 = int(std::floor(1.953125e-06f * fConst0)) % 2;
		iConst186 = iConst184 + 256 * iConst183;
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
			fVec0[l0] = 0.0f;
		}
		for (int l1 = 0; l1 < 2; l1 = l1 + 1) {
			fRec0[l1] = 0.0f;
		}
		for (int l2 = 0; l2 < 2; l2 = l2 + 1) {
			fRec83[l2] = 0.0f;
		}
		for (int l3 = 0; l3 < 2; l3 = l3 + 1) {
			fRec84[l3] = 0.0f;
		}
		for (int l4 = 0; l4 < 2; l4 = l4 + 1) {
			fRec78[l4] = 0.0f;
		}
		for (int l5 = 0; l5 < 2; l5 = l5 + 1) {
			fRec79[l5] = 0.0f;
		}
		for (int l6 = 0; l6 < 2; l6 = l6 + 1) {
			fRec75[l6] = 0.0f;
		}
		for (int l7 = 0; l7 < 2; l7 = l7 + 1) {
			fRec76[l7] = 0.0f;
		}
		for (int l8 = 0; l8 < 2; l8 = l8 + 1) {
			fRec72[l8] = 0.0f;
		}
		for (int l9 = 0; l9 < 2; l9 = l9 + 1) {
			fRec73[l9] = 0.0f;
		}
		for (int l10 = 0; l10 < 2; l10 = l10 + 1) {
			fVec1[l10] = 0.0f;
		}
		for (int l11 = 0; l11 < 3; l11 = l11 + 1) {
			fVec2[l11] = 0.0f;
		}
		for (int l12 = 0; l12 < 5; l12 = l12 + 1) {
			fVec3[l12] = 0.0f;
		}
		for (int l13 = 0; l13 < 12; l13 = l13 + 1) {
			fVec4[l13] = 0.0f;
		}
		IOTA0 = 0;
		for (int l14 = 0; l14 < 32; l14 = l14 + 1) {
			fVec5[l14] = 0.0f;
		}
		for (int l15 = 0; l15 < 64; l15 = l15 + 1) {
			fVec6[l15] = 0.0f;
		}
		for (int l16 = 0; l16 < 128; l16 = l16 + 1) {
			fVec7[l16] = 0.0f;
		}
		for (int l17 = 0; l17 < 256; l17 = l17 + 1) {
			fVec8[l17] = 0.0f;
		}
		for (int l18 = 0; l18 < 512; l18 = l18 + 1) {
			fVec9[l18] = 0.0f;
		}
		for (int l19 = 0; l19 < 2; l19 = l19 + 1) {
			fRec89[l19] = 0.0f;
		}
		for (int l20 = 0; l20 < 3; l20 = l20 + 1) {
			fVec10[l20] = 0.0f;
		}
		for (int l21 = 0; l21 < 5; l21 = l21 + 1) {
			fVec11[l21] = 0.0f;
		}
		for (int l22 = 0; l22 < 12; l22 = l22 + 1) {
			fVec12[l22] = 0.0f;
		}
		for (int l23 = 0; l23 < 32; l23 = l23 + 1) {
			fVec13[l23] = 0.0f;
		}
		for (int l24 = 0; l24 < 64; l24 = l24 + 1) {
			fVec14[l24] = 0.0f;
		}
		for (int l25 = 0; l25 < 128; l25 = l25 + 1) {
			fVec15[l25] = 0.0f;
		}
		for (int l26 = 0; l26 < 256; l26 = l26 + 1) {
			fVec16[l26] = 0.0f;
		}
		for (int l27 = 0; l27 < 512; l27 = l27 + 1) {
			fVec17[l27] = 0.0f;
		}
		for (int l28 = 0; l28 < 1024; l28 = l28 + 1) {
			fVec18[l28] = 0.0f;
		}
		for (int l29 = 0; l29 < 2048; l29 = l29 + 1) {
			fVec19[l29] = 0.0f;
		}
		for (int l30 = 0; l30 < 4096; l30 = l30 + 1) {
			fVec20[l30] = 0.0f;
		}
		for (int l31 = 0; l31 < 8192; l31 = l31 + 1) {
			fVec21[l31] = 0.0f;
		}
		for (int l32 = 0; l32 < 16384; l32 = l32 + 1) {
			fVec22[l32] = 0.0f;
		}
		for (int l33 = 0; l33 < 32768; l33 = l33 + 1) {
			fVec23[l33] = 0.0f;
		}
		for (int l34 = 0; l34 < 65536; l34 = l34 + 1) {
			fVec24[l34] = 0.0f;
		}
		for (int l35 = 0; l35 < 131072; l35 = l35 + 1) {
			fVec25[l35] = 0.0f;
		}
		for (int l36 = 0; l36 < 262144; l36 = l36 + 1) {
			fVec26[l36] = 0.0f;
		}
		for (int l37 = 0; l37 < 524288; l37 = l37 + 1) {
			fVec27[l37] = 0.0f;
		}
		for (int l38 = 0; l38 < 2; l38 = l38 + 1) {
			fRec88[l38] = 0.0f;
		}
		for (int l39 = 0; l39 < 2; l39 = l39 + 1) {
			fRec71[l39] = 0.0f;
		}
		for (int l40 = 0; l40 < 2; l40 = l40 + 1) {
			fVec28[l40] = 0.0f;
		}
		for (int l41 = 0; l41 < 2; l41 = l41 + 1) {
			fRec93[l41] = 0.0f;
		}
		for (int l42 = 0; l42 < 2; l42 = l42 + 1) {
			fRec92[l42] = 0.0f;
		}
		for (int l43 = 0; l43 < 2; l43 = l43 + 1) {
			fVec29[l43] = 0.0f;
		}
		for (int l44 = 0; l44 < 2; l44 = l44 + 1) {
			fRec91[l44] = 0.0f;
		}
		for (int l45 = 0; l45 < 2; l45 = l45 + 1) {
			fRec90[l45] = 0.0f;
		}
		for (int l46 = 0; l46 < 2; l46 = l46 + 1) {
			fVec30[l46] = 0.0f;
		}
		for (int l47 = 0; l47 < 3; l47 = l47 + 1) {
			fVec31[l47] = 0.0f;
		}
		for (int l48 = 0; l48 < 5; l48 = l48 + 1) {
			fVec32[l48] = 0.0f;
		}
		for (int l49 = 0; l49 < 12; l49 = l49 + 1) {
			fVec33[l49] = 0.0f;
		}
		for (int l50 = 0; l50 < 32; l50 = l50 + 1) {
			fVec34[l50] = 0.0f;
		}
		for (int l51 = 0; l51 < 64; l51 = l51 + 1) {
			fVec35[l51] = 0.0f;
		}
		for (int l52 = 0; l52 < 128; l52 = l52 + 1) {
			fVec36[l52] = 0.0f;
		}
		for (int l53 = 0; l53 < 256; l53 = l53 + 1) {
			fVec37[l53] = 0.0f;
		}
		for (int l54 = 0; l54 < 512; l54 = l54 + 1) {
			fVec38[l54] = 0.0f;
		}
		for (int l55 = 0; l55 < 2; l55 = l55 + 1) {
			fRec66[l55] = 0.0f;
		}
		for (int l56 = 0; l56 < 2; l56 = l56 + 1) {
			fRec67[l56] = 0.0f;
		}
		for (int l57 = 0; l57 < 2; l57 = l57 + 1) {
			fRec64[l57] = 0.0f;
		}
		for (int l58 = 0; l58 < 2; l58 = l58 + 1) {
			fRec63[l58] = 0.0f;
		}
		for (int l59 = 0; l59 < 2; l59 = l59 + 1) {
			fRec97[l59] = 0.0f;
		}
		for (int l60 = 0; l60 < 3; l60 = l60 + 1) {
			fRec96[l60] = 0.0f;
		}
		for (int l61 = 0; l61 < 2; l61 = l61 + 1) {
			fVec39[l61] = 0.0f;
		}
		for (int l62 = 0; l62 < 2; l62 = l62 + 1) {
			fRec95[l62] = 0.0f;
		}
		for (int l63 = 0; l63 < 3; l63 = l63 + 1) {
			fRec94[l63] = 0.0f;
		}
		for (int l64 = 0; l64 < 2; l64 = l64 + 1) {
			fVec40[l64] = 0.0f;
		}
		for (int l65 = 0; l65 < 2; l65 = l65 + 1) {
			fRec58[l65] = 0.0f;
		}
		for (int l66 = 0; l66 < 2; l66 = l66 + 1) {
			fRec59[l66] = 0.0f;
		}
		for (int l67 = 0; l67 < 2; l67 = l67 + 1) {
			fRec55[l67] = 0.0f;
		}
		for (int l68 = 0; l68 < 2; l68 = l68 + 1) {
			fRec56[l68] = 0.0f;
		}
		for (int l69 = 0; l69 < 2; l69 = l69 + 1) {
			fRec51[l69] = 0.0f;
		}
		for (int l70 = 0; l70 < 2; l70 = l70 + 1) {
			fRec52[l70] = 0.0f;
		}
		for (int l71 = 0; l71 < 2; l71 = l71 + 1) {
			fRec47[l71] = 0.0f;
		}
		for (int l72 = 0; l72 < 2; l72 = l72 + 1) {
			fRec48[l72] = 0.0f;
		}
		for (int l73 = 0; l73 < 2; l73 = l73 + 1) {
			fRec43[l73] = 0.0f;
		}
		for (int l74 = 0; l74 < 2; l74 = l74 + 1) {
			fRec44[l74] = 0.0f;
		}
		for (int l75 = 0; l75 < 2; l75 = l75 + 1) {
			fRec38[l75] = 0.0f;
		}
		for (int l76 = 0; l76 < 2; l76 = l76 + 1) {
			fRec39[l76] = 0.0f;
		}
		for (int l77 = 0; l77 < 2; l77 = l77 + 1) {
			fRec35[l77] = 0.0f;
		}
		for (int l78 = 0; l78 < 2; l78 = l78 + 1) {
			fRec36[l78] = 0.0f;
		}
		for (int l79 = 0; l79 < 2; l79 = l79 + 1) {
			fRec31[l79] = 0.0f;
		}
		for (int l80 = 0; l80 < 2; l80 = l80 + 1) {
			fRec32[l80] = 0.0f;
		}
		for (int l81 = 0; l81 < 2; l81 = l81 + 1) {
			fRec26[l81] = 0.0f;
		}
		for (int l82 = 0; l82 < 2; l82 = l82 + 1) {
			fRec27[l82] = 0.0f;
		}
		for (int l83 = 0; l83 < 2; l83 = l83 + 1) {
			fRec23[l83] = 0.0f;
		}
		for (int l84 = 0; l84 < 2; l84 = l84 + 1) {
			fRec24[l84] = 0.0f;
		}
		for (int l85 = 0; l85 < 2; l85 = l85 + 1) {
			fRec25[l85] = 0.0f;
		}
		for (int l86 = 0; l86 < 2; l86 = l86 + 1) {
			fVec41[l86] = 0.0f;
		}
		for (int l87 = 0; l87 < 2; l87 = l87 + 1) {
			fRec104[l87] = 0.0f;
		}
		for (int l88 = 0; l88 < 2; l88 = l88 + 1) {
			fRec103[l88] = 0.0f;
		}
		for (int l89 = 0; l89 < 2; l89 = l89 + 1) {
			fVec42[l89] = 0.0f;
		}
		for (int l90 = 0; l90 < 2; l90 = l90 + 1) {
			fRec102[l90] = 0.0f;
		}
		for (int l91 = 0; l91 < 2; l91 = l91 + 1) {
			fRec101[l91] = 0.0f;
		}
		for (int l92 = 0; l92 < 2; l92 = l92 + 1) {
			fRec100[l92] = 0.0f;
		}
		for (int l93 = 0; l93 < 2; l93 = l93 + 1) {
			fRec99[l93] = 0.0f;
		}
		for (int l94 = 0; l94 < 2; l94 = l94 + 1) {
			fVec43[l94] = 0.0f;
		}
		for (int l95 = 0; l95 < 2; l95 = l95 + 1) {
			fRec110[l95] = 0.0f;
		}
		for (int l96 = 0; l96 < 2; l96 = l96 + 1) {
			fRec109[l96] = 0.0f;
		}
		for (int l97 = 0; l97 < 2; l97 = l97 + 1) {
			fVec44[l97] = 0.0f;
		}
		for (int l98 = 0; l98 < 2; l98 = l98 + 1) {
			fRec108[l98] = 0.0f;
		}
		for (int l99 = 0; l99 < 2; l99 = l99 + 1) {
			fRec107[l99] = 0.0f;
		}
		for (int l100 = 0; l100 < 2; l100 = l100 + 1) {
			fRec106[l100] = 0.0f;
		}
		for (int l101 = 0; l101 < 2; l101 = l101 + 1) {
			fRec105[l101] = 0.0f;
		}
		for (int l102 = 0; l102 < 2; l102 = l102 + 1) {
			fRec98[l102] = 0.0f;
		}
		for (int l103 = 0; l103 < 2; l103 = l103 + 1) {
			fVec45[l103] = 0.0f;
		}
		for (int l104 = 0; l104 < 3; l104 = l104 + 1) {
			fVec46[l104] = 0.0f;
		}
		for (int l105 = 0; l105 < 5; l105 = l105 + 1) {
			fVec47[l105] = 0.0f;
		}
		for (int l106 = 0; l106 < 12; l106 = l106 + 1) {
			fVec48[l106] = 0.0f;
		}
		for (int l107 = 0; l107 < 32; l107 = l107 + 1) {
			fVec49[l107] = 0.0f;
		}
		for (int l108 = 0; l108 < 64; l108 = l108 + 1) {
			fVec50[l108] = 0.0f;
		}
		for (int l109 = 0; l109 < 128; l109 = l109 + 1) {
			fVec51[l109] = 0.0f;
		}
		for (int l110 = 0; l110 < 256; l110 = l110 + 1) {
			fVec52[l110] = 0.0f;
		}
		for (int l111 = 0; l111 < 512; l111 = l111 + 1) {
			fVec53[l111] = 0.0f;
		}
		for (int l112 = 0; l112 < 2; l112 = l112 + 1) {
			fRec111[l112] = 0.0f;
		}
		for (int l113 = 0; l113 < 2; l113 = l113 + 1) {
			fRec112[l113] = 0.0f;
		}
		for (int l114 = 0; l114 < 2; l114 = l114 + 1) {
			fRec113[l114] = 0.0f;
		}
		for (int l115 = 0; l115 < 2; l115 = l115 + 1) {
			fVec54[l115] = 0.0f;
		}
		for (int l116 = 0; l116 < 2; l116 = l116 + 1) {
			fVec55[l116] = 0.0f;
		}
		for (int l117 = 0; l117 < 2; l117 = l117 + 1) {
			fRec123[l117] = 0.0f;
		}
		for (int l118 = 0; l118 < 2; l118 = l118 + 1) {
			fRec122[l118] = 0.0f;
		}
		for (int l119 = 0; l119 < 2; l119 = l119 + 1) {
			fVec56[l119] = 0.0f;
		}
		for (int l120 = 0; l120 < 2; l120 = l120 + 1) {
			fRec121[l120] = 0.0f;
		}
		for (int l121 = 0; l121 < 2; l121 = l121 + 1) {
			fRec120[l121] = 0.0f;
		}
		for (int l122 = 0; l122 < 2; l122 = l122 + 1) {
			fRec119[l122] = 0.0f;
		}
		for (int l123 = 0; l123 < 2; l123 = l123 + 1) {
			fRec118[l123] = 0.0f;
		}
		for (int l124 = 0; l124 < 2; l124 = l124 + 1) {
			fRec117[l124] = 0.0f;
		}
		for (int l125 = 0; l125 < 2; l125 = l125 + 1) {
			fRec136[l125] = 0.0f;
		}
		for (int l126 = 0; l126 < 2; l126 = l126 + 1) {
			fRec137[l126] = 0.0f;
		}
		for (int l127 = 0; l127 < 2; l127 = l127 + 1) {
			fRec132[l127] = 0.0f;
		}
		for (int l128 = 0; l128 < 2; l128 = l128 + 1) {
			fRec133[l128] = 0.0f;
		}
		for (int l129 = 0; l129 < 2; l129 = l129 + 1) {
			fRec127[l129] = 0.0f;
		}
		for (int l130 = 0; l130 < 2; l130 = l130 + 1) {
			fRec128[l130] = 0.0f;
		}
		for (int l131 = 0; l131 < 2; l131 = l131 + 1) {
			fRec124[l131] = 0.0f;
		}
		for (int l132 = 0; l132 < 2; l132 = l132 + 1) {
			fRec125[l132] = 0.0f;
		}
		for (int l133 = 0; l133 < 2; l133 = l133 + 1) {
			fRec126[l133] = 0.0f;
		}
		for (int l134 = 0; l134 < 2; l134 = l134 + 1) {
			fVec57[l134] = 0.0f;
		}
		for (int l135 = 0; l135 < 2; l135 = l135 + 1) {
			fRec147[l135] = 0.0f;
		}
		for (int l136 = 0; l136 < 2; l136 = l136 + 1) {
			fRec146[l136] = 0.0f;
		}
		for (int l137 = 0; l137 < 2; l137 = l137 + 1) {
			fVec58[l137] = 0.0f;
		}
		for (int l138 = 0; l138 < 2; l138 = l138 + 1) {
			fRec145[l138] = 0.0f;
		}
		for (int l139 = 0; l139 < 2; l139 = l139 + 1) {
			fRec144[l139] = 0.0f;
		}
		for (int l140 = 0; l140 < 2; l140 = l140 + 1) {
			fRec143[l140] = 0.0f;
		}
		for (int l141 = 0; l141 < 2; l141 = l141 + 1) {
			fRec142[l141] = 0.0f;
		}
		for (int l142 = 0; l142 < 2; l142 = l142 + 1) {
			fRec141[l142] = 0.0f;
		}
		for (int l143 = 0; l143 < 2; l143 = l143 + 1) {
			fRec148[l143] = 0.0f;
		}
		for (int l144 = 0; l144 < 2; l144 = l144 + 1) {
			fRec149[l144] = 0.0f;
		}
		for (int l145 = 0; l145 < 2; l145 = l145 + 1) {
			fVec59[l145] = 0.0f;
		}
		for (int l146 = 0; l146 < 2; l146 = l146 + 1) {
			fVec60[l146] = 0.0f;
		}
		for (int l147 = 0; l147 < 2; l147 = l147 + 1) {
			fRec159[l147] = 0.0f;
		}
		for (int l148 = 0; l148 < 2; l148 = l148 + 1) {
			fRec158[l148] = 0.0f;
		}
		for (int l149 = 0; l149 < 2; l149 = l149 + 1) {
			fVec61[l149] = 0.0f;
		}
		for (int l150 = 0; l150 < 2; l150 = l150 + 1) {
			fRec157[l150] = 0.0f;
		}
		for (int l151 = 0; l151 < 2; l151 = l151 + 1) {
			fRec156[l151] = 0.0f;
		}
		for (int l152 = 0; l152 < 2; l152 = l152 + 1) {
			fRec155[l152] = 0.0f;
		}
		for (int l153 = 0; l153 < 2; l153 = l153 + 1) {
			fRec154[l153] = 0.0f;
		}
		for (int l154 = 0; l154 < 2; l154 = l154 + 1) {
			fRec153[l154] = 0.0f;
		}
		for (int l155 = 0; l155 < 2; l155 = l155 + 1) {
			fRec192[l155] = 0.0f;
		}
		for (int l156 = 0; l156 < 2; l156 = l156 + 1) {
			fRec193[l156] = 0.0f;
		}
		for (int l157 = 0; l157 < 2; l157 = l157 + 1) {
			fRec188[l157] = 0.0f;
		}
		for (int l158 = 0; l158 < 2; l158 = l158 + 1) {
			fRec189[l158] = 0.0f;
		}
		for (int l159 = 0; l159 < 2; l159 = l159 + 1) {
			fRec184[l159] = 0.0f;
		}
		for (int l160 = 0; l160 < 2; l160 = l160 + 1) {
			fRec185[l160] = 0.0f;
		}
		for (int l161 = 0; l161 < 2; l161 = l161 + 1) {
			fRec180[l161] = 0.0f;
		}
		for (int l162 = 0; l162 < 2; l162 = l162 + 1) {
			fRec181[l162] = 0.0f;
		}
		for (int l163 = 0; l163 < 2; l163 = l163 + 1) {
			fRec175[l163] = 0.0f;
		}
		for (int l164 = 0; l164 < 2; l164 = l164 + 1) {
			fRec176[l164] = 0.0f;
		}
		for (int l165 = 0; l165 < 2; l165 = l165 + 1) {
			fRec172[l165] = 0.0f;
		}
		for (int l166 = 0; l166 < 2; l166 = l166 + 1) {
			fRec173[l166] = 0.0f;
		}
		for (int l167 = 0; l167 < 2; l167 = l167 + 1) {
			fRec168[l167] = 0.0f;
		}
		for (int l168 = 0; l168 < 2; l168 = l168 + 1) {
			fRec169[l168] = 0.0f;
		}
		for (int l169 = 0; l169 < 2; l169 = l169 + 1) {
			fRec163[l169] = 0.0f;
		}
		for (int l170 = 0; l170 < 2; l170 = l170 + 1) {
			fRec164[l170] = 0.0f;
		}
		for (int l171 = 0; l171 < 2; l171 = l171 + 1) {
			fRec160[l171] = 0.0f;
		}
		for (int l172 = 0; l172 < 2; l172 = l172 + 1) {
			fRec161[l172] = 0.0f;
		}
		for (int l173 = 0; l173 < 2; l173 = l173 + 1) {
			fRec162[l173] = 0.0f;
		}
		for (int l174 = 0; l174 < 2; l174 = l174 + 1) {
			fVec62[l174] = 0.0f;
		}
		for (int l175 = 0; l175 < 2; l175 = l175 + 1) {
			fRec203[l175] = 0.0f;
		}
		for (int l176 = 0; l176 < 2; l176 = l176 + 1) {
			fRec202[l176] = 0.0f;
		}
		for (int l177 = 0; l177 < 2; l177 = l177 + 1) {
			fVec63[l177] = 0.0f;
		}
		for (int l178 = 0; l178 < 2; l178 = l178 + 1) {
			fRec201[l178] = 0.0f;
		}
		for (int l179 = 0; l179 < 2; l179 = l179 + 1) {
			fRec200[l179] = 0.0f;
		}
		for (int l180 = 0; l180 < 2; l180 = l180 + 1) {
			fRec199[l180] = 0.0f;
		}
		for (int l181 = 0; l181 < 2; l181 = l181 + 1) {
			fRec198[l181] = 0.0f;
		}
		for (int l182 = 0; l182 < 2; l182 = l182 + 1) {
			fRec197[l182] = 0.0f;
		}
		for (int l183 = 0; l183 < 2; l183 = l183 + 1) {
			fRec204[l183] = 0.0f;
		}
		for (int l184 = 0; l184 < 2; l184 = l184 + 1) {
			fRec205[l184] = 0.0f;
		}
		for (int l185 = 0; l185 < 2; l185 = l185 + 1) {
			fVec64[l185] = 0.0f;
		}
		for (int l186 = 0; l186 < 2; l186 = l186 + 1) {
			fVec65[l186] = 0.0f;
		}
		for (int l187 = 0; l187 < 2; l187 = l187 + 1) {
			fRec215[l187] = 0.0f;
		}
		for (int l188 = 0; l188 < 2; l188 = l188 + 1) {
			fRec214[l188] = 0.0f;
		}
		for (int l189 = 0; l189 < 2; l189 = l189 + 1) {
			fVec66[l189] = 0.0f;
		}
		for (int l190 = 0; l190 < 2; l190 = l190 + 1) {
			fRec213[l190] = 0.0f;
		}
		for (int l191 = 0; l191 < 2; l191 = l191 + 1) {
			fRec212[l191] = 0.0f;
		}
		for (int l192 = 0; l192 < 2; l192 = l192 + 1) {
			fRec211[l192] = 0.0f;
		}
		for (int l193 = 0; l193 < 2; l193 = l193 + 1) {
			fRec210[l193] = 0.0f;
		}
		for (int l194 = 0; l194 < 2; l194 = l194 + 1) {
			fRec209[l194] = 0.0f;
		}
		for (int l195 = 0; l195 < 2; l195 = l195 + 1) {
			fRec228[l195] = 0.0f;
		}
		for (int l196 = 0; l196 < 2; l196 = l196 + 1) {
			fRec229[l196] = 0.0f;
		}
		for (int l197 = 0; l197 < 2; l197 = l197 + 1) {
			fRec224[l197] = 0.0f;
		}
		for (int l198 = 0; l198 < 2; l198 = l198 + 1) {
			fRec225[l198] = 0.0f;
		}
		for (int l199 = 0; l199 < 2; l199 = l199 + 1) {
			fRec219[l199] = 0.0f;
		}
		for (int l200 = 0; l200 < 2; l200 = l200 + 1) {
			fRec220[l200] = 0.0f;
		}
		for (int l201 = 0; l201 < 2; l201 = l201 + 1) {
			fRec216[l201] = 0.0f;
		}
		for (int l202 = 0; l202 < 2; l202 = l202 + 1) {
			fRec217[l202] = 0.0f;
		}
		for (int l203 = 0; l203 < 2; l203 = l203 + 1) {
			fRec218[l203] = 0.0f;
		}
		for (int l204 = 0; l204 < 2; l204 = l204 + 1) {
			fVec67[l204] = 0.0f;
		}
		for (int l205 = 0; l205 < 2; l205 = l205 + 1) {
			fRec239[l205] = 0.0f;
		}
		for (int l206 = 0; l206 < 2; l206 = l206 + 1) {
			fRec238[l206] = 0.0f;
		}
		for (int l207 = 0; l207 < 2; l207 = l207 + 1) {
			fVec68[l207] = 0.0f;
		}
		for (int l208 = 0; l208 < 2; l208 = l208 + 1) {
			fRec237[l208] = 0.0f;
		}
		for (int l209 = 0; l209 < 2; l209 = l209 + 1) {
			fRec236[l209] = 0.0f;
		}
		for (int l210 = 0; l210 < 2; l210 = l210 + 1) {
			fRec235[l210] = 0.0f;
		}
		for (int l211 = 0; l211 < 2; l211 = l211 + 1) {
			fRec234[l211] = 0.0f;
		}
		for (int l212 = 0; l212 < 2; l212 = l212 + 1) {
			fRec233[l212] = 0.0f;
		}
		for (int l213 = 0; l213 < 2; l213 = l213 + 1) {
			fRec240[l213] = 0.0f;
		}
		for (int l214 = 0; l214 < 2; l214 = l214 + 1) {
			fRec241[l214] = 0.0f;
		}
		for (int l215 = 0; l215 < 2; l215 = l215 + 1) {
			fVec69[l215] = 0.0f;
		}
		for (int l216 = 0; l216 < 2; l216 = l216 + 1) {
			fVec70[l216] = 0.0f;
		}
		for (int l217 = 0; l217 < 2; l217 = l217 + 1) {
			fRec251[l217] = 0.0f;
		}
		for (int l218 = 0; l218 < 2; l218 = l218 + 1) {
			fRec250[l218] = 0.0f;
		}
		for (int l219 = 0; l219 < 2; l219 = l219 + 1) {
			fVec71[l219] = 0.0f;
		}
		for (int l220 = 0; l220 < 2; l220 = l220 + 1) {
			fRec249[l220] = 0.0f;
		}
		for (int l221 = 0; l221 < 2; l221 = l221 + 1) {
			fRec248[l221] = 0.0f;
		}
		for (int l222 = 0; l222 < 2; l222 = l222 + 1) {
			fRec247[l222] = 0.0f;
		}
		for (int l223 = 0; l223 < 2; l223 = l223 + 1) {
			fRec246[l223] = 0.0f;
		}
		for (int l224 = 0; l224 < 2; l224 = l224 + 1) {
			fRec245[l224] = 0.0f;
		}
		for (int l225 = 0; l225 < 3; l225 = l225 + 1) {
			fRec22[l225] = 0.0f;
		}
		for (int l226 = 0; l226 < 2; l226 = l226 + 1) {
			fRec18[l226] = 0.0f;
		}
		for (int l227 = 0; l227 < 2; l227 = l227 + 1) {
			fRec19[l227] = 0.0f;
		}
		for (int l228 = 0; l228 < 2; l228 = l228 + 1) {
			fRec15[l228] = 0.0f;
		}
		for (int l229 = 0; l229 < 2; l229 = l229 + 1) {
			fRec16[l229] = 0.0f;
		}
		for (int l230 = 0; l230 < 2; l230 = l230 + 1) {
			fRec255[l230] = 0.0f;
		}
		for (int l231 = 0; l231 < 2; l231 = l231 + 1) {
			fRec256[l231] = 0.0f;
		}
		for (int l232 = 0; l232 < 2; l232 = l232 + 1) {
			fRec258[l232] = 0.0f;
		}
		for (int l233 = 0; l233 < 2; l233 = l233 + 1) {
			fRec259[l233] = 0.0f;
		}
		for (int l234 = 0; l234 < 2; l234 = l234 + 1) {
			fRec252[l234] = 0.0f;
		}
		for (int l235 = 0; l235 < 2; l235 = l235 + 1) {
			fRec253[l235] = 0.0f;
		}
		for (int l236 = 0; l236 < 2; l236 = l236 + 1) {
			fRec11[l236] = 0.0f;
		}
		for (int l237 = 0; l237 < 2; l237 = l237 + 1) {
			fRec12[l237] = 0.0f;
		}
		for (int l238 = 0; l238 < 2; l238 = l238 + 1) {
			fRec8[l238] = 0.0f;
		}
		for (int l239 = 0; l239 < 2; l239 = l239 + 1) {
			fRec9[l239] = 0.0f;
		}
		for (int l240 = 0; l240 < 2; l240 = l240 + 1) {
			fRec261[l240] = 0.0f;
		}
		for (int l241 = 0; l241 < 2; l241 = l241 + 1) {
			fRec262[l241] = 0.0f;
		}
		for (int l242 = 0; l242 < 2; l242 = l242 + 1) {
			fRec4[l242] = 0.0f;
		}
		for (int l243 = 0; l243 < 2; l243 = l243 + 1) {
			fRec5[l243] = 0.0f;
		}
		for (int l244 = 0; l244 < 2; l244 = l244 + 1) {
			fRec1[l244] = 0.0f;
		}
		for (int l245 = 0; l245 < 2; l245 = l245 + 1) {
			fRec2[l245] = 0.0f;
		}
		for (int l246 = 0; l246 < 2; l246 = l246 + 1) {
			fVec72[l246] = 0.0f;
		}
		for (int l247 = 0; l247 < 3; l247 = l247 + 1) {
			fVec73[l247] = 0.0f;
		}
		for (int l248 = 0; l248 < 5; l248 = l248 + 1) {
			fVec74[l248] = 0.0f;
		}
		for (int l249 = 0; l249 < 12; l249 = l249 + 1) {
			fVec75[l249] = 0.0f;
		}
		for (int l250 = 0; l250 < 32; l250 = l250 + 1) {
			fVec76[l250] = 0.0f;
		}
		for (int l251 = 0; l251 < 64; l251 = l251 + 1) {
			fVec77[l251] = 0.0f;
		}
		for (int l252 = 0; l252 < 128; l252 = l252 + 1) {
			fVec78[l252] = 0.0f;
		}
		for (int l253 = 0; l253 < 256; l253 = l253 + 1) {
			fVec79[l253] = 0.0f;
		}
		for (int l254 = 0; l254 < 512; l254 = l254 + 1) {
			fVec80[l254] = 0.0f;
		}
		for (int l255 = 0; l255 < 512; l255 = l255 + 1) {
			fVec81[l255] = 0.0f;
		}
		for (int l256 = 0; l256 < 2; l256 = l256 + 1) {
			fRec264[l256] = 0.0f;
		}
		for (int l257 = 0; l257 < 2; l257 = l257 + 1) {
			fRec266[l257] = 0.0f;
		}
		for (int l258 = 0; l258 < 2; l258 = l258 + 1) {
			fRec267[l258] = 0.0f;
		}
		for (int l259 = 0; l259 < 2; l259 = l259 + 1) {
			fVec82[l259] = 0.0f;
		}
		for (int l260 = 0; l260 < 3; l260 = l260 + 1) {
			fVec83[l260] = 0.0f;
		}
		for (int l261 = 0; l261 < 5; l261 = l261 + 1) {
			fVec84[l261] = 0.0f;
		}
		for (int l262 = 0; l262 < 12; l262 = l262 + 1) {
			fVec85[l262] = 0.0f;
		}
		for (int l263 = 0; l263 < 32; l263 = l263 + 1) {
			fVec86[l263] = 0.0f;
		}
		for (int l264 = 0; l264 < 64; l264 = l264 + 1) {
			fVec87[l264] = 0.0f;
		}
		for (int l265 = 0; l265 < 128; l265 = l265 + 1) {
			fVec88[l265] = 0.0f;
		}
		for (int l266 = 0; l266 < 256; l266 = l266 + 1) {
			fVec89[l266] = 0.0f;
		}
		for (int l267 = 0; l267 < 512; l267 = l267 + 1) {
			fVec90[l267] = 0.0f;
		}
		for (int l268 = 0; l268 < 512; l268 = l268 + 1) {
			fVec91[l268] = 0.0f;
		}
		for (int l269 = 0; l269 < 2; l269 = l269 + 1) {
			fRec265[l269] = 0.0f;
		}
		for (int l270 = 0; l270 < 2; l270 = l270 + 1) {
			fRec278[l270] = 0.0f;
		}
		for (int l271 = 0; l271 < 2; l271 = l271 + 1) {
			fRec279[l271] = 0.0f;
		}
		for (int l272 = 0; l272 < 2; l272 = l272 + 1) {
			fRec282[l272] = 0.0f;
		}
		for (int l273 = 0; l273 < 2; l273 = l273 + 1) {
			fRec283[l273] = 0.0f;
		}
		for (int l274 = 0; l274 < 2; l274 = l274 + 1) {
			fRec274[l274] = 0.0f;
		}
		for (int l275 = 0; l275 < 2; l275 = l275 + 1) {
			fRec275[l275] = 0.0f;
		}
		for (int l276 = 0; l276 < 2; l276 = l276 + 1) {
			fRec271[l276] = 0.0f;
		}
		for (int l277 = 0; l277 < 2; l277 = l277 + 1) {
			fRec272[l277] = 0.0f;
		}
		for (int l278 = 0; l278 < 2; l278 = l278 + 1) {
			fVec92[l278] = 0.0f;
		}
		for (int l279 = 0; l279 < 3; l279 = l279 + 1) {
			fVec93[l279] = 0.0f;
		}
		for (int l280 = 0; l280 < 5; l280 = l280 + 1) {
			fVec94[l280] = 0.0f;
		}
		for (int l281 = 0; l281 < 12; l281 = l281 + 1) {
			fVec95[l281] = 0.0f;
		}
		for (int l282 = 0; l282 < 32; l282 = l282 + 1) {
			fVec96[l282] = 0.0f;
		}
		for (int l283 = 0; l283 < 64; l283 = l283 + 1) {
			fVec97[l283] = 0.0f;
		}
		for (int l284 = 0; l284 < 128; l284 = l284 + 1) {
			fVec98[l284] = 0.0f;
		}
		for (int l285 = 0; l285 < 256; l285 = l285 + 1) {
			fVec99[l285] = 0.0f;
		}
		for (int l286 = 0; l286 < 512; l286 = l286 + 1) {
			fVec100[l286] = 0.0f;
		}
		for (int l287 = 0; l287 < 512; l287 = l287 + 1) {
			fVec101[l287] = 0.0f;
		}
		for (int l288 = 0; l288 < 2; l288 = l288 + 1) {
			fRec270[l288] = 0.0f;
		}
		for (int l289 = 0; l289 < 2; l289 = l289 + 1) {
			fRec286[l289] = 0.0f;
		}
		for (int l290 = 0; l290 < 2; l290 = l290 + 1) {
			fRec287[l290] = 0.0f;
		}
		for (int l291 = 0; l291 < 2; l291 = l291 + 1) {
			fVec102[l291] = 0.0f;
		}
		for (int l292 = 0; l292 < 3; l292 = l292 + 1) {
			fVec103[l292] = 0.0f;
		}
		for (int l293 = 0; l293 < 5; l293 = l293 + 1) {
			fVec104[l293] = 0.0f;
		}
		for (int l294 = 0; l294 < 12; l294 = l294 + 1) {
			fVec105[l294] = 0.0f;
		}
		for (int l295 = 0; l295 < 32; l295 = l295 + 1) {
			fVec106[l295] = 0.0f;
		}
		for (int l296 = 0; l296 < 64; l296 = l296 + 1) {
			fVec107[l296] = 0.0f;
		}
		for (int l297 = 0; l297 < 128; l297 = l297 + 1) {
			fVec108[l297] = 0.0f;
		}
		for (int l298 = 0; l298 < 256; l298 = l298 + 1) {
			fVec109[l298] = 0.0f;
		}
		for (int l299 = 0; l299 < 512; l299 = l299 + 1) {
			fVec110[l299] = 0.0f;
		}
		for (int l300 = 0; l300 < 512; l300 = l300 + 1) {
			fVec111[l300] = 0.0f;
		}
		for (int l301 = 0; l301 < 2; l301 = l301 + 1) {
			fRec285[l301] = 0.0f;
		}
		for (int l302 = 0; l302 < 2; l302 = l302 + 1) {
			fRec305[l302] = 0.0f;
		}
		for (int l303 = 0; l303 < 2; l303 = l303 + 1) {
			fRec306[l303] = 0.0f;
		}
		for (int l304 = 0; l304 < 2; l304 = l304 + 1) {
			fRec312[l304] = 0.0f;
		}
		for (int l305 = 0; l305 < 2; l305 = l305 + 1) {
			fRec313[l305] = 0.0f;
		}
		for (int l306 = 0; l306 < 2; l306 = l306 + 1) {
			fRec315[l306] = 0.0f;
		}
		for (int l307 = 0; l307 < 2; l307 = l307 + 1) {
			fRec316[l307] = 0.0f;
		}
		for (int l308 = 0; l308 < 2; l308 = l308 + 1) {
			fRec309[l308] = 0.0f;
		}
		for (int l309 = 0; l309 < 2; l309 = l309 + 1) {
			fRec310[l309] = 0.0f;
		}
		for (int l310 = 0; l310 < 2; l310 = l310 + 1) {
			fRec301[l310] = 0.0f;
		}
		for (int l311 = 0; l311 < 2; l311 = l311 + 1) {
			fRec302[l311] = 0.0f;
		}
		for (int l312 = 0; l312 < 2; l312 = l312 + 1) {
			fRec298[l312] = 0.0f;
		}
		for (int l313 = 0; l313 < 2; l313 = l313 + 1) {
			fRec299[l313] = 0.0f;
		}
		for (int l314 = 0; l314 < 2; l314 = l314 + 1) {
			fRec318[l314] = 0.0f;
		}
		for (int l315 = 0; l315 < 2; l315 = l315 + 1) {
			fRec319[l315] = 0.0f;
		}
		for (int l316 = 0; l316 < 2; l316 = l316 + 1) {
			fRec294[l316] = 0.0f;
		}
		for (int l317 = 0; l317 < 2; l317 = l317 + 1) {
			fRec295[l317] = 0.0f;
		}
		for (int l318 = 0; l318 < 2; l318 = l318 + 1) {
			fRec291[l318] = 0.0f;
		}
		for (int l319 = 0; l319 < 2; l319 = l319 + 1) {
			fRec292[l319] = 0.0f;
		}
		for (int l320 = 0; l320 < 2; l320 = l320 + 1) {
			fVec112[l320] = 0.0f;
		}
		for (int l321 = 0; l321 < 3; l321 = l321 + 1) {
			fVec113[l321] = 0.0f;
		}
		for (int l322 = 0; l322 < 5; l322 = l322 + 1) {
			fVec114[l322] = 0.0f;
		}
		for (int l323 = 0; l323 < 12; l323 = l323 + 1) {
			fVec115[l323] = 0.0f;
		}
		for (int l324 = 0; l324 < 32; l324 = l324 + 1) {
			fVec116[l324] = 0.0f;
		}
		for (int l325 = 0; l325 < 64; l325 = l325 + 1) {
			fVec117[l325] = 0.0f;
		}
		for (int l326 = 0; l326 < 128; l326 = l326 + 1) {
			fVec118[l326] = 0.0f;
		}
		for (int l327 = 0; l327 < 256; l327 = l327 + 1) {
			fVec119[l327] = 0.0f;
		}
		for (int l328 = 0; l328 < 512; l328 = l328 + 1) {
			fVec120[l328] = 0.0f;
		}
		for (int l329 = 0; l329 < 512; l329 = l329 + 1) {
			fVec121[l329] = 0.0f;
		}
		for (int l330 = 0; l330 < 2; l330 = l330 + 1) {
			fRec290[l330] = 0.0f;
		}
		for (int l331 = 0; l331 < 2; l331 = l331 + 1) {
			fRec322[l331] = 0.0f;
		}
		for (int l332 = 0; l332 < 2; l332 = l332 + 1) {
			fRec323[l332] = 0.0f;
		}
		for (int l333 = 0; l333 < 2; l333 = l333 + 1) {
			fVec122[l333] = 0.0f;
		}
		for (int l334 = 0; l334 < 3; l334 = l334 + 1) {
			fVec123[l334] = 0.0f;
		}
		for (int l335 = 0; l335 < 5; l335 = l335 + 1) {
			fVec124[l335] = 0.0f;
		}
		for (int l336 = 0; l336 < 12; l336 = l336 + 1) {
			fVec125[l336] = 0.0f;
		}
		for (int l337 = 0; l337 < 32; l337 = l337 + 1) {
			fVec126[l337] = 0.0f;
		}
		for (int l338 = 0; l338 < 64; l338 = l338 + 1) {
			fVec127[l338] = 0.0f;
		}
		for (int l339 = 0; l339 < 128; l339 = l339 + 1) {
			fVec128[l339] = 0.0f;
		}
		for (int l340 = 0; l340 < 256; l340 = l340 + 1) {
			fVec129[l340] = 0.0f;
		}
		for (int l341 = 0; l341 < 512; l341 = l341 + 1) {
			fVec130[l341] = 0.0f;
		}
		for (int l342 = 0; l342 < 512; l342 = l342 + 1) {
			fVec131[l342] = 0.0f;
		}
		for (int l343 = 0; l343 < 2; l343 = l343 + 1) {
			fRec321[l343] = 0.0f;
		}
		for (int l344 = 0; l344 < 2; l344 = l344 + 1) {
			fRec334[l344] = 0.0f;
		}
		for (int l345 = 0; l345 < 2; l345 = l345 + 1) {
			fRec335[l345] = 0.0f;
		}
		for (int l346 = 0; l346 < 2; l346 = l346 + 1) {
			fRec338[l346] = 0.0f;
		}
		for (int l347 = 0; l347 < 2; l347 = l347 + 1) {
			fRec339[l347] = 0.0f;
		}
		for (int l348 = 0; l348 < 2; l348 = l348 + 1) {
			fRec330[l348] = 0.0f;
		}
		for (int l349 = 0; l349 < 2; l349 = l349 + 1) {
			fRec331[l349] = 0.0f;
		}
		for (int l350 = 0; l350 < 2; l350 = l350 + 1) {
			fRec327[l350] = 0.0f;
		}
		for (int l351 = 0; l351 < 2; l351 = l351 + 1) {
			fRec328[l351] = 0.0f;
		}
		for (int l352 = 0; l352 < 2; l352 = l352 + 1) {
			fVec132[l352] = 0.0f;
		}
		for (int l353 = 0; l353 < 3; l353 = l353 + 1) {
			fVec133[l353] = 0.0f;
		}
		for (int l354 = 0; l354 < 5; l354 = l354 + 1) {
			fVec134[l354] = 0.0f;
		}
		for (int l355 = 0; l355 < 12; l355 = l355 + 1) {
			fVec135[l355] = 0.0f;
		}
		for (int l356 = 0; l356 < 32; l356 = l356 + 1) {
			fVec136[l356] = 0.0f;
		}
		for (int l357 = 0; l357 < 64; l357 = l357 + 1) {
			fVec137[l357] = 0.0f;
		}
		for (int l358 = 0; l358 < 128; l358 = l358 + 1) {
			fVec138[l358] = 0.0f;
		}
		for (int l359 = 0; l359 < 256; l359 = l359 + 1) {
			fVec139[l359] = 0.0f;
		}
		for (int l360 = 0; l360 < 512; l360 = l360 + 1) {
			fVec140[l360] = 0.0f;
		}
		for (int l361 = 0; l361 < 512; l361 = l361 + 1) {
			fVec141[l361] = 0.0f;
		}
		for (int l362 = 0; l362 < 2; l362 = l362 + 1) {
			fRec326[l362] = 0.0f;
		}
		for (int l363 = 0; l363 < 2; l363 = l363 + 1) {
			fRec342[l363] = 0.0f;
		}
		for (int l364 = 0; l364 < 2; l364 = l364 + 1) {
			fRec343[l364] = 0.0f;
		}
		for (int l365 = 0; l365 < 2; l365 = l365 + 1) {
			fVec142[l365] = 0.0f;
		}
		for (int l366 = 0; l366 < 3; l366 = l366 + 1) {
			fVec143[l366] = 0.0f;
		}
		for (int l367 = 0; l367 < 5; l367 = l367 + 1) {
			fVec144[l367] = 0.0f;
		}
		for (int l368 = 0; l368 < 12; l368 = l368 + 1) {
			fVec145[l368] = 0.0f;
		}
		for (int l369 = 0; l369 < 32; l369 = l369 + 1) {
			fVec146[l369] = 0.0f;
		}
		for (int l370 = 0; l370 < 64; l370 = l370 + 1) {
			fVec147[l370] = 0.0f;
		}
		for (int l371 = 0; l371 < 128; l371 = l371 + 1) {
			fVec148[l371] = 0.0f;
		}
		for (int l372 = 0; l372 < 256; l372 = l372 + 1) {
			fVec149[l372] = 0.0f;
		}
		for (int l373 = 0; l373 < 512; l373 = l373 + 1) {
			fVec150[l373] = 0.0f;
		}
		for (int l374 = 0; l374 < 512; l374 = l374 + 1) {
			fVec151[l374] = 0.0f;
		}
		for (int l375 = 0; l375 < 2; l375 = l375 + 1) {
			fRec341[l375] = 0.0f;
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
		for (int l383 = 0; l383 < 2; l383 = l383 + 1) {
			fRec353[l383] = 0.0f;
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
		ui_interface->declare(&fVslider3, "symbol", "sb_strength");
		ui_interface->declare(&fVslider3, "unit", "%");
		ui_interface->addVerticalSlider("strength", &fVslider3, FAUSTFLOAT(5e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVbargraph4, "3", "");
		ui_interface->declare(&fVbargraph4, "symbol", "sb_expander");
		ui_interface->addVerticalBargraph("sb_expander", &fVbargraph4, FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("Target Curve");
		ui_interface->declare(&fVslider4, "symbol", "sb_target_spectrum_0");
		ui_interface->addVerticalSlider("spec 0", &fVslider4, FAUSTFLOAT(-1e+01f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider5, "symbol", "sb_target_spectrum_1");
		ui_interface->addVerticalSlider("spec 1", &fVslider5, FAUSTFLOAT(-5.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider6, "symbol", "sb_target_spectrum_2");
		ui_interface->addVerticalSlider("spec 2", &fVslider6, FAUSTFLOAT(-5.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider7, "symbol", "sb_target_spectrum_3");
		ui_interface->addVerticalSlider("spec 3", &fVslider7, FAUSTFLOAT(-8.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider8, "symbol", "sb_target_spectrum_4");
		ui_interface->addVerticalSlider("spec 4", &fVslider8, FAUSTFLOAT(-9.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider9, "symbol", "sb_target_spectrum_5");
		ui_interface->addVerticalSlider("spec 5", &fVslider9, FAUSTFLOAT(-1e+01f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider10, "symbol", "sb_target_spectrum_6");
		ui_interface->addVerticalSlider("spec 6", &fVslider10, FAUSTFLOAT(-7.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider11, "symbol", "sb_target_spectrum_7");
		ui_interface->addVerticalSlider("spec 7", &fVslider11, FAUSTFLOAT(-3.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->declare(0, "2", "");
		ui_interface->openHorizontalBox("loudness normalized spectrum");
		ui_interface->declare(&fVbargraph3, "1", "");
		ui_interface->declare(&fVbargraph3, "symbol", "sb_meter_ 0");
		ui_interface->declare(&fVbargraph3, "unit", "dB");
		ui_interface->addVerticalBargraph("band  0", &fVbargraph3, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph6, "1", "");
		ui_interface->declare(&fVbargraph6, "symbol", "sb_meter_ 1");
		ui_interface->declare(&fVbargraph6, "unit", "dB");
		ui_interface->addVerticalBargraph("band  1", &fVbargraph6, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph8, "1", "");
		ui_interface->declare(&fVbargraph8, "symbol", "sb_meter_ 2");
		ui_interface->declare(&fVbargraph8, "unit", "dB");
		ui_interface->addVerticalBargraph("band  2", &fVbargraph8, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph10, "1", "");
		ui_interface->declare(&fVbargraph10, "symbol", "sb_meter_ 3");
		ui_interface->declare(&fVbargraph10, "unit", "dB");
		ui_interface->addVerticalBargraph("band  3", &fVbargraph10, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph12, "1", "");
		ui_interface->declare(&fVbargraph12, "symbol", "sb_meter_ 4");
		ui_interface->declare(&fVbargraph12, "unit", "dB");
		ui_interface->addVerticalBargraph("band  4", &fVbargraph12, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph14, "1", "");
		ui_interface->declare(&fVbargraph14, "symbol", "sb_meter_ 5");
		ui_interface->declare(&fVbargraph14, "unit", "dB");
		ui_interface->addVerticalBargraph("band  5", &fVbargraph14, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph16, "1", "");
		ui_interface->declare(&fVbargraph16, "symbol", "sb_meter_ 6");
		ui_interface->declare(&fVbargraph16, "unit", "dB");
		ui_interface->addVerticalBargraph("band  6", &fVbargraph16, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph18, "1", "");
		ui_interface->declare(&fVbargraph18, "symbol", "sb_meter_ 7");
		ui_interface->declare(&fVbargraph18, "unit", "dB");
		ui_interface->addVerticalBargraph("band  7", &fVbargraph18, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->closeBox();
		ui_interface->declare(0, "3", "");
		ui_interface->openHorizontalBox("resulting gain");
		ui_interface->declare(&fVbargraph5, "1", "");
		ui_interface->declare(&fVbargraph5, "symbol", "sb_gain_ 0");
		ui_interface->addVerticalBargraph("sb_gain  0", &fVbargraph5, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph7, "1", "");
		ui_interface->declare(&fVbargraph7, "symbol", "sb_gain_ 1");
		ui_interface->addVerticalBargraph("sb_gain  1", &fVbargraph7, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph9, "1", "");
		ui_interface->declare(&fVbargraph9, "symbol", "sb_gain_ 2");
		ui_interface->addVerticalBargraph("sb_gain  2", &fVbargraph9, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph11, "1", "");
		ui_interface->declare(&fVbargraph11, "symbol", "sb_gain_ 3");
		ui_interface->addVerticalBargraph("sb_gain  3", &fVbargraph11, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph13, "1", "");
		ui_interface->declare(&fVbargraph13, "symbol", "sb_gain_ 4");
		ui_interface->addVerticalBargraph("sb_gain  4", &fVbargraph13, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph15, "1", "");
		ui_interface->declare(&fVbargraph15, "symbol", "sb_gain_ 5");
		ui_interface->addVerticalBargraph("sb_gain  5", &fVbargraph15, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph17, "1", "");
		ui_interface->declare(&fVbargraph17, "symbol", "sb_gain_ 6");
		ui_interface->addVerticalBargraph("sb_gain  6", &fVbargraph17, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph19, "1", "");
		ui_interface->declare(&fVbargraph19, "symbol", "sb_gain_ 7");
		ui_interface->addVerticalBargraph("sb_gain  7", &fVbargraph19, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->closeBox();
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("main");
		ui_interface->declare(&fCheckbox0, "0", "");
		ui_interface->declare(&fCheckbox0, "symbol", "bypass");
		ui_interface->addCheckButton("bypass", &fCheckbox0);
		ui_interface->openHorizontalBox("leveler");
		ui_interface->declare(&fVslider1, "1", "");
		ui_interface->declare(&fVslider1, "symbol", "leveler_target");
		ui_interface->declare(&fVslider1, "unit", "dB");
		ui_interface->addVerticalSlider("target", &fVslider1, FAUSTFLOAT(-23.0f), FAUSTFLOAT(-6e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
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
		ui_interface->declare(&fVslider0, "symbol", "leveler_expander_offset");
		ui_interface->addVerticalSlider("thresh offset", &fVslider0, FAUSTFLOAT(6.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(4e+01f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("mbExpComp");
		ui_interface->declare(&fVslider2, "scale", "log");
		ui_interface->declare(&fVslider2, "symbol", "pre_lowcut");
		ui_interface->addVerticalSlider("preLowcut_freq", &fVslider2, FAUSTFLOAT(8e+01f), FAUSTFLOAT(1.0f), FAUSTFLOAT(4e+02f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->closeBox();
		ui_interface->closeBox();
	}
	
	FAUSTPP_VIRTUAL void compute(int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
		FAUSTFLOAT* input0 = inputs[0];
		FAUSTFLOAT* output0 = outputs[0];
		float fSlow0 = fConst1 * float(fCheckbox0);
		float fSlow1 = float(fVslider0);
		float fSlow2 = float(fVslider1);
		float fSlow3 = std::tan(fConst28 * float(fVslider2));
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
		float fSlow15 = float(fVslider5);
		float fSlow16 = float(fVslider6);
		float fSlow17 = float(fVslider7);
		float fSlow18 = float(fVslider8);
		float fSlow19 = float(fVslider9);
		float fSlow20 = float(fVslider10);
		float fSlow21 = float(fVslider11);
		float fSlow22 = fSlow2 + -15.0f;
		float fSlow23 = fSlow2 + -9.0f;
		float fSlow24 = fSlow2 + -7.0f;
		float fSlow25 = fSlow2 + -1.0f;
		for (int i0 = 0; i0 < count; i0 = i0 + 1) {
			float fTemp0 = float(input0[i0]);
			fVec0[0] = fTemp0;
			fRec0[0] = fSlow0 + fConst2 * fRec0[1];
			float fTemp1 = std::fabs(fRec22[1]);
			float fTemp2 = fRec83[1] + fConst32 * (fTemp1 - fRec84[1]);
			fRec83[0] = fConst34 * fTemp2 - fRec83[1];
			float fTemp3 = fRec84[1] + fConst35 * fTemp2;
			fRec84[0] = 2.0f * fTemp3 - fRec84[1];
			float fRec85 = fTemp1;
			float fRec86 = fConst36 * fTemp2;
			float fRec87 = fTemp3;
			float fTemp4 = fRec87 + 1.4142135f * fRec86;
			float fTemp5 = fRec78[1] + fConst32 * (fRec85 - (fTemp4 + fRec79[1]));
			fRec78[0] = fConst34 * fTemp5 - fRec78[1];
			float fTemp6 = fRec79[1] + fConst35 * fTemp5;
			fRec79[0] = 2.0f * fTemp6 - fRec79[1];
			float fRec80 = fRec85 - fTemp4;
			float fRec81 = fConst36 * fTemp5;
			float fRec82 = fTemp6;
			float fTemp7 = fRec82 + 1.4142135f * fRec81;
			float fTemp8 = fRec75[1] + fConst12 * (fRec80 - (fTemp7 + fRec76[1]));
			fRec75[0] = fConst14 * fTemp8 - fRec75[1];
			float fTemp9 = fRec76[1] + fConst37 * fTemp8;
			fRec76[0] = 2.0f * fTemp9 - fRec76[1];
			float fRec77 = fTemp9;
			float fTemp10 = fRec72[1] + fConst12 * (fRec77 - fRec73[1]);
			fRec72[0] = fConst14 * fTemp10 - fRec72[1];
			float fTemp11 = fRec73[1] + fConst37 * fTemp10;
			fRec73[0] = 2.0f * fTemp11 - fRec73[1];
			float fRec74 = fTemp11;
			float fTemp12 = std::fabs(fRec74);
			fVec1[0] = fTemp12;
			float fTemp13 = std::max<float>(fTemp12, fVec1[1]);
			fVec2[0] = fTemp13;
			float fTemp14 = std::max<float>(fTemp13, fVec2[2]);
			fVec3[0] = fTemp14;
			float fTemp15 = std::max<float>(fTemp14, fVec3[4]);
			fVec4[0] = fTemp15;
			float fTemp16 = std::max<float>(fTemp15, fVec4[8]);
			fVec5[IOTA0 & 31] = fTemp16;
			float fTemp17 = std::max<float>(fTemp16, fVec5[(IOTA0 - 16) & 31]);
			fVec6[IOTA0 & 63] = fTemp17;
			float fTemp18 = std::max<float>(fTemp17, fVec6[(IOTA0 - 32) & 63]);
			fVec7[IOTA0 & 127] = fTemp18;
			float fTemp19 = std::max<float>(fTemp18, fVec7[(IOTA0 - 64) & 127]);
			fVec8[IOTA0 & 255] = fTemp19;
			fVec9[IOTA0 & 511] = std::max<float>(fTemp19, fVec8[(IOTA0 - 128) & 255]);
			float fTemp20 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst31) ? fTemp12 : -3.4028235e+38f), ((iConst38) ? fVec2[iConst31] : -3.4028235e+38f)), ((iConst39) ? fVec3[iConst40] : -3.4028235e+38f)), ((iConst41) ? fVec4[iConst42] : -3.4028235e+38f)), ((iConst43) ? fVec5[(IOTA0 - iConst44) & 31] : -3.4028235e+38f)), ((iConst45) ? fVec6[(IOTA0 - iConst46) & 63] : -3.4028235e+38f)), ((iConst47) ? fVec7[(IOTA0 - iConst48) & 127] : -3.4028235e+38f)), ((iConst49) ? fVec8[(IOTA0 - iConst50) & 255] : -3.4028235e+38f)), ((iConst51) ? fVec9[(IOTA0 - iConst52) & 511] : -3.4028235e+38f))));
			fRec89[0] = fConst57 * fTemp1 + fConst56 * fRec89[1];
			float fTemp21 = std::min<float>(fRec89[0], fRec89[1]);
			fVec10[0] = fTemp21;
			float fTemp22 = std::min<float>(fTemp21, fVec10[2]);
			fVec11[0] = fTemp22;
			float fTemp23 = std::min<float>(fTemp22, fVec11[4]);
			fVec12[0] = fTemp23;
			float fTemp24 = std::min<float>(fTemp23, fVec12[8]);
			fVec13[IOTA0 & 31] = fTemp24;
			float fTemp25 = std::min<float>(fTemp24, fVec13[(IOTA0 - 16) & 31]);
			fVec14[IOTA0 & 63] = fTemp25;
			float fTemp26 = std::min<float>(fTemp25, fVec14[(IOTA0 - 32) & 63]);
			fVec15[IOTA0 & 127] = fTemp26;
			float fTemp27 = std::min<float>(fTemp26, fVec15[(IOTA0 - 64) & 127]);
			fVec16[IOTA0 & 255] = fTemp27;
			float fTemp28 = std::min<float>(fTemp27, fVec16[(IOTA0 - 128) & 255]);
			fVec17[IOTA0 & 511] = fTemp28;
			float fTemp29 = std::min<float>(fTemp28, fVec17[(IOTA0 - 256) & 511]);
			fVec18[IOTA0 & 1023] = fTemp29;
			float fTemp30 = std::min<float>(fTemp29, fVec18[(IOTA0 - 512) & 1023]);
			fVec19[IOTA0 & 2047] = fTemp30;
			float fTemp31 = std::min<float>(fTemp30, fVec19[(IOTA0 - 1024) & 2047]);
			fVec20[IOTA0 & 4095] = fTemp31;
			float fTemp32 = std::min<float>(fTemp31, fVec20[(IOTA0 - 2048) & 4095]);
			fVec21[IOTA0 & 8191] = fTemp32;
			float fTemp33 = std::min<float>(fTemp32, fVec21[(IOTA0 - 4096) & 8191]);
			fVec22[IOTA0 & 16383] = fTemp33;
			float fTemp34 = std::min<float>(fTemp33, fVec22[(IOTA0 - 8192) & 16383]);
			fVec23[IOTA0 & 32767] = fTemp34;
			float fTemp35 = std::min<float>(fTemp34, fVec23[(IOTA0 - 16384) & 32767]);
			fVec24[IOTA0 & 65535] = fTemp35;
			float fTemp36 = std::min<float>(fTemp35, fVec24[(IOTA0 - 32768) & 65535]);
			fVec25[IOTA0 & 131071] = fTemp36;
			float fTemp37 = std::min<float>(fTemp36, fVec25[(IOTA0 - 65536) & 131071]);
			fVec26[IOTA0 & 262143] = fTemp37;
			fVec27[IOTA0 & 524287] = std::min<float>(fTemp37, fVec26[(IOTA0 - 131072) & 262143]);
			fRec88[0] = fConst54 * std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(((iConst55) ? fRec89[0] : 3.4028235e+38f), ((iConst58) ? fVec10[iConst55] : 3.4028235e+38f)), ((iConst59) ? fVec11[iConst60] : 3.4028235e+38f)), ((iConst61) ? fVec12[iConst62] : 3.4028235e+38f)), ((iConst63) ? fVec13[(IOTA0 - iConst64) & 31] : 3.4028235e+38f)), ((iConst65) ? fVec14[(IOTA0 - iConst66) & 63] : 3.4028235e+38f)), ((iConst67) ? fVec15[(IOTA0 - iConst68) & 127] : 3.4028235e+38f)), ((iConst69) ? fVec16[(IOTA0 - iConst70) & 255] : 3.4028235e+38f)), ((iConst71) ? fVec17[(IOTA0 - iConst72) & 511] : 3.4028235e+38f)), ((iConst73) ? fVec18[(IOTA0 - iConst74) & 1023] : 3.4028235e+38f)), ((iConst75) ? fVec19[(IOTA0 - iConst76) & 2047] : 3.4028235e+38f)), ((iConst77) ? fVec20[(IOTA0 - iConst78) & 4095] : 3.4028235e+38f)), ((iConst79) ? fVec21[(IOTA0 - iConst80) & 8191] : 3.4028235e+38f)), ((iConst81) ? fVec22[(IOTA0 - iConst82) & 16383] : 3.4028235e+38f)), ((iConst83) ? fVec23[(IOTA0 - iConst84) & 32767] : 3.4028235e+38f)), ((iConst85) ? fVec24[(IOTA0 - iConst86) & 65535] : 3.4028235e+38f)), ((iConst87) ? fVec25[(IOTA0 - iConst88) & 131071] : 3.4028235e+38f)), ((iConst89) ? fVec26[(IOTA0 - iConst90) & 262143] : 3.4028235e+38f)), ((iConst91) ? fVec27[(IOTA0 - iConst92) & 524287] : 3.4028235e+38f)) + fConst53 * fRec88[1];
			float fTemp38 = std::max<float>(-6e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fRec88[0])));
			fVbargraph0 = FAUSTFLOAT(fTemp38);
			float fTemp39 = fTemp38;
			int iTemp40 = (fTemp20 > (fSlow1 + fTemp39 + -12.0f)) + (fTemp20 > (fSlow1 + fTemp39 + 12.0f));
			float fTemp41 = std::max<float>(-3.4028235e+38f, 1e+02f * ((iTemp40 == 0) ? fTemp20 - fTemp39 - fSlow1 : ((iTemp40 == 1) ? -(0.020833334f * mydsp_faustpower2_f(fTemp20 + (-12.0f - fTemp39) - fSlow1)) : 0.0f)));
			float fTemp42 = ((fTemp41 > fRec71[1]) ? fConst94 : fConst93);
			fRec71[0] = fTemp41 * (1.0f - fTemp42) + fRec71[1] * fTemp42;
			float fTemp43 = std::min<float>(1.0f, std::max<float>(0.0f, std::pow(1e+01f, 0.05f * fRec71[0])));
			fVbargraph1 = FAUSTFLOAT(1e+02f * (1.0f - fTemp43));
			float fTemp44 = std::tan(fConst28 * std::min<float>(fConst29, fTemp43 * (fConst95 * std::fabs(fRec64[1]) + 0.0784f)));
			fVec28[0] = fConst109 * fRec92[1] - fConst111 * fRec22[2];
			fRec93[0] = fConst106 * (fConst108 * fRec22[2] - (fVec28[1] + fConst112 * fRec93[1]) + fConst113 * fRec22[1]);
			fRec92[0] = fRec93[0];
			fVec29[0] = 0.50032705f * fRec92[1] - fConst114 * fRec90[1];
			fRec91[0] = fConst102 * (fVec29[1] - fConst115 * fRec91[1] - 1.0006541f * fRec92[1] + 0.50032705f * fRec92[0]);
			fRec90[0] = fRec91[0];
			float fTemp45 = mydsp_faustpower2_f(fRec90[0]);
			fVec30[0] = fTemp45;
			float fTemp46 = fTemp45 + fVec30[1];
			fVec31[0] = fTemp46;
			float fTemp47 = fTemp46 + fVec31[2];
			fVec32[0] = fTemp47;
			float fTemp48 = fTemp47 + fVec32[4];
			fVec33[0] = fTemp48;
			float fTemp49 = fTemp48 + fVec33[8];
			fVec34[IOTA0 & 31] = fTemp49;
			float fTemp50 = fTemp49 + fVec34[(IOTA0 - 16) & 31];
			fVec35[IOTA0 & 63] = fTemp50;
			float fTemp51 = fTemp50 + fVec35[(IOTA0 - 32) & 63];
			fVec36[IOTA0 & 127] = fTemp51;
			float fTemp52 = fTemp51 + fVec36[(IOTA0 - 64) & 127];
			fVec37[IOTA0 & 255] = fTemp52;
			fVec38[IOTA0 & 511] = fTemp52 + fVec37[(IOTA0 - 128) & 255];
			float fTemp53 = fTemp44 + 2.0f;
			float fTemp54 = std::max<float>(-2e+01f, std::min<float>(2e+01f, fSlow2 + fRec63[1] + (0.691f - 4.3429446f * std::log(std::max<float>(1e-12f, fConst97 * (((iConst98) ? 0.86000985f * fVec38[(IOTA0 - iConst130) & 511] : 0.0f) + ((iConst129) ? 0.86000985f * fVec37[(IOTA0 - iConst128) & 255] : 0.0f) + ((iConst127) ? 0.86000985f * fVec36[(IOTA0 - iConst126) & 127] : 0.0f) + ((iConst125) ? 0.86000985f * fVec35[(IOTA0 - iConst124) & 63] : 0.0f) + ((iConst123) ? 0.86000985f * fVec34[(IOTA0 - iConst122) & 31] : 0.0f) + ((iConst121) ? 0.86000985f * fVec33[iConst120] : 0.0f) + ((iConst119) ? 0.86000985f * fVec32[iConst118] : 0.0f) + ((iConst116) ? 0.86000985f * fTemp45 : 0.0f) + ((iConst117) ? 0.86000985f * fVec31[iConst116] : 0.0f))))))) - (fRec66[1] * fTemp53 + fRec67[1]);
			float fTemp55 = fTemp44 * fTemp53 + 1.0f;
			float fTemp56 = fTemp44 * fTemp54 / fTemp55;
			fRec66[0] = fRec66[1] + 2.0f * fTemp56;
			float fTemp57 = fRec66[1] + fTemp56;
			float fTemp58 = fTemp44 * fTemp57;
			fRec67[0] = fRec67[1] + 2.0f * fTemp58;
			float fRec68 = fTemp57;
			float fRec69 = fTemp54 / fTemp55;
			float fRec70 = fRec67[1] + fTemp58;
			fRec64[0] = fRec68;
			float fRec65 = fRec70;
			fVbargraph2 = FAUSTFLOAT(fRec65);
			fRec63[0] = fVbargraph2;
			fRec97[0] = -(fSlow8 * (fSlow9 * fRec97[1] - fSlow5 * (fTemp0 - fVec0[1])));
			fRec96[0] = fRec97[0] - fSlow10 * (fSlow11 * fRec96[2] + fSlow12 * fRec96[1]);
			float fTemp59 = fSlow7 * (fRec96[2] + (fRec96[0] - 2.0f * fRec96[1]));
			fVec39[0] = fTemp59;
			fRec95[0] = -(fConst131 * (fConst132 * fRec95[1] - (fTemp59 + fVec39[1])));
			fRec94[0] = fRec95[0] - fConst27 * (fConst133 * fRec94[2] + fConst134 * fRec94[1]);
			float fTemp60 = std::pow(1e+01f, 0.05f * fRec63[0]) * (fRec94[2] + fRec94[0] + 2.0f * fRec94[1]);
			fVec40[0] = fTemp60;
			float fTemp61 = fConst27 * fTemp60;
			float fTemp62 = fRec58[1] + fConst9 * (fTemp61 - fRec59[1]);
			fRec58[0] = fConst11 * fTemp62 - fRec58[1];
			float fTemp63 = fRec59[1] + fConst135 * fTemp62;
			fRec59[0] = 2.0f * fTemp63 - fRec59[1];
			float fRec60 = fTemp61;
			float fRec61 = fConst136 * fTemp62;
			float fRec62 = fTemp63;
			float fTemp64 = fRec55[1] + fConst9 * (fRec62 - fRec56[1]);
			fRec55[0] = fConst11 * fTemp64 - fRec55[1];
			float fTemp65 = fRec56[1] + fConst135 * fTemp64;
			fRec56[0] = 2.0f * fTemp65 - fRec56[1];
			float fRec57 = fTemp65;
			float fTemp66 = fRec51[1] + fConst21 * (fRec57 - fRec52[1]);
			fRec51[0] = fConst23 * fTemp66 - fRec51[1];
			float fTemp67 = fRec52[1] + fConst137 * fTemp66;
			fRec52[0] = 2.0f * fTemp67 - fRec52[1];
			float fRec53 = fRec57;
			float fRec54 = fConst138 * fTemp66;
			float fTemp68 = 2.828427f * fRec54;
			float fTemp69 = fRec47[1] + fConst18 * (fRec53 - (fTemp68 + fRec48[1]));
			fRec47[0] = fConst20 * fTemp69 - fRec47[1];
			float fTemp70 = fRec48[1] + fConst139 * fTemp69;
			fRec48[0] = 2.0f * fTemp70 - fRec48[1];
			float fRec49 = fRec53 - fTemp68;
			float fRec50 = fConst140 * fTemp69;
			float fTemp71 = 2.828427f * fRec50;
			float fTemp72 = fRec43[1] + fConst15 * (fRec49 - (fTemp71 + fRec44[1]));
			fRec43[0] = fConst17 * fTemp72 - fRec43[1];
			float fTemp73 = fRec44[1] + fConst141 * fTemp72;
			fRec44[0] = 2.0f * fTemp73 - fRec44[1];
			float fRec45 = fRec49 - fTemp71;
			float fRec46 = fConst142 * fTemp72;
			float fTemp74 = 2.828427f * fRec46;
			float fTemp75 = fRec38[1] + fConst6 * (fRec45 - (fTemp74 + fRec39[1]));
			fRec38[0] = fConst8 * fTemp75 - fRec38[1];
			float fTemp76 = fRec39[1] + fConst143 * fTemp75;
			fRec39[0] = 2.0f * fTemp76 - fRec39[1];
			float fRec40 = fRec45 - fTemp74;
			float fRec41 = fConst144 * fTemp75;
			float fRec42 = fTemp76;
			float fTemp77 = fRec35[1] + fConst6 * (fRec42 - fRec36[1]);
			fRec35[0] = fConst8 * fTemp77 - fRec35[1];
			float fTemp78 = fRec36[1] + fConst143 * fTemp77;
			fRec36[0] = 2.0f * fTemp78 - fRec36[1];
			float fRec37 = fTemp78;
			float fTemp79 = fRec31[1] + fConst12 * (fRec37 - fRec32[1]);
			fRec31[0] = fConst14 * fTemp79 - fRec31[1];
			float fTemp80 = fRec32[1] + fConst37 * fTemp79;
			fRec32[0] = 2.0f * fTemp80 - fRec32[1];
			float fRec33 = fRec37;
			float fRec34 = fConst145 * fTemp79;
			float fTemp81 = 2.828427f * fRec34;
			float fTemp82 = fRec26[1] + fConst3 * (fRec33 - (fTemp81 + fRec27[1]));
			fRec26[0] = fConst5 * fTemp82 - fRec26[1];
			float fTemp83 = fRec27[1] + fConst146 * fTemp82;
			fRec27[0] = 2.0f * fTemp83 - fRec27[1];
			float fRec28 = fRec33 - fTemp81;
			float fRec29 = fConst147 * fTemp82;
			float fRec30 = fTemp83;
			float fTemp84 = fRec23[1] + fConst3 * (fRec30 - fRec24[1]);
			fRec23[0] = fConst5 * fTemp84 - fRec23[1];
			float fTemp85 = fRec24[1] + fConst146 * fTemp84;
			fRec24[0] = 2.0f * fTemp85 - fRec24[1];
			fRec25[0] = fTemp85;
			fVec41[0] = fConst149 * fRec25[1] - fConst109 * fRec103[1];
			fRec104[0] = fConst106 * (fVec41[1] - fConst112 * fRec104[1] + fConst150 * fRec25[1] + fConst151 * fRec25[0]);
			fRec103[0] = fRec104[0];
			fVec42[0] = 0.50032705f * fRec103[1] - fConst114 * fRec101[1];
			fRec102[0] = fConst102 * (fVec42[1] - fConst115 * fRec102[1] - 1.0006541f * fRec103[1] + 0.50032705f * fRec103[0]);
			fRec101[0] = fRec102[0];
			float fTemp86 = std::fabs(0.92736715f * fRec101[0]);
			fRec100[0] = std::max<float>(fTemp86, fConst152 * fRec100[1] + fConst153 * fTemp86);
			fRec99[0] = fConst57 * fRec100[0] + fConst56 * fRec99[1];
			fVec43[0] = fConst109 * fRec109[1] - fConst155 * fVec40[1];
			fRec110[0] = fConst106 * (fConst154 * fVec40[1] - (fVec43[1] + fConst112 * fRec110[1]) + fConst156 * fTemp60);
			fRec109[0] = fRec110[0];
			fVec44[0] = 0.50032705f * fRec109[1] - fConst114 * fRec107[1];
			fRec108[0] = fConst102 * (fVec44[1] - fConst115 * fRec108[1] - 1.0006541f * fRec109[1] + 0.50032705f * fRec109[0]);
			fRec107[0] = fRec108[0];
			float fTemp87 = std::fabs(0.92736715f * fRec107[0]);
			fRec106[0] = std::max<float>(fTemp87, fConst152 * fRec106[1] + fConst153 * fTemp87);
			fRec105[0] = fConst57 * fRec106[0] + fConst56 * fRec105[1];
			float fTemp88 = std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec105[0])));
			float fTemp89 = 2e+01f * (std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec99[0]))) - fTemp88);
			fVbargraph3 = FAUSTFLOAT(fTemp89);
			fRec98[0] = fConst148 * (fSlow14 - fTemp89) + fConst93 * fRec98[1];
			float fTemp90 = std::fabs(fTemp61);
			fVec45[0] = fTemp90;
			float fTemp91 = std::max<float>(fTemp90, fVec45[1]);
			fVec46[0] = fTemp91;
			float fTemp92 = std::max<float>(fTemp91, fVec46[2]);
			fVec47[0] = fTemp92;
			float fTemp93 = std::max<float>(fTemp92, fVec47[4]);
			fVec48[0] = fTemp93;
			float fTemp94 = std::max<float>(fTemp93, fVec48[8]);
			fVec49[IOTA0 & 31] = fTemp94;
			float fTemp95 = std::max<float>(fTemp94, fVec49[(IOTA0 - 16) & 31]);
			fVec50[IOTA0 & 63] = fTemp95;
			float fTemp96 = std::max<float>(fTemp95, fVec50[(IOTA0 - 32) & 63]);
			fVec51[IOTA0 & 127] = fTemp96;
			float fTemp97 = std::max<float>(fTemp96, fVec51[(IOTA0 - 64) & 127]);
			fVec52[IOTA0 & 255] = fTemp97;
			fVec53[IOTA0 & 511] = std::max<float>(fTemp97, fVec52[(IOTA0 - 128) & 255]);
			float fTemp98 = std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst31) ? fTemp90 : -3.4028235e+38f), ((iConst38) ? fVec46[iConst31] : -3.4028235e+38f)), ((iConst39) ? fVec47[iConst40] : -3.4028235e+38f)), ((iConst41) ? fVec48[iConst42] : -3.4028235e+38f)), ((iConst43) ? fVec49[(IOTA0 - iConst44) & 31] : -3.4028235e+38f)), ((iConst45) ? fVec50[(IOTA0 - iConst46) & 63] : -3.4028235e+38f)), ((iConst47) ? fVec51[(IOTA0 - iConst48) & 127] : -3.4028235e+38f)), ((iConst49) ? fVec52[(IOTA0 - iConst50) & 255] : -3.4028235e+38f)), ((iConst51) ? fVec53[(IOTA0 - iConst52) & 511] : -3.4028235e+38f))));
			float fTemp99 = 2e+01f * fTemp98;
			int iTemp100 = (fTemp99 > -2e+01f) + (fTemp99 > -2e+01f);
			float fTemp101 = 2e+01f * (fTemp98 + 1.0f);
			float fTemp102 = std::max<float>(-3.4028235e+38f, 0.8f * ((iTemp100 == 0) ? fTemp101 : ((iTemp100 == 1) ? -(4194304.0f * mydsp_faustpower2_f(fTemp101 + -5.9604645e-08f)) : 0.0f)));
			float fTemp103 = ((fTemp102 > fRec111[1]) ? fConst157 : fConst53);
			fRec111[0] = fTemp102 * (1.0f - fTemp103) + fRec111[1] * fTemp103;
			float fTemp104 = std::min<float>(1.0f, std::max<float>(0.0f, std::pow(1e+01f, 0.05f * fRec111[0])));
			fVbargraph4 = FAUSTFLOAT(fTemp104);
			float fTemp105 = fTemp104;
			float fTemp106 = std::pow(1e+01f, fSlow13 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec98[0])) * fTemp105);
			fVbargraph5 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp106)));
			float fTemp107 = fRec30 + 1.4142135f * fRec29;
			float fTemp108 = fRec112[1] + fConst3 * (fRec28 - (fTemp107 + fRec113[1]));
			fRec112[0] = fConst5 * fTemp108 - fRec112[1];
			float fTemp109 = fRec113[1] + fConst146 * fTemp108;
			fRec113[0] = 2.0f * fTemp109 - fRec113[1];
			float fRec114 = fRec28 - fTemp107;
			float fRec115 = fConst147 * fTemp108;
			float fRec116 = fTemp109;
			float fTemp110 = fRec114 - (fRec116 + 1.4142135f * fRec115);
			fVec54[0] = fTemp110;
			fVec55[0] = fConst149 * fVec54[1] - fConst109 * fRec122[1];
			fRec123[0] = fConst106 * (fVec55[1] - fConst112 * fRec123[1] + fConst150 * fVec54[1] + fConst151 * fTemp110);
			fRec122[0] = fRec123[0];
			fVec56[0] = 0.50032705f * fRec122[1] - fConst114 * fRec120[1];
			fRec121[0] = fConst102 * (fVec56[1] - fConst115 * fRec121[1] - 1.0006541f * fRec122[1] + 0.50032705f * fRec122[0]);
			fRec120[0] = fRec121[0];
			float fTemp111 = std::fabs(0.92736715f * fRec120[0]);
			fRec119[0] = std::max<float>(fTemp111, fConst152 * fRec119[1] + fConst153 * fTemp111);
			fRec118[0] = fConst57 * fRec119[0] + fConst56 * fRec118[1];
			float fTemp112 = 2e+01f * (fTemp88 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec118[0]))));
			fVbargraph6 = FAUSTFLOAT(-fTemp112);
			fRec117[0] = fConst159 * (fSlow15 - -fTemp112) + fConst158 * fRec117[1];
			float fTemp113 = std::pow(1e+01f, fSlow13 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec117[0])) * fTemp105);
			fVbargraph7 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp113)));
			float fTemp114 = fRec42 + 1.4142135f * fRec41;
			float fTemp115 = fRec136[1] + fConst6 * (fRec40 - (fTemp114 + fRec137[1]));
			fRec136[0] = fConst8 * fTemp115 - fRec136[1];
			float fTemp116 = fRec137[1] + fConst143 * fTemp115;
			fRec137[0] = 2.0f * fTemp116 - fRec137[1];
			float fRec138 = fRec40 - fTemp114;
			float fRec139 = fConst144 * fTemp115;
			float fRec140 = fTemp116;
			float fTemp117 = fRec140 + 1.4142135f * fRec139;
			float fTemp118 = fRec132[1] + fConst3 * (fRec138 - (fTemp117 + fRec133[1]));
			fRec132[0] = fConst5 * fTemp118 - fRec132[1];
			float fTemp119 = fRec133[1] + fConst146 * fTemp118;
			fRec133[0] = 2.0f * fTemp119 - fRec133[1];
			float fRec134 = fRec138 - fTemp117;
			float fRec135 = fConst147 * fTemp118;
			float fTemp120 = 2.828427f * fRec135;
			float fTemp121 = fRec127[1] + fConst12 * (fRec134 - (fTemp120 + fRec128[1]));
			fRec127[0] = fConst14 * fTemp121 - fRec127[1];
			float fTemp122 = fRec128[1] + fConst37 * fTemp121;
			fRec128[0] = 2.0f * fTemp122 - fRec128[1];
			float fRec129 = fRec134 - fTemp120;
			float fRec130 = fConst145 * fTemp121;
			float fRec131 = fTemp122;
			float fTemp123 = fRec124[1] + fConst12 * (fRec131 - fRec125[1]);
			fRec124[0] = fConst14 * fTemp123 - fRec124[1];
			float fTemp124 = fRec125[1] + fConst37 * fTemp123;
			fRec125[0] = 2.0f * fTemp124 - fRec125[1];
			fRec126[0] = fTemp124;
			fVec57[0] = fConst149 * fRec126[1] - fConst109 * fRec146[1];
			fRec147[0] = fConst106 * (fVec57[1] - fConst112 * fRec147[1] + fConst150 * fRec126[1] + fConst151 * fRec126[0]);
			fRec146[0] = fRec147[0];
			fVec58[0] = 0.50032705f * fRec146[1] - fConst114 * fRec144[1];
			fRec145[0] = fConst102 * (fVec58[1] - fConst115 * fRec145[1] - 1.0006541f * fRec146[1] + 0.50032705f * fRec146[0]);
			fRec144[0] = fRec145[0];
			float fTemp125 = std::fabs(0.92736715f * fRec144[0]);
			fRec143[0] = std::max<float>(fTemp125, fConst152 * fRec143[1] + fConst153 * fTemp125);
			fRec142[0] = fConst57 * fRec143[0] + fConst56 * fRec142[1];
			float fTemp126 = 2e+01f * (fTemp88 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec142[0]))));
			fVbargraph8 = FAUSTFLOAT(-fTemp126);
			fRec141[0] = fConst161 * (fSlow16 - -fTemp126) + fConst160 * fRec141[1];
			float fTemp127 = std::pow(1e+01f, fSlow13 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec141[0])) * fTemp105);
			fVbargraph9 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp127)));
			float fTemp128 = fRec131 + 1.4142135f * fRec130;
			float fTemp129 = fRec148[1] + fConst12 * (fRec129 - (fTemp128 + fRec149[1]));
			fRec148[0] = fConst14 * fTemp129 - fRec148[1];
			float fTemp130 = fRec149[1] + fConst37 * fTemp129;
			fRec149[0] = 2.0f * fTemp130 - fRec149[1];
			float fRec150 = fRec129 - fTemp128;
			float fRec151 = fConst145 * fTemp129;
			float fRec152 = fTemp130;
			float fTemp131 = fRec150 - (fRec152 + 1.4142135f * fRec151);
			fVec59[0] = fTemp131;
			fVec60[0] = fConst149 * fVec59[1] - fConst109 * fRec158[1];
			fRec159[0] = fConst106 * (fVec60[1] - fConst112 * fRec159[1] + fConst150 * fVec59[1] + fConst151 * fTemp131);
			fRec158[0] = fRec159[0];
			fVec61[0] = 0.50032705f * fRec158[1] - fConst114 * fRec156[1];
			fRec157[0] = fConst102 * (fVec61[1] - fConst115 * fRec157[1] - 1.0006541f * fRec158[1] + 0.50032705f * fRec158[0]);
			fRec156[0] = fRec157[0];
			float fTemp132 = std::fabs(0.92736715f * fRec156[0]);
			fRec155[0] = std::max<float>(fTemp132, fConst152 * fRec155[1] + fConst153 * fTemp132);
			fRec154[0] = fConst57 * fRec155[0] + fConst56 * fRec154[1];
			float fTemp133 = 2e+01f * (fTemp88 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec154[0]))));
			fVbargraph10 = FAUSTFLOAT(-fTemp133);
			fRec153[0] = fConst163 * (fSlow17 - -fTemp133) + fConst162 * fRec153[1];
			float fTemp134 = std::pow(1e+01f, fSlow13 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec153[0])) * fTemp105);
			fVbargraph11 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp134)));
			float fTemp135 = fRec62 + 1.4142135f * fRec61;
			float fTemp136 = fRec192[1] + fConst9 * (fRec60 - (fTemp135 + fRec193[1]));
			fRec192[0] = fConst11 * fTemp136 - fRec192[1];
			float fTemp137 = fRec193[1] + fConst135 * fTemp136;
			fRec193[0] = 2.0f * fTemp137 - fRec193[1];
			float fRec194 = fRec60 - fTemp135;
			float fRec195 = fConst136 * fTemp136;
			float fRec196 = fTemp137;
			float fTemp138 = fRec196 + 1.4142135f * fRec195;
			float fTemp139 = fRec188[1] + fConst6 * (fRec194 - (fTemp138 + fRec189[1]));
			fRec188[0] = fConst8 * fTemp139 - fRec188[1];
			float fTemp140 = fRec189[1] + fConst143 * fTemp139;
			fRec189[0] = 2.0f * fTemp140 - fRec189[1];
			float fRec190 = fRec194 - fTemp138;
			float fRec191 = fConst144 * fTemp139;
			float fTemp141 = 2.828427f * fRec191;
			float fTemp142 = fRec184[1] + fConst3 * (fRec190 - (fTemp141 + fRec185[1]));
			fRec184[0] = fConst5 * fTemp142 - fRec184[1];
			float fTemp143 = fRec185[1] + fConst146 * fTemp142;
			fRec185[0] = 2.0f * fTemp143 - fRec185[1];
			float fRec186 = fRec190 - fTemp141;
			float fRec187 = fConst147 * fTemp142;
			float fTemp144 = 2.828427f * fRec187;
			float fTemp145 = fRec180[1] + fConst12 * (fRec186 - (fTemp144 + fRec181[1]));
			fRec180[0] = fConst14 * fTemp145 - fRec180[1];
			float fTemp146 = fRec181[1] + fConst37 * fTemp145;
			fRec181[0] = 2.0f * fTemp146 - fRec181[1];
			float fRec182 = fRec186 - fTemp144;
			float fRec183 = fConst145 * fTemp145;
			float fTemp147 = 2.828427f * fRec183;
			float fTemp148 = fRec175[1] + fConst21 * (fRec182 - (fTemp147 + fRec176[1]));
			fRec175[0] = fConst23 * fTemp148 - fRec175[1];
			float fTemp149 = fRec176[1] + fConst137 * fTemp148;
			fRec176[0] = 2.0f * fTemp149 - fRec176[1];
			float fRec177 = fRec182 - fTemp147;
			float fRec178 = fConst138 * fTemp148;
			float fRec179 = fTemp149;
			float fTemp150 = fRec172[1] + fConst21 * (fRec179 - fRec173[1]);
			fRec172[0] = fConst23 * fTemp150 - fRec172[1];
			float fTemp151 = fRec173[1] + fConst137 * fTemp150;
			fRec173[0] = 2.0f * fTemp151 - fRec173[1];
			float fRec174 = fTemp151;
			float fTemp152 = fRec168[1] + fConst15 * (fRec174 - fRec169[1]);
			fRec168[0] = fConst17 * fTemp152 - fRec168[1];
			float fTemp153 = fRec169[1] + fConst141 * fTemp152;
			fRec169[0] = 2.0f * fTemp153 - fRec169[1];
			float fRec170 = fRec174;
			float fRec171 = fConst142 * fTemp152;
			float fTemp154 = 2.828427f * fRec171;
			float fTemp155 = fRec163[1] + fConst18 * (fRec170 - (fTemp154 + fRec164[1]));
			fRec163[0] = fConst20 * fTemp155 - fRec163[1];
			float fTemp156 = fRec164[1] + fConst139 * fTemp155;
			fRec164[0] = 2.0f * fTemp156 - fRec164[1];
			float fRec165 = fRec170 - fTemp154;
			float fRec166 = fConst140 * fTemp155;
			float fRec167 = fTemp156;
			float fTemp157 = fRec160[1] + fConst18 * (fRec167 - fRec161[1]);
			fRec160[0] = fConst20 * fTemp157 - fRec160[1];
			float fTemp158 = fRec161[1] + fConst139 * fTemp157;
			fRec161[0] = 2.0f * fTemp158 - fRec161[1];
			fRec162[0] = fTemp158;
			fVec62[0] = fConst149 * fRec162[1] - fConst109 * fRec202[1];
			fRec203[0] = fConst106 * (fVec62[1] - fConst112 * fRec203[1] + fConst150 * fRec162[1] + fConst151 * fRec162[0]);
			fRec202[0] = fRec203[0];
			fVec63[0] = 0.50032705f * fRec202[1] - fConst114 * fRec200[1];
			fRec201[0] = fConst102 * (fVec63[1] - fConst115 * fRec201[1] - 1.0006541f * fRec202[1] + 0.50032705f * fRec202[0]);
			fRec200[0] = fRec201[0];
			float fTemp159 = std::fabs(0.92736715f * fRec200[0]);
			fRec199[0] = std::max<float>(fTemp159, fConst152 * fRec199[1] + fConst153 * fTemp159);
			fRec198[0] = fConst57 * fRec199[0] + fConst56 * fRec198[1];
			float fTemp160 = 2e+01f * (fTemp88 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec198[0]))));
			fVbargraph12 = FAUSTFLOAT(-fTemp160);
			fRec197[0] = fConst153 * (fSlow18 - -fTemp160) + fConst152 * fRec197[1];
			float fTemp161 = std::pow(1e+01f, fSlow13 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec197[0])) * fTemp105);
			fVbargraph13 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp161)));
			float fTemp162 = fRec167 + 1.4142135f * fRec166;
			float fTemp163 = fRec204[1] + fConst18 * (fRec165 - (fTemp162 + fRec205[1]));
			fRec204[0] = fConst20 * fTemp163 - fRec204[1];
			float fTemp164 = fRec205[1] + fConst139 * fTemp163;
			fRec205[0] = 2.0f * fTemp164 - fRec205[1];
			float fRec206 = fRec165 - fTemp162;
			float fRec207 = fConst140 * fTemp163;
			float fRec208 = fTemp164;
			float fTemp165 = fRec206 - (fRec208 + 1.4142135f * fRec207);
			fVec64[0] = fTemp165;
			fVec65[0] = fConst149 * fVec64[1] - fConst109 * fRec214[1];
			fRec215[0] = fConst106 * (fVec65[1] - fConst112 * fRec215[1] + fConst150 * fVec64[1] + fConst151 * fTemp165);
			fRec214[0] = fRec215[0];
			fVec66[0] = 0.50032705f * fRec214[1] - fConst114 * fRec212[1];
			fRec213[0] = fConst102 * (fVec66[1] - fConst115 * fRec213[1] - 1.0006541f * fRec214[1] + 0.50032705f * fRec214[0]);
			fRec212[0] = fRec213[0];
			float fTemp166 = std::fabs(0.92736715f * fRec212[0]);
			fRec211[0] = std::max<float>(fTemp166, fConst152 * fRec211[1] + fConst153 * fTemp166);
			fRec210[0] = fConst57 * fRec211[0] + fConst56 * fRec210[1];
			float fTemp167 = 2e+01f * (fTemp88 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec210[0]))));
			fVbargraph14 = FAUSTFLOAT(-fTemp167);
			fRec209[0] = fConst165 * (fSlow19 - -fTemp167) + fConst164 * fRec209[1];
			float fTemp168 = std::pow(1e+01f, fSlow13 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec209[0])) * fTemp105);
			fVbargraph15 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp168)));
			float fTemp169 = fRec179 + 1.4142135f * fRec178;
			float fTemp170 = fRec228[1] + fConst21 * (fRec177 - (fTemp169 + fRec229[1]));
			fRec228[0] = fConst23 * fTemp170 - fRec228[1];
			float fTemp171 = fRec229[1] + fConst137 * fTemp170;
			fRec229[0] = 2.0f * fTemp171 - fRec229[1];
			float fRec230 = fRec177 - fTemp169;
			float fRec231 = fConst138 * fTemp170;
			float fRec232 = fTemp171;
			float fTemp172 = fRec232 + 1.4142135f * fRec231;
			float fTemp173 = fRec224[1] + fConst18 * (fRec230 - (fTemp172 + fRec225[1]));
			fRec224[0] = fConst20 * fTemp173 - fRec224[1];
			float fTemp174 = fRec225[1] + fConst139 * fTemp173;
			fRec225[0] = 2.0f * fTemp174 - fRec225[1];
			float fRec226 = fRec230 - fTemp172;
			float fRec227 = fConst140 * fTemp173;
			float fTemp175 = 2.828427f * fRec227;
			float fTemp176 = fRec219[1] + fConst15 * (fRec226 - (fTemp175 + fRec220[1]));
			fRec219[0] = fConst17 * fTemp176 - fRec219[1];
			float fTemp177 = fRec220[1] + fConst141 * fTemp176;
			fRec220[0] = 2.0f * fTemp177 - fRec220[1];
			float fRec221 = fRec226 - fTemp175;
			float fRec222 = fConst142 * fTemp176;
			float fRec223 = fTemp177;
			float fTemp178 = fRec216[1] + fConst15 * (fRec223 - fRec217[1]);
			fRec216[0] = fConst17 * fTemp178 - fRec216[1];
			float fTemp179 = fRec217[1] + fConst141 * fTemp178;
			fRec217[0] = 2.0f * fTemp179 - fRec217[1];
			fRec218[0] = fTemp179;
			fVec67[0] = fConst149 * fRec218[1] - fConst109 * fRec238[1];
			fRec239[0] = fConst106 * (fVec67[1] - fConst112 * fRec239[1] + fConst150 * fRec218[1] + fConst151 * fRec218[0]);
			fRec238[0] = fRec239[0];
			fVec68[0] = 0.50032705f * fRec238[1] - fConst114 * fRec236[1];
			fRec237[0] = fConst102 * (fVec68[1] - fConst115 * fRec237[1] - 1.0006541f * fRec238[1] + 0.50032705f * fRec238[0]);
			fRec236[0] = fRec237[0];
			float fTemp180 = std::fabs(0.92736715f * fRec236[0]);
			fRec235[0] = std::max<float>(fTemp180, fConst152 * fRec235[1] + fConst153 * fTemp180);
			fRec234[0] = fConst57 * fRec235[0] + fConst56 * fRec234[1];
			float fTemp181 = 2e+01f * (fTemp88 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec234[0]))));
			fVbargraph16 = FAUSTFLOAT(-fTemp181);
			fRec233[0] = fConst167 * (fSlow20 - -fTemp181) + fConst166 * fRec233[1];
			float fTemp182 = std::pow(1e+01f, fSlow13 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec233[0])) * fTemp105);
			fVbargraph17 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp182)));
			float fTemp183 = fRec223 + 1.4142135f * fRec222;
			float fTemp184 = fRec240[1] + fConst15 * (fRec221 - (fTemp183 + fRec241[1]));
			fRec240[0] = fConst17 * fTemp184 - fRec240[1];
			float fTemp185 = fRec241[1] + fConst141 * fTemp184;
			fRec241[0] = 2.0f * fTemp185 - fRec241[1];
			float fRec242 = fRec221 - fTemp183;
			float fRec243 = fConst142 * fTemp184;
			float fRec244 = fTemp185;
			float fTemp186 = fRec242 - (fRec244 + 1.4142135f * fRec243);
			fVec69[0] = fTemp186;
			fVec70[0] = fConst149 * fVec69[1] - fConst109 * fRec250[1];
			fRec251[0] = fConst106 * (fVec70[1] - fConst112 * fRec251[1] + fConst150 * fVec69[1] + fConst151 * fTemp186);
			fRec250[0] = fRec251[0];
			fVec71[0] = 0.50032705f * fRec250[1] - fConst114 * fRec248[1];
			fRec249[0] = fConst102 * (fVec71[1] - fConst115 * fRec249[1] - 1.0006541f * fRec250[1] + 0.50032705f * fRec250[0]);
			fRec248[0] = fRec249[0];
			float fTemp187 = std::fabs(0.92736715f * fRec248[0]);
			fRec247[0] = std::max<float>(fTemp187, fConst152 * fRec247[1] + fConst153 * fTemp187);
			fRec246[0] = fConst57 * fRec247[0] + fConst56 * fRec246[1];
			float fTemp188 = 2e+01f * (fTemp88 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec246[0]))));
			fVbargraph18 = FAUSTFLOAT(-fTemp188);
			fRec245[0] = fConst168 * (fSlow21 - -fTemp188) + fConst157 * fRec245[1];
			float fTemp189 = std::pow(1e+01f, fSlow13 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec245[0])) * fTemp105);
			fVbargraph19 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp189)));
			fRec22[0] = fRec25[0] * fTemp106 + fTemp110 * fTemp113 + fRec126[0] * fTemp127 + fTemp131 * fTemp134 + fRec162[0] * fTemp161 + fTemp165 * fTemp168 + fRec218[0] * fTemp182 + fTemp186 * fTemp189;
			float fTemp190 = fRec18[1] + fConst9 * (fRec22[0] - fRec19[1]);
			fRec18[0] = fConst11 * fTemp190 - fRec18[1];
			float fTemp191 = fRec19[1] + fConst135 * fTemp190;
			fRec19[0] = 2.0f * fTemp191 - fRec19[1];
			float fRec20 = fConst136 * fTemp190;
			float fRec21 = fTemp191;
			float fTemp192 = fRec15[1] + fConst9 * (fRec21 - fRec16[1]);
			fRec15[0] = fConst11 * fTemp192 - fRec15[1];
			float fTemp193 = fRec16[1] + fConst135 * fTemp192;
			fRec16[0] = 2.0f * fTemp193 - fRec16[1];
			float fRec17 = fTemp193;
			float fTemp194 = fRec255[1] + fConst21 * (fRec17 - fRec256[1]);
			fRec255[0] = fConst23 * fTemp194 - fRec255[1];
			float fTemp195 = fRec256[1] + fConst137 * fTemp194;
			fRec256[0] = 2.0f * fTemp195 - fRec256[1];
			float fRec257 = fConst138 * fTemp194;
			float fTemp196 = 2.828427f * fRec257;
			float fTemp197 = fRec258[1] + fConst18 * (fRec17 - (fTemp196 + fRec259[1]));
			fRec258[0] = fConst20 * fTemp197 - fRec258[1];
			float fTemp198 = fRec259[1] + fConst139 * fTemp197;
			fRec259[0] = 2.0f * fTemp198 - fRec259[1];
			float fRec260 = fConst140 * fTemp197;
			float fTemp199 = fRec257 + fRec260;
			float fTemp200 = 2.828427f * fTemp199;
			float fTemp201 = fRec252[1] + fConst15 * (fRec17 - (fTemp200 + fRec253[1]));
			fRec252[0] = fConst17 * fTemp201 - fRec252[1];
			float fTemp202 = fRec253[1] + fConst141 * fTemp201;
			fRec253[0] = 2.0f * fTemp202 - fRec253[1];
			float fRec254 = fConst142 * fTemp201;
			float fTemp203 = fRec254 + fTemp199;
			float fTemp204 = 2.828427f * fTemp203;
			float fTemp205 = fRec11[1] + fConst6 * (fRec17 - (fTemp204 + fRec12[1]));
			fRec11[0] = fConst8 * fTemp205 - fRec11[1];
			float fTemp206 = fRec12[1] + fConst143 * fTemp205;
			fRec12[0] = 2.0f * fTemp206 - fRec12[1];
			float fRec13 = fConst144 * fTemp205;
			float fRec14 = fTemp206;
			float fTemp207 = fRec8[1] + fConst6 * (fRec14 - fRec9[1]);
			fRec8[0] = fConst8 * fTemp207 - fRec8[1];
			float fTemp208 = fRec9[1] + fConst143 * fTemp207;
			fRec9[0] = 2.0f * fTemp208 - fRec9[1];
			float fRec10 = fTemp208;
			float fTemp209 = fRec261[1] + fConst12 * (fRec10 - fRec262[1]);
			fRec261[0] = fConst14 * fTemp209 - fRec261[1];
			float fTemp210 = fRec262[1] + fConst37 * fTemp209;
			fRec262[0] = 2.0f * fTemp210 - fRec262[1];
			float fRec263 = fConst145 * fTemp209;
			float fTemp211 = 2.828427f * fRec263;
			float fTemp212 = fRec4[1] + fConst3 * (fRec10 - (fTemp211 + fRec5[1]));
			fRec4[0] = fConst5 * fTemp212 - fRec4[1];
			float fTemp213 = fRec5[1] + fConst146 * fTemp212;
			fRec5[0] = 2.0f * fTemp213 - fRec5[1];
			float fRec6 = fConst147 * fTemp212;
			float fRec7 = fTemp213;
			float fTemp214 = fRec1[1] + fConst3 * (fRec7 - fRec2[1]);
			fRec1[0] = fConst5 * fTemp214 - fRec1[1];
			float fTemp215 = fRec2[1] + fConst146 * fTemp214;
			fRec2[0] = 2.0f * fTemp215 - fRec2[1];
			float fRec3 = fTemp215;
			float fTemp216 = std::fabs(fRec3);
			fVec72[0] = fTemp216;
			float fTemp217 = std::max<float>(fTemp216, fVec72[1]);
			fVec73[0] = fTemp217;
			float fTemp218 = std::max<float>(fTemp217, fVec73[2]);
			fVec74[0] = fTemp218;
			float fTemp219 = std::max<float>(fTemp218, fVec74[4]);
			fVec75[0] = fTemp219;
			float fTemp220 = std::max<float>(fTemp219, fVec75[8]);
			fVec76[IOTA0 & 31] = fTemp220;
			float fTemp221 = std::max<float>(fTemp220, fVec76[(IOTA0 - 16) & 31]);
			fVec77[IOTA0 & 63] = fTemp221;
			float fTemp222 = std::max<float>(fTemp221, fVec77[(IOTA0 - 32) & 63]);
			fVec78[IOTA0 & 127] = fTemp222;
			float fTemp223 = std::max<float>(fTemp222, fVec78[(IOTA0 - 64) & 127]);
			fVec79[IOTA0 & 255] = fTemp223;
			float fTemp224 = std::max<float>(fTemp223, fVec79[(IOTA0 - 128) & 255]);
			fVec80[IOTA0 & 511] = fTemp224;
			fVec81[IOTA0 & 511] = std::max<float>(fTemp224, fVec80[(IOTA0 - 256) & 511]);
			float fTemp225 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst169) ? fTemp216 : -3.4028235e+38f), ((iConst170) ? fVec73[iConst169] : -3.4028235e+38f)), ((iConst171) ? fVec74[iConst172] : -3.4028235e+38f)), ((iConst173) ? fVec75[iConst174] : -3.4028235e+38f)), ((iConst175) ? fVec76[(IOTA0 - iConst176) & 31] : -3.4028235e+38f)), ((iConst177) ? fVec77[(IOTA0 - iConst178) & 63] : -3.4028235e+38f)), ((iConst179) ? fVec78[(IOTA0 - iConst180) & 127] : -3.4028235e+38f)), ((iConst181) ? fVec79[(IOTA0 - iConst182) & 255] : -3.4028235e+38f)), ((iConst183) ? fVec80[(IOTA0 - iConst184) & 511] : -3.4028235e+38f)), ((iConst185) ? fVec81[(IOTA0 - iConst186) & 511] : -3.4028235e+38f))));
			int iTemp226 = (fTemp225 > fSlow22) + (fTemp225 > fSlow23);
			float fTemp227 = std::max<float>(-12.0f, 0.75f * ((iTemp226 == 0) ? fTemp225 + 12.0f - fSlow2 : ((iTemp226 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp225 + 9.0f - fSlow2)) : 0.0f)));
			float fTemp228 = ((fTemp227 > fRec264[1]) ? fConst94 : fConst93);
			fRec264[0] = fTemp227 * (1.0f - fTemp228) + fRec264[1] * fTemp228;
			float fTemp229 = fRec7 + fTemp211 + 1.4142135f * fRec6;
			float fTemp230 = fRec266[1] + fConst3 * (fRec10 - (fTemp229 + fRec267[1]));
			fRec266[0] = fConst5 * fTemp230 - fRec266[1];
			float fTemp231 = fRec267[1] + fConst146 * fTemp230;
			fRec267[0] = 2.0f * fTemp231 - fRec267[1];
			float fRec268 = fConst147 * fTemp230;
			float fRec269 = fTemp231;
			float fTemp232 = fRec10 - (1.4142135f * (fRec6 + fRec268) + fRec269 + fRec7 + fTemp211);
			float fTemp233 = std::fabs(fTemp232);
			fVec82[0] = fTemp233;
			float fTemp234 = std::max<float>(fTemp233, fVec82[1]);
			fVec83[0] = fTemp234;
			float fTemp235 = std::max<float>(fTemp234, fVec83[2]);
			fVec84[0] = fTemp235;
			float fTemp236 = std::max<float>(fTemp235, fVec84[4]);
			fVec85[0] = fTemp236;
			float fTemp237 = std::max<float>(fTemp236, fVec85[8]);
			fVec86[IOTA0 & 31] = fTemp237;
			float fTemp238 = std::max<float>(fTemp237, fVec86[(IOTA0 - 16) & 31]);
			fVec87[IOTA0 & 63] = fTemp238;
			float fTemp239 = std::max<float>(fTemp238, fVec87[(IOTA0 - 32) & 63]);
			fVec88[IOTA0 & 127] = fTemp239;
			float fTemp240 = std::max<float>(fTemp239, fVec88[(IOTA0 - 64) & 127]);
			fVec89[IOTA0 & 255] = fTemp240;
			float fTemp241 = std::max<float>(fTemp240, fVec89[(IOTA0 - 128) & 255]);
			fVec90[IOTA0 & 511] = fTemp241;
			fVec91[IOTA0 & 511] = std::max<float>(fTemp241, fVec90[(IOTA0 - 256) & 511]);
			float fTemp242 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst169) ? fTemp233 : -3.4028235e+38f), ((iConst170) ? fVec83[iConst169] : -3.4028235e+38f)), ((iConst171) ? fVec84[iConst172] : -3.4028235e+38f)), ((iConst173) ? fVec85[iConst174] : -3.4028235e+38f)), ((iConst175) ? fVec86[(IOTA0 - iConst176) & 31] : -3.4028235e+38f)), ((iConst177) ? fVec87[(IOTA0 - iConst178) & 63] : -3.4028235e+38f)), ((iConst179) ? fVec88[(IOTA0 - iConst180) & 127] : -3.4028235e+38f)), ((iConst181) ? fVec89[(IOTA0 - iConst182) & 255] : -3.4028235e+38f)), ((iConst183) ? fVec90[(IOTA0 - iConst184) & 511] : -3.4028235e+38f)), ((iConst185) ? fVec91[(IOTA0 - iConst186) & 511] : -3.4028235e+38f))));
			int iTemp243 = (fTemp242 > fSlow22) + (fTemp242 > fSlow23);
			float fTemp244 = std::max<float>(-12.0f, 0.75f * ((iTemp243 == 0) ? fTemp242 + 12.0f - fSlow2 : ((iTemp243 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp242 + 9.0f - fSlow2)) : 0.0f)));
			float fTemp245 = ((fTemp244 > fRec265[1]) ? fConst94 : fConst93);
			fRec265[0] = fTemp244 * (1.0f - fTemp245) + fRec265[1] * fTemp245;
			float fTemp246 = fTemp204 + fRec14 + 1.4142135f * fRec13;
			float fTemp247 = fRec278[1] + fConst6 * (fRec17 - (fTemp246 + fRec279[1]));
			fRec278[0] = fConst8 * fTemp247 - fRec278[1];
			float fTemp248 = fRec279[1] + fConst143 * fTemp247;
			fRec279[0] = 2.0f * fTemp248 - fRec279[1];
			float fRec280 = fConst144 * fTemp247;
			float fRec281 = fTemp248;
			float fTemp249 = fRec13 + fRec280;
			float fTemp250 = 1.4142135f * fTemp249;
			float fTemp251 = fRec14 + fRec281;
			float fTemp252 = fTemp250 + fTemp204 + fTemp251;
			float fTemp253 = fRec282[1] + fConst3 * (fRec17 - (fTemp252 + fRec283[1]));
			fRec282[0] = fConst5 * fTemp253 - fRec282[1];
			float fTemp254 = fRec283[1] + fConst146 * fTemp253;
			fRec283[0] = 2.0f * fTemp254 - fRec283[1];
			float fRec284 = fConst147 * fTemp253;
			float fTemp255 = 2.828427f * (fRec284 + fTemp203);
			float fTemp256 = fTemp250 + fTemp251 + fTemp255;
			float fTemp257 = fRec274[1] + fConst12 * (fRec17 - (fTemp256 + fRec275[1]));
			fRec274[0] = fConst14 * fTemp257 - fRec274[1];
			float fTemp258 = fRec275[1] + fConst37 * fTemp257;
			fRec275[0] = 2.0f * fTemp258 - fRec275[1];
			float fRec276 = fConst145 * fTemp257;
			float fRec277 = fTemp258;
			float fTemp259 = fRec271[1] + fConst12 * (fRec277 - fRec272[1]);
			fRec271[0] = fConst14 * fTemp259 - fRec271[1];
			float fTemp260 = fRec272[1] + fConst37 * fTemp259;
			fRec272[0] = 2.0f * fTemp260 - fRec272[1];
			float fRec273 = fTemp260;
			float fTemp261 = std::fabs(fRec273);
			fVec92[0] = fTemp261;
			float fTemp262 = std::max<float>(fTemp261, fVec92[1]);
			fVec93[0] = fTemp262;
			float fTemp263 = std::max<float>(fTemp262, fVec93[2]);
			fVec94[0] = fTemp263;
			float fTemp264 = std::max<float>(fTemp263, fVec94[4]);
			fVec95[0] = fTemp264;
			float fTemp265 = std::max<float>(fTemp264, fVec95[8]);
			fVec96[IOTA0 & 31] = fTemp265;
			float fTemp266 = std::max<float>(fTemp265, fVec96[(IOTA0 - 16) & 31]);
			fVec97[IOTA0 & 63] = fTemp266;
			float fTemp267 = std::max<float>(fTemp266, fVec97[(IOTA0 - 32) & 63]);
			fVec98[IOTA0 & 127] = fTemp267;
			float fTemp268 = std::max<float>(fTemp267, fVec98[(IOTA0 - 64) & 127]);
			fVec99[IOTA0 & 255] = fTemp268;
			float fTemp269 = std::max<float>(fTemp268, fVec99[(IOTA0 - 128) & 255]);
			fVec100[IOTA0 & 511] = fTemp269;
			fVec101[IOTA0 & 511] = std::max<float>(fTemp269, fVec100[(IOTA0 - 256) & 511]);
			float fTemp270 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst169) ? fTemp261 : -3.4028235e+38f), ((iConst170) ? fVec93[iConst169] : -3.4028235e+38f)), ((iConst171) ? fVec94[iConst172] : -3.4028235e+38f)), ((iConst173) ? fVec95[iConst174] : -3.4028235e+38f)), ((iConst175) ? fVec96[(IOTA0 - iConst176) & 31] : -3.4028235e+38f)), ((iConst177) ? fVec97[(IOTA0 - iConst178) & 63] : -3.4028235e+38f)), ((iConst179) ? fVec98[(IOTA0 - iConst180) & 127] : -3.4028235e+38f)), ((iConst181) ? fVec99[(IOTA0 - iConst182) & 255] : -3.4028235e+38f)), ((iConst183) ? fVec100[(IOTA0 - iConst184) & 511] : -3.4028235e+38f)), ((iConst185) ? fVec101[(IOTA0 - iConst186) & 511] : -3.4028235e+38f))));
			int iTemp271 = (fTemp270 > fSlow22) + (fTemp270 > fSlow23);
			float fTemp272 = std::max<float>(-12.0f, 0.75f * ((iTemp271 == 0) ? fTemp270 + 12.0f - fSlow2 : ((iTemp271 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp270 + 9.0f - fSlow2)) : 0.0f)));
			float fTemp273 = ((fTemp272 > fRec270[1]) ? fConst94 : fConst93);
			fRec270[0] = fTemp272 * (1.0f - fTemp273) + fRec270[1] * fTemp273;
			float fTemp274 = fRec276 + fTemp249;
			float fTemp275 = fRec277 + fTemp251;
			float fTemp276 = 1.4142135f * fTemp274 + fTemp255 + fTemp275;
			float fTemp277 = fRec286[1] + fConst12 * (fRec17 - (fTemp276 + fRec287[1]));
			fRec286[0] = fConst14 * fTemp277 - fRec286[1];
			float fTemp278 = fRec287[1] + fConst37 * fTemp277;
			fRec287[0] = 2.0f * fTemp278 - fRec287[1];
			float fRec288 = fConst145 * fTemp277;
			float fRec289 = fTemp278;
			float fTemp279 = fRec17 - (1.4142135f * (fRec288 + fTemp274) + fTemp255 + fRec289 + fTemp275);
			float fTemp280 = std::fabs(fTemp279);
			fVec102[0] = fTemp280;
			float fTemp281 = std::max<float>(fTemp280, fVec102[1]);
			fVec103[0] = fTemp281;
			float fTemp282 = std::max<float>(fTemp281, fVec103[2]);
			fVec104[0] = fTemp282;
			float fTemp283 = std::max<float>(fTemp282, fVec104[4]);
			fVec105[0] = fTemp283;
			float fTemp284 = std::max<float>(fTemp283, fVec105[8]);
			fVec106[IOTA0 & 31] = fTemp284;
			float fTemp285 = std::max<float>(fTemp284, fVec106[(IOTA0 - 16) & 31]);
			fVec107[IOTA0 & 63] = fTemp285;
			float fTemp286 = std::max<float>(fTemp285, fVec107[(IOTA0 - 32) & 63]);
			fVec108[IOTA0 & 127] = fTemp286;
			float fTemp287 = std::max<float>(fTemp286, fVec108[(IOTA0 - 64) & 127]);
			fVec109[IOTA0 & 255] = fTemp287;
			float fTemp288 = std::max<float>(fTemp287, fVec109[(IOTA0 - 128) & 255]);
			fVec110[IOTA0 & 511] = fTemp288;
			fVec111[IOTA0 & 511] = std::max<float>(fTemp288, fVec110[(IOTA0 - 256) & 511]);
			float fTemp289 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst169) ? fTemp280 : -3.4028235e+38f), ((iConst170) ? fVec103[iConst169] : -3.4028235e+38f)), ((iConst171) ? fVec104[iConst172] : -3.4028235e+38f)), ((iConst173) ? fVec105[iConst174] : -3.4028235e+38f)), ((iConst175) ? fVec106[(IOTA0 - iConst176) & 31] : -3.4028235e+38f)), ((iConst177) ? fVec107[(IOTA0 - iConst178) & 63] : -3.4028235e+38f)), ((iConst179) ? fVec108[(IOTA0 - iConst180) & 127] : -3.4028235e+38f)), ((iConst181) ? fVec109[(IOTA0 - iConst182) & 255] : -3.4028235e+38f)), ((iConst183) ? fVec110[(IOTA0 - iConst184) & 511] : -3.4028235e+38f)), ((iConst185) ? fVec111[(IOTA0 - iConst186) & 511] : -3.4028235e+38f))));
			int iTemp290 = (fTemp289 > fSlow22) + (fTemp289 > fSlow23);
			float fTemp291 = std::max<float>(-12.0f, 0.75f * ((iTemp290 == 0) ? fTemp289 + 12.0f - fSlow2 : ((iTemp290 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp289 + 9.0f - fSlow2)) : 0.0f)));
			float fTemp292 = ((fTemp291 > fRec285[1]) ? fConst94 : fConst93);
			fRec285[0] = fTemp291 * (1.0f - fTemp292) + fRec285[1] * fTemp292;
			float fTemp293 = fRec21 + 1.4142135f * fRec20;
			float fTemp294 = fRec305[1] + fConst9 * (fRec22[0] - (fTemp293 + fRec306[1]));
			fRec305[0] = fConst11 * fTemp294 - fRec305[1];
			float fTemp295 = fRec306[1] + fConst135 * fTemp294;
			fRec306[0] = 2.0f * fTemp295 - fRec306[1];
			float fRec307 = fConst136 * fTemp294;
			float fRec308 = fTemp295;
			float fTemp296 = fRec20 + fRec307;
			float fTemp297 = 1.4142135f * fTemp296;
			float fTemp298 = fRec21 + fRec308;
			float fTemp299 = fTemp297 + fTemp298;
			float fTemp300 = fRec312[1] + fConst6 * (fRec22[0] - (fTemp299 + fRec313[1]));
			fRec312[0] = fConst8 * fTemp300 - fRec312[1];
			float fTemp301 = fRec313[1] + fConst143 * fTemp300;
			fRec313[0] = 2.0f * fTemp301 - fRec313[1];
			float fRec314 = fConst144 * fTemp300;
			float fTemp302 = fTemp297 + fTemp298 + 2.828427f * fRec314;
			float fTemp303 = fRec315[1] + fConst3 * (fRec22[0] - (fTemp302 + fRec316[1]));
			fRec315[0] = fConst5 * fTemp303 - fRec315[1];
			float fTemp304 = fRec316[1] + fConst146 * fTemp303;
			fRec316[0] = 2.0f * fTemp304 - fRec316[1];
			float fRec317 = fConst147 * fTemp303;
			float fTemp305 = fRec314 + fRec317;
			float fTemp306 = fTemp299 + 2.828427f * fTemp305;
			float fTemp307 = fRec309[1] + fConst12 * (fRec22[0] - (fTemp306 + fRec310[1]));
			fRec309[0] = fConst14 * fTemp307 - fRec309[1];
			float fTemp308 = fRec310[1] + fConst37 * fTemp307;
			fRec310[0] = 2.0f * fTemp308 - fRec310[1];
			float fRec311 = fConst145 * fTemp307;
			float fTemp309 = fRec311 + fTemp305;
			float fTemp310 = 2.828427f * fTemp309;
			float fTemp311 = fTemp299 + fTemp310;
			float fTemp312 = fRec301[1] + fConst21 * (fRec22[0] - (fTemp311 + fRec302[1]));
			fRec301[0] = fConst23 * fTemp312 - fRec301[1];
			float fTemp313 = fRec302[1] + fConst137 * fTemp312;
			fRec302[0] = 2.0f * fTemp313 - fRec302[1];
			float fRec303 = fConst138 * fTemp312;
			float fRec304 = fTemp313;
			float fTemp314 = fRec298[1] + fConst21 * (fRec304 - fRec299[1]);
			fRec298[0] = fConst23 * fTemp314 - fRec298[1];
			float fTemp315 = fRec299[1] + fConst137 * fTemp314;
			fRec299[0] = 2.0f * fTemp315 - fRec299[1];
			float fRec300 = fTemp315;
			float fTemp316 = fRec318[1] + fConst15 * (fRec300 - fRec319[1]);
			fRec318[0] = fConst17 * fTemp316 - fRec318[1];
			float fTemp317 = fRec319[1] + fConst141 * fTemp316;
			fRec319[0] = 2.0f * fTemp317 - fRec319[1];
			float fRec320 = fConst142 * fTemp316;
			float fTemp318 = 2.828427f * fRec320;
			float fTemp319 = fRec294[1] + fConst18 * (fRec300 - (fTemp318 + fRec295[1]));
			fRec294[0] = fConst20 * fTemp319 - fRec294[1];
			float fTemp320 = fRec295[1] + fConst139 * fTemp319;
			fRec295[0] = 2.0f * fTemp320 - fRec295[1];
			float fRec296 = fConst140 * fTemp319;
			float fRec297 = fTemp320;
			float fTemp321 = fRec291[1] + fConst18 * (fRec297 - fRec292[1]);
			fRec291[0] = fConst20 * fTemp321 - fRec291[1];
			float fTemp322 = fRec292[1] + fConst139 * fTemp321;
			fRec292[0] = 2.0f * fTemp322 - fRec292[1];
			float fRec293 = fTemp322;
			float fTemp323 = std::fabs(fRec293);
			fVec112[0] = fTemp323;
			float fTemp324 = std::max<float>(fTemp323, fVec112[1]);
			fVec113[0] = fTemp324;
			float fTemp325 = std::max<float>(fTemp324, fVec113[2]);
			fVec114[0] = fTemp325;
			float fTemp326 = std::max<float>(fTemp325, fVec114[4]);
			fVec115[0] = fTemp326;
			float fTemp327 = std::max<float>(fTemp326, fVec115[8]);
			fVec116[IOTA0 & 31] = fTemp327;
			float fTemp328 = std::max<float>(fTemp327, fVec116[(IOTA0 - 16) & 31]);
			fVec117[IOTA0 & 63] = fTemp328;
			float fTemp329 = std::max<float>(fTemp328, fVec117[(IOTA0 - 32) & 63]);
			fVec118[IOTA0 & 127] = fTemp329;
			float fTemp330 = std::max<float>(fTemp329, fVec118[(IOTA0 - 64) & 127]);
			fVec119[IOTA0 & 255] = fTemp330;
			float fTemp331 = std::max<float>(fTemp330, fVec119[(IOTA0 - 128) & 255]);
			fVec120[IOTA0 & 511] = fTemp331;
			fVec121[IOTA0 & 511] = std::max<float>(fTemp331, fVec120[(IOTA0 - 256) & 511]);
			float fTemp332 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst169) ? fTemp323 : -3.4028235e+38f), ((iConst170) ? fVec113[iConst169] : -3.4028235e+38f)), ((iConst171) ? fVec114[iConst172] : -3.4028235e+38f)), ((iConst173) ? fVec115[iConst174] : -3.4028235e+38f)), ((iConst175) ? fVec116[(IOTA0 - iConst176) & 31] : -3.4028235e+38f)), ((iConst177) ? fVec117[(IOTA0 - iConst178) & 63] : -3.4028235e+38f)), ((iConst179) ? fVec118[(IOTA0 - iConst180) & 127] : -3.4028235e+38f)), ((iConst181) ? fVec119[(IOTA0 - iConst182) & 255] : -3.4028235e+38f)), ((iConst183) ? fVec120[(IOTA0 - iConst184) & 511] : -3.4028235e+38f)), ((iConst185) ? fVec121[(IOTA0 - iConst186) & 511] : -3.4028235e+38f))));
			int iTemp333 = (fTemp332 > fSlow22) + (fTemp332 > fSlow23);
			float fTemp334 = std::max<float>(-12.0f, 0.75f * ((iTemp333 == 0) ? fTemp332 + 12.0f - fSlow2 : ((iTemp333 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp332 + 9.0f - fSlow2)) : 0.0f)));
			float fTemp335 = ((fTemp334 > fRec290[1]) ? fConst94 : fConst93);
			fRec290[0] = fTemp334 * (1.0f - fTemp335) + fRec290[1] * fTemp335;
			float fTemp336 = fRec297 + fTemp318 + 1.4142135f * fRec296;
			float fTemp337 = fRec322[1] + fConst18 * (fRec300 - (fTemp336 + fRec323[1]));
			fRec322[0] = fConst20 * fTemp337 - fRec322[1];
			float fTemp338 = fRec323[1] + fConst139 * fTemp337;
			fRec323[0] = 2.0f * fTemp338 - fRec323[1];
			float fRec324 = fConst140 * fTemp337;
			float fRec325 = fTemp338;
			float fTemp339 = fRec300 - (1.4142135f * (fRec296 + fRec324) + fRec325 + fRec297 + fTemp318);
			float fTemp340 = std::fabs(fTemp339);
			fVec122[0] = fTemp340;
			float fTemp341 = std::max<float>(fTemp340, fVec122[1]);
			fVec123[0] = fTemp341;
			float fTemp342 = std::max<float>(fTemp341, fVec123[2]);
			fVec124[0] = fTemp342;
			float fTemp343 = std::max<float>(fTemp342, fVec124[4]);
			fVec125[0] = fTemp343;
			float fTemp344 = std::max<float>(fTemp343, fVec125[8]);
			fVec126[IOTA0 & 31] = fTemp344;
			float fTemp345 = std::max<float>(fTemp344, fVec126[(IOTA0 - 16) & 31]);
			fVec127[IOTA0 & 63] = fTemp345;
			float fTemp346 = std::max<float>(fTemp345, fVec127[(IOTA0 - 32) & 63]);
			fVec128[IOTA0 & 127] = fTemp346;
			float fTemp347 = std::max<float>(fTemp346, fVec128[(IOTA0 - 64) & 127]);
			fVec129[IOTA0 & 255] = fTemp347;
			float fTemp348 = std::max<float>(fTemp347, fVec129[(IOTA0 - 128) & 255]);
			fVec130[IOTA0 & 511] = fTemp348;
			fVec131[IOTA0 & 511] = std::max<float>(fTemp348, fVec130[(IOTA0 - 256) & 511]);
			float fTemp349 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst169) ? fTemp340 : -3.4028235e+38f), ((iConst170) ? fVec123[iConst169] : -3.4028235e+38f)), ((iConst171) ? fVec124[iConst172] : -3.4028235e+38f)), ((iConst173) ? fVec125[iConst174] : -3.4028235e+38f)), ((iConst175) ? fVec126[(IOTA0 - iConst176) & 31] : -3.4028235e+38f)), ((iConst177) ? fVec127[(IOTA0 - iConst178) & 63] : -3.4028235e+38f)), ((iConst179) ? fVec128[(IOTA0 - iConst180) & 127] : -3.4028235e+38f)), ((iConst181) ? fVec129[(IOTA0 - iConst182) & 255] : -3.4028235e+38f)), ((iConst183) ? fVec130[(IOTA0 - iConst184) & 511] : -3.4028235e+38f)), ((iConst185) ? fVec131[(IOTA0 - iConst186) & 511] : -3.4028235e+38f))));
			int iTemp350 = (fTemp349 > fSlow22) + (fTemp349 > fSlow23);
			float fTemp351 = std::max<float>(-12.0f, 0.75f * ((iTemp350 == 0) ? fTemp349 + 12.0f - fSlow2 : ((iTemp350 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp349 + 9.0f - fSlow2)) : 0.0f)));
			float fTemp352 = ((fTemp351 > fRec321[1]) ? fConst94 : fConst93);
			fRec321[0] = fTemp351 * (1.0f - fTemp352) + fRec321[1] * fTemp352;
			float fTemp353 = fRec303 + fTemp296;
			float fTemp354 = fRec304 + fTemp298;
			float fTemp355 = 1.4142135f * fTemp353 + fTemp310 + fTemp354;
			float fTemp356 = fRec334[1] + fConst21 * (fRec22[0] - (fTemp355 + fRec335[1]));
			fRec334[0] = fConst23 * fTemp356 - fRec334[1];
			float fTemp357 = fRec335[1] + fConst137 * fTemp356;
			fRec335[0] = 2.0f * fTemp357 - fRec335[1];
			float fRec336 = fConst138 * fTemp356;
			float fRec337 = fTemp357;
			float fTemp358 = fRec336 + fTemp353;
			float fTemp359 = 1.4142135f * fTemp358;
			float fTemp360 = fRec337 + fTemp354;
			float fTemp361 = fTemp359 + fTemp310 + fTemp360;
			float fTemp362 = fRec338[1] + fConst18 * (fRec22[0] - (fTemp361 + fRec339[1]));
			fRec338[0] = fConst20 * fTemp362 - fRec338[1];
			float fTemp363 = fRec339[1] + fConst139 * fTemp362;
			fRec339[0] = 2.0f * fTemp363 - fRec339[1];
			float fRec340 = fConst140 * fTemp362;
			float fTemp364 = 2.828427f * (fRec340 + fTemp309);
			float fTemp365 = fTemp359 + fTemp360 + fTemp364;
			float fTemp366 = fRec330[1] + fConst15 * (fRec22[0] - (fTemp365 + fRec331[1]));
			fRec330[0] = fConst17 * fTemp366 - fRec330[1];
			float fTemp367 = fRec331[1] + fConst141 * fTemp366;
			fRec331[0] = 2.0f * fTemp367 - fRec331[1];
			float fRec332 = fConst142 * fTemp366;
			float fRec333 = fTemp367;
			float fTemp368 = fRec327[1] + fConst15 * (fRec333 - fRec328[1]);
			fRec327[0] = fConst17 * fTemp368 - fRec327[1];
			float fTemp369 = fRec328[1] + fConst141 * fTemp368;
			fRec328[0] = 2.0f * fTemp369 - fRec328[1];
			float fRec329 = fTemp369;
			float fTemp370 = std::fabs(fRec329);
			fVec132[0] = fTemp370;
			float fTemp371 = std::max<float>(fTemp370, fVec132[1]);
			fVec133[0] = fTemp371;
			float fTemp372 = std::max<float>(fTemp371, fVec133[2]);
			fVec134[0] = fTemp372;
			float fTemp373 = std::max<float>(fTemp372, fVec134[4]);
			fVec135[0] = fTemp373;
			float fTemp374 = std::max<float>(fTemp373, fVec135[8]);
			fVec136[IOTA0 & 31] = fTemp374;
			float fTemp375 = std::max<float>(fTemp374, fVec136[(IOTA0 - 16) & 31]);
			fVec137[IOTA0 & 63] = fTemp375;
			float fTemp376 = std::max<float>(fTemp375, fVec137[(IOTA0 - 32) & 63]);
			fVec138[IOTA0 & 127] = fTemp376;
			float fTemp377 = std::max<float>(fTemp376, fVec138[(IOTA0 - 64) & 127]);
			fVec139[IOTA0 & 255] = fTemp377;
			float fTemp378 = std::max<float>(fTemp377, fVec139[(IOTA0 - 128) & 255]);
			fVec140[IOTA0 & 511] = fTemp378;
			fVec141[IOTA0 & 511] = std::max<float>(fTemp378, fVec140[(IOTA0 - 256) & 511]);
			float fTemp379 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst169) ? fTemp370 : -3.4028235e+38f), ((iConst170) ? fVec133[iConst169] : -3.4028235e+38f)), ((iConst171) ? fVec134[iConst172] : -3.4028235e+38f)), ((iConst173) ? fVec135[iConst174] : -3.4028235e+38f)), ((iConst175) ? fVec136[(IOTA0 - iConst176) & 31] : -3.4028235e+38f)), ((iConst177) ? fVec137[(IOTA0 - iConst178) & 63] : -3.4028235e+38f)), ((iConst179) ? fVec138[(IOTA0 - iConst180) & 127] : -3.4028235e+38f)), ((iConst181) ? fVec139[(IOTA0 - iConst182) & 255] : -3.4028235e+38f)), ((iConst183) ? fVec140[(IOTA0 - iConst184) & 511] : -3.4028235e+38f)), ((iConst185) ? fVec141[(IOTA0 - iConst186) & 511] : -3.4028235e+38f))));
			int iTemp380 = (fTemp379 > fSlow22) + (fTemp379 > fSlow23);
			float fTemp381 = std::max<float>(-12.0f, 0.75f * ((iTemp380 == 0) ? fTemp379 + 12.0f - fSlow2 : ((iTemp380 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp379 + 9.0f - fSlow2)) : 0.0f)));
			float fTemp382 = ((fTemp381 > fRec326[1]) ? fConst94 : fConst93);
			fRec326[0] = fTemp381 * (1.0f - fTemp382) + fRec326[1] * fTemp382;
			float fTemp383 = fRec332 + fTemp358;
			float fTemp384 = fRec333 + fTemp360;
			float fTemp385 = 1.4142135f * fTemp383 + fTemp364 + fTemp384;
			float fTemp386 = fRec342[1] + fConst15 * (fRec22[0] - (fTemp385 + fRec343[1]));
			fRec342[0] = fConst17 * fTemp386 - fRec342[1];
			float fTemp387 = fRec343[1] + fConst141 * fTemp386;
			fRec343[0] = 2.0f * fTemp387 - fRec343[1];
			float fRec344 = fConst142 * fTemp386;
			float fRec345 = fTemp387;
			float fTemp388 = fRec22[0] - (1.4142135f * (fRec344 + fTemp383) + fTemp364 + fRec345 + fTemp384);
			float fTemp389 = std::fabs(fTemp388);
			fVec142[0] = fTemp389;
			float fTemp390 = std::max<float>(fTemp389, fVec142[1]);
			fVec143[0] = fTemp390;
			float fTemp391 = std::max<float>(fTemp390, fVec143[2]);
			fVec144[0] = fTemp391;
			float fTemp392 = std::max<float>(fTemp391, fVec144[4]);
			fVec145[0] = fTemp392;
			float fTemp393 = std::max<float>(fTemp392, fVec145[8]);
			fVec146[IOTA0 & 31] = fTemp393;
			float fTemp394 = std::max<float>(fTemp393, fVec146[(IOTA0 - 16) & 31]);
			fVec147[IOTA0 & 63] = fTemp394;
			float fTemp395 = std::max<float>(fTemp394, fVec147[(IOTA0 - 32) & 63]);
			fVec148[IOTA0 & 127] = fTemp395;
			float fTemp396 = std::max<float>(fTemp395, fVec148[(IOTA0 - 64) & 127]);
			fVec149[IOTA0 & 255] = fTemp396;
			float fTemp397 = std::max<float>(fTemp396, fVec149[(IOTA0 - 128) & 255]);
			fVec150[IOTA0 & 511] = fTemp397;
			fVec151[IOTA0 & 511] = std::max<float>(fTemp397, fVec150[(IOTA0 - 256) & 511]);
			float fTemp398 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst169) ? fTemp389 : -3.4028235e+38f), ((iConst170) ? fVec143[iConst169] : -3.4028235e+38f)), ((iConst171) ? fVec144[iConst172] : -3.4028235e+38f)), ((iConst173) ? fVec145[iConst174] : -3.4028235e+38f)), ((iConst175) ? fVec146[(IOTA0 - iConst176) & 31] : -3.4028235e+38f)), ((iConst177) ? fVec147[(IOTA0 - iConst178) & 63] : -3.4028235e+38f)), ((iConst179) ? fVec148[(IOTA0 - iConst180) & 127] : -3.4028235e+38f)), ((iConst181) ? fVec149[(IOTA0 - iConst182) & 255] : -3.4028235e+38f)), ((iConst183) ? fVec150[(IOTA0 - iConst184) & 511] : -3.4028235e+38f)), ((iConst185) ? fVec151[(IOTA0 - iConst186) & 511] : -3.4028235e+38f))));
			int iTemp399 = (fTemp398 > fSlow22) + (fTemp398 > fSlow23);
			float fTemp400 = std::max<float>(-12.0f, 0.75f * ((iTemp399 == 0) ? fTemp398 + 12.0f - fSlow2 : ((iTemp399 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp398 + 9.0f - fSlow2)) : 0.0f)));
			float fTemp401 = ((fTemp400 > fRec341[1]) ? fConst94 : fConst93);
			fRec341[0] = fTemp400 * (1.0f - fTemp401) + fRec341[1] * fTemp401;
			float fTemp402 = std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(fRec264[0], fRec265[0]), fRec270[0]), fRec285[0]), fRec290[0]), fRec321[0]), fRec326[0]), fRec341[0]);
			float fTemp403 = fRec3 * std::pow(1e+01f, 0.05f * (fRec264[0] + 0.25f * (fTemp402 - fRec264[0])));
			float fTemp404 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp403)));
			int iTemp405 = (fTemp404 > fSlow24) + (fTemp404 > fSlow25);
			float fTemp406 = std::max<float>(0.0f, ((iTemp405 == 0) ? 0.0f : ((iTemp405 == 1) ? 0.083333336f * mydsp_faustpower2_f(fTemp404 + 7.0f - fSlow2) : fTemp404 + 4.0f - fSlow2)));
			float fTemp407 = ((-(0.2857143f * fTemp406) > fRec346[1]) ? fConst152 : fConst94);
			fRec346[0] = fRec346[1] * fTemp407 - 0.2857143f * fTemp406 * (1.0f - fTemp407);
			float fTemp408 = fTemp232 * std::pow(1e+01f, 0.05f * (fRec265[0] + 0.25f * (fTemp402 - fRec265[0])));
			float fTemp409 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp408)));
			int iTemp410 = (fTemp409 > fSlow24) + (fTemp409 > fSlow25);
			float fTemp411 = std::max<float>(0.0f, ((iTemp410 == 0) ? 0.0f : ((iTemp410 == 1) ? 0.083333336f * mydsp_faustpower2_f(fTemp409 + 7.0f - fSlow2) : fTemp409 + 4.0f - fSlow2)));
			float fTemp412 = ((-(0.2857143f * fTemp411) > fRec347[1]) ? fConst152 : fConst94);
			fRec347[0] = fRec347[1] * fTemp412 - 0.2857143f * fTemp411 * (1.0f - fTemp412);
			float fTemp413 = fRec273 * std::pow(1e+01f, 0.05f * (fRec270[0] + 0.25f * (fTemp402 - fRec270[0])));
			float fTemp414 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp413)));
			int iTemp415 = (fTemp414 > fSlow24) + (fTemp414 > fSlow25);
			float fTemp416 = std::max<float>(0.0f, ((iTemp415 == 0) ? 0.0f : ((iTemp415 == 1) ? 0.083333336f * mydsp_faustpower2_f(fTemp414 + 7.0f - fSlow2) : fTemp414 + 4.0f - fSlow2)));
			float fTemp417 = ((-(0.2857143f * fTemp416) > fRec348[1]) ? fConst152 : fConst94);
			fRec348[0] = fRec348[1] * fTemp417 - 0.2857143f * fTemp416 * (1.0f - fTemp417);
			float fTemp418 = fTemp279 * std::pow(1e+01f, 0.05f * (fRec285[0] + 0.25f * (fTemp402 - fRec285[0])));
			float fTemp419 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp418)));
			int iTemp420 = (fTemp419 > fSlow24) + (fTemp419 > fSlow25);
			float fTemp421 = std::max<float>(0.0f, ((iTemp420 == 0) ? 0.0f : ((iTemp420 == 1) ? 0.083333336f * mydsp_faustpower2_f(fTemp419 + 7.0f - fSlow2) : fTemp419 + 4.0f - fSlow2)));
			float fTemp422 = ((-(0.2857143f * fTemp421) > fRec349[1]) ? fConst152 : fConst94);
			fRec349[0] = fRec349[1] * fTemp422 - 0.2857143f * fTemp421 * (1.0f - fTemp422);
			float fTemp423 = fRec293 * std::pow(1e+01f, 0.05f * (fRec290[0] + 0.25f * (fTemp402 - fRec290[0])));
			float fTemp424 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp423)));
			int iTemp425 = (fTemp424 > fSlow24) + (fTemp424 > fSlow25);
			float fTemp426 = std::max<float>(0.0f, ((iTemp425 == 0) ? 0.0f : ((iTemp425 == 1) ? 0.083333336f * mydsp_faustpower2_f(fTemp424 + 7.0f - fSlow2) : fTemp424 + 4.0f - fSlow2)));
			float fTemp427 = ((-(0.2857143f * fTemp426) > fRec350[1]) ? fConst152 : fConst94);
			fRec350[0] = fRec350[1] * fTemp427 - 0.2857143f * fTemp426 * (1.0f - fTemp427);
			float fTemp428 = fTemp339 * std::pow(1e+01f, 0.05f * (fRec321[0] + 0.25f * (fTemp402 - fRec321[0])));
			float fTemp429 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp428)));
			int iTemp430 = (fTemp429 > fSlow24) + (fTemp429 > fSlow25);
			float fTemp431 = std::max<float>(0.0f, ((iTemp430 == 0) ? 0.0f : ((iTemp430 == 1) ? 0.083333336f * mydsp_faustpower2_f(fTemp429 + 7.0f - fSlow2) : fTemp429 + 4.0f - fSlow2)));
			float fTemp432 = ((-(0.2857143f * fTemp431) > fRec351[1]) ? fConst152 : fConst94);
			fRec351[0] = fRec351[1] * fTemp432 - 0.2857143f * fTemp431 * (1.0f - fTemp432);
			float fTemp433 = fRec329 * std::pow(1e+01f, 0.05f * (fRec326[0] + 0.25f * (fTemp402 - fRec326[0])));
			float fTemp434 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp433)));
			int iTemp435 = (fTemp434 > fSlow24) + (fTemp434 > fSlow25);
			float fTemp436 = std::max<float>(0.0f, ((iTemp435 == 0) ? 0.0f : ((iTemp435 == 1) ? 0.083333336f * mydsp_faustpower2_f(fTemp434 + 7.0f - fSlow2) : fTemp434 + 4.0f - fSlow2)));
			float fTemp437 = ((-(0.2857143f * fTemp436) > fRec352[1]) ? fConst152 : fConst94);
			fRec352[0] = fRec352[1] * fTemp437 - 0.2857143f * fTemp436 * (1.0f - fTemp437);
			float fTemp438 = fTemp388 * std::pow(1e+01f, 0.05f * (fRec341[0] + 0.25f * (fTemp402 - fRec341[0])));
			float fTemp439 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp438)));
			int iTemp440 = (fTemp439 > fSlow24) + (fTemp439 > fSlow25);
			float fTemp441 = std::max<float>(0.0f, ((iTemp440 == 0) ? 0.0f : ((iTemp440 == 1) ? 0.083333336f * mydsp_faustpower2_f(fTemp439 + 7.0f - fSlow2) : fTemp439 + 4.0f - fSlow2)));
			float fTemp442 = ((-(0.2857143f * fTemp441) > fRec353[1]) ? fConst152 : fConst94);
			fRec353[0] = fRec353[1] * fTemp442 - 0.2857143f * fTemp441 * (1.0f - fTemp442);
			output0[i0] = FAUSTFLOAT(fTemp0 * fRec0[0] + (1.0f - fRec0[0]) * (fTemp403 * std::pow(1e+01f, 0.05f * fRec346[0]) + fTemp408 * std::pow(1e+01f, 0.05f * fRec347[0]) + fTemp413 * std::pow(1e+01f, 0.05f * fRec348[0]) + fTemp418 * std::pow(1e+01f, 0.05f * fRec349[0]) + fTemp423 * std::pow(1e+01f, 0.05f * fRec350[0]) + fTemp428 * std::pow(1e+01f, 0.05f * fRec351[0]) + fTemp433 * std::pow(1e+01f, 0.05f * fRec352[0]) + fTemp438 * std::pow(1e+01f, 0.05f * fRec353[0])));
			fVec0[1] = fVec0[0];
			fRec0[1] = fRec0[0];
			fRec83[1] = fRec83[0];
			fRec84[1] = fRec84[0];
			fRec78[1] = fRec78[0];
			fRec79[1] = fRec79[0];
			fRec75[1] = fRec75[0];
			fRec76[1] = fRec76[0];
			fRec72[1] = fRec72[0];
			fRec73[1] = fRec73[0];
			fVec1[1] = fVec1[0];
			fVec2[2] = fVec2[1];
			fVec2[1] = fVec2[0];
			for (int j0 = 4; j0 > 0; j0 = j0 - 1) {
				fVec3[j0] = fVec3[j0 - 1];
			}
			for (int j1 = 11; j1 > 0; j1 = j1 - 1) {
				fVec4[j1] = fVec4[j1 - 1];
			}
			IOTA0 = IOTA0 + 1;
			fRec89[1] = fRec89[0];
			fVec10[2] = fVec10[1];
			fVec10[1] = fVec10[0];
			for (int j2 = 4; j2 > 0; j2 = j2 - 1) {
				fVec11[j2] = fVec11[j2 - 1];
			}
			for (int j3 = 11; j3 > 0; j3 = j3 - 1) {
				fVec12[j3] = fVec12[j3 - 1];
			}
			fRec88[1] = fRec88[0];
			fRec71[1] = fRec71[0];
			fVec28[1] = fVec28[0];
			fRec93[1] = fRec93[0];
			fRec92[1] = fRec92[0];
			fVec29[1] = fVec29[0];
			fRec91[1] = fRec91[0];
			fRec90[1] = fRec90[0];
			fVec30[1] = fVec30[0];
			fVec31[2] = fVec31[1];
			fVec31[1] = fVec31[0];
			for (int j4 = 4; j4 > 0; j4 = j4 - 1) {
				fVec32[j4] = fVec32[j4 - 1];
			}
			for (int j5 = 11; j5 > 0; j5 = j5 - 1) {
				fVec33[j5] = fVec33[j5 - 1];
			}
			fRec66[1] = fRec66[0];
			fRec67[1] = fRec67[0];
			fRec64[1] = fRec64[0];
			fRec63[1] = fRec63[0];
			fRec97[1] = fRec97[0];
			fRec96[2] = fRec96[1];
			fRec96[1] = fRec96[0];
			fVec39[1] = fVec39[0];
			fRec95[1] = fRec95[0];
			fRec94[2] = fRec94[1];
			fRec94[1] = fRec94[0];
			fVec40[1] = fVec40[0];
			fRec58[1] = fRec58[0];
			fRec59[1] = fRec59[0];
			fRec55[1] = fRec55[0];
			fRec56[1] = fRec56[0];
			fRec51[1] = fRec51[0];
			fRec52[1] = fRec52[0];
			fRec47[1] = fRec47[0];
			fRec48[1] = fRec48[0];
			fRec43[1] = fRec43[0];
			fRec44[1] = fRec44[0];
			fRec38[1] = fRec38[0];
			fRec39[1] = fRec39[0];
			fRec35[1] = fRec35[0];
			fRec36[1] = fRec36[0];
			fRec31[1] = fRec31[0];
			fRec32[1] = fRec32[0];
			fRec26[1] = fRec26[0];
			fRec27[1] = fRec27[0];
			fRec23[1] = fRec23[0];
			fRec24[1] = fRec24[0];
			fRec25[1] = fRec25[0];
			fVec41[1] = fVec41[0];
			fRec104[1] = fRec104[0];
			fRec103[1] = fRec103[0];
			fVec42[1] = fVec42[0];
			fRec102[1] = fRec102[0];
			fRec101[1] = fRec101[0];
			fRec100[1] = fRec100[0];
			fRec99[1] = fRec99[0];
			fVec43[1] = fVec43[0];
			fRec110[1] = fRec110[0];
			fRec109[1] = fRec109[0];
			fVec44[1] = fVec44[0];
			fRec108[1] = fRec108[0];
			fRec107[1] = fRec107[0];
			fRec106[1] = fRec106[0];
			fRec105[1] = fRec105[0];
			fRec98[1] = fRec98[0];
			fVec45[1] = fVec45[0];
			fVec46[2] = fVec46[1];
			fVec46[1] = fVec46[0];
			for (int j6 = 4; j6 > 0; j6 = j6 - 1) {
				fVec47[j6] = fVec47[j6 - 1];
			}
			for (int j7 = 11; j7 > 0; j7 = j7 - 1) {
				fVec48[j7] = fVec48[j7 - 1];
			}
			fRec111[1] = fRec111[0];
			fRec112[1] = fRec112[0];
			fRec113[1] = fRec113[0];
			fVec54[1] = fVec54[0];
			fVec55[1] = fVec55[0];
			fRec123[1] = fRec123[0];
			fRec122[1] = fRec122[0];
			fVec56[1] = fVec56[0];
			fRec121[1] = fRec121[0];
			fRec120[1] = fRec120[0];
			fRec119[1] = fRec119[0];
			fRec118[1] = fRec118[0];
			fRec117[1] = fRec117[0];
			fRec136[1] = fRec136[0];
			fRec137[1] = fRec137[0];
			fRec132[1] = fRec132[0];
			fRec133[1] = fRec133[0];
			fRec127[1] = fRec127[0];
			fRec128[1] = fRec128[0];
			fRec124[1] = fRec124[0];
			fRec125[1] = fRec125[0];
			fRec126[1] = fRec126[0];
			fVec57[1] = fVec57[0];
			fRec147[1] = fRec147[0];
			fRec146[1] = fRec146[0];
			fVec58[1] = fVec58[0];
			fRec145[1] = fRec145[0];
			fRec144[1] = fRec144[0];
			fRec143[1] = fRec143[0];
			fRec142[1] = fRec142[0];
			fRec141[1] = fRec141[0];
			fRec148[1] = fRec148[0];
			fRec149[1] = fRec149[0];
			fVec59[1] = fVec59[0];
			fVec60[1] = fVec60[0];
			fRec159[1] = fRec159[0];
			fRec158[1] = fRec158[0];
			fVec61[1] = fVec61[0];
			fRec157[1] = fRec157[0];
			fRec156[1] = fRec156[0];
			fRec155[1] = fRec155[0];
			fRec154[1] = fRec154[0];
			fRec153[1] = fRec153[0];
			fRec192[1] = fRec192[0];
			fRec193[1] = fRec193[0];
			fRec188[1] = fRec188[0];
			fRec189[1] = fRec189[0];
			fRec184[1] = fRec184[0];
			fRec185[1] = fRec185[0];
			fRec180[1] = fRec180[0];
			fRec181[1] = fRec181[0];
			fRec175[1] = fRec175[0];
			fRec176[1] = fRec176[0];
			fRec172[1] = fRec172[0];
			fRec173[1] = fRec173[0];
			fRec168[1] = fRec168[0];
			fRec169[1] = fRec169[0];
			fRec163[1] = fRec163[0];
			fRec164[1] = fRec164[0];
			fRec160[1] = fRec160[0];
			fRec161[1] = fRec161[0];
			fRec162[1] = fRec162[0];
			fVec62[1] = fVec62[0];
			fRec203[1] = fRec203[0];
			fRec202[1] = fRec202[0];
			fVec63[1] = fVec63[0];
			fRec201[1] = fRec201[0];
			fRec200[1] = fRec200[0];
			fRec199[1] = fRec199[0];
			fRec198[1] = fRec198[0];
			fRec197[1] = fRec197[0];
			fRec204[1] = fRec204[0];
			fRec205[1] = fRec205[0];
			fVec64[1] = fVec64[0];
			fVec65[1] = fVec65[0];
			fRec215[1] = fRec215[0];
			fRec214[1] = fRec214[0];
			fVec66[1] = fVec66[0];
			fRec213[1] = fRec213[0];
			fRec212[1] = fRec212[0];
			fRec211[1] = fRec211[0];
			fRec210[1] = fRec210[0];
			fRec209[1] = fRec209[0];
			fRec228[1] = fRec228[0];
			fRec229[1] = fRec229[0];
			fRec224[1] = fRec224[0];
			fRec225[1] = fRec225[0];
			fRec219[1] = fRec219[0];
			fRec220[1] = fRec220[0];
			fRec216[1] = fRec216[0];
			fRec217[1] = fRec217[0];
			fRec218[1] = fRec218[0];
			fVec67[1] = fVec67[0];
			fRec239[1] = fRec239[0];
			fRec238[1] = fRec238[0];
			fVec68[1] = fVec68[0];
			fRec237[1] = fRec237[0];
			fRec236[1] = fRec236[0];
			fRec235[1] = fRec235[0];
			fRec234[1] = fRec234[0];
			fRec233[1] = fRec233[0];
			fRec240[1] = fRec240[0];
			fRec241[1] = fRec241[0];
			fVec69[1] = fVec69[0];
			fVec70[1] = fVec70[0];
			fRec251[1] = fRec251[0];
			fRec250[1] = fRec250[0];
			fVec71[1] = fVec71[0];
			fRec249[1] = fRec249[0];
			fRec248[1] = fRec248[0];
			fRec247[1] = fRec247[0];
			fRec246[1] = fRec246[0];
			fRec245[1] = fRec245[0];
			fRec22[2] = fRec22[1];
			fRec22[1] = fRec22[0];
			fRec18[1] = fRec18[0];
			fRec19[1] = fRec19[0];
			fRec15[1] = fRec15[0];
			fRec16[1] = fRec16[0];
			fRec255[1] = fRec255[0];
			fRec256[1] = fRec256[0];
			fRec258[1] = fRec258[0];
			fRec259[1] = fRec259[0];
			fRec252[1] = fRec252[0];
			fRec253[1] = fRec253[0];
			fRec11[1] = fRec11[0];
			fRec12[1] = fRec12[0];
			fRec8[1] = fRec8[0];
			fRec9[1] = fRec9[0];
			fRec261[1] = fRec261[0];
			fRec262[1] = fRec262[0];
			fRec4[1] = fRec4[0];
			fRec5[1] = fRec5[0];
			fRec1[1] = fRec1[0];
			fRec2[1] = fRec2[0];
			fVec72[1] = fVec72[0];
			fVec73[2] = fVec73[1];
			fVec73[1] = fVec73[0];
			for (int j8 = 4; j8 > 0; j8 = j8 - 1) {
				fVec74[j8] = fVec74[j8 - 1];
			}
			for (int j9 = 11; j9 > 0; j9 = j9 - 1) {
				fVec75[j9] = fVec75[j9 - 1];
			}
			fRec264[1] = fRec264[0];
			fRec266[1] = fRec266[0];
			fRec267[1] = fRec267[0];
			fVec82[1] = fVec82[0];
			fVec83[2] = fVec83[1];
			fVec83[1] = fVec83[0];
			for (int j10 = 4; j10 > 0; j10 = j10 - 1) {
				fVec84[j10] = fVec84[j10 - 1];
			}
			for (int j11 = 11; j11 > 0; j11 = j11 - 1) {
				fVec85[j11] = fVec85[j11 - 1];
			}
			fRec265[1] = fRec265[0];
			fRec278[1] = fRec278[0];
			fRec279[1] = fRec279[0];
			fRec282[1] = fRec282[0];
			fRec283[1] = fRec283[0];
			fRec274[1] = fRec274[0];
			fRec275[1] = fRec275[0];
			fRec271[1] = fRec271[0];
			fRec272[1] = fRec272[0];
			fVec92[1] = fVec92[0];
			fVec93[2] = fVec93[1];
			fVec93[1] = fVec93[0];
			for (int j12 = 4; j12 > 0; j12 = j12 - 1) {
				fVec94[j12] = fVec94[j12 - 1];
			}
			for (int j13 = 11; j13 > 0; j13 = j13 - 1) {
				fVec95[j13] = fVec95[j13 - 1];
			}
			fRec270[1] = fRec270[0];
			fRec286[1] = fRec286[0];
			fRec287[1] = fRec287[0];
			fVec102[1] = fVec102[0];
			fVec103[2] = fVec103[1];
			fVec103[1] = fVec103[0];
			for (int j14 = 4; j14 > 0; j14 = j14 - 1) {
				fVec104[j14] = fVec104[j14 - 1];
			}
			for (int j15 = 11; j15 > 0; j15 = j15 - 1) {
				fVec105[j15] = fVec105[j15 - 1];
			}
			fRec285[1] = fRec285[0];
			fRec305[1] = fRec305[0];
			fRec306[1] = fRec306[0];
			fRec312[1] = fRec312[0];
			fRec313[1] = fRec313[0];
			fRec315[1] = fRec315[0];
			fRec316[1] = fRec316[0];
			fRec309[1] = fRec309[0];
			fRec310[1] = fRec310[0];
			fRec301[1] = fRec301[0];
			fRec302[1] = fRec302[0];
			fRec298[1] = fRec298[0];
			fRec299[1] = fRec299[0];
			fRec318[1] = fRec318[0];
			fRec319[1] = fRec319[0];
			fRec294[1] = fRec294[0];
			fRec295[1] = fRec295[0];
			fRec291[1] = fRec291[0];
			fRec292[1] = fRec292[0];
			fVec112[1] = fVec112[0];
			fVec113[2] = fVec113[1];
			fVec113[1] = fVec113[0];
			for (int j16 = 4; j16 > 0; j16 = j16 - 1) {
				fVec114[j16] = fVec114[j16 - 1];
			}
			for (int j17 = 11; j17 > 0; j17 = j17 - 1) {
				fVec115[j17] = fVec115[j17 - 1];
			}
			fRec290[1] = fRec290[0];
			fRec322[1] = fRec322[0];
			fRec323[1] = fRec323[0];
			fVec122[1] = fVec122[0];
			fVec123[2] = fVec123[1];
			fVec123[1] = fVec123[0];
			for (int j18 = 4; j18 > 0; j18 = j18 - 1) {
				fVec124[j18] = fVec124[j18 - 1];
			}
			for (int j19 = 11; j19 > 0; j19 = j19 - 1) {
				fVec125[j19] = fVec125[j19 - 1];
			}
			fRec321[1] = fRec321[0];
			fRec334[1] = fRec334[0];
			fRec335[1] = fRec335[0];
			fRec338[1] = fRec338[0];
			fRec339[1] = fRec339[0];
			fRec330[1] = fRec330[0];
			fRec331[1] = fRec331[0];
			fRec327[1] = fRec327[0];
			fRec328[1] = fRec328[0];
			fVec132[1] = fVec132[0];
			fVec133[2] = fVec133[1];
			fVec133[1] = fVec133[0];
			for (int j20 = 4; j20 > 0; j20 = j20 - 1) {
				fVec134[j20] = fVec134[j20 - 1];
			}
			for (int j21 = 11; j21 > 0; j21 = j21 - 1) {
				fVec135[j21] = fVec135[j21 - 1];
			}
			fRec326[1] = fRec326[0];
			fRec342[1] = fRec342[0];
			fRec343[1] = fRec343[0];
			fVec142[1] = fVec142[0];
			fVec143[2] = fVec143[1];
			fVec143[1] = fVec143[0];
			for (int j22 = 4; j22 > 0; j22 = j22 - 1) {
				fVec144[j22] = fVec144[j22 - 1];
			}
			for (int j23 = 11; j23 > 0; j23 = j23 - 1) {
				fVec145[j23] = fVec145[j23 - 1];
			}
			fRec341[1] = fRec341[0];
			fRec346[1] = fRec346[0];
			fRec347[1] = fRec347[0];
			fRec348[1] = fRec348[0];
			fRec349[1] = fRec349[0];
			fRec350[1] = fRec350[0];
			fRec351[1] = fRec351[0];
			fRec352[1] = fRec352[0];
			fRec353[1] = fRec353[0];
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
            return dsp->fVslider3;
        case kParameter_sb_target_spectrum_0:
            return dsp->fVslider4;
        case kParameter_sb_target_spectrum_1:
            return dsp->fVslider5;
        case kParameter_sb_target_spectrum_2:
            return dsp->fVslider6;
        case kParameter_sb_target_spectrum_3:
            return dsp->fVslider7;
        case kParameter_sb_target_spectrum_4:
            return dsp->fVslider8;
        case kParameter_sb_target_spectrum_5:
            return dsp->fVslider9;
        case kParameter_sb_target_spectrum_6:
            return dsp->fVslider10;
        case kParameter_sb_target_spectrum_7:
            return dsp->fVslider11;
        case kParameter_bypass:
            return dsp->fCheckbox0;
        case kParameter_leveler_target:
            return dsp->fVslider1;
        case kParameter_leveler_expander_offset:
            return dsp->fVslider0;
        case kParameter_pre_lowcut:
            return dsp->fVslider2;
        case kParameter_sb_expander:
            return dsp->fVbargraph4;
        case kParameter_sb_meter__0:
            return dsp->fVbargraph3;
        case kParameter_sb_meter__1:
            return dsp->fVbargraph6;
        case kParameter_sb_meter__2:
            return dsp->fVbargraph8;
        case kParameter_sb_meter__3:
            return dsp->fVbargraph10;
        case kParameter_sb_meter__4:
            return dsp->fVbargraph12;
        case kParameter_sb_meter__5:
            return dsp->fVbargraph14;
        case kParameter_sb_meter__6:
            return dsp->fVbargraph16;
        case kParameter_sb_meter__7:
            return dsp->fVbargraph18;
        case kParameter_sb_gain__0:
            return dsp->fVbargraph5;
        case kParameter_sb_gain__1:
            return dsp->fVbargraph7;
        case kParameter_sb_gain__2:
            return dsp->fVbargraph9;
        case kParameter_sb_gain__3:
            return dsp->fVbargraph11;
        case kParameter_sb_gain__4:
            return dsp->fVbargraph13;
        case kParameter_sb_gain__5:
            return dsp->fVbargraph15;
        case kParameter_sb_gain__6:
            return dsp->fVbargraph17;
        case kParameter_sb_gain__7:
            return dsp->fVbargraph19;
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
            dsp->fVslider3 = value;
            break;
        case kParameter_sb_target_spectrum_0:
            dsp->fVslider4 = value;
            break;
        case kParameter_sb_target_spectrum_1:
            dsp->fVslider5 = value;
            break;
        case kParameter_sb_target_spectrum_2:
            dsp->fVslider6 = value;
            break;
        case kParameter_sb_target_spectrum_3:
            dsp->fVslider7 = value;
            break;
        case kParameter_sb_target_spectrum_4:
            dsp->fVslider8 = value;
            break;
        case kParameter_sb_target_spectrum_5:
            dsp->fVslider9 = value;
            break;
        case kParameter_sb_target_spectrum_6:
            dsp->fVslider10 = value;
            break;
        case kParameter_sb_target_spectrum_7:
            dsp->fVslider11 = value;
            break;
        case kParameter_bypass:
            dsp->fCheckbox0 = value;
            break;
        case kParameter_leveler_target:
            dsp->fVslider1 = value;
            break;
        case kParameter_leveler_expander_offset:
            dsp->fVslider0 = value;
            break;
        case kParameter_pre_lowcut:
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
