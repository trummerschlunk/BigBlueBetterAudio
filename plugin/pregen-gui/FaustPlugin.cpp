
//------------------------------------------------------------------------------
// This file was generated using the Faust compiler (https://faust.grame.fr),
// and the Faust post-processor (https://github.com/jpcima/faustpp).
//
// Source: bbba_gui.dsp
// Name: bbba
// Description: 
// Author: Klaus Scheuermann
// Copyright: 
// License: GPLv3+
// Version: 0.29
//------------------------------------------------------------------------------


#include "DistrhoPlugin.hpp"

#include <algorithm>
#include <memory>

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
	
	int fSampleRate;
	float fConst0;
	float fConst1;
	FAUSTFLOAT fVslider0;
	FAUSTFLOAT fVslider1;
	int iConst2;
	float fConst3;
	float fConst4;
	float fConst5;
	float fConst6;
	FAUSTFLOAT fVslider2;
	FAUSTFLOAT fVslider3;
	float fConst7;
	FAUSTFLOAT fVslider4;
	float fRec73[2];
	FAUSTFLOAT fVbargraph0;
	FAUSTFLOAT fVbargraph1;
	float fConst8;
	float fConst9;
	float fConst10;
	int iConst11;
	float fConst12;
	float fConst13;
	float fConst14;
	float fConst15;
	float fConst16;
	float fConst17;
	float fConst18;
	float fConst19;
	float fVec0[2];
	float fConst20;
	float fConst21;
	float fConst22;
	float fRec77[2];
	float fRec76[2];
	float fConst23;
	float fConst24;
	float fConst25;
	float fConst26;
	float fConst27;
	float fVec1[2];
	float fConst28;
	float fRec75[2];
	float fRec74[2];
	float fVec2[2];
	float fVec3[3];
	int iConst29;
	int iConst30;
	float fVec4[5];
	int iConst31;
	int iConst32;
	float fVec5[12];
	int iConst33;
	int iConst34;
	int IOTA0;
	float fVec6[32];
	int iConst35;
	int iConst36;
	float fVec7[64];
	int iConst37;
	int iConst38;
	float fVec8[128];
	int iConst39;
	int iConst40;
	float fVec9[256];
	int iConst41;
	int iConst42;
	float fVec10[512];
	int iConst43;
	float fConst44;
	float fRec68[2];
	float fRec69[2];
	float fRec66[2];
	FAUSTFLOAT fVslider5;
	FAUSTFLOAT fVbargraph2;
	float fRec65[2];
	FAUSTFLOAT fVslider6;
	float fConst45;
	float fConst46;
	FAUSTFLOAT fVslider7;
	float fRec80[2];
	float fRec79[2];
	FAUSTFLOAT fVbargraph3;
	float fRec81[2];
	FAUSTFLOAT fVbargraph4;
	float fVec11[2];
	float fRec78[2];
	float fVec12[2];
	float fConst47;
	float fConst48;
	float fConst49;
	float fRec60[2];
	float fConst50;
	float fRec61[2];
	float fConst51;
	float fRec55[2];
	float fRec56[2];
	float fConst52;
	float fConst53;
	float fConst54;
	float fRec51[2];
	float fConst55;
	float fRec52[2];
	float fConst56;
	float fConst57;
	float fConst58;
	float fConst59;
	float fRec47[2];
	float fConst60;
	float fRec48[2];
	float fConst61;
	float fConst62;
	float fConst63;
	float fConst64;
	float fRec43[2];
	float fConst65;
	float fRec44[2];
	float fConst66;
	float fConst67;
	float fConst68;
	float fConst69;
	float fRec38[2];
	float fConst70;
	float fRec39[2];
	float fConst71;
	float fRec33[2];
	float fRec34[2];
	float fConst72;
	float fConst73;
	float fConst74;
	float fRec29[2];
	float fConst75;
	float fRec30[2];
	float fConst76;
	float fConst77;
	float fConst78;
	float fConst79;
	float fRec24[2];
	float fConst80;
	float fRec25[2];
	float fConst81;
	float fRec19[2];
	float fRec20[2];
	float fVec13[2];
	float fConst82;
	float fConst83;
	float fConst84;
	float fVec14[2];
	float fRec18[2];
	float fRec17[2];
	float fVec15[2];
	float fRec16[2];
	float fRec15[2];
	float fConst85;
	float fConst86;
	float fRec14[2];
	float fConst87;
	float fRec13[2];
	float fVec16[2];
	float fRec87[2];
	float fRec86[2];
	float fVec17[2];
	float fRec85[2];
	float fRec84[2];
	float fRec83[2];
	float fRec82[2];
	FAUSTFLOAT fVbargraph5;
	FAUSTFLOAT fVslider8;
	float fConst88;
	float fRec12[2];
	FAUSTFLOAT fVslider9;
	FAUSTFLOAT fVslider10;
	FAUSTFLOAT fVbargraph6;
	float fConst89;
	float fRec95[2];
	float fRec96[2];
	float fRec97[2];
	float fVec18[2];
	float fRec94[2];
	float fRec93[2];
	float fVec19[2];
	float fRec92[2];
	float fRec91[2];
	float fRec90[2];
	float fRec89[2];
	FAUSTFLOAT fVbargraph7;
	FAUSTFLOAT fVslider11;
	float fConst90;
	float fRec88[2];
	FAUSTFLOAT fVbargraph8;
	float fConst91;
	float fRec119[2];
	float fRec120[2];
	float fRec115[2];
	float fRec116[2];
	float fRec110[2];
	float fRec111[2];
	float fRec105[2];
	float fRec106[2];
	float fVec20[2];
	float fVec21[2];
	float fRec104[2];
	float fRec103[2];
	float fVec22[2];
	float fRec102[2];
	float fRec101[2];
	float fRec100[2];
	float fRec99[2];
	FAUSTFLOAT fVbargraph9;
	FAUSTFLOAT fVslider12;
	float fConst92;
	float fRec98[2];
	FAUSTFLOAT fVbargraph10;
	float fRec129[2];
	float fRec130[2];
	float fRec131[2];
	float fVec23[2];
	float fRec128[2];
	float fRec127[2];
	float fVec24[2];
	float fRec126[2];
	float fRec125[2];
	float fRec124[2];
	float fRec123[2];
	FAUSTFLOAT fVbargraph11;
	FAUSTFLOAT fVslider13;
	float fRec122[2];
	FAUSTFLOAT fVbargraph12;
	float fConst93;
	float fRec175[2];
	float fRec176[2];
	float fRec171[2];
	float fRec172[2];
	float fRec167[2];
	float fRec168[2];
	float fRec163[2];
	float fRec164[2];
	float fRec158[2];
	float fRec159[2];
	float fRec153[2];
	float fRec154[2];
	float fRec149[2];
	float fRec150[2];
	float fRec144[2];
	float fRec145[2];
	float fRec139[2];
	float fRec140[2];
	float fVec25[2];
	float fVec26[2];
	float fRec138[2];
	float fRec137[2];
	float fVec27[2];
	float fRec136[2];
	float fRec135[2];
	float fRec134[2];
	float fRec133[2];
	FAUSTFLOAT fVbargraph13;
	FAUSTFLOAT fVslider14;
	float fConst94;
	float fRec132[2];
	FAUSTFLOAT fVbargraph14;
	float fConst95;
	float fRec185[2];
	float fRec186[2];
	float fRec187[2];
	float fVec28[2];
	float fRec184[2];
	float fRec183[2];
	float fVec29[2];
	float fRec182[2];
	float fRec181[2];
	float fRec180[2];
	float fRec179[2];
	FAUSTFLOAT fVbargraph15;
	FAUSTFLOAT fVslider15;
	float fConst96;
	float fRec178[2];
	FAUSTFLOAT fVbargraph16;
	float fConst97;
	float fRec209[2];
	float fRec210[2];
	float fRec205[2];
	float fRec206[2];
	float fRec200[2];
	float fRec201[2];
	float fRec195[2];
	float fRec196[2];
	float fVec30[2];
	float fVec31[2];
	float fRec194[2];
	float fRec193[2];
	float fVec32[2];
	float fRec192[2];
	float fRec191[2];
	float fRec190[2];
	float fRec189[2];
	FAUSTFLOAT fVbargraph17;
	FAUSTFLOAT fVslider16;
	float fConst98;
	float fRec188[2];
	FAUSTFLOAT fVbargraph18;
	float fConst99;
	float fRec219[2];
	float fRec220[2];
	float fRec221[2];
	float fVec33[2];
	float fRec218[2];
	float fRec217[2];
	float fVec34[2];
	float fRec216[2];
	float fRec215[2];
	float fRec214[2];
	float fRec213[2];
	FAUSTFLOAT fVbargraph19;
	FAUSTFLOAT fVslider17;
	float fConst100;
	float fRec212[2];
	FAUSTFLOAT fVbargraph20;
	float fRec3[3];
	float fConst101;
	float fConst102;
	float fRec2[2];
	FAUSTFLOAT fVslider18;
	FAUSTFLOAT fVbargraph21;
	float fVec35[2];
	int iConst103;
	float fVec36[3];
	int iConst104;
	float fVec37[5];
	int iConst105;
	int iConst106;
	float fVec38[12];
	int iConst107;
	int iConst108;
	float fVec39[32];
	int iConst109;
	int iConst110;
	float fVec40[64];
	int iConst111;
	int iConst112;
	float fVec41[128];
	int iConst113;
	int iConst114;
	float fVec42[256];
	int iConst115;
	int iConst116;
	float fVec43[512];
	int iConst117;
	int iConst118;
	float fVec44[512];
	int iConst119;
	FAUSTFLOAT fVslider19;
	float fRec1[2];
	FAUSTFLOAT fVbargraph22;
	float fConst120;
	float fRec223[2];
	FAUSTFLOAT fVbargraph23;
	float fVec45[2];
	float fVec46[3];
	float fVec47[5];
	float fVec48[12];
	float fVec49[32];
	float fVec50[64];
	float fVec51[128];
	float fVec52[256];
	float fVec53[512];
	float fVec54[512];
	float fRec222[2];
	FAUSTFLOAT fVbargraph24;
	float fConst121;
	float fRec225[2];
	FAUSTFLOAT fVbargraph25;
	float fVec55[2];
	float fVec56[3];
	float fVec57[5];
	float fVec58[12];
	float fVec59[32];
	float fVec60[64];
	float fVec61[128];
	float fVec62[256];
	float fVec63[512];
	float fVec64[512];
	float fRec224[2];
	FAUSTFLOAT fVbargraph26;
	float fConst122;
	float fRec227[2];
	FAUSTFLOAT fVbargraph27;
	float fVec65[2];
	float fVec66[3];
	float fVec67[5];
	float fVec68[12];
	float fVec69[32];
	float fVec70[64];
	float fVec71[128];
	float fVec72[256];
	float fVec73[512];
	float fVec74[512];
	float fRec226[2];
	FAUSTFLOAT fVbargraph28;
	float fConst123;
	float fRec229[2];
	FAUSTFLOAT fVbargraph29;
	float fVec75[2];
	float fVec76[3];
	float fVec77[5];
	float fVec78[12];
	float fVec79[32];
	float fVec80[64];
	float fVec81[128];
	float fVec82[256];
	float fVec83[512];
	float fVec84[512];
	float fRec228[2];
	FAUSTFLOAT fVbargraph30;
	float fConst124;
	float fRec231[2];
	FAUSTFLOAT fVbargraph31;
	float fVec85[2];
	float fVec86[3];
	float fVec87[5];
	float fVec88[12];
	float fVec89[32];
	float fVec90[64];
	float fVec91[128];
	float fVec92[256];
	float fVec93[512];
	float fVec94[512];
	float fRec230[2];
	FAUSTFLOAT fVbargraph32;
	float fConst125;
	float fRec233[2];
	FAUSTFLOAT fVbargraph33;
	float fVec95[2];
	float fVec96[3];
	float fVec97[5];
	float fVec98[12];
	float fVec99[32];
	float fVec100[64];
	float fVec101[128];
	float fVec102[256];
	float fVec103[512];
	float fVec104[512];
	float fRec232[2];
	FAUSTFLOAT fVbargraph34;
	float fConst126;
	float fRec235[2];
	FAUSTFLOAT fVbargraph35;
	float fVec105[2];
	float fVec106[3];
	float fVec107[5];
	float fVec108[12];
	float fVec109[32];
	float fVec110[64];
	float fVec111[128];
	float fVec112[256];
	float fVec113[512];
	float fVec114[512];
	float fRec234[2];
	FAUSTFLOAT fVbargraph36;
	float fVec115[2048];
	int iConst127;
	float fConst128;
	int iRec238[2];
	float fRec239[2];
	float fConst129;
	float fRec237[2];
	float fConst130;
	float fConst131;
	float fRec236[2];
	FAUSTFLOAT fVbargraph37;
	float fRec0[2];
	FAUSTFLOAT fVbargraph38;
	float fVec116[2];
	float fConst132;
	int iConst133;
	FAUSTFLOAT fVbargraph39;
	float fVec117[2];
	float fVec118[2];
	float fRec243[2];
	float fRec242[2];
	float fVec119[2];
	float fRec241[2];
	float fRec240[2];
	float fVec120[2];
	float fVec121[3];
	int iConst134;
	int iConst135;
	float fVec122[5];
	int iConst136;
	int iConst137;
	float fVec123[12];
	int iConst138;
	int iConst139;
	float fVec124[32];
	int iConst140;
	int iConst141;
	float fVec125[64];
	int iConst142;
	int iConst143;
	float fVec126[128];
	int iConst144;
	int iConst145;
	float fVec127[256];
	int iConst146;
	int iConst147;
	float fVec128[512];
	int iConst148;
	int iConst149;
	float fVec129[1024];
	int iConst150;
	int iConst151;
	float fVec130[2048];
	int iConst152;
	int iConst153;
	float fVec131[4096];
	int iConst154;
	int iConst155;
	float fVec132[8192];
	int iConst156;
	int iConst157;
	float fVec133[16384];
	int iConst158;
	int iConst159;
	float fVec134[32768];
	int iConst160;
	int iConst161;
	float fVec135[65536];
	int iConst162;
	int iConst163;
	float fVec136[131072];
	int iConst164;
	int iConst165;
	float fVec137[262144];
	int iConst166;
	float fVec138[2];
	float fRec247[2];
	float fRec246[2];
	float fVec139[2];
	float fRec245[2];
	float fRec244[2];
	float fVec140[2];
	float fVec141[3];
	float fVec142[5];
	float fVec143[12];
	float fVec144[32];
	float fVec145[64];
	float fVec146[128];
	float fVec147[256];
	float fVec148[512];
	float fVec149[1024];
	float fVec150[2048];
	float fVec151[4096];
	float fVec152[8192];
	float fVec153[16384];
	float fVec154[32768];
	float fVec155[65536];
	float fVec156[131072];
	float fVec157[262144];
	float fConst167;
	FAUSTFLOAT fVbargraph40;
	
 public:
	mydsp() {
	}
	
	void metadata(Meta* m) { 
		m->declare("analyzers.lib/name", "Faust Analyzer Library");
		m->declare("analyzers.lib/version", "1.2.0");
		m->declare("author", "Klaus Scheuermann");
		m->declare("basics.lib/bypass1:author", "Julius Smith");
		m->declare("basics.lib/name", "Faust Basic Element Library");
		m->declare("basics.lib/parallelOp:author", "Bart Brouns");
		m->declare("basics.lib/parallelOp:copyright", "Copyright (c) 2020 Bart Brouns <bart@magnetophon.nl>");
		m->declare("basics.lib/parallelOp:licence", "GPL-3.0");
		m->declare("basics.lib/peakholder:author", "Dario Sanfilippo");
		m->declare("basics.lib/peakholder:copyright", "Copyright (C) 2022 Dario Sanfilippo <sanfilippo.dario@gmail.com>");
		m->declare("basics.lib/peakholder:license", "MIT-style STK-4.3 license");
		m->declare("basics.lib/version", "1.21.0");
		m->declare("compile_options", "-a /tmp/tmp06hhgon4.cpp -lang cpp -ct 1 -es 1 -mcd 16 -mdd 1024 -mdy 33 -single -ftz 0");
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
		m->declare("filename", "bbba_gui.dsp");
		m->declare("filters.lib/crossover2LR4:author", "Dario Sanfilippo");
		m->declare("filters.lib/crossover2LR4:copyright", "Copyright (C) 2022 Dario Sanfilippo <sanfilippo.dario@gmail.com>");
		m->declare("filters.lib/crossover2LR4:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/crossover8LR4:author", "Dario Sanfilippo");
		m->declare("filters.lib/crossover8LR4:copyright", "Copyright (C) 2022 Dario Sanfilippo <sanfilippo.dario@gmail.com>");
		m->declare("filters.lib/crossover8LR4:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/highpass:author", "Julius O. Smith III");
		m->declare("filters.lib/highpass:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/highpassLR4:author", "Dario Sanfilippo");
		m->declare("filters.lib/highpassLR4:copyright", "Copyright (C) 2022 Dario Sanfilippo <sanfilippo.dario@gmail.com>");
		m->declare("filters.lib/highpassLR4:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/itu_r_bs_1770_4_kfilter:author", "Jakob Dübel");
		m->declare("filters.lib/itu_r_bs_1770_4_kfilter:copyright", "Copyright (C) 2022 Jakob Dübel");
		m->declare("filters.lib/itu_r_bs_1770_4_kfilter:license", "ISC license");
		m->declare("filters.lib/lowpass0_highpass1", "MIT-style STK-4.3 license");
		m->declare("filters.lib/lowpass0_highpass1:author", "Julius O. Smith III");
		m->declare("filters.lib/lowpassLR4:author", "Dario Sanfilippo");
		m->declare("filters.lib/lowpassLR4:copyright", "Copyright (C) 2022 Dario Sanfilippo <sanfilippo.dario@gmail.com>");
		m->declare("filters.lib/lowpassLR4:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/name", "Faust Filters Library");
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
		m->declare("version", "0.29");
	}

	FAUSTPP_VIRTUAL int getNumInputs() {
		return 2;
	}
	FAUSTPP_VIRTUAL int getNumOutputs() {
		return 2;
	}
	
	static void classInit(int sample_rate) {
	}
	
	FAUSTPP_VIRTUAL void instanceConstants(int sample_rate) {
		fSampleRate = sample_rate;
		fConst0 = std::min<float>(1.92e+05f, std::max<float>(1.0f, float(fSampleRate)));
		fConst1 = 2e+01f / fConst0;
		iConst2 = int(std::floor(0.001f * fConst0)) % 2;
		fConst3 = std::exp(-(4e+01f / fConst0));
		fConst4 = std::exp(-(1e+02f / fConst0));
		fConst5 = 0.125f * fConst0;
		fConst6 = 1.1312305e-06f * fConst0;
		fConst7 = 1.0f / fConst0;
		fConst8 = 3.1415927f / fConst0;
		fConst9 = 0.01f * fConst0;
		fConst10 = std::rint(fConst9);
		iConst11 = int(std::floor(0.5f * fConst10)) % 2;
		fConst12 = std::tan(5283.415f / fConst0);
		fConst13 = 1.7803667f * fConst12;
		fConst14 = mydsp_faustpower2_f(fConst12);
		fConst15 = fConst14 + fConst13 + 1.5848527f;
		fConst16 = 2.0f * (fConst14 + -1.0f);
		fConst17 = fConst14 + (1.5848527f - fConst13);
		fConst18 = 1.4142135f * fConst12;
		fConst19 = fConst14 + (1.0f - fConst18);
		fConst20 = fConst14 + -1.5848527f;
		fConst21 = 2.0f * fConst20;
		fConst22 = 1.0f / (fConst14 + fConst18 + 1.0f);
		fConst23 = std::tan(119.806114f / fConst0);
		fConst24 = mydsp_faustpower2_f(fConst23);
		fConst25 = 1.0006541f * (fConst24 + -1.0f);
		fConst26 = 0.50032705f * (fConst24 + 1.0f);
		fConst27 = fConst26 - fConst23;
		fConst28 = 1.0f / (fConst23 + fConst26);
		iConst29 = int(std::floor(fConst10)) % 2;
		iConst30 = int(std::floor(0.25f * fConst10)) % 2;
		iConst31 = iConst29 + 2 * iConst11;
		iConst32 = int(std::floor(0.125f * fConst10)) % 2;
		iConst33 = iConst31 + 4 * iConst30;
		iConst34 = int(std::floor(0.0625f * fConst10)) % 2;
		iConst35 = iConst33 + 8 * iConst32;
		iConst36 = int(std::floor(0.03125f * fConst10)) % 2;
		iConst37 = iConst35 + 16 * iConst34;
		iConst38 = int(std::floor(0.015625f * fConst10)) % 2;
		iConst39 = iConst37 + 32 * iConst36;
		iConst40 = int(std::floor(0.0078125f * fConst10)) % 2;
		iConst41 = iConst39 + 64 * iConst38;
		iConst42 = int(std::floor(0.00390625f * fConst10)) % 2;
		iConst43 = iConst41 + 128 * iConst40;
		fConst44 = 1.0f / std::max<float>(fConst10, 1.1920929e-07f);
		fConst45 = 44.1f / fConst0;
		fConst46 = 1.0f - fConst45;
		fConst47 = std::tan(2513.2742f / fConst0);
		fConst48 = fConst47 * (fConst47 + 1.4142135f) + 1.0f;
		fConst49 = 2.0f / fConst48;
		fConst50 = fConst47 / fConst48;
		fConst51 = 1.0f / fConst48;
		fConst52 = std::tan(628.31854f / fConst0);
		fConst53 = fConst52 * (fConst52 + 1.4142135f) + 1.0f;
		fConst54 = 2.0f / fConst53;
		fConst55 = fConst52 / fConst53;
		fConst56 = 1.0f / fConst53;
		fConst57 = std::tan(314.15927f / fConst0);
		fConst58 = fConst57 * (fConst57 + 1.4142135f) + 1.0f;
		fConst59 = 2.0f / fConst58;
		fConst60 = fConst57 / fConst58;
		fConst61 = 1.0f / fConst58;
		fConst62 = std::tan(1256.6371f / fConst0);
		fConst63 = fConst62 * (fConst62 + 1.4142135f) + 1.0f;
		fConst64 = 2.0f / fConst63;
		fConst65 = fConst62 / fConst63;
		fConst66 = 1.0f / fConst63;
		fConst67 = std::tan(10053.097f / fConst0);
		fConst68 = fConst67 * (fConst67 + 1.4142135f) + 1.0f;
		fConst69 = 2.0f / fConst68;
		fConst70 = fConst67 / fConst68;
		fConst71 = 1.0f / fConst68;
		fConst72 = std::tan(5026.5483f / fConst0);
		fConst73 = fConst72 * (fConst72 + 1.4142135f) + 1.0f;
		fConst74 = 2.0f / fConst73;
		fConst75 = fConst72 / fConst73;
		fConst76 = 1.0f / fConst73;
		fConst77 = std::tan(20106.193f / fConst0);
		fConst78 = fConst77 * (fConst77 + 1.4142135f) + 1.0f;
		fConst79 = 2.0f / fConst78;
		fConst80 = fConst77 / fConst78;
		fConst81 = 1.0f / fConst78;
		fConst82 = 3.9810717f * fConst15;
		fConst83 = 7.9621434f * fConst20;
		fConst84 = 3.9810717f * fConst17;
		fConst85 = std::exp(-(1e+01f / fConst0));
		fConst86 = 1.0f - fConst85;
		fConst87 = 1.0f - fConst4;
		fConst88 = 1.0f - fConst3;
		fConst89 = std::exp(-fConst1);
		fConst90 = 1.0f - fConst89;
		fConst91 = std::exp(-(13.333333f / fConst0));
		fConst92 = 1.0f - fConst91;
		fConst93 = std::exp(-(8.0f / fConst0));
		fConst94 = 1.0f - fConst93;
		fConst95 = std::exp(-(6.6666665f / fConst0));
		fConst96 = 1.0f - fConst95;
		fConst97 = std::exp(-(5.714286f / fConst0));
		fConst98 = 1.0f - fConst97;
		fConst99 = std::exp(-(5.0f / fConst0));
		fConst100 = 1.0f - fConst99;
		fConst101 = std::exp(-(5e+02f / fConst0));
		fConst102 = std::exp(-(66.666664f / fConst0));
		iConst103 = int(std::floor(0.0005f * fConst0)) % 2;
		iConst104 = int(std::floor(0.00025f * fConst0)) % 2;
		iConst105 = iConst2 + 2 * iConst103;
		iConst106 = int(std::floor(0.000125f * fConst0)) % 2;
		iConst107 = iConst105 + 4 * iConst104;
		iConst108 = int(std::floor(6.25e-05f * fConst0)) % 2;
		iConst109 = iConst107 + 8 * iConst106;
		iConst110 = int(std::floor(3.125e-05f * fConst0)) % 2;
		iConst111 = iConst109 + 16 * iConst108;
		iConst112 = int(std::floor(1.5625e-05f * fConst0)) % 2;
		iConst113 = iConst111 + 32 * iConst110;
		iConst114 = int(std::floor(7.8125e-06f * fConst0)) % 2;
		iConst115 = iConst113 + 64 * iConst112;
		iConst116 = int(std::floor(3.90625e-06f * fConst0)) % 2;
		iConst117 = iConst115 + 128 * iConst114;
		iConst118 = int(std::floor(1.953125e-06f * fConst0)) % 2;
		iConst119 = iConst117 + 256 * iConst116;
		fConst120 = std::exp(-(333.33334f / fConst0));
		fConst121 = std::exp(-(2e+02f / fConst0));
		fConst122 = std::exp(-(5e+01f / fConst0));
		fConst123 = std::exp(-(25.0f / fConst0));
		fConst124 = std::exp(-(16.666666f / fConst0));
		fConst125 = std::exp(-(12.5f / fConst0));
		fConst126 = std::exp(-(33.333332f / fConst0));
		iConst127 = int(fConst9);
		fConst128 = std::exp(-(628.31854f / fConst0));
		fConst129 = 1.0f - fConst128;
		fConst130 = std::exp(-(6.2831855f / fConst0));
		fConst131 = 1.0f - fConst130;
		fConst132 = std::rint(3.0f * fConst0);
		iConst133 = int(std::floor(0.5f * fConst132)) % 2;
		iConst134 = int(std::floor(fConst132)) % 2;
		iConst135 = int(std::floor(0.25f * fConst132)) % 2;
		iConst136 = iConst134 + 2 * iConst133;
		iConst137 = int(std::floor(0.125f * fConst132)) % 2;
		iConst138 = iConst136 + 4 * iConst135;
		iConst139 = int(std::floor(0.0625f * fConst132)) % 2;
		iConst140 = iConst138 + 8 * iConst137;
		iConst141 = int(std::floor(0.03125f * fConst132)) % 2;
		iConst142 = iConst140 + 16 * iConst139;
		iConst143 = int(std::floor(0.015625f * fConst132)) % 2;
		iConst144 = iConst142 + 32 * iConst141;
		iConst145 = int(std::floor(0.0078125f * fConst132)) % 2;
		iConst146 = iConst144 + 64 * iConst143;
		iConst147 = int(std::floor(0.00390625f * fConst132)) % 2;
		iConst148 = iConst146 + 128 * iConst145;
		iConst149 = int(std::floor(0.001953125f * fConst132)) % 2;
		iConst150 = iConst148 + 256 * iConst147;
		iConst151 = int(std::floor(0.0009765625f * fConst132)) % 2;
		iConst152 = iConst150 + 512 * iConst149;
		iConst153 = int(std::floor(0.00048828125f * fConst132)) % 2;
		iConst154 = iConst152 + 1024 * iConst151;
		iConst155 = int(std::floor(0.00024414062f * fConst132)) % 2;
		iConst156 = iConst154 + 2048 * iConst153;
		iConst157 = int(std::floor(0.00012207031f * fConst132)) % 2;
		iConst158 = iConst156 + 4096 * iConst155;
		iConst159 = int(std::floor(6.1035156e-05f * fConst132)) % 2;
		iConst160 = iConst158 + 8192 * iConst157;
		iConst161 = int(std::floor(3.0517578e-05f * fConst132)) % 2;
		iConst162 = iConst160 + 16384 * iConst159;
		iConst163 = int(std::floor(1.5258789e-05f * fConst132)) % 2;
		iConst164 = iConst162 + 32768 * iConst161;
		iConst165 = int(std::floor(7.6293945e-06f * fConst132)) % 2;
		iConst166 = iConst164 + 65536 * iConst163;
		fConst167 = 1.0f / std::max<float>(fConst132, 1.1920929e-07f);
	}
	
	FAUSTPP_VIRTUAL void instanceResetUserInterface() {
		fVslider0 = FAUSTFLOAT(0.0f);
		fVslider1 = FAUSTFLOAT(-23.0f);
		fVslider2 = FAUSTFLOAT(0.9f);
		fVslider3 = FAUSTFLOAT(1e+02f);
		fVslider4 = FAUSTFLOAT(1.0f);
		fVslider5 = FAUSTFLOAT(1.0f);
		fVslider6 = FAUSTFLOAT(42.0f);
		fVslider7 = FAUSTFLOAT(0.0f);
		fVslider8 = FAUSTFLOAT(-4.0f);
		fVslider9 = FAUSTFLOAT(1e+02f);
		fVslider10 = FAUSTFLOAT(5e+01f);
		fVslider11 = FAUSTFLOAT(-7.0f);
		fVslider12 = FAUSTFLOAT(-1e+01f);
		fVslider13 = FAUSTFLOAT(-9.0f);
		fVslider14 = FAUSTFLOAT(-8.0f);
		fVslider15 = FAUSTFLOAT(-5.0f);
		fVslider16 = FAUSTFLOAT(-5.0f);
		fVslider17 = FAUSTFLOAT(-1e+01f);
		fVslider18 = FAUSTFLOAT(8e+01f);
		fVslider19 = FAUSTFLOAT(1e+02f);
	}
	
	FAUSTPP_VIRTUAL void instanceClear() {
		for (int l0 = 0; l0 < 2; l0 = l0 + 1) {
			fRec73[l0] = 0.0f;
		}
		for (int l1 = 0; l1 < 2; l1 = l1 + 1) {
			fVec0[l1] = 0.0f;
		}
		for (int l2 = 0; l2 < 2; l2 = l2 + 1) {
			fRec77[l2] = 0.0f;
		}
		for (int l3 = 0; l3 < 2; l3 = l3 + 1) {
			fRec76[l3] = 0.0f;
		}
		for (int l4 = 0; l4 < 2; l4 = l4 + 1) {
			fVec1[l4] = 0.0f;
		}
		for (int l5 = 0; l5 < 2; l5 = l5 + 1) {
			fRec75[l5] = 0.0f;
		}
		for (int l6 = 0; l6 < 2; l6 = l6 + 1) {
			fRec74[l6] = 0.0f;
		}
		for (int l7 = 0; l7 < 2; l7 = l7 + 1) {
			fVec2[l7] = 0.0f;
		}
		for (int l8 = 0; l8 < 3; l8 = l8 + 1) {
			fVec3[l8] = 0.0f;
		}
		for (int l9 = 0; l9 < 5; l9 = l9 + 1) {
			fVec4[l9] = 0.0f;
		}
		for (int l10 = 0; l10 < 12; l10 = l10 + 1) {
			fVec5[l10] = 0.0f;
		}
		IOTA0 = 0;
		for (int l11 = 0; l11 < 32; l11 = l11 + 1) {
			fVec6[l11] = 0.0f;
		}
		for (int l12 = 0; l12 < 64; l12 = l12 + 1) {
			fVec7[l12] = 0.0f;
		}
		for (int l13 = 0; l13 < 128; l13 = l13 + 1) {
			fVec8[l13] = 0.0f;
		}
		for (int l14 = 0; l14 < 256; l14 = l14 + 1) {
			fVec9[l14] = 0.0f;
		}
		for (int l15 = 0; l15 < 512; l15 = l15 + 1) {
			fVec10[l15] = 0.0f;
		}
		for (int l16 = 0; l16 < 2; l16 = l16 + 1) {
			fRec68[l16] = 0.0f;
		}
		for (int l17 = 0; l17 < 2; l17 = l17 + 1) {
			fRec69[l17] = 0.0f;
		}
		for (int l18 = 0; l18 < 2; l18 = l18 + 1) {
			fRec66[l18] = 0.0f;
		}
		for (int l19 = 0; l19 < 2; l19 = l19 + 1) {
			fRec65[l19] = 0.0f;
		}
		for (int l20 = 0; l20 < 2; l20 = l20 + 1) {
			fRec80[l20] = 0.0f;
		}
		for (int l21 = 0; l21 < 2; l21 = l21 + 1) {
			fRec79[l21] = 0.0f;
		}
		for (int l22 = 0; l22 < 2; l22 = l22 + 1) {
			fRec81[l22] = 0.0f;
		}
		for (int l23 = 0; l23 < 2; l23 = l23 + 1) {
			fVec11[l23] = 0.0f;
		}
		for (int l24 = 0; l24 < 2; l24 = l24 + 1) {
			fRec78[l24] = 0.0f;
		}
		for (int l25 = 0; l25 < 2; l25 = l25 + 1) {
			fVec12[l25] = 0.0f;
		}
		for (int l26 = 0; l26 < 2; l26 = l26 + 1) {
			fRec60[l26] = 0.0f;
		}
		for (int l27 = 0; l27 < 2; l27 = l27 + 1) {
			fRec61[l27] = 0.0f;
		}
		for (int l28 = 0; l28 < 2; l28 = l28 + 1) {
			fRec55[l28] = 0.0f;
		}
		for (int l29 = 0; l29 < 2; l29 = l29 + 1) {
			fRec56[l29] = 0.0f;
		}
		for (int l30 = 0; l30 < 2; l30 = l30 + 1) {
			fRec51[l30] = 0.0f;
		}
		for (int l31 = 0; l31 < 2; l31 = l31 + 1) {
			fRec52[l31] = 0.0f;
		}
		for (int l32 = 0; l32 < 2; l32 = l32 + 1) {
			fRec47[l32] = 0.0f;
		}
		for (int l33 = 0; l33 < 2; l33 = l33 + 1) {
			fRec48[l33] = 0.0f;
		}
		for (int l34 = 0; l34 < 2; l34 = l34 + 1) {
			fRec43[l34] = 0.0f;
		}
		for (int l35 = 0; l35 < 2; l35 = l35 + 1) {
			fRec44[l35] = 0.0f;
		}
		for (int l36 = 0; l36 < 2; l36 = l36 + 1) {
			fRec38[l36] = 0.0f;
		}
		for (int l37 = 0; l37 < 2; l37 = l37 + 1) {
			fRec39[l37] = 0.0f;
		}
		for (int l38 = 0; l38 < 2; l38 = l38 + 1) {
			fRec33[l38] = 0.0f;
		}
		for (int l39 = 0; l39 < 2; l39 = l39 + 1) {
			fRec34[l39] = 0.0f;
		}
		for (int l40 = 0; l40 < 2; l40 = l40 + 1) {
			fRec29[l40] = 0.0f;
		}
		for (int l41 = 0; l41 < 2; l41 = l41 + 1) {
			fRec30[l41] = 0.0f;
		}
		for (int l42 = 0; l42 < 2; l42 = l42 + 1) {
			fRec24[l42] = 0.0f;
		}
		for (int l43 = 0; l43 < 2; l43 = l43 + 1) {
			fRec25[l43] = 0.0f;
		}
		for (int l44 = 0; l44 < 2; l44 = l44 + 1) {
			fRec19[l44] = 0.0f;
		}
		for (int l45 = 0; l45 < 2; l45 = l45 + 1) {
			fRec20[l45] = 0.0f;
		}
		for (int l46 = 0; l46 < 2; l46 = l46 + 1) {
			fVec13[l46] = 0.0f;
		}
		for (int l47 = 0; l47 < 2; l47 = l47 + 1) {
			fVec14[l47] = 0.0f;
		}
		for (int l48 = 0; l48 < 2; l48 = l48 + 1) {
			fRec18[l48] = 0.0f;
		}
		for (int l49 = 0; l49 < 2; l49 = l49 + 1) {
			fRec17[l49] = 0.0f;
		}
		for (int l50 = 0; l50 < 2; l50 = l50 + 1) {
			fVec15[l50] = 0.0f;
		}
		for (int l51 = 0; l51 < 2; l51 = l51 + 1) {
			fRec16[l51] = 0.0f;
		}
		for (int l52 = 0; l52 < 2; l52 = l52 + 1) {
			fRec15[l52] = 0.0f;
		}
		for (int l53 = 0; l53 < 2; l53 = l53 + 1) {
			fRec14[l53] = 0.0f;
		}
		for (int l54 = 0; l54 < 2; l54 = l54 + 1) {
			fRec13[l54] = 0.0f;
		}
		for (int l55 = 0; l55 < 2; l55 = l55 + 1) {
			fVec16[l55] = 0.0f;
		}
		for (int l56 = 0; l56 < 2; l56 = l56 + 1) {
			fRec87[l56] = 0.0f;
		}
		for (int l57 = 0; l57 < 2; l57 = l57 + 1) {
			fRec86[l57] = 0.0f;
		}
		for (int l58 = 0; l58 < 2; l58 = l58 + 1) {
			fVec17[l58] = 0.0f;
		}
		for (int l59 = 0; l59 < 2; l59 = l59 + 1) {
			fRec85[l59] = 0.0f;
		}
		for (int l60 = 0; l60 < 2; l60 = l60 + 1) {
			fRec84[l60] = 0.0f;
		}
		for (int l61 = 0; l61 < 2; l61 = l61 + 1) {
			fRec83[l61] = 0.0f;
		}
		for (int l62 = 0; l62 < 2; l62 = l62 + 1) {
			fRec82[l62] = 0.0f;
		}
		for (int l63 = 0; l63 < 2; l63 = l63 + 1) {
			fRec12[l63] = 0.0f;
		}
		for (int l64 = 0; l64 < 2; l64 = l64 + 1) {
			fRec95[l64] = 0.0f;
		}
		for (int l65 = 0; l65 < 2; l65 = l65 + 1) {
			fRec96[l65] = 0.0f;
		}
		for (int l66 = 0; l66 < 2; l66 = l66 + 1) {
			fRec97[l66] = 0.0f;
		}
		for (int l67 = 0; l67 < 2; l67 = l67 + 1) {
			fVec18[l67] = 0.0f;
		}
		for (int l68 = 0; l68 < 2; l68 = l68 + 1) {
			fRec94[l68] = 0.0f;
		}
		for (int l69 = 0; l69 < 2; l69 = l69 + 1) {
			fRec93[l69] = 0.0f;
		}
		for (int l70 = 0; l70 < 2; l70 = l70 + 1) {
			fVec19[l70] = 0.0f;
		}
		for (int l71 = 0; l71 < 2; l71 = l71 + 1) {
			fRec92[l71] = 0.0f;
		}
		for (int l72 = 0; l72 < 2; l72 = l72 + 1) {
			fRec91[l72] = 0.0f;
		}
		for (int l73 = 0; l73 < 2; l73 = l73 + 1) {
			fRec90[l73] = 0.0f;
		}
		for (int l74 = 0; l74 < 2; l74 = l74 + 1) {
			fRec89[l74] = 0.0f;
		}
		for (int l75 = 0; l75 < 2; l75 = l75 + 1) {
			fRec88[l75] = 0.0f;
		}
		for (int l76 = 0; l76 < 2; l76 = l76 + 1) {
			fRec119[l76] = 0.0f;
		}
		for (int l77 = 0; l77 < 2; l77 = l77 + 1) {
			fRec120[l77] = 0.0f;
		}
		for (int l78 = 0; l78 < 2; l78 = l78 + 1) {
			fRec115[l78] = 0.0f;
		}
		for (int l79 = 0; l79 < 2; l79 = l79 + 1) {
			fRec116[l79] = 0.0f;
		}
		for (int l80 = 0; l80 < 2; l80 = l80 + 1) {
			fRec110[l80] = 0.0f;
		}
		for (int l81 = 0; l81 < 2; l81 = l81 + 1) {
			fRec111[l81] = 0.0f;
		}
		for (int l82 = 0; l82 < 2; l82 = l82 + 1) {
			fRec105[l82] = 0.0f;
		}
		for (int l83 = 0; l83 < 2; l83 = l83 + 1) {
			fRec106[l83] = 0.0f;
		}
		for (int l84 = 0; l84 < 2; l84 = l84 + 1) {
			fVec20[l84] = 0.0f;
		}
		for (int l85 = 0; l85 < 2; l85 = l85 + 1) {
			fVec21[l85] = 0.0f;
		}
		for (int l86 = 0; l86 < 2; l86 = l86 + 1) {
			fRec104[l86] = 0.0f;
		}
		for (int l87 = 0; l87 < 2; l87 = l87 + 1) {
			fRec103[l87] = 0.0f;
		}
		for (int l88 = 0; l88 < 2; l88 = l88 + 1) {
			fVec22[l88] = 0.0f;
		}
		for (int l89 = 0; l89 < 2; l89 = l89 + 1) {
			fRec102[l89] = 0.0f;
		}
		for (int l90 = 0; l90 < 2; l90 = l90 + 1) {
			fRec101[l90] = 0.0f;
		}
		for (int l91 = 0; l91 < 2; l91 = l91 + 1) {
			fRec100[l91] = 0.0f;
		}
		for (int l92 = 0; l92 < 2; l92 = l92 + 1) {
			fRec99[l92] = 0.0f;
		}
		for (int l93 = 0; l93 < 2; l93 = l93 + 1) {
			fRec98[l93] = 0.0f;
		}
		for (int l94 = 0; l94 < 2; l94 = l94 + 1) {
			fRec129[l94] = 0.0f;
		}
		for (int l95 = 0; l95 < 2; l95 = l95 + 1) {
			fRec130[l95] = 0.0f;
		}
		for (int l96 = 0; l96 < 2; l96 = l96 + 1) {
			fRec131[l96] = 0.0f;
		}
		for (int l97 = 0; l97 < 2; l97 = l97 + 1) {
			fVec23[l97] = 0.0f;
		}
		for (int l98 = 0; l98 < 2; l98 = l98 + 1) {
			fRec128[l98] = 0.0f;
		}
		for (int l99 = 0; l99 < 2; l99 = l99 + 1) {
			fRec127[l99] = 0.0f;
		}
		for (int l100 = 0; l100 < 2; l100 = l100 + 1) {
			fVec24[l100] = 0.0f;
		}
		for (int l101 = 0; l101 < 2; l101 = l101 + 1) {
			fRec126[l101] = 0.0f;
		}
		for (int l102 = 0; l102 < 2; l102 = l102 + 1) {
			fRec125[l102] = 0.0f;
		}
		for (int l103 = 0; l103 < 2; l103 = l103 + 1) {
			fRec124[l103] = 0.0f;
		}
		for (int l104 = 0; l104 < 2; l104 = l104 + 1) {
			fRec123[l104] = 0.0f;
		}
		for (int l105 = 0; l105 < 2; l105 = l105 + 1) {
			fRec122[l105] = 0.0f;
		}
		for (int l106 = 0; l106 < 2; l106 = l106 + 1) {
			fRec175[l106] = 0.0f;
		}
		for (int l107 = 0; l107 < 2; l107 = l107 + 1) {
			fRec176[l107] = 0.0f;
		}
		for (int l108 = 0; l108 < 2; l108 = l108 + 1) {
			fRec171[l108] = 0.0f;
		}
		for (int l109 = 0; l109 < 2; l109 = l109 + 1) {
			fRec172[l109] = 0.0f;
		}
		for (int l110 = 0; l110 < 2; l110 = l110 + 1) {
			fRec167[l110] = 0.0f;
		}
		for (int l111 = 0; l111 < 2; l111 = l111 + 1) {
			fRec168[l111] = 0.0f;
		}
		for (int l112 = 0; l112 < 2; l112 = l112 + 1) {
			fRec163[l112] = 0.0f;
		}
		for (int l113 = 0; l113 < 2; l113 = l113 + 1) {
			fRec164[l113] = 0.0f;
		}
		for (int l114 = 0; l114 < 2; l114 = l114 + 1) {
			fRec158[l114] = 0.0f;
		}
		for (int l115 = 0; l115 < 2; l115 = l115 + 1) {
			fRec159[l115] = 0.0f;
		}
		for (int l116 = 0; l116 < 2; l116 = l116 + 1) {
			fRec153[l116] = 0.0f;
		}
		for (int l117 = 0; l117 < 2; l117 = l117 + 1) {
			fRec154[l117] = 0.0f;
		}
		for (int l118 = 0; l118 < 2; l118 = l118 + 1) {
			fRec149[l118] = 0.0f;
		}
		for (int l119 = 0; l119 < 2; l119 = l119 + 1) {
			fRec150[l119] = 0.0f;
		}
		for (int l120 = 0; l120 < 2; l120 = l120 + 1) {
			fRec144[l120] = 0.0f;
		}
		for (int l121 = 0; l121 < 2; l121 = l121 + 1) {
			fRec145[l121] = 0.0f;
		}
		for (int l122 = 0; l122 < 2; l122 = l122 + 1) {
			fRec139[l122] = 0.0f;
		}
		for (int l123 = 0; l123 < 2; l123 = l123 + 1) {
			fRec140[l123] = 0.0f;
		}
		for (int l124 = 0; l124 < 2; l124 = l124 + 1) {
			fVec25[l124] = 0.0f;
		}
		for (int l125 = 0; l125 < 2; l125 = l125 + 1) {
			fVec26[l125] = 0.0f;
		}
		for (int l126 = 0; l126 < 2; l126 = l126 + 1) {
			fRec138[l126] = 0.0f;
		}
		for (int l127 = 0; l127 < 2; l127 = l127 + 1) {
			fRec137[l127] = 0.0f;
		}
		for (int l128 = 0; l128 < 2; l128 = l128 + 1) {
			fVec27[l128] = 0.0f;
		}
		for (int l129 = 0; l129 < 2; l129 = l129 + 1) {
			fRec136[l129] = 0.0f;
		}
		for (int l130 = 0; l130 < 2; l130 = l130 + 1) {
			fRec135[l130] = 0.0f;
		}
		for (int l131 = 0; l131 < 2; l131 = l131 + 1) {
			fRec134[l131] = 0.0f;
		}
		for (int l132 = 0; l132 < 2; l132 = l132 + 1) {
			fRec133[l132] = 0.0f;
		}
		for (int l133 = 0; l133 < 2; l133 = l133 + 1) {
			fRec132[l133] = 0.0f;
		}
		for (int l134 = 0; l134 < 2; l134 = l134 + 1) {
			fRec185[l134] = 0.0f;
		}
		for (int l135 = 0; l135 < 2; l135 = l135 + 1) {
			fRec186[l135] = 0.0f;
		}
		for (int l136 = 0; l136 < 2; l136 = l136 + 1) {
			fRec187[l136] = 0.0f;
		}
		for (int l137 = 0; l137 < 2; l137 = l137 + 1) {
			fVec28[l137] = 0.0f;
		}
		for (int l138 = 0; l138 < 2; l138 = l138 + 1) {
			fRec184[l138] = 0.0f;
		}
		for (int l139 = 0; l139 < 2; l139 = l139 + 1) {
			fRec183[l139] = 0.0f;
		}
		for (int l140 = 0; l140 < 2; l140 = l140 + 1) {
			fVec29[l140] = 0.0f;
		}
		for (int l141 = 0; l141 < 2; l141 = l141 + 1) {
			fRec182[l141] = 0.0f;
		}
		for (int l142 = 0; l142 < 2; l142 = l142 + 1) {
			fRec181[l142] = 0.0f;
		}
		for (int l143 = 0; l143 < 2; l143 = l143 + 1) {
			fRec180[l143] = 0.0f;
		}
		for (int l144 = 0; l144 < 2; l144 = l144 + 1) {
			fRec179[l144] = 0.0f;
		}
		for (int l145 = 0; l145 < 2; l145 = l145 + 1) {
			fRec178[l145] = 0.0f;
		}
		for (int l146 = 0; l146 < 2; l146 = l146 + 1) {
			fRec209[l146] = 0.0f;
		}
		for (int l147 = 0; l147 < 2; l147 = l147 + 1) {
			fRec210[l147] = 0.0f;
		}
		for (int l148 = 0; l148 < 2; l148 = l148 + 1) {
			fRec205[l148] = 0.0f;
		}
		for (int l149 = 0; l149 < 2; l149 = l149 + 1) {
			fRec206[l149] = 0.0f;
		}
		for (int l150 = 0; l150 < 2; l150 = l150 + 1) {
			fRec200[l150] = 0.0f;
		}
		for (int l151 = 0; l151 < 2; l151 = l151 + 1) {
			fRec201[l151] = 0.0f;
		}
		for (int l152 = 0; l152 < 2; l152 = l152 + 1) {
			fRec195[l152] = 0.0f;
		}
		for (int l153 = 0; l153 < 2; l153 = l153 + 1) {
			fRec196[l153] = 0.0f;
		}
		for (int l154 = 0; l154 < 2; l154 = l154 + 1) {
			fVec30[l154] = 0.0f;
		}
		for (int l155 = 0; l155 < 2; l155 = l155 + 1) {
			fVec31[l155] = 0.0f;
		}
		for (int l156 = 0; l156 < 2; l156 = l156 + 1) {
			fRec194[l156] = 0.0f;
		}
		for (int l157 = 0; l157 < 2; l157 = l157 + 1) {
			fRec193[l157] = 0.0f;
		}
		for (int l158 = 0; l158 < 2; l158 = l158 + 1) {
			fVec32[l158] = 0.0f;
		}
		for (int l159 = 0; l159 < 2; l159 = l159 + 1) {
			fRec192[l159] = 0.0f;
		}
		for (int l160 = 0; l160 < 2; l160 = l160 + 1) {
			fRec191[l160] = 0.0f;
		}
		for (int l161 = 0; l161 < 2; l161 = l161 + 1) {
			fRec190[l161] = 0.0f;
		}
		for (int l162 = 0; l162 < 2; l162 = l162 + 1) {
			fRec189[l162] = 0.0f;
		}
		for (int l163 = 0; l163 < 2; l163 = l163 + 1) {
			fRec188[l163] = 0.0f;
		}
		for (int l164 = 0; l164 < 2; l164 = l164 + 1) {
			fRec219[l164] = 0.0f;
		}
		for (int l165 = 0; l165 < 2; l165 = l165 + 1) {
			fRec220[l165] = 0.0f;
		}
		for (int l166 = 0; l166 < 2; l166 = l166 + 1) {
			fRec221[l166] = 0.0f;
		}
		for (int l167 = 0; l167 < 2; l167 = l167 + 1) {
			fVec33[l167] = 0.0f;
		}
		for (int l168 = 0; l168 < 2; l168 = l168 + 1) {
			fRec218[l168] = 0.0f;
		}
		for (int l169 = 0; l169 < 2; l169 = l169 + 1) {
			fRec217[l169] = 0.0f;
		}
		for (int l170 = 0; l170 < 2; l170 = l170 + 1) {
			fVec34[l170] = 0.0f;
		}
		for (int l171 = 0; l171 < 2; l171 = l171 + 1) {
			fRec216[l171] = 0.0f;
		}
		for (int l172 = 0; l172 < 2; l172 = l172 + 1) {
			fRec215[l172] = 0.0f;
		}
		for (int l173 = 0; l173 < 2; l173 = l173 + 1) {
			fRec214[l173] = 0.0f;
		}
		for (int l174 = 0; l174 < 2; l174 = l174 + 1) {
			fRec213[l174] = 0.0f;
		}
		for (int l175 = 0; l175 < 2; l175 = l175 + 1) {
			fRec212[l175] = 0.0f;
		}
		for (int l176 = 0; l176 < 3; l176 = l176 + 1) {
			fRec3[l176] = 0.0f;
		}
		for (int l177 = 0; l177 < 2; l177 = l177 + 1) {
			fRec2[l177] = 0.0f;
		}
		for (int l178 = 0; l178 < 2; l178 = l178 + 1) {
			fVec35[l178] = 0.0f;
		}
		for (int l179 = 0; l179 < 3; l179 = l179 + 1) {
			fVec36[l179] = 0.0f;
		}
		for (int l180 = 0; l180 < 5; l180 = l180 + 1) {
			fVec37[l180] = 0.0f;
		}
		for (int l181 = 0; l181 < 12; l181 = l181 + 1) {
			fVec38[l181] = 0.0f;
		}
		for (int l182 = 0; l182 < 32; l182 = l182 + 1) {
			fVec39[l182] = 0.0f;
		}
		for (int l183 = 0; l183 < 64; l183 = l183 + 1) {
			fVec40[l183] = 0.0f;
		}
		for (int l184 = 0; l184 < 128; l184 = l184 + 1) {
			fVec41[l184] = 0.0f;
		}
		for (int l185 = 0; l185 < 256; l185 = l185 + 1) {
			fVec42[l185] = 0.0f;
		}
		for (int l186 = 0; l186 < 512; l186 = l186 + 1) {
			fVec43[l186] = 0.0f;
		}
		for (int l187 = 0; l187 < 512; l187 = l187 + 1) {
			fVec44[l187] = 0.0f;
		}
		for (int l188 = 0; l188 < 2; l188 = l188 + 1) {
			fRec1[l188] = 0.0f;
		}
		for (int l189 = 0; l189 < 2; l189 = l189 + 1) {
			fRec223[l189] = 0.0f;
		}
		for (int l190 = 0; l190 < 2; l190 = l190 + 1) {
			fVec45[l190] = 0.0f;
		}
		for (int l191 = 0; l191 < 3; l191 = l191 + 1) {
			fVec46[l191] = 0.0f;
		}
		for (int l192 = 0; l192 < 5; l192 = l192 + 1) {
			fVec47[l192] = 0.0f;
		}
		for (int l193 = 0; l193 < 12; l193 = l193 + 1) {
			fVec48[l193] = 0.0f;
		}
		for (int l194 = 0; l194 < 32; l194 = l194 + 1) {
			fVec49[l194] = 0.0f;
		}
		for (int l195 = 0; l195 < 64; l195 = l195 + 1) {
			fVec50[l195] = 0.0f;
		}
		for (int l196 = 0; l196 < 128; l196 = l196 + 1) {
			fVec51[l196] = 0.0f;
		}
		for (int l197 = 0; l197 < 256; l197 = l197 + 1) {
			fVec52[l197] = 0.0f;
		}
		for (int l198 = 0; l198 < 512; l198 = l198 + 1) {
			fVec53[l198] = 0.0f;
		}
		for (int l199 = 0; l199 < 512; l199 = l199 + 1) {
			fVec54[l199] = 0.0f;
		}
		for (int l200 = 0; l200 < 2; l200 = l200 + 1) {
			fRec222[l200] = 0.0f;
		}
		for (int l201 = 0; l201 < 2; l201 = l201 + 1) {
			fRec225[l201] = 0.0f;
		}
		for (int l202 = 0; l202 < 2; l202 = l202 + 1) {
			fVec55[l202] = 0.0f;
		}
		for (int l203 = 0; l203 < 3; l203 = l203 + 1) {
			fVec56[l203] = 0.0f;
		}
		for (int l204 = 0; l204 < 5; l204 = l204 + 1) {
			fVec57[l204] = 0.0f;
		}
		for (int l205 = 0; l205 < 12; l205 = l205 + 1) {
			fVec58[l205] = 0.0f;
		}
		for (int l206 = 0; l206 < 32; l206 = l206 + 1) {
			fVec59[l206] = 0.0f;
		}
		for (int l207 = 0; l207 < 64; l207 = l207 + 1) {
			fVec60[l207] = 0.0f;
		}
		for (int l208 = 0; l208 < 128; l208 = l208 + 1) {
			fVec61[l208] = 0.0f;
		}
		for (int l209 = 0; l209 < 256; l209 = l209 + 1) {
			fVec62[l209] = 0.0f;
		}
		for (int l210 = 0; l210 < 512; l210 = l210 + 1) {
			fVec63[l210] = 0.0f;
		}
		for (int l211 = 0; l211 < 512; l211 = l211 + 1) {
			fVec64[l211] = 0.0f;
		}
		for (int l212 = 0; l212 < 2; l212 = l212 + 1) {
			fRec224[l212] = 0.0f;
		}
		for (int l213 = 0; l213 < 2; l213 = l213 + 1) {
			fRec227[l213] = 0.0f;
		}
		for (int l214 = 0; l214 < 2; l214 = l214 + 1) {
			fVec65[l214] = 0.0f;
		}
		for (int l215 = 0; l215 < 3; l215 = l215 + 1) {
			fVec66[l215] = 0.0f;
		}
		for (int l216 = 0; l216 < 5; l216 = l216 + 1) {
			fVec67[l216] = 0.0f;
		}
		for (int l217 = 0; l217 < 12; l217 = l217 + 1) {
			fVec68[l217] = 0.0f;
		}
		for (int l218 = 0; l218 < 32; l218 = l218 + 1) {
			fVec69[l218] = 0.0f;
		}
		for (int l219 = 0; l219 < 64; l219 = l219 + 1) {
			fVec70[l219] = 0.0f;
		}
		for (int l220 = 0; l220 < 128; l220 = l220 + 1) {
			fVec71[l220] = 0.0f;
		}
		for (int l221 = 0; l221 < 256; l221 = l221 + 1) {
			fVec72[l221] = 0.0f;
		}
		for (int l222 = 0; l222 < 512; l222 = l222 + 1) {
			fVec73[l222] = 0.0f;
		}
		for (int l223 = 0; l223 < 512; l223 = l223 + 1) {
			fVec74[l223] = 0.0f;
		}
		for (int l224 = 0; l224 < 2; l224 = l224 + 1) {
			fRec226[l224] = 0.0f;
		}
		for (int l225 = 0; l225 < 2; l225 = l225 + 1) {
			fRec229[l225] = 0.0f;
		}
		for (int l226 = 0; l226 < 2; l226 = l226 + 1) {
			fVec75[l226] = 0.0f;
		}
		for (int l227 = 0; l227 < 3; l227 = l227 + 1) {
			fVec76[l227] = 0.0f;
		}
		for (int l228 = 0; l228 < 5; l228 = l228 + 1) {
			fVec77[l228] = 0.0f;
		}
		for (int l229 = 0; l229 < 12; l229 = l229 + 1) {
			fVec78[l229] = 0.0f;
		}
		for (int l230 = 0; l230 < 32; l230 = l230 + 1) {
			fVec79[l230] = 0.0f;
		}
		for (int l231 = 0; l231 < 64; l231 = l231 + 1) {
			fVec80[l231] = 0.0f;
		}
		for (int l232 = 0; l232 < 128; l232 = l232 + 1) {
			fVec81[l232] = 0.0f;
		}
		for (int l233 = 0; l233 < 256; l233 = l233 + 1) {
			fVec82[l233] = 0.0f;
		}
		for (int l234 = 0; l234 < 512; l234 = l234 + 1) {
			fVec83[l234] = 0.0f;
		}
		for (int l235 = 0; l235 < 512; l235 = l235 + 1) {
			fVec84[l235] = 0.0f;
		}
		for (int l236 = 0; l236 < 2; l236 = l236 + 1) {
			fRec228[l236] = 0.0f;
		}
		for (int l237 = 0; l237 < 2; l237 = l237 + 1) {
			fRec231[l237] = 0.0f;
		}
		for (int l238 = 0; l238 < 2; l238 = l238 + 1) {
			fVec85[l238] = 0.0f;
		}
		for (int l239 = 0; l239 < 3; l239 = l239 + 1) {
			fVec86[l239] = 0.0f;
		}
		for (int l240 = 0; l240 < 5; l240 = l240 + 1) {
			fVec87[l240] = 0.0f;
		}
		for (int l241 = 0; l241 < 12; l241 = l241 + 1) {
			fVec88[l241] = 0.0f;
		}
		for (int l242 = 0; l242 < 32; l242 = l242 + 1) {
			fVec89[l242] = 0.0f;
		}
		for (int l243 = 0; l243 < 64; l243 = l243 + 1) {
			fVec90[l243] = 0.0f;
		}
		for (int l244 = 0; l244 < 128; l244 = l244 + 1) {
			fVec91[l244] = 0.0f;
		}
		for (int l245 = 0; l245 < 256; l245 = l245 + 1) {
			fVec92[l245] = 0.0f;
		}
		for (int l246 = 0; l246 < 512; l246 = l246 + 1) {
			fVec93[l246] = 0.0f;
		}
		for (int l247 = 0; l247 < 512; l247 = l247 + 1) {
			fVec94[l247] = 0.0f;
		}
		for (int l248 = 0; l248 < 2; l248 = l248 + 1) {
			fRec230[l248] = 0.0f;
		}
		for (int l249 = 0; l249 < 2; l249 = l249 + 1) {
			fRec233[l249] = 0.0f;
		}
		for (int l250 = 0; l250 < 2; l250 = l250 + 1) {
			fVec95[l250] = 0.0f;
		}
		for (int l251 = 0; l251 < 3; l251 = l251 + 1) {
			fVec96[l251] = 0.0f;
		}
		for (int l252 = 0; l252 < 5; l252 = l252 + 1) {
			fVec97[l252] = 0.0f;
		}
		for (int l253 = 0; l253 < 12; l253 = l253 + 1) {
			fVec98[l253] = 0.0f;
		}
		for (int l254 = 0; l254 < 32; l254 = l254 + 1) {
			fVec99[l254] = 0.0f;
		}
		for (int l255 = 0; l255 < 64; l255 = l255 + 1) {
			fVec100[l255] = 0.0f;
		}
		for (int l256 = 0; l256 < 128; l256 = l256 + 1) {
			fVec101[l256] = 0.0f;
		}
		for (int l257 = 0; l257 < 256; l257 = l257 + 1) {
			fVec102[l257] = 0.0f;
		}
		for (int l258 = 0; l258 < 512; l258 = l258 + 1) {
			fVec103[l258] = 0.0f;
		}
		for (int l259 = 0; l259 < 512; l259 = l259 + 1) {
			fVec104[l259] = 0.0f;
		}
		for (int l260 = 0; l260 < 2; l260 = l260 + 1) {
			fRec232[l260] = 0.0f;
		}
		for (int l261 = 0; l261 < 2; l261 = l261 + 1) {
			fRec235[l261] = 0.0f;
		}
		for (int l262 = 0; l262 < 2; l262 = l262 + 1) {
			fVec105[l262] = 0.0f;
		}
		for (int l263 = 0; l263 < 3; l263 = l263 + 1) {
			fVec106[l263] = 0.0f;
		}
		for (int l264 = 0; l264 < 5; l264 = l264 + 1) {
			fVec107[l264] = 0.0f;
		}
		for (int l265 = 0; l265 < 12; l265 = l265 + 1) {
			fVec108[l265] = 0.0f;
		}
		for (int l266 = 0; l266 < 32; l266 = l266 + 1) {
			fVec109[l266] = 0.0f;
		}
		for (int l267 = 0; l267 < 64; l267 = l267 + 1) {
			fVec110[l267] = 0.0f;
		}
		for (int l268 = 0; l268 < 128; l268 = l268 + 1) {
			fVec111[l268] = 0.0f;
		}
		for (int l269 = 0; l269 < 256; l269 = l269 + 1) {
			fVec112[l269] = 0.0f;
		}
		for (int l270 = 0; l270 < 512; l270 = l270 + 1) {
			fVec113[l270] = 0.0f;
		}
		for (int l271 = 0; l271 < 512; l271 = l271 + 1) {
			fVec114[l271] = 0.0f;
		}
		for (int l272 = 0; l272 < 2; l272 = l272 + 1) {
			fRec234[l272] = 0.0f;
		}
		for (int l273 = 0; l273 < 2048; l273 = l273 + 1) {
			fVec115[l273] = 0.0f;
		}
		for (int l274 = 0; l274 < 2; l274 = l274 + 1) {
			iRec238[l274] = 0;
		}
		for (int l275 = 0; l275 < 2; l275 = l275 + 1) {
			fRec239[l275] = 0.0f;
		}
		for (int l276 = 0; l276 < 2; l276 = l276 + 1) {
			fRec237[l276] = 0.0f;
		}
		for (int l277 = 0; l277 < 2; l277 = l277 + 1) {
			fRec236[l277] = 0.0f;
		}
		for (int l278 = 0; l278 < 2; l278 = l278 + 1) {
			fRec0[l278] = 0.0f;
		}
		for (int l279 = 0; l279 < 2; l279 = l279 + 1) {
			fVec116[l279] = 0.0f;
		}
		for (int l280 = 0; l280 < 2; l280 = l280 + 1) {
			fVec117[l280] = 0.0f;
		}
		for (int l281 = 0; l281 < 2; l281 = l281 + 1) {
			fVec118[l281] = 0.0f;
		}
		for (int l282 = 0; l282 < 2; l282 = l282 + 1) {
			fRec243[l282] = 0.0f;
		}
		for (int l283 = 0; l283 < 2; l283 = l283 + 1) {
			fRec242[l283] = 0.0f;
		}
		for (int l284 = 0; l284 < 2; l284 = l284 + 1) {
			fVec119[l284] = 0.0f;
		}
		for (int l285 = 0; l285 < 2; l285 = l285 + 1) {
			fRec241[l285] = 0.0f;
		}
		for (int l286 = 0; l286 < 2; l286 = l286 + 1) {
			fRec240[l286] = 0.0f;
		}
		for (int l287 = 0; l287 < 2; l287 = l287 + 1) {
			fVec120[l287] = 0.0f;
		}
		for (int l288 = 0; l288 < 3; l288 = l288 + 1) {
			fVec121[l288] = 0.0f;
		}
		for (int l289 = 0; l289 < 5; l289 = l289 + 1) {
			fVec122[l289] = 0.0f;
		}
		for (int l290 = 0; l290 < 12; l290 = l290 + 1) {
			fVec123[l290] = 0.0f;
		}
		for (int l291 = 0; l291 < 32; l291 = l291 + 1) {
			fVec124[l291] = 0.0f;
		}
		for (int l292 = 0; l292 < 64; l292 = l292 + 1) {
			fVec125[l292] = 0.0f;
		}
		for (int l293 = 0; l293 < 128; l293 = l293 + 1) {
			fVec126[l293] = 0.0f;
		}
		for (int l294 = 0; l294 < 256; l294 = l294 + 1) {
			fVec127[l294] = 0.0f;
		}
		for (int l295 = 0; l295 < 512; l295 = l295 + 1) {
			fVec128[l295] = 0.0f;
		}
		for (int l296 = 0; l296 < 1024; l296 = l296 + 1) {
			fVec129[l296] = 0.0f;
		}
		for (int l297 = 0; l297 < 2048; l297 = l297 + 1) {
			fVec130[l297] = 0.0f;
		}
		for (int l298 = 0; l298 < 4096; l298 = l298 + 1) {
			fVec131[l298] = 0.0f;
		}
		for (int l299 = 0; l299 < 8192; l299 = l299 + 1) {
			fVec132[l299] = 0.0f;
		}
		for (int l300 = 0; l300 < 16384; l300 = l300 + 1) {
			fVec133[l300] = 0.0f;
		}
		for (int l301 = 0; l301 < 32768; l301 = l301 + 1) {
			fVec134[l301] = 0.0f;
		}
		for (int l302 = 0; l302 < 65536; l302 = l302 + 1) {
			fVec135[l302] = 0.0f;
		}
		for (int l303 = 0; l303 < 131072; l303 = l303 + 1) {
			fVec136[l303] = 0.0f;
		}
		for (int l304 = 0; l304 < 262144; l304 = l304 + 1) {
			fVec137[l304] = 0.0f;
		}
		for (int l305 = 0; l305 < 2; l305 = l305 + 1) {
			fVec138[l305] = 0.0f;
		}
		for (int l306 = 0; l306 < 2; l306 = l306 + 1) {
			fRec247[l306] = 0.0f;
		}
		for (int l307 = 0; l307 < 2; l307 = l307 + 1) {
			fRec246[l307] = 0.0f;
		}
		for (int l308 = 0; l308 < 2; l308 = l308 + 1) {
			fVec139[l308] = 0.0f;
		}
		for (int l309 = 0; l309 < 2; l309 = l309 + 1) {
			fRec245[l309] = 0.0f;
		}
		for (int l310 = 0; l310 < 2; l310 = l310 + 1) {
			fRec244[l310] = 0.0f;
		}
		for (int l311 = 0; l311 < 2; l311 = l311 + 1) {
			fVec140[l311] = 0.0f;
		}
		for (int l312 = 0; l312 < 3; l312 = l312 + 1) {
			fVec141[l312] = 0.0f;
		}
		for (int l313 = 0; l313 < 5; l313 = l313 + 1) {
			fVec142[l313] = 0.0f;
		}
		for (int l314 = 0; l314 < 12; l314 = l314 + 1) {
			fVec143[l314] = 0.0f;
		}
		for (int l315 = 0; l315 < 32; l315 = l315 + 1) {
			fVec144[l315] = 0.0f;
		}
		for (int l316 = 0; l316 < 64; l316 = l316 + 1) {
			fVec145[l316] = 0.0f;
		}
		for (int l317 = 0; l317 < 128; l317 = l317 + 1) {
			fVec146[l317] = 0.0f;
		}
		for (int l318 = 0; l318 < 256; l318 = l318 + 1) {
			fVec147[l318] = 0.0f;
		}
		for (int l319 = 0; l319 < 512; l319 = l319 + 1) {
			fVec148[l319] = 0.0f;
		}
		for (int l320 = 0; l320 < 1024; l320 = l320 + 1) {
			fVec149[l320] = 0.0f;
		}
		for (int l321 = 0; l321 < 2048; l321 = l321 + 1) {
			fVec150[l321] = 0.0f;
		}
		for (int l322 = 0; l322 < 4096; l322 = l322 + 1) {
			fVec151[l322] = 0.0f;
		}
		for (int l323 = 0; l323 < 8192; l323 = l323 + 1) {
			fVec152[l323] = 0.0f;
		}
		for (int l324 = 0; l324 < 16384; l324 = l324 + 1) {
			fVec153[l324] = 0.0f;
		}
		for (int l325 = 0; l325 < 32768; l325 = l325 + 1) {
			fVec154[l325] = 0.0f;
		}
		for (int l326 = 0; l326 < 65536; l326 = l326 + 1) {
			fVec155[l326] = 0.0f;
		}
		for (int l327 = 0; l327 < 131072; l327 = l327 + 1) {
			fVec156[l327] = 0.0f;
		}
		for (int l328 = 0; l328 < 262144; l328 = l328 + 1) {
			fVec157[l328] = 0.0f;
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
		ui_interface->declare(&fVslider10, "1", "");
		ui_interface->declare(&fVslider10, "symbol", "sb_strength");
		ui_interface->declare(&fVslider10, "unit", "%");
		ui_interface->addVerticalSlider("sb_strength", &fVslider10, FAUSTFLOAT(5e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("Target Curve");
		ui_interface->declare(&fVslider17, "symbol", "sb_target_spectrum_0");
		ui_interface->addVerticalSlider("spec 0", &fVslider17, FAUSTFLOAT(-1e+01f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider16, "symbol", "sb_target_spectrum_1");
		ui_interface->addVerticalSlider("spec 1", &fVslider16, FAUSTFLOAT(-5.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider15, "symbol", "sb_target_spectrum_2");
		ui_interface->addVerticalSlider("spec 2", &fVslider15, FAUSTFLOAT(-5.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider14, "symbol", "sb_target_spectrum_3");
		ui_interface->addVerticalSlider("spec 3", &fVslider14, FAUSTFLOAT(-8.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider13, "symbol", "sb_target_spectrum_4");
		ui_interface->addVerticalSlider("spec 4", &fVslider13, FAUSTFLOAT(-9.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider12, "symbol", "sb_target_spectrum_5");
		ui_interface->addVerticalSlider("spec 5", &fVslider12, FAUSTFLOAT(-1e+01f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider11, "symbol", "sb_target_spectrum_6");
		ui_interface->addVerticalSlider("spec 6", &fVslider11, FAUSTFLOAT(-7.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider8, "symbol", "sb_target_spectrum_7");
		ui_interface->addVerticalSlider("spec 7", &fVslider8, FAUSTFLOAT(-4.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->declare(0, "2", "");
		ui_interface->openHorizontalBox("loudness normalized spectrum");
		ui_interface->declare(&fVbargraph19, "1", "");
		ui_interface->declare(&fVbargraph19, "symbol", "sb_meter_ 0");
		ui_interface->declare(&fVbargraph19, "unit", "dB");
		ui_interface->addVerticalBargraph("band  0", &fVbargraph19, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph17, "1", "");
		ui_interface->declare(&fVbargraph17, "symbol", "sb_meter_ 1");
		ui_interface->declare(&fVbargraph17, "unit", "dB");
		ui_interface->addVerticalBargraph("band  1", &fVbargraph17, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph15, "1", "");
		ui_interface->declare(&fVbargraph15, "symbol", "sb_meter_ 2");
		ui_interface->declare(&fVbargraph15, "unit", "dB");
		ui_interface->addVerticalBargraph("band  2", &fVbargraph15, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph13, "1", "");
		ui_interface->declare(&fVbargraph13, "symbol", "sb_meter_ 3");
		ui_interface->declare(&fVbargraph13, "unit", "dB");
		ui_interface->addVerticalBargraph("band  3", &fVbargraph13, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph11, "1", "");
		ui_interface->declare(&fVbargraph11, "symbol", "sb_meter_ 4");
		ui_interface->declare(&fVbargraph11, "unit", "dB");
		ui_interface->addVerticalBargraph("band  4", &fVbargraph11, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph9, "1", "");
		ui_interface->declare(&fVbargraph9, "symbol", "sb_meter_ 5");
		ui_interface->declare(&fVbargraph9, "unit", "dB");
		ui_interface->addVerticalBargraph("band  5", &fVbargraph9, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph7, "1", "");
		ui_interface->declare(&fVbargraph7, "symbol", "sb_meter_ 6");
		ui_interface->declare(&fVbargraph7, "unit", "dB");
		ui_interface->addVerticalBargraph("band  6", &fVbargraph7, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph5, "1", "");
		ui_interface->declare(&fVbargraph5, "symbol", "sb_meter_ 7");
		ui_interface->declare(&fVbargraph5, "unit", "dB");
		ui_interface->addVerticalBargraph("band  7", &fVbargraph5, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->closeBox();
		ui_interface->declare(0, "3", "");
		ui_interface->openHorizontalBox("resulting gain");
		ui_interface->declare(&fVbargraph20, "1", "");
		ui_interface->declare(&fVbargraph20, "symbol", "sb_gain_ 0");
		ui_interface->addVerticalBargraph("sb_gain  0", &fVbargraph20, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph18, "1", "");
		ui_interface->declare(&fVbargraph18, "symbol", "sb_gain_ 1");
		ui_interface->addVerticalBargraph("sb_gain  1", &fVbargraph18, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph16, "1", "");
		ui_interface->declare(&fVbargraph16, "symbol", "sb_gain_ 2");
		ui_interface->addVerticalBargraph("sb_gain  2", &fVbargraph16, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph14, "1", "");
		ui_interface->declare(&fVbargraph14, "symbol", "sb_gain_ 3");
		ui_interface->addVerticalBargraph("sb_gain  3", &fVbargraph14, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph12, "1", "");
		ui_interface->declare(&fVbargraph12, "symbol", "sb_gain_ 4");
		ui_interface->addVerticalBargraph("sb_gain  4", &fVbargraph12, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph10, "1", "");
		ui_interface->declare(&fVbargraph10, "symbol", "sb_gain_ 5");
		ui_interface->addVerticalBargraph("sb_gain  5", &fVbargraph10, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph8, "1", "");
		ui_interface->declare(&fVbargraph8, "symbol", "sb_gain_ 6");
		ui_interface->addVerticalBargraph("sb_gain  6", &fVbargraph8, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph6, "1", "");
		ui_interface->declare(&fVbargraph6, "symbol", "sb_gain_ 7");
		ui_interface->addVerticalBargraph("sb_gain  7", &fVbargraph6, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->closeBox();
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("main");
		ui_interface->declare(&fVslider7, "1", "");
		ui_interface->declare(&fVslider7, "symbol", "pre_gain");
		ui_interface->declare(&fVslider7, "unit", "dB");
		ui_interface->addVerticalSlider("PreGain", &fVslider7, FAUSTFLOAT(0.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(2e+01f), FAUSTFLOAT(0.1f));
		ui_interface->declare(&fVslider9, "2", "");
		ui_interface->declare(&fVslider9, "symbol", "sbmb_strength");
		ui_interface->addVerticalSlider("sbmb_strength", &fVslider9, FAUSTFLOAT(1e+02f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider4, "3", "");
		ui_interface->declare(&fVslider4, "symbol", "vad_ext");
		ui_interface->addVerticalSlider("vad_ext", &fVslider4, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.001f));
		ui_interface->declare(&fVbargraph37, "99", "");
		ui_interface->declare(&fVbargraph37, "symbol", "limiter_gain");
		ui_interface->addVerticalBargraph("LimiterGR", &fVbargraph37, FAUSTFLOAT(-12.0f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph4, "symbol", "input_peak_channel_0");
		ui_interface->addVerticalBargraph("In 0", &fVbargraph4, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph3, "symbol", "input_peak_channel_1");
		ui_interface->addVerticalBargraph("In 1", &fVbargraph3, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph40, "symbol", "lufs_out_meter");
		ui_interface->declare(&fVbargraph40, "unit", "LUFS");
		ui_interface->addVerticalBargraph("lufs_out", &fVbargraph40, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph38, "symbol", "output_peak_channel_0");
		ui_interface->addVerticalBargraph("Out 0", &fVbargraph38, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph39, "symbol", "output_peak_channel_1");
		ui_interface->addVerticalBargraph("Out 1", &fVbargraph39, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph1, "symbol", "vad_meter");
		ui_interface->addVerticalBargraph("vad_meter", &fVbargraph1, FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->openHorizontalBox("leveler");
		ui_interface->declare(&fVslider1, "1", "");
		ui_interface->declare(&fVslider1, "symbol", "leveler_target");
		ui_interface->declare(&fVslider1, "unit", "LUFS");
		ui_interface->addVerticalSlider("target", &fVslider1, FAUSTFLOAT(-23.0f), FAUSTFLOAT(-6e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVbargraph2, "8", "");
		ui_interface->declare(&fVbargraph2, "symbol", "leveler_gain");
		ui_interface->declare(&fVbargraph2, "unit", "dB");
		ui_interface->addVerticalBargraph("gain", &fVbargraph2, FAUSTFLOAT(-5e+01f), FAUSTFLOAT(5e+01f));
		ui_interface->declare(&fVslider5, "symbol", "leveler_scale");
		ui_interface->addVerticalSlider("leveler_scale", &fVslider5, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.1f));
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("mbExpComp");
		ui_interface->declare(&fVbargraph36, "1", "");
		ui_interface->declare(&fVbargraph36, "symbol", "mb_exp_meter0");
		ui_interface->declare(&fVbargraph36, "unit", "dB");
		ui_interface->addVerticalBargraph("Exp0", &fVbargraph36, FAUSTFLOAT(-12.0f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph34, "1", "");
		ui_interface->declare(&fVbargraph34, "symbol", "mb_exp_meter1");
		ui_interface->declare(&fVbargraph34, "unit", "dB");
		ui_interface->addVerticalBargraph("Exp1", &fVbargraph34, FAUSTFLOAT(-12.0f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph32, "1", "");
		ui_interface->declare(&fVbargraph32, "symbol", "mb_exp_meter2");
		ui_interface->declare(&fVbargraph32, "unit", "dB");
		ui_interface->addVerticalBargraph("Exp2", &fVbargraph32, FAUSTFLOAT(-12.0f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph30, "1", "");
		ui_interface->declare(&fVbargraph30, "symbol", "mb_exp_meter3");
		ui_interface->declare(&fVbargraph30, "unit", "dB");
		ui_interface->addVerticalBargraph("Exp3", &fVbargraph30, FAUSTFLOAT(-12.0f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph28, "1", "");
		ui_interface->declare(&fVbargraph28, "symbol", "mb_exp_meter4");
		ui_interface->declare(&fVbargraph28, "unit", "dB");
		ui_interface->addVerticalBargraph("Exp4", &fVbargraph28, FAUSTFLOAT(-12.0f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph26, "1", "");
		ui_interface->declare(&fVbargraph26, "symbol", "mb_exp_meter5");
		ui_interface->declare(&fVbargraph26, "unit", "dB");
		ui_interface->addVerticalBargraph("Exp5", &fVbargraph26, FAUSTFLOAT(-12.0f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph24, "1", "");
		ui_interface->declare(&fVbargraph24, "symbol", "mb_exp_meter6");
		ui_interface->declare(&fVbargraph24, "unit", "dB");
		ui_interface->addVerticalBargraph("Exp6", &fVbargraph24, FAUSTFLOAT(-12.0f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph22, "1", "");
		ui_interface->declare(&fVbargraph22, "symbol", "mb_exp_meter7");
		ui_interface->declare(&fVbargraph22, "unit", "dB");
		ui_interface->addVerticalBargraph("Exp7", &fVbargraph22, FAUSTFLOAT(-12.0f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph35, "2", "");
		ui_interface->declare(&fVbargraph35, "symbol", "mb_comp_gain 0");
		ui_interface->declare(&fVbargraph35, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 0", &fVbargraph35, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph33, "2", "");
		ui_interface->declare(&fVbargraph33, "symbol", "mb_comp_gain 1");
		ui_interface->declare(&fVbargraph33, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 1", &fVbargraph33, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph31, "2", "");
		ui_interface->declare(&fVbargraph31, "symbol", "mb_comp_gain 2");
		ui_interface->declare(&fVbargraph31, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 2", &fVbargraph31, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph29, "2", "");
		ui_interface->declare(&fVbargraph29, "symbol", "mb_comp_gain 3");
		ui_interface->declare(&fVbargraph29, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 3", &fVbargraph29, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph27, "2", "");
		ui_interface->declare(&fVbargraph27, "symbol", "mb_comp_gain 4");
		ui_interface->declare(&fVbargraph27, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 4", &fVbargraph27, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph25, "2", "");
		ui_interface->declare(&fVbargraph25, "symbol", "mb_comp_gain 5");
		ui_interface->declare(&fVbargraph25, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 5", &fVbargraph25, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph23, "2", "");
		ui_interface->declare(&fVbargraph23, "symbol", "mb_comp_gain 6");
		ui_interface->declare(&fVbargraph23, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 6", &fVbargraph23, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph21, "2", "");
		ui_interface->declare(&fVbargraph21, "symbol", "mb_comp_gain 7");
		ui_interface->declare(&fVbargraph21, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 7", &fVbargraph21, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVslider19, "symbol", "mb_exp_strength");
		ui_interface->declare(&fVslider19, "unit", "%");
		ui_interface->addVerticalSlider("mb_exp_strength", &fVslider19, FAUSTFLOAT(1e+02f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider18, "symbol", "mb_strength");
		ui_interface->declare(&fVslider18, "unit", "%");
		ui_interface->addVerticalSlider("mb_strength", &fVslider18, FAUSTFLOAT(8e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->declare(&fVslider0, "symbol", "mb_exp_thresh");
		ui_interface->declare(&fVslider0, "unit", "dB");
		ui_interface->addVerticalSlider("mb_exp_thresh", &fVslider0, FAUSTFLOAT(0.0f), FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider6, "scale", "log");
		ui_interface->declare(&fVslider6, "symbol", "pre_lowcut");
		ui_interface->addVerticalSlider("preLowcut_freq", &fVslider6, FAUSTFLOAT(42.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(4e+02f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider2, "symbol", "vad_gate_thresh");
		ui_interface->addVerticalSlider("vad_g_thr", &fVslider2, FAUSTFLOAT(0.9f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.1f));
		ui_interface->declare(&fVbargraph0, "symbol", "vad_smoothing_meter");
		ui_interface->addVerticalBargraph("vad_smoo", &fVbargraph0, FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider3, "symbol", "vad_smoothing_time");
		ui_interface->declare(&fVslider3, "unit", "ms");
		ui_interface->addVerticalSlider("vad_smoo_t", &fVslider3, FAUSTFLOAT(1e+02f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+03f), FAUSTFLOAT(1e+01f));
		ui_interface->closeBox();
		ui_interface->closeBox();
	}
	
	FAUSTPP_VIRTUAL void compute(int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
		FAUSTFLOAT* input0 = inputs[0];
		FAUSTFLOAT* input1 = inputs[1];
		FAUSTFLOAT* output0 = outputs[0];
		FAUSTFLOAT* output1 = outputs[1];
		float fSlow0 = float(fVslider1);
		float fSlow1 = fSlow0 + float(fVslider0);
		float fSlow2 = fSlow1 + -12.0f;
		float fSlow3 = fSlow0 + -12.5f;
		float fSlow4 = float(fVslider2);
		float fSlow5 = 0.001f * float(fVslider3);
		int iSlow6 = std::fabs(fSlow5) < 1.1920929e-07f;
		float fSlow7 = ((iSlow6) ? 0.0f : std::exp(-(fConst7 / ((iSlow6) ? 1.0f : fSlow5))));
		float fSlow8 = float(fVslider4) * (1.0f - fSlow7);
		float fSlow9 = float(fVslider5);
		float fSlow10 = std::tan(fConst8 * float(fVslider6));
		float fSlow11 = 1.0f / fSlow10;
		float fSlow12 = 1.0f - fSlow11;
		float fSlow13 = fConst45 * std::pow(1e+01f, 0.05f * float(fVslider7));
		float fSlow14 = 0.5f / fSlow10;
		float fSlow15 = 1.0f / (fSlow11 + 1.0f);
		float fSlow16 = float(fVslider8);
		float fSlow17 = float(fVslider9);
		float fSlow18 = 5e-06f * float(fVslider10) * fSlow17;
		float fSlow19 = float(fVslider11);
		float fSlow20 = float(fVslider12);
		float fSlow21 = float(fVslider13);
		float fSlow22 = float(fVslider14);
		float fSlow23 = float(fVslider15);
		float fSlow24 = float(fVslider16);
		float fSlow25 = float(fVslider17);
		float fSlow26 = fSlow0 + -13.5f;
		float fSlow27 = 0.0001f * fSlow17 * float(fVslider18);
		float fSlow28 = fSlow1 + -18.0f;
		float fSlow29 = 0.0075f * float(fVslider19);
		float fSlow30 = fSlow1 + -11.0f;
		float fSlow31 = fSlow0 + -11.5f;
		float fSlow32 = fSlow1 + -17.0f;
		float fSlow33 = fSlow1 + -1e+01f;
		float fSlow34 = fSlow1 + -16.0f;
		float fSlow35 = fSlow0 + -10.5f;
		float fSlow36 = fSlow1 + -9.0f;
		float fSlow37 = fSlow0 + -7.5f;
		float fSlow38 = fSlow0 + -8.5f;
		float fSlow39 = fSlow1 + -15.0f;
		float fSlow40 = fSlow0 + -6.5f;
		float fSlow41 = fSlow0 + -5.5f;
		for (int i0 = 0; i0 < count; i0 = i0 + 1) {
			fRec73[0] = fSlow8 + fSlow7 * fRec73[1];
			fVbargraph0 = FAUSTFLOAT(fRec73[0]);
			float fTemp0 = fRec73[0];
			float fTemp1 = fTemp0 * float(fTemp0 > fSlow4);
			fVbargraph1 = FAUSTFLOAT(fTemp1);
			float fTemp2 = fTemp1;
			float fTemp3 = std::tan(fConst8 * std::min<float>(fConst5, fTemp2 * (fConst6 * std::fabs(fRec66[1]) + 0.1316f)));
			float fTemp4 = fTemp3 + 2.0f;
			float fTemp5 = fTemp3 * fTemp4 + 1.0f;
			fVec0[0] = fConst19 * fRec76[1] - fConst17 * fRec3[2];
			fRec77[0] = fConst22 * (fConst21 * fRec3[2] - (fVec0[1] + fConst16 * fRec77[1]) + fConst15 * fRec3[1]);
			fRec76[0] = fRec77[0];
			fVec1[0] = 0.50032705f * fRec76[1] - fConst27 * fRec74[1];
			fRec75[0] = fConst28 * (fVec1[1] - fConst25 * fRec75[1] - 1.0006541f * fRec76[1] + 0.50032705f * fRec76[0]);
			fRec74[0] = fRec75[0];
			float fTemp6 = mydsp_faustpower2_f(fRec74[0]);
			fVec2[0] = fTemp6;
			float fTemp7 = fTemp6 + fVec2[1];
			fVec3[0] = fTemp7;
			float fTemp8 = fTemp7 + fVec3[2];
			fVec4[0] = fTemp8;
			float fTemp9 = fTemp8 + fVec4[4];
			fVec5[0] = fTemp9;
			float fTemp10 = fTemp9 + fVec5[8];
			fVec6[IOTA0 & 31] = fTemp10;
			float fTemp11 = fTemp10 + fVec6[(IOTA0 - 16) & 31];
			fVec7[IOTA0 & 63] = fTemp11;
			float fTemp12 = fTemp11 + fVec7[(IOTA0 - 32) & 63];
			fVec8[IOTA0 & 127] = fTemp12;
			float fTemp13 = fTemp12 + fVec8[(IOTA0 - 64) & 127];
			fVec9[IOTA0 & 255] = fTemp13;
			fVec10[IOTA0 & 511] = fTemp13 + fVec9[(IOTA0 - 128) & 255];
			float fTemp14 = std::max<float>(-3e+01f, std::min<float>(3e+01f, fSlow0 + fRec65[1] + (0.691f - 4.3429446f * std::log(std::max<float>(1e-12f, fConst44 * (((iConst42) ? 0.86000985f * fVec10[(IOTA0 - iConst43) & 511] : 0.0f) + ((iConst40) ? 0.86000985f * fVec9[(IOTA0 - iConst41) & 255] : 0.0f) + ((iConst38) ? 0.86000985f * fVec8[(IOTA0 - iConst39) & 127] : 0.0f) + ((iConst36) ? 0.86000985f * fVec7[(IOTA0 - iConst37) & 63] : 0.0f) + ((iConst34) ? 0.86000985f * fVec6[(IOTA0 - iConst35) & 31] : 0.0f) + ((iConst32) ? 0.86000985f * fVec5[iConst33] : 0.0f) + ((iConst30) ? 0.86000985f * fVec4[iConst31] : 0.0f) + ((iConst29) ? 0.86000985f * fTemp6 : 0.0f) + ((iConst11) ? 0.86000985f * fVec3[iConst29] : 0.0f))))))) - (fRec68[1] * fTemp4 + fRec69[1]);
			float fTemp15 = fTemp3 * fTemp14 / fTemp5;
			fRec68[0] = fRec68[1] + 2.0f * fTemp15;
			float fTemp16 = fRec68[1] + fTemp15;
			float fTemp17 = fTemp3 * fTemp16;
			fRec69[0] = fRec69[1] + 2.0f * fTemp17;
			float fRec70 = fTemp16;
			float fRec71 = fTemp14 / fTemp5;
			float fRec72 = fRec69[1] + fTemp17;
			fRec66[0] = fRec70;
			float fRec67 = fRec72;
			float fTemp18 = fSlow9 * fRec67;
			fVbargraph2 = FAUSTFLOAT(fTemp18);
			fRec65[0] = fTemp18;
			fRec80[0] = fSlow13 + fConst46 * fRec80[1];
			float fTemp19 = float(input1[i0]) * fRec80[0];
			fRec79[0] = std::max<float>(fRec79[1] - fConst1, std::min<float>(12.0f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(0.00031622776f, std::fabs(fTemp19))))));
			fVbargraph3 = FAUSTFLOAT(fRec79[0]);
			float fTemp20 = float(input0[i0]) * fRec80[0];
			fRec81[0] = std::max<float>(fRec81[1] - fConst1, std::min<float>(12.0f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(0.00031622776f, std::fabs(fTemp20))))));
			fVbargraph4 = FAUSTFLOAT(fRec81[0]);
			float fTemp21 = fTemp20 + fTemp19;
			fVec11[0] = fTemp21;
			fRec78[0] = fSlow15 * (fSlow14 * (fTemp21 - fVec11[1]) - fSlow12 * fRec78[1]);
			float fTemp22 = fRec78[0] * std::pow(1e+01f, 0.05f * fRec65[0]);
			fVec12[0] = fTemp22;
			float fTemp23 = fRec60[1] + fConst47 * (fTemp22 - fRec61[1]);
			fRec60[0] = fConst49 * fTemp23 - fRec60[1];
			float fTemp24 = fRec61[1] + fConst50 * fTemp23;
			fRec61[0] = 2.0f * fTemp24 - fRec61[1];
			float fRec62 = fTemp22;
			float fRec63 = fConst51 * fTemp23;
			float fRec64 = fTemp24;
			float fTemp25 = fRec64 + 1.4142135f * fRec63;
			float fTemp26 = fRec55[1] + fConst47 * (fRec62 - (fTemp25 + fRec56[1]));
			fRec55[0] = fConst49 * fTemp26 - fRec55[1];
			float fTemp27 = fRec56[1] + fConst50 * fTemp26;
			fRec56[0] = 2.0f * fTemp27 - fRec56[1];
			float fRec57 = fRec62 - fTemp25;
			float fRec58 = fConst51 * fTemp26;
			float fRec59 = fTemp27;
			float fTemp28 = fRec59 + 1.4142135f * fRec58;
			float fTemp29 = fRec51[1] + fConst52 * (fRec57 - (fTemp28 + fRec52[1]));
			fRec51[0] = fConst54 * fTemp29 - fRec51[1];
			float fTemp30 = fRec52[1] + fConst55 * fTemp29;
			fRec52[0] = 2.0f * fTemp30 - fRec52[1];
			float fRec53 = fRec57 - fTemp28;
			float fRec54 = fConst56 * fTemp29;
			float fTemp31 = 2.828427f * fRec54;
			float fTemp32 = fRec47[1] + fConst57 * (fRec53 - (fTemp31 + fRec48[1]));
			fRec47[0] = fConst59 * fTemp32 - fRec47[1];
			float fTemp33 = fRec48[1] + fConst60 * fTemp32;
			fRec48[0] = 2.0f * fTemp33 - fRec48[1];
			float fRec49 = fRec53 - fTemp31;
			float fRec50 = fConst61 * fTemp32;
			float fTemp34 = 2.828427f * fRec50;
			float fTemp35 = fRec43[1] + fConst62 * (fRec49 - (fTemp34 + fRec44[1]));
			fRec43[0] = fConst64 * fTemp35 - fRec43[1];
			float fTemp36 = fRec44[1] + fConst65 * fTemp35;
			fRec44[0] = 2.0f * fTemp36 - fRec44[1];
			float fRec45 = fRec49 - fTemp34;
			float fRec46 = fConst66 * fTemp35;
			float fTemp37 = 2.828427f * fRec46;
			float fTemp38 = fRec38[1] + fConst67 * (fRec45 - (fTemp37 + fRec39[1]));
			fRec38[0] = fConst69 * fTemp38 - fRec38[1];
			float fTemp39 = fRec39[1] + fConst70 * fTemp38;
			fRec39[0] = 2.0f * fTemp39 - fRec39[1];
			float fRec40 = fRec45 - fTemp37;
			float fRec41 = fConst71 * fTemp38;
			float fRec42 = fTemp39;
			float fTemp40 = fRec42 + 1.4142135f * fRec41;
			float fTemp41 = fRec33[1] + fConst67 * (fRec40 - (fTemp40 + fRec34[1]));
			fRec33[0] = fConst69 * fTemp41 - fRec33[1];
			float fTemp42 = fRec34[1] + fConst70 * fTemp41;
			fRec34[0] = 2.0f * fTemp42 - fRec34[1];
			float fRec35 = fRec40 - fTemp40;
			float fRec36 = fConst71 * fTemp41;
			float fRec37 = fTemp42;
			float fTemp43 = fRec37 + 1.4142135f * fRec36;
			float fTemp44 = fRec29[1] + fConst72 * (fRec35 - (fTemp43 + fRec30[1]));
			fRec29[0] = fConst74 * fTemp44 - fRec29[1];
			float fTemp45 = fRec30[1] + fConst75 * fTemp44;
			fRec30[0] = 2.0f * fTemp45 - fRec30[1];
			float fRec31 = fRec35 - fTemp43;
			float fRec32 = fConst76 * fTemp44;
			float fTemp46 = 2.828427f * fRec32;
			float fTemp47 = fRec24[1] + fConst77 * (fRec31 - (fTemp46 + fRec25[1]));
			fRec24[0] = fConst79 * fTemp47 - fRec24[1];
			float fTemp48 = fRec25[1] + fConst80 * fTemp47;
			fRec25[0] = 2.0f * fTemp48 - fRec25[1];
			float fRec26 = fRec31 - fTemp46;
			float fRec27 = fConst81 * fTemp47;
			float fRec28 = fTemp48;
			float fTemp49 = fRec28 + 1.4142135f * fRec27;
			float fTemp50 = fRec19[1] + fConst77 * (fRec26 - (fTemp49 + fRec20[1]));
			fRec19[0] = fConst79 * fTemp50 - fRec19[1];
			float fTemp51 = fRec20[1] + fConst80 * fTemp50;
			fRec20[0] = 2.0f * fTemp51 - fRec20[1];
			float fRec21 = fRec26 - fTemp49;
			float fRec22 = fConst81 * fTemp50;
			float fRec23 = fTemp51;
			float fTemp52 = fRec21 - (fRec23 + 1.4142135f * fRec22);
			fVec13[0] = fTemp52;
			fVec14[0] = fConst84 * fVec13[1] - fConst19 * fRec17[1];
			fRec18[0] = fConst22 * (fVec14[1] - fConst16 * fRec18[1] + fConst83 * fVec13[1] + fConst82 * fTemp52);
			fRec17[0] = fRec18[0];
			fVec15[0] = 0.50032705f * fRec17[1] - fConst27 * fRec15[1];
			fRec16[0] = fConst28 * (fVec15[1] - fConst25 * fRec16[1] - 1.0006541f * fRec17[1] + 0.50032705f * fRec17[0]);
			fRec15[0] = fRec16[0];
			float fTemp53 = std::fabs(0.92736715f * fRec15[0]);
			fRec14[0] = std::max<float>(fTemp53, fConst85 * fRec14[1] + fConst86 * fTemp53);
			fRec13[0] = fConst87 * fRec14[0] + fConst4 * fRec13[1];
			fVec16[0] = fConst19 * fRec86[1] - fConst17 * fVec12[1];
			fRec87[0] = fConst22 * (fConst21 * fVec12[1] - (fVec16[1] + fConst16 * fRec87[1]) + fConst15 * fTemp22);
			fRec86[0] = fRec87[0];
			fVec17[0] = 0.50032705f * fRec86[1] - fConst27 * fRec84[1];
			fRec85[0] = fConst28 * (fVec17[1] - fConst25 * fRec85[1] - 1.0006541f * fRec86[1] + 0.50032705f * fRec86[0]);
			fRec84[0] = fRec85[0];
			float fTemp54 = std::fabs(0.92736715f * fRec84[0]);
			fRec83[0] = std::max<float>(fTemp54, fConst85 * fRec83[1] + fConst86 * fTemp54);
			fRec82[0] = fConst87 * fRec83[0] + fConst4 * fRec82[1];
			float fTemp55 = std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec82[0])));
			float fTemp56 = 2e+01f * (fTemp55 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec13[0]))));
			fVbargraph5 = FAUSTFLOAT(-fTemp56);
			fRec12[0] = fConst88 * (fSlow16 - -fTemp56) + fConst3 * fRec12[1];
			float fTemp57 = std::pow(1e+01f, fSlow18 * fTemp2 * std::min<float>(6.0f, std::max<float>(-12.0f, fRec12[0])));
			fVbargraph6 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp57)));
			float fTemp58 = fTemp52 * fTemp57;
			float fTemp59 = fRec95[1] + fConst77 * (fRec28 - fRec96[1]);
			fRec95[0] = fConst79 * fTemp59 - fRec95[1];
			float fTemp60 = fRec96[1] + fConst80 * fTemp59;
			fRec96[0] = 2.0f * fTemp60 - fRec96[1];
			fRec97[0] = fTemp60;
			fVec18[0] = fConst84 * fRec97[1] - fConst19 * fRec93[1];
			fRec94[0] = fConst22 * (fVec18[1] - fConst16 * fRec94[1] + fConst83 * fRec97[1] + fConst82 * fRec97[0]);
			fRec93[0] = fRec94[0];
			fVec19[0] = 0.50032705f * fRec93[1] - fConst27 * fRec91[1];
			fRec92[0] = fConst28 * (fVec19[1] - fConst25 * fRec92[1] - 1.0006541f * fRec93[1] + 0.50032705f * fRec93[0]);
			fRec91[0] = fRec92[0];
			float fTemp61 = std::fabs(0.92736715f * fRec91[0]);
			fRec90[0] = std::max<float>(fTemp61, fConst85 * fRec90[1] + fConst86 * fTemp61);
			fRec89[0] = fConst87 * fRec90[0] + fConst4 * fRec89[1];
			float fTemp62 = 2e+01f * (fTemp55 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec89[0]))));
			fVbargraph7 = FAUSTFLOAT(-fTemp62);
			fRec88[0] = fConst90 * (fSlow19 - -fTemp62) + fConst89 * fRec88[1];
			float fTemp63 = std::pow(1e+01f, fSlow18 * fTemp2 * std::min<float>(9.0f, std::max<float>(-12.0f, fRec88[0])));
			fVbargraph8 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp63)));
			float fTemp64 = fRec97[0] * fTemp63;
			float fTemp65 = fRec119[1] + fConst67 * (fRec42 - fRec120[1]);
			fRec119[0] = fConst69 * fTemp65 - fRec119[1];
			float fTemp66 = fRec120[1] + fConst70 * fTemp65;
			fRec120[0] = 2.0f * fTemp66 - fRec120[1];
			float fRec121 = fTemp66;
			float fTemp67 = fRec115[1] + fConst77 * (fRec121 - fRec116[1]);
			fRec115[0] = fConst79 * fTemp67 - fRec115[1];
			float fTemp68 = fRec116[1] + fConst80 * fTemp67;
			fRec116[0] = 2.0f * fTemp68 - fRec116[1];
			float fRec117 = fRec121;
			float fRec118 = fConst81 * fTemp67;
			float fTemp69 = 2.828427f * fRec118;
			float fTemp70 = fRec110[1] + fConst72 * (fRec117 - (fTemp69 + fRec111[1]));
			fRec110[0] = fConst74 * fTemp70 - fRec110[1];
			float fTemp71 = fRec111[1] + fConst75 * fTemp70;
			fRec111[0] = 2.0f * fTemp71 - fRec111[1];
			float fRec112 = fRec117 - fTemp69;
			float fRec113 = fConst76 * fTemp70;
			float fRec114 = fTemp71;
			float fTemp72 = fRec114 + 1.4142135f * fRec113;
			float fTemp73 = fRec105[1] + fConst72 * (fRec112 - (fTemp72 + fRec106[1]));
			fRec105[0] = fConst74 * fTemp73 - fRec105[1];
			float fTemp74 = fRec106[1] + fConst75 * fTemp73;
			fRec106[0] = 2.0f * fTemp74 - fRec106[1];
			float fRec107 = fRec112 - fTemp72;
			float fRec108 = fConst76 * fTemp73;
			float fRec109 = fTemp74;
			float fTemp75 = fRec107 - (fRec109 + 1.4142135f * fRec108);
			fVec20[0] = fTemp75;
			fVec21[0] = fConst84 * fVec20[1] - fConst19 * fRec103[1];
			fRec104[0] = fConst22 * (fVec21[1] - fConst16 * fRec104[1] + fConst83 * fVec20[1] + fConst82 * fTemp75);
			fRec103[0] = fRec104[0];
			fVec22[0] = 0.50032705f * fRec103[1] - fConst27 * fRec101[1];
			fRec102[0] = fConst28 * (fVec22[1] - fConst25 * fRec102[1] - 1.0006541f * fRec103[1] + 0.50032705f * fRec103[0]);
			fRec101[0] = fRec102[0];
			float fTemp76 = std::fabs(0.92736715f * fRec101[0]);
			fRec100[0] = std::max<float>(fTemp76, fConst85 * fRec100[1] + fConst86 * fTemp76);
			fRec99[0] = fConst87 * fRec100[0] + fConst4 * fRec99[1];
			float fTemp77 = 2e+01f * (fTemp55 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec99[0]))));
			fVbargraph9 = FAUSTFLOAT(-fTemp77);
			fRec98[0] = fConst92 * (fSlow20 - -fTemp77) + fConst91 * fRec98[1];
			float fTemp78 = std::pow(1e+01f, fSlow18 * fTemp2 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec98[0])));
			fVbargraph10 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp78)));
			float fTemp79 = fTemp75 * fTemp78;
			float fTemp80 = fRec129[1] + fConst72 * (fRec114 - fRec130[1]);
			fRec129[0] = fConst74 * fTemp80 - fRec129[1];
			float fTemp81 = fRec130[1] + fConst75 * fTemp80;
			fRec130[0] = 2.0f * fTemp81 - fRec130[1];
			fRec131[0] = fTemp81;
			fVec23[0] = fConst84 * fRec131[1] - fConst19 * fRec127[1];
			fRec128[0] = fConst22 * (fVec23[1] - fConst16 * fRec128[1] + fConst83 * fRec131[1] + fConst82 * fRec131[0]);
			fRec127[0] = fRec128[0];
			fVec24[0] = 0.50032705f * fRec127[1] - fConst27 * fRec125[1];
			fRec126[0] = fConst28 * (fVec24[1] - fConst25 * fRec126[1] - 1.0006541f * fRec127[1] + 0.50032705f * fRec127[0]);
			fRec125[0] = fRec126[0];
			float fTemp82 = std::fabs(0.92736715f * fRec125[0]);
			fRec124[0] = std::max<float>(fTemp82, fConst85 * fRec124[1] + fConst86 * fTemp82);
			fRec123[0] = fConst87 * fRec124[0] + fConst4 * fRec123[1];
			float fTemp83 = 2e+01f * (fTemp55 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec123[0]))));
			fVbargraph11 = FAUSTFLOAT(-fTemp83);
			fRec122[0] = fConst86 * (fSlow21 - -fTemp83) + fConst85 * fRec122[1];
			float fTemp84 = std::pow(1e+01f, fSlow18 * fTemp2 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec122[0])));
			fVbargraph12 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp84)));
			float fTemp85 = fRec131[0] * fTemp84;
			float fTemp86 = fRec175[1] + fConst47 * (fRec64 - fRec176[1]);
			fRec175[0] = fConst49 * fTemp86 - fRec175[1];
			float fTemp87 = fRec176[1] + fConst50 * fTemp86;
			fRec176[0] = 2.0f * fTemp87 - fRec176[1];
			float fRec177 = fTemp87;
			float fTemp88 = fRec171[1] + fConst67 * (fRec177 - fRec172[1]);
			fRec171[0] = fConst69 * fTemp88 - fRec171[1];
			float fTemp89 = fRec172[1] + fConst70 * fTemp88;
			fRec172[0] = 2.0f * fTemp89 - fRec172[1];
			float fRec173 = fRec177;
			float fRec174 = fConst71 * fTemp88;
			float fTemp90 = 2.828427f * fRec174;
			float fTemp91 = fRec167[1] + fConst72 * (fRec173 - (fTemp90 + fRec168[1]));
			fRec167[0] = fConst74 * fTemp91 - fRec167[1];
			float fTemp92 = fRec168[1] + fConst75 * fTemp91;
			fRec168[0] = 2.0f * fTemp92 - fRec168[1];
			float fRec169 = fRec173 - fTemp90;
			float fRec170 = fConst76 * fTemp91;
			float fTemp93 = 2.828427f * fRec170;
			float fTemp94 = fRec163[1] + fConst77 * (fRec169 - (fTemp93 + fRec164[1]));
			fRec163[0] = fConst79 * fTemp94 - fRec163[1];
			float fTemp95 = fRec164[1] + fConst80 * fTemp94;
			fRec164[0] = 2.0f * fTemp95 - fRec164[1];
			float fRec165 = fRec169 - fTemp93;
			float fRec166 = fConst81 * fTemp94;
			float fTemp96 = 2.828427f * fRec166;
			float fTemp97 = fRec158[1] + fConst52 * (fRec165 - (fTemp96 + fRec159[1]));
			fRec158[0] = fConst54 * fTemp97 - fRec158[1];
			float fTemp98 = fRec159[1] + fConst55 * fTemp97;
			fRec159[0] = 2.0f * fTemp98 - fRec159[1];
			float fRec160 = fRec165 - fTemp96;
			float fRec161 = fConst56 * fTemp97;
			float fRec162 = fTemp98;
			float fTemp99 = fRec162 + 1.4142135f * fRec161;
			float fTemp100 = fRec153[1] + fConst52 * (fRec160 - (fTemp99 + fRec154[1]));
			fRec153[0] = fConst54 * fTemp100 - fRec153[1];
			float fTemp101 = fRec154[1] + fConst55 * fTemp100;
			fRec154[0] = 2.0f * fTemp101 - fRec154[1];
			float fRec155 = fRec160 - fTemp99;
			float fRec156 = fConst56 * fTemp100;
			float fRec157 = fTemp101;
			float fTemp102 = fRec157 + 1.4142135f * fRec156;
			float fTemp103 = fRec149[1] + fConst57 * (fRec155 - (fTemp102 + fRec150[1]));
			fRec149[0] = fConst59 * fTemp103 - fRec149[1];
			float fTemp104 = fRec150[1] + fConst60 * fTemp103;
			fRec150[0] = 2.0f * fTemp104 - fRec150[1];
			float fRec151 = fRec155 - fTemp102;
			float fRec152 = fConst61 * fTemp103;
			float fTemp105 = 2.828427f * fRec152;
			float fTemp106 = fRec144[1] + fConst62 * (fRec151 - (fTemp105 + fRec145[1]));
			fRec144[0] = fConst64 * fTemp106 - fRec144[1];
			float fTemp107 = fRec145[1] + fConst65 * fTemp106;
			fRec145[0] = 2.0f * fTemp107 - fRec145[1];
			float fRec146 = fRec151 - fTemp105;
			float fRec147 = fConst66 * fTemp106;
			float fRec148 = fTemp107;
			float fTemp108 = fRec148 + 1.4142135f * fRec147;
			float fTemp109 = fRec139[1] + fConst62 * (fRec146 - (fTemp108 + fRec140[1]));
			fRec139[0] = fConst64 * fTemp109 - fRec139[1];
			float fTemp110 = fRec140[1] + fConst65 * fTemp109;
			fRec140[0] = 2.0f * fTemp110 - fRec140[1];
			float fRec141 = fRec146 - fTemp108;
			float fRec142 = fConst66 * fTemp109;
			float fRec143 = fTemp110;
			float fTemp111 = fRec141 - (fRec143 + 1.4142135f * fRec142);
			fVec25[0] = fTemp111;
			fVec26[0] = fConst84 * fVec25[1] - fConst19 * fRec137[1];
			fRec138[0] = fConst22 * (fVec26[1] - fConst16 * fRec138[1] + fConst83 * fVec25[1] + fConst82 * fTemp111);
			fRec137[0] = fRec138[0];
			fVec27[0] = 0.50032705f * fRec137[1] - fConst27 * fRec135[1];
			fRec136[0] = fConst28 * (fVec27[1] - fConst25 * fRec136[1] - 1.0006541f * fRec137[1] + 0.50032705f * fRec137[0]);
			fRec135[0] = fRec136[0];
			float fTemp112 = std::fabs(0.92736715f * fRec135[0]);
			fRec134[0] = std::max<float>(fTemp112, fConst85 * fRec134[1] + fConst86 * fTemp112);
			fRec133[0] = fConst87 * fRec134[0] + fConst4 * fRec133[1];
			float fTemp113 = 2e+01f * (fTemp55 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec133[0]))));
			fVbargraph13 = FAUSTFLOAT(-fTemp113);
			fRec132[0] = fConst94 * (fSlow22 - -fTemp113) + fConst93 * fRec132[1];
			float fTemp114 = std::pow(1e+01f, fSlow18 * fTemp2 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec132[0])));
			fVbargraph14 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp114)));
			float fTemp115 = fTemp111 * fTemp114;
			float fTemp116 = fRec185[1] + fConst62 * (fRec148 - fRec186[1]);
			fRec185[0] = fConst64 * fTemp116 - fRec185[1];
			float fTemp117 = fRec186[1] + fConst65 * fTemp116;
			fRec186[0] = 2.0f * fTemp117 - fRec186[1];
			fRec187[0] = fTemp117;
			fVec28[0] = fConst84 * fRec187[1] - fConst19 * fRec183[1];
			fRec184[0] = fConst22 * (fVec28[1] - fConst16 * fRec184[1] + fConst83 * fRec187[1] + fConst82 * fRec187[0]);
			fRec183[0] = fRec184[0];
			fVec29[0] = 0.50032705f * fRec183[1] - fConst27 * fRec181[1];
			fRec182[0] = fConst28 * (fVec29[1] - fConst25 * fRec182[1] - 1.0006541f * fRec183[1] + 0.50032705f * fRec183[0]);
			fRec181[0] = fRec182[0];
			float fTemp118 = std::fabs(0.92736715f * fRec181[0]);
			fRec180[0] = std::max<float>(fTemp118, fConst85 * fRec180[1] + fConst86 * fTemp118);
			fRec179[0] = fConst87 * fRec180[0] + fConst4 * fRec179[1];
			float fTemp119 = 2e+01f * (fTemp55 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec179[0]))));
			fVbargraph15 = FAUSTFLOAT(-fTemp119);
			fRec178[0] = fConst96 * (fSlow23 - -fTemp119) + fConst95 * fRec178[1];
			float fTemp120 = std::pow(1e+01f, fSlow18 * fTemp2 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec178[0])));
			fVbargraph16 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp120)));
			float fTemp121 = fRec187[0] * fTemp120;
			float fTemp122 = fRec209[1] + fConst52 * (fRec162 - fRec210[1]);
			fRec209[0] = fConst54 * fTemp122 - fRec209[1];
			float fTemp123 = fRec210[1] + fConst55 * fTemp122;
			fRec210[0] = 2.0f * fTemp123 - fRec210[1];
			float fRec211 = fTemp123;
			float fTemp124 = fRec205[1] + fConst62 * (fRec211 - fRec206[1]);
			fRec205[0] = fConst64 * fTemp124 - fRec205[1];
			float fTemp125 = fRec206[1] + fConst65 * fTemp124;
			fRec206[0] = 2.0f * fTemp125 - fRec206[1];
			float fRec207 = fRec211;
			float fRec208 = fConst66 * fTemp124;
			float fTemp126 = 2.828427f * fRec208;
			float fTemp127 = fRec200[1] + fConst57 * (fRec207 - (fTemp126 + fRec201[1]));
			fRec200[0] = fConst59 * fTemp127 - fRec200[1];
			float fTemp128 = fRec201[1] + fConst60 * fTemp127;
			fRec201[0] = 2.0f * fTemp128 - fRec201[1];
			float fRec202 = fRec207 - fTemp126;
			float fRec203 = fConst61 * fTemp127;
			float fRec204 = fTemp128;
			float fTemp129 = fRec204 + 1.4142135f * fRec203;
			float fTemp130 = fRec195[1] + fConst57 * (fRec202 - (fTemp129 + fRec196[1]));
			fRec195[0] = fConst59 * fTemp130 - fRec195[1];
			float fTemp131 = fRec196[1] + fConst60 * fTemp130;
			fRec196[0] = 2.0f * fTemp131 - fRec196[1];
			float fRec197 = fRec202 - fTemp129;
			float fRec198 = fConst61 * fTemp130;
			float fRec199 = fTemp131;
			float fTemp132 = fRec197 - (fRec199 + 1.4142135f * fRec198);
			fVec30[0] = fTemp132;
			fVec31[0] = fConst84 * fVec30[1] - fConst19 * fRec193[1];
			fRec194[0] = fConst22 * (fVec31[1] - fConst16 * fRec194[1] + fConst83 * fVec30[1] + fConst82 * fTemp132);
			fRec193[0] = fRec194[0];
			fVec32[0] = 0.50032705f * fRec193[1] - fConst27 * fRec191[1];
			fRec192[0] = fConst28 * (fVec32[1] - fConst25 * fRec192[1] - 1.0006541f * fRec193[1] + 0.50032705f * fRec193[0]);
			fRec191[0] = fRec192[0];
			float fTemp133 = std::fabs(0.92736715f * fRec191[0]);
			fRec190[0] = std::max<float>(fTemp133, fConst85 * fRec190[1] + fConst86 * fTemp133);
			fRec189[0] = fConst87 * fRec190[0] + fConst4 * fRec189[1];
			float fTemp134 = 2e+01f * (fTemp55 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec189[0]))));
			fVbargraph17 = FAUSTFLOAT(-fTemp134);
			fRec188[0] = fConst98 * (fSlow24 - -fTemp134) + fConst97 * fRec188[1];
			float fTemp135 = std::pow(1e+01f, fSlow18 * fTemp2 * std::min<float>(9.0f, std::max<float>(-12.0f, fRec188[0])));
			fVbargraph18 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp135)));
			float fTemp136 = fTemp132 * fTemp135;
			float fTemp137 = fRec219[1] + fConst57 * (fRec204 - fRec220[1]);
			fRec219[0] = fConst59 * fTemp137 - fRec219[1];
			float fTemp138 = fRec220[1] + fConst60 * fTemp137;
			fRec220[0] = 2.0f * fTemp138 - fRec220[1];
			fRec221[0] = fTemp138;
			fVec33[0] = fConst84 * fRec221[1] - fConst19 * fRec217[1];
			fRec218[0] = fConst22 * (fVec33[1] - fConst16 * fRec218[1] + fConst83 * fRec221[1] + fConst82 * fRec221[0]);
			fRec217[0] = fRec218[0];
			fVec34[0] = 0.50032705f * fRec217[1] - fConst27 * fRec215[1];
			fRec216[0] = fConst28 * (fVec34[1] - fConst25 * fRec216[1] - 1.0006541f * fRec217[1] + 0.50032705f * fRec217[0]);
			fRec215[0] = fRec216[0];
			float fTemp139 = std::fabs(0.92736715f * fRec215[0]);
			fRec214[0] = std::max<float>(fTemp139, fConst85 * fRec214[1] + fConst86 * fTemp139);
			fRec213[0] = fConst87 * fRec214[0] + fConst4 * fRec213[1];
			float fTemp140 = 2e+01f * (std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec213[0]))) - fTemp55);
			fVbargraph19 = FAUSTFLOAT(fTemp140);
			fRec212[0] = fConst100 * (fSlow25 - fTemp140) + fConst99 * fRec212[1];
			float fTemp141 = std::pow(1e+01f, fSlow18 * fTemp2 * std::min<float>(6.0f, std::max<float>(-12.0f, fRec212[0])));
			fVbargraph20 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp141)));
			float fTemp142 = fRec221[0] * fTemp141;
			fRec3[0] = fTemp142 + fTemp136 + fTemp121 + fTemp115 + fTemp85 + fTemp79 + fTemp64 + fTemp58;
			float fRec4 = fTemp142;
			float fRec5 = fTemp136;
			float fRec6 = fTemp121;
			float fRec7 = fTemp115;
			float fRec8 = fTemp85;
			float fRec9 = fTemp79;
			float fRec10 = fTemp64;
			float fRec11 = fTemp58;
			float fTemp143 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec11)));
			int iTemp144 = (fTemp143 > fSlow26) + (fTemp143 > fSlow3);
			float fTemp145 = std::max<float>(0.0f, ((iTemp144 == 0) ? 0.0f : ((iTemp144 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp143 + 13.5f - fSlow0) : fTemp143 + 13.0f - fSlow0)));
			float fTemp146 = ((-(0.75f * fTemp145) > fRec2[1]) ? fConst102 : fConst101);
			fRec2[0] = fRec2[1] * fTemp146 - 0.75f * fTemp145 * (1.0f - fTemp146);
			float fTemp147 = std::pow(1e+01f, fSlow27 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec2[0]))) + 1.5f)))));
			fVbargraph21 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp147)));
			float fTemp148 = fRec11 * fTemp147;
			float fTemp149 = std::fabs(fTemp148);
			fVec35[0] = fTemp149;
			float fTemp150 = std::max<float>(fTemp149, fVec35[1]);
			fVec36[0] = fTemp150;
			float fTemp151 = std::max<float>(fTemp150, fVec36[2]);
			fVec37[0] = fTemp151;
			float fTemp152 = std::max<float>(fTemp151, fVec37[4]);
			fVec38[0] = fTemp152;
			float fTemp153 = std::max<float>(fTemp152, fVec38[8]);
			fVec39[IOTA0 & 31] = fTemp153;
			float fTemp154 = std::max<float>(fTemp153, fVec39[(IOTA0 - 16) & 31]);
			fVec40[IOTA0 & 63] = fTemp154;
			float fTemp155 = std::max<float>(fTemp154, fVec40[(IOTA0 - 32) & 63]);
			fVec41[IOTA0 & 127] = fTemp155;
			float fTemp156 = std::max<float>(fTemp155, fVec41[(IOTA0 - 64) & 127]);
			fVec42[IOTA0 & 255] = fTemp156;
			float fTemp157 = std::max<float>(fTemp156, fVec42[(IOTA0 - 128) & 255]);
			fVec43[IOTA0 & 511] = fTemp157;
			fVec44[IOTA0 & 511] = std::max<float>(fTemp157, fVec43[(IOTA0 - 256) & 511]);
			float fTemp158 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst2) ? fTemp149 : -3.4028235e+38f), ((iConst103) ? fVec36[iConst2] : -3.4028235e+38f)), ((iConst104) ? fVec37[iConst105] : -3.4028235e+38f)), ((iConst106) ? fVec38[iConst107] : -3.4028235e+38f)), ((iConst108) ? fVec39[(IOTA0 - iConst109) & 31] : -3.4028235e+38f)), ((iConst110) ? fVec40[(IOTA0 - iConst111) & 63] : -3.4028235e+38f)), ((iConst112) ? fVec41[(IOTA0 - iConst113) & 127] : -3.4028235e+38f)), ((iConst114) ? fVec42[(IOTA0 - iConst115) & 255] : -3.4028235e+38f)), ((iConst116) ? fVec43[(IOTA0 - iConst117) & 511] : -3.4028235e+38f)), ((iConst118) ? fVec44[(IOTA0 - iConst119) & 511] : -3.4028235e+38f))));
			int iTemp159 = (fTemp158 > fSlow28) + (fTemp158 > fSlow2);
			float fTemp160 = fSlow29 * (1.0f - 0.5f * fTemp2);
			float fTemp161 = std::fabs(fTemp160);
			int iTemp162 = fTemp160 > 0.0f;
			float fTemp163 = float(2 * iTemp162 + -1);
			float fTemp164 = fTemp163 * std::max<float>(-12.0f, fTemp161 * ((iTemp159 == 0) ? fTemp158 + 15.0f - fSlow1 : ((iTemp159 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp158 + 12.0f - fSlow1)) : 0.0f)));
			float fTemp165 = ((iTemp162) ? 0.05f : 0.001f);
			int iTemp166 = std::fabs(fTemp165) < 1.1920929e-07f;
			float fTemp167 = ((iTemp162) ? 0.001f : 0.05f);
			int iTemp168 = std::fabs(fTemp167) < 1.1920929e-07f;
			float fTemp169 = ((fTemp164 > fRec1[1]) ? ((iTemp168) ? 0.0f : std::exp(-(fConst7 / ((iTemp168) ? 1.0f : fTemp167)))) : ((iTemp166) ? 0.0f : std::exp(-(fConst7 / ((iTemp166) ? 1.0f : fTemp165)))));
			fRec1[0] = fTemp164 * (1.0f - fTemp169) + fRec1[1] * fTemp169;
			fVbargraph22 = FAUSTFLOAT(fRec1[0]);
			float fTemp170 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec10)));
			int iTemp171 = (fTemp170 > fSlow3) + (fTemp170 > fSlow31);
			float fTemp172 = std::max<float>(0.0f, ((iTemp171 == 0) ? 0.0f : ((iTemp171 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp170 + 12.5f - fSlow0) : fTemp170 + 12.0f - fSlow0)));
			float fTemp173 = ((-(0.75f * fTemp172) > fRec223[1]) ? fConst102 : fConst120);
			fRec223[0] = fRec223[1] * fTemp173 - 0.75f * fTemp172 * (1.0f - fTemp173);
			float fTemp174 = std::pow(1e+01f, fSlow27 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec223[0]))) + 1.5f)))));
			fVbargraph23 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp174)));
			float fTemp175 = fRec10 * fTemp174;
			float fTemp176 = std::fabs(fTemp175);
			fVec45[0] = fTemp176;
			float fTemp177 = std::max<float>(fTemp176, fVec45[1]);
			fVec46[0] = fTemp177;
			float fTemp178 = std::max<float>(fTemp177, fVec46[2]);
			fVec47[0] = fTemp178;
			float fTemp179 = std::max<float>(fTemp178, fVec47[4]);
			fVec48[0] = fTemp179;
			float fTemp180 = std::max<float>(fTemp179, fVec48[8]);
			fVec49[IOTA0 & 31] = fTemp180;
			float fTemp181 = std::max<float>(fTemp180, fVec49[(IOTA0 - 16) & 31]);
			fVec50[IOTA0 & 63] = fTemp181;
			float fTemp182 = std::max<float>(fTemp181, fVec50[(IOTA0 - 32) & 63]);
			fVec51[IOTA0 & 127] = fTemp182;
			float fTemp183 = std::max<float>(fTemp182, fVec51[(IOTA0 - 64) & 127]);
			fVec52[IOTA0 & 255] = fTemp183;
			float fTemp184 = std::max<float>(fTemp183, fVec52[(IOTA0 - 128) & 255]);
			fVec53[IOTA0 & 511] = fTemp184;
			fVec54[IOTA0 & 511] = std::max<float>(fTemp184, fVec53[(IOTA0 - 256) & 511]);
			float fTemp185 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst2) ? fTemp176 : -3.4028235e+38f), ((iConst103) ? fVec46[iConst2] : -3.4028235e+38f)), ((iConst104) ? fVec47[iConst105] : -3.4028235e+38f)), ((iConst106) ? fVec48[iConst107] : -3.4028235e+38f)), ((iConst108) ? fVec49[(IOTA0 - iConst109) & 31] : -3.4028235e+38f)), ((iConst110) ? fVec50[(IOTA0 - iConst111) & 63] : -3.4028235e+38f)), ((iConst112) ? fVec51[(IOTA0 - iConst113) & 127] : -3.4028235e+38f)), ((iConst114) ? fVec52[(IOTA0 - iConst115) & 255] : -3.4028235e+38f)), ((iConst116) ? fVec53[(IOTA0 - iConst117) & 511] : -3.4028235e+38f)), ((iConst118) ? fVec54[(IOTA0 - iConst119) & 511] : -3.4028235e+38f))));
			int iTemp186 = (fTemp185 > fSlow32) + (fTemp185 > fSlow30);
			float fTemp187 = fTemp163 * std::max<float>(-12.0f, fTemp161 * ((iTemp186 == 0) ? fTemp185 + 14.0f - fSlow1 : ((iTemp186 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp185 + 11.0f - fSlow1)) : 0.0f)));
			float fTemp188 = ((iTemp162) ? 0.08f : 0.002f);
			int iTemp189 = std::fabs(fTemp188) < 1.1920929e-07f;
			float fTemp190 = ((iTemp162) ? 0.002f : 0.08f);
			int iTemp191 = std::fabs(fTemp190) < 1.1920929e-07f;
			float fTemp192 = ((fTemp187 > fRec222[1]) ? ((iTemp191) ? 0.0f : std::exp(-(fConst7 / ((iTemp191) ? 1.0f : fTemp190)))) : ((iTemp189) ? 0.0f : std::exp(-(fConst7 / ((iTemp189) ? 1.0f : fTemp188)))));
			fRec222[0] = fTemp187 * (1.0f - fTemp192) + fRec222[1] * fTemp192;
			fVbargraph24 = FAUSTFLOAT(fRec222[0]);
			float fTemp193 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec9)));
			int iTemp194 = (fTemp193 > fSlow3) + (fTemp193 > fSlow31);
			float fTemp195 = std::max<float>(0.0f, ((iTemp194 == 0) ? 0.0f : ((iTemp194 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp193 + 12.5f - fSlow0) : fTemp193 + 12.0f - fSlow0)));
			float fTemp196 = ((-(0.75f * fTemp195) > fRec225[1]) ? fConst102 : fConst121);
			fRec225[0] = fRec225[1] * fTemp196 - 0.75f * fTemp195 * (1.0f - fTemp196);
			float fTemp197 = std::pow(1e+01f, fSlow27 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec225[0]))) + 1.5f)))));
			fVbargraph25 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp197)));
			float fTemp198 = fRec9 * fTemp197;
			float fTemp199 = std::fabs(fTemp198);
			fVec55[0] = fTemp199;
			float fTemp200 = std::max<float>(fTemp199, fVec55[1]);
			fVec56[0] = fTemp200;
			float fTemp201 = std::max<float>(fTemp200, fVec56[2]);
			fVec57[0] = fTemp201;
			float fTemp202 = std::max<float>(fTemp201, fVec57[4]);
			fVec58[0] = fTemp202;
			float fTemp203 = std::max<float>(fTemp202, fVec58[8]);
			fVec59[IOTA0 & 31] = fTemp203;
			float fTemp204 = std::max<float>(fTemp203, fVec59[(IOTA0 - 16) & 31]);
			fVec60[IOTA0 & 63] = fTemp204;
			float fTemp205 = std::max<float>(fTemp204, fVec60[(IOTA0 - 32) & 63]);
			fVec61[IOTA0 & 127] = fTemp205;
			float fTemp206 = std::max<float>(fTemp205, fVec61[(IOTA0 - 64) & 127]);
			fVec62[IOTA0 & 255] = fTemp206;
			float fTemp207 = std::max<float>(fTemp206, fVec62[(IOTA0 - 128) & 255]);
			fVec63[IOTA0 & 511] = fTemp207;
			fVec64[IOTA0 & 511] = std::max<float>(fTemp207, fVec63[(IOTA0 - 256) & 511]);
			float fTemp208 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst2) ? fTemp199 : -3.4028235e+38f), ((iConst103) ? fVec56[iConst2] : -3.4028235e+38f)), ((iConst104) ? fVec57[iConst105] : -3.4028235e+38f)), ((iConst106) ? fVec58[iConst107] : -3.4028235e+38f)), ((iConst108) ? fVec59[(IOTA0 - iConst109) & 31] : -3.4028235e+38f)), ((iConst110) ? fVec60[(IOTA0 - iConst111) & 63] : -3.4028235e+38f)), ((iConst112) ? fVec61[(IOTA0 - iConst113) & 127] : -3.4028235e+38f)), ((iConst114) ? fVec62[(IOTA0 - iConst115) & 255] : -3.4028235e+38f)), ((iConst116) ? fVec63[(IOTA0 - iConst117) & 511] : -3.4028235e+38f)), ((iConst118) ? fVec64[(IOTA0 - iConst119) & 511] : -3.4028235e+38f))));
			int iTemp209 = (fTemp208 > fSlow34) + (fTemp208 > fSlow33);
			float fTemp210 = fTemp163 * std::max<float>(-12.0f, fTemp161 * ((iTemp209 == 0) ? fTemp208 + 13.0f - fSlow1 : ((iTemp209 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp208 + 1e+01f - fSlow1)) : 0.0f)));
			float fTemp211 = ((iTemp162) ? 0.12f : 0.003f);
			int iTemp212 = std::fabs(fTemp211) < 1.1920929e-07f;
			float fTemp213 = ((iTemp162) ? 0.003f : 0.12f);
			int iTemp214 = std::fabs(fTemp213) < 1.1920929e-07f;
			float fTemp215 = ((fTemp210 > fRec224[1]) ? ((iTemp214) ? 0.0f : std::exp(-(fConst7 / ((iTemp214) ? 1.0f : fTemp213)))) : ((iTemp212) ? 0.0f : std::exp(-(fConst7 / ((iTemp212) ? 1.0f : fTemp211)))));
			fRec224[0] = fTemp210 * (1.0f - fTemp215) + fRec224[1] * fTemp215;
			fVbargraph26 = FAUSTFLOAT(fRec224[0]);
			float fTemp216 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec8)));
			int iTemp217 = (fTemp216 > fSlow31) + (fTemp216 > fSlow35);
			float fTemp218 = std::max<float>(0.0f, ((iTemp217 == 0) ? 0.0f : ((iTemp217 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp216 + 11.5f - fSlow0) : fTemp216 + 11.0f - fSlow0)));
			float fTemp219 = ((-(0.75f * fTemp218) > fRec227[1]) ? fConst122 : fConst4);
			fRec227[0] = fRec227[1] * fTemp219 - 0.75f * fTemp218 * (1.0f - fTemp219);
			float fTemp220 = std::pow(1e+01f, fSlow27 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec227[0]))) + 1.5f)))));
			fVbargraph27 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp220)));
			float fTemp221 = fRec8 * fTemp220;
			float fTemp222 = std::fabs(fTemp221);
			fVec65[0] = fTemp222;
			float fTemp223 = std::max<float>(fTemp222, fVec65[1]);
			fVec66[0] = fTemp223;
			float fTemp224 = std::max<float>(fTemp223, fVec66[2]);
			fVec67[0] = fTemp224;
			float fTemp225 = std::max<float>(fTemp224, fVec67[4]);
			fVec68[0] = fTemp225;
			float fTemp226 = std::max<float>(fTemp225, fVec68[8]);
			fVec69[IOTA0 & 31] = fTemp226;
			float fTemp227 = std::max<float>(fTemp226, fVec69[(IOTA0 - 16) & 31]);
			fVec70[IOTA0 & 63] = fTemp227;
			float fTemp228 = std::max<float>(fTemp227, fVec70[(IOTA0 - 32) & 63]);
			fVec71[IOTA0 & 127] = fTemp228;
			float fTemp229 = std::max<float>(fTemp228, fVec71[(IOTA0 - 64) & 127]);
			fVec72[IOTA0 & 255] = fTemp229;
			float fTemp230 = std::max<float>(fTemp229, fVec72[(IOTA0 - 128) & 255]);
			fVec73[IOTA0 & 511] = fTemp230;
			fVec74[IOTA0 & 511] = std::max<float>(fTemp230, fVec73[(IOTA0 - 256) & 511]);
			float fTemp231 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst2) ? fTemp222 : -3.4028235e+38f), ((iConst103) ? fVec66[iConst2] : -3.4028235e+38f)), ((iConst104) ? fVec67[iConst105] : -3.4028235e+38f)), ((iConst106) ? fVec68[iConst107] : -3.4028235e+38f)), ((iConst108) ? fVec69[(IOTA0 - iConst109) & 31] : -3.4028235e+38f)), ((iConst110) ? fVec70[(IOTA0 - iConst111) & 63] : -3.4028235e+38f)), ((iConst112) ? fVec71[(IOTA0 - iConst113) & 127] : -3.4028235e+38f)), ((iConst114) ? fVec72[(IOTA0 - iConst115) & 255] : -3.4028235e+38f)), ((iConst116) ? fVec73[(IOTA0 - iConst117) & 511] : -3.4028235e+38f)), ((iConst118) ? fVec74[(IOTA0 - iConst119) & 511] : -3.4028235e+38f))));
			int iTemp232 = (fTemp231 > fSlow34) + (fTemp231 > fSlow33);
			float fTemp233 = fTemp163 * std::max<float>(-12.0f, fTemp161 * ((iTemp232 == 0) ? fTemp231 + 13.0f - fSlow1 : ((iTemp232 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp231 + 1e+01f - fSlow1)) : 0.0f)));
			float fTemp234 = ((iTemp162) ? 0.16f : 0.004f);
			int iTemp235 = std::fabs(fTemp234) < 1.1920929e-07f;
			float fTemp236 = ((iTemp162) ? 0.004f : 0.16f);
			int iTemp237 = std::fabs(fTemp236) < 1.1920929e-07f;
			float fTemp238 = ((fTemp233 > fRec226[1]) ? ((iTemp237) ? 0.0f : std::exp(-(fConst7 / ((iTemp237) ? 1.0f : fTemp236)))) : ((iTemp235) ? 0.0f : std::exp(-(fConst7 / ((iTemp235) ? 1.0f : fTemp234)))));
			fRec226[0] = fTemp233 * (1.0f - fTemp238) + fRec226[1] * fTemp238;
			fVbargraph28 = FAUSTFLOAT(fRec226[0]);
			float fTemp239 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec7)));
			int iTemp240 = (fTemp239 > fSlow38) + (fTemp239 > fSlow37);
			float fTemp241 = std::max<float>(0.0f, ((iTemp240 == 0) ? 0.0f : ((iTemp240 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp239 + 8.5f - fSlow0) : fTemp239 + 8.0f - fSlow0)));
			float fTemp242 = ((-(0.75f * fTemp241) > fRec229[1]) ? fConst123 : fConst102);
			fRec229[0] = fRec229[1] * fTemp242 - 0.75f * fTemp241 * (1.0f - fTemp242);
			float fTemp243 = std::pow(1e+01f, fSlow27 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec229[0]))) + 1.5f)))));
			fVbargraph29 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp243)));
			float fTemp244 = fRec7 * fTemp243;
			float fTemp245 = std::fabs(fTemp244);
			fVec75[0] = fTemp245;
			float fTemp246 = std::max<float>(fTemp245, fVec75[1]);
			fVec76[0] = fTemp246;
			float fTemp247 = std::max<float>(fTemp246, fVec76[2]);
			fVec77[0] = fTemp247;
			float fTemp248 = std::max<float>(fTemp247, fVec77[4]);
			fVec78[0] = fTemp248;
			float fTemp249 = std::max<float>(fTemp248, fVec78[8]);
			fVec79[IOTA0 & 31] = fTemp249;
			float fTemp250 = std::max<float>(fTemp249, fVec79[(IOTA0 - 16) & 31]);
			fVec80[IOTA0 & 63] = fTemp250;
			float fTemp251 = std::max<float>(fTemp250, fVec80[(IOTA0 - 32) & 63]);
			fVec81[IOTA0 & 127] = fTemp251;
			float fTemp252 = std::max<float>(fTemp251, fVec81[(IOTA0 - 64) & 127]);
			fVec82[IOTA0 & 255] = fTemp252;
			float fTemp253 = std::max<float>(fTemp252, fVec82[(IOTA0 - 128) & 255]);
			fVec83[IOTA0 & 511] = fTemp253;
			fVec84[IOTA0 & 511] = std::max<float>(fTemp253, fVec83[(IOTA0 - 256) & 511]);
			float fTemp254 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst2) ? fTemp245 : -3.4028235e+38f), ((iConst103) ? fVec76[iConst2] : -3.4028235e+38f)), ((iConst104) ? fVec77[iConst105] : -3.4028235e+38f)), ((iConst106) ? fVec78[iConst107] : -3.4028235e+38f)), ((iConst108) ? fVec79[(IOTA0 - iConst109) & 31] : -3.4028235e+38f)), ((iConst110) ? fVec80[(IOTA0 - iConst111) & 63] : -3.4028235e+38f)), ((iConst112) ? fVec81[(IOTA0 - iConst113) & 127] : -3.4028235e+38f)), ((iConst114) ? fVec82[(IOTA0 - iConst115) & 255] : -3.4028235e+38f)), ((iConst116) ? fVec83[(IOTA0 - iConst117) & 511] : -3.4028235e+38f)), ((iConst118) ? fVec84[(IOTA0 - iConst119) & 511] : -3.4028235e+38f))));
			int iTemp255 = (fTemp254 > fSlow39) + (fTemp254 > fSlow36);
			float fTemp256 = fTemp163 * std::max<float>(-12.0f, fTemp161 * ((iTemp255 == 0) ? fTemp254 + 12.0f - fSlow1 : ((iTemp255 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp254 + 9.0f - fSlow1)) : 0.0f)));
			float fTemp257 = ((iTemp162) ? 0.2f : 0.005f);
			int iTemp258 = std::fabs(fTemp257) < 1.1920929e-07f;
			float fTemp259 = ((iTemp162) ? 0.005f : 0.2f);
			int iTemp260 = std::fabs(fTemp259) < 1.1920929e-07f;
			float fTemp261 = ((fTemp256 > fRec228[1]) ? ((iTemp260) ? 0.0f : std::exp(-(fConst7 / ((iTemp260) ? 1.0f : fTemp259)))) : ((iTemp258) ? 0.0f : std::exp(-(fConst7 / ((iTemp258) ? 1.0f : fTemp257)))));
			fRec228[0] = fTemp256 * (1.0f - fTemp261) + fRec228[1] * fTemp261;
			fVbargraph30 = FAUSTFLOAT(fRec228[0]);
			float fTemp262 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec6)));
			int iTemp263 = (fTemp262 > fSlow37) + (fTemp262 > fSlow40);
			float fTemp264 = std::max<float>(0.0f, ((iTemp263 == 0) ? 0.0f : ((iTemp263 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp262 + 7.5f - fSlow0) : fTemp262 + 7.0f - fSlow0)));
			float fTemp265 = ((-(0.75f * fTemp264) > fRec231[1]) ? fConst124 : fConst122);
			fRec231[0] = fRec231[1] * fTemp265 - 0.75f * fTemp264 * (1.0f - fTemp265);
			float fTemp266 = std::pow(1e+01f, fSlow27 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec231[0]))) + 1.5f)))));
			fVbargraph31 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp266)));
			float fTemp267 = fRec6 * fTemp266;
			float fTemp268 = std::fabs(fTemp267);
			fVec85[0] = fTemp268;
			float fTemp269 = std::max<float>(fTemp268, fVec85[1]);
			fVec86[0] = fTemp269;
			float fTemp270 = std::max<float>(fTemp269, fVec86[2]);
			fVec87[0] = fTemp270;
			float fTemp271 = std::max<float>(fTemp270, fVec87[4]);
			fVec88[0] = fTemp271;
			float fTemp272 = std::max<float>(fTemp271, fVec88[8]);
			fVec89[IOTA0 & 31] = fTemp272;
			float fTemp273 = std::max<float>(fTemp272, fVec89[(IOTA0 - 16) & 31]);
			fVec90[IOTA0 & 63] = fTemp273;
			float fTemp274 = std::max<float>(fTemp273, fVec90[(IOTA0 - 32) & 63]);
			fVec91[IOTA0 & 127] = fTemp274;
			float fTemp275 = std::max<float>(fTemp274, fVec91[(IOTA0 - 64) & 127]);
			fVec92[IOTA0 & 255] = fTemp275;
			float fTemp276 = std::max<float>(fTemp275, fVec92[(IOTA0 - 128) & 255]);
			fVec93[IOTA0 & 511] = fTemp276;
			fVec94[IOTA0 & 511] = std::max<float>(fTemp276, fVec93[(IOTA0 - 256) & 511]);
			float fTemp277 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst2) ? fTemp268 : -3.4028235e+38f), ((iConst103) ? fVec86[iConst2] : -3.4028235e+38f)), ((iConst104) ? fVec87[iConst105] : -3.4028235e+38f)), ((iConst106) ? fVec88[iConst107] : -3.4028235e+38f)), ((iConst108) ? fVec89[(IOTA0 - iConst109) & 31] : -3.4028235e+38f)), ((iConst110) ? fVec90[(IOTA0 - iConst111) & 63] : -3.4028235e+38f)), ((iConst112) ? fVec91[(IOTA0 - iConst113) & 127] : -3.4028235e+38f)), ((iConst114) ? fVec92[(IOTA0 - iConst115) & 255] : -3.4028235e+38f)), ((iConst116) ? fVec93[(IOTA0 - iConst117) & 511] : -3.4028235e+38f)), ((iConst118) ? fVec94[(IOTA0 - iConst119) & 511] : -3.4028235e+38f))));
			int iTemp278 = (fTemp277 > fSlow39) + (fTemp277 > fSlow36);
			float fTemp279 = fTemp163 * std::max<float>(-12.0f, fTemp161 * ((iTemp278 == 0) ? fTemp277 + 12.0f - fSlow1 : ((iTemp278 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp277 + 9.0f - fSlow1)) : 0.0f)));
			float fTemp280 = ((iTemp162) ? 0.2f : 0.006f);
			int iTemp281 = std::fabs(fTemp280) < 1.1920929e-07f;
			float fTemp282 = ((iTemp162) ? 0.006f : 0.2f);
			int iTemp283 = std::fabs(fTemp282) < 1.1920929e-07f;
			float fTemp284 = ((fTemp279 > fRec230[1]) ? ((iTemp283) ? 0.0f : std::exp(-(fConst7 / ((iTemp283) ? 1.0f : fTemp282)))) : ((iTemp281) ? 0.0f : std::exp(-(fConst7 / ((iTemp281) ? 1.0f : fTemp280)))));
			fRec230[0] = fTemp279 * (1.0f - fTemp284) + fRec230[1] * fTemp284;
			fVbargraph32 = FAUSTFLOAT(fRec230[0]);
			float fTemp285 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec5)));
			int iTemp286 = (fTemp285 > fSlow40) + (fTemp285 > fSlow41);
			float fTemp287 = std::max<float>(0.0f, ((iTemp286 == 0) ? 0.0f : ((iTemp286 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp285 + 6.5f - fSlow0) : fTemp285 + 6.0f - fSlow0)));
			float fTemp288 = ((-(0.75f * fTemp287) > fRec233[1]) ? fConst125 : fConst3);
			fRec233[0] = fRec233[1] * fTemp288 - 0.75f * fTemp287 * (1.0f - fTemp288);
			float fTemp289 = std::pow(1e+01f, fSlow27 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec233[0]))) + 1.5f)))));
			fVbargraph33 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp289)));
			float fTemp290 = fRec5 * fTemp289;
			float fTemp291 = std::fabs(fTemp290);
			fVec95[0] = fTemp291;
			float fTemp292 = std::max<float>(fTemp291, fVec95[1]);
			fVec96[0] = fTemp292;
			float fTemp293 = std::max<float>(fTemp292, fVec96[2]);
			fVec97[0] = fTemp293;
			float fTemp294 = std::max<float>(fTemp293, fVec97[4]);
			fVec98[0] = fTemp294;
			float fTemp295 = std::max<float>(fTemp294, fVec98[8]);
			fVec99[IOTA0 & 31] = fTemp295;
			float fTemp296 = std::max<float>(fTemp295, fVec99[(IOTA0 - 16) & 31]);
			fVec100[IOTA0 & 63] = fTemp296;
			float fTemp297 = std::max<float>(fTemp296, fVec100[(IOTA0 - 32) & 63]);
			fVec101[IOTA0 & 127] = fTemp297;
			float fTemp298 = std::max<float>(fTemp297, fVec101[(IOTA0 - 64) & 127]);
			fVec102[IOTA0 & 255] = fTemp298;
			float fTemp299 = std::max<float>(fTemp298, fVec102[(IOTA0 - 128) & 255]);
			fVec103[IOTA0 & 511] = fTemp299;
			fVec104[IOTA0 & 511] = std::max<float>(fTemp299, fVec103[(IOTA0 - 256) & 511]);
			float fTemp300 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst2) ? fTemp291 : -3.4028235e+38f), ((iConst103) ? fVec96[iConst2] : -3.4028235e+38f)), ((iConst104) ? fVec97[iConst105] : -3.4028235e+38f)), ((iConst106) ? fVec98[iConst107] : -3.4028235e+38f)), ((iConst108) ? fVec99[(IOTA0 - iConst109) & 31] : -3.4028235e+38f)), ((iConst110) ? fVec100[(IOTA0 - iConst111) & 63] : -3.4028235e+38f)), ((iConst112) ? fVec101[(IOTA0 - iConst113) & 127] : -3.4028235e+38f)), ((iConst114) ? fVec102[(IOTA0 - iConst115) & 255] : -3.4028235e+38f)), ((iConst116) ? fVec103[(IOTA0 - iConst117) & 511] : -3.4028235e+38f)), ((iConst118) ? fVec104[(IOTA0 - iConst119) & 511] : -3.4028235e+38f))));
			int iTemp301 = (fTemp300 > fSlow39) + (fTemp300 > fSlow36);
			float fTemp302 = fTemp163 * std::max<float>(-12.0f, fTemp161 * ((iTemp301 == 0) ? fTemp300 + 12.0f - fSlow1 : ((iTemp301 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp300 + 9.0f - fSlow1)) : 0.0f)));
			float fTemp303 = ((iTemp162) ? 0.2f : 0.007f);
			int iTemp304 = std::fabs(fTemp303) < 1.1920929e-07f;
			float fTemp305 = ((iTemp162) ? 0.007f : 0.2f);
			int iTemp306 = std::fabs(fTemp305) < 1.1920929e-07f;
			float fTemp307 = ((fTemp302 > fRec232[1]) ? ((iTemp306) ? 0.0f : std::exp(-(fConst7 / ((iTemp306) ? 1.0f : fTemp305)))) : ((iTemp304) ? 0.0f : std::exp(-(fConst7 / ((iTemp304) ? 1.0f : fTemp303)))));
			fRec232[0] = fTemp302 * (1.0f - fTemp307) + fRec232[1] * fTemp307;
			fVbargraph34 = FAUSTFLOAT(fRec232[0]);
			float fTemp308 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec4)));
			int iTemp309 = (fTemp308 > fSlow40) + (fTemp308 > fSlow41);
			float fTemp310 = std::max<float>(0.0f, ((iTemp309 == 0) ? 0.0f : ((iTemp309 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp308 + 6.5f - fSlow0) : fTemp308 + 6.0f - fSlow0)));
			float fTemp311 = ((-(0.75f * fTemp310) > fRec235[1]) ? fConst85 : fConst126);
			fRec235[0] = fRec235[1] * fTemp311 - 0.75f * fTemp310 * (1.0f - fTemp311);
			float fTemp312 = std::pow(1e+01f, fSlow27 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec235[0]))) + 1.5f)))));
			fVbargraph35 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp312)));
			float fTemp313 = fRec4 * fTemp312;
			float fTemp314 = std::fabs(fTemp313);
			fVec105[0] = fTemp314;
			float fTemp315 = std::max<float>(fTemp314, fVec105[1]);
			fVec106[0] = fTemp315;
			float fTemp316 = std::max<float>(fTemp315, fVec106[2]);
			fVec107[0] = fTemp316;
			float fTemp317 = std::max<float>(fTemp316, fVec107[4]);
			fVec108[0] = fTemp317;
			float fTemp318 = std::max<float>(fTemp317, fVec108[8]);
			fVec109[IOTA0 & 31] = fTemp318;
			float fTemp319 = std::max<float>(fTemp318, fVec109[(IOTA0 - 16) & 31]);
			fVec110[IOTA0 & 63] = fTemp319;
			float fTemp320 = std::max<float>(fTemp319, fVec110[(IOTA0 - 32) & 63]);
			fVec111[IOTA0 & 127] = fTemp320;
			float fTemp321 = std::max<float>(fTemp320, fVec111[(IOTA0 - 64) & 127]);
			fVec112[IOTA0 & 255] = fTemp321;
			float fTemp322 = std::max<float>(fTemp321, fVec112[(IOTA0 - 128) & 255]);
			fVec113[IOTA0 & 511] = fTemp322;
			fVec114[IOTA0 & 511] = std::max<float>(fTemp322, fVec113[(IOTA0 - 256) & 511]);
			float fTemp323 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst2) ? fTemp314 : -3.4028235e+38f), ((iConst103) ? fVec106[iConst2] : -3.4028235e+38f)), ((iConst104) ? fVec107[iConst105] : -3.4028235e+38f)), ((iConst106) ? fVec108[iConst107] : -3.4028235e+38f)), ((iConst108) ? fVec109[(IOTA0 - iConst109) & 31] : -3.4028235e+38f)), ((iConst110) ? fVec110[(IOTA0 - iConst111) & 63] : -3.4028235e+38f)), ((iConst112) ? fVec111[(IOTA0 - iConst113) & 127] : -3.4028235e+38f)), ((iConst114) ? fVec112[(IOTA0 - iConst115) & 255] : -3.4028235e+38f)), ((iConst116) ? fVec113[(IOTA0 - iConst117) & 511] : -3.4028235e+38f)), ((iConst118) ? fVec114[(IOTA0 - iConst119) & 511] : -3.4028235e+38f))));
			int iTemp324 = (fTemp323 > fSlow39) + (fTemp323 > fSlow36);
			float fTemp325 = std::max<float>(-12.0f, ((iTemp324 == 0) ? fTemp323 + 12.0f - fSlow1 : ((iTemp324 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp323 + 9.0f - fSlow1)) : 0.0f)) * fTemp161) * fTemp163;
			float fTemp326 = ((iTemp162) ? 0.2f : 0.008f);
			int iTemp327 = std::fabs(fTemp326) < 1.1920929e-07f;
			float fTemp328 = ((iTemp162) ? 0.008f : 0.2f);
			int iTemp329 = std::fabs(fTemp328) < 1.1920929e-07f;
			float fTemp330 = ((fTemp325 > fRec234[1]) ? ((iTemp329) ? 0.0f : std::exp(-(fConst7 / ((iTemp329) ? 1.0f : fTemp328)))) : ((iTemp327) ? 0.0f : std::exp(-(fConst7 / ((iTemp327) ? 1.0f : fTemp326)))));
			fRec234[0] = fTemp325 * (1.0f - fTemp330) + fRec234[1] * fTemp330;
			fVbargraph36 = FAUSTFLOAT(fRec234[0]);
			float fTemp331 = fTemp313 * std::pow(1e+01f, 0.05f * fRec234[0]) + fTemp290 * std::pow(1e+01f, 0.05f * fRec232[0]) + fTemp267 * std::pow(1e+01f, 0.05f * fRec230[0]) + fTemp244 * std::pow(1e+01f, 0.05f * fRec228[0]) + fTemp221 * std::pow(1e+01f, 0.05f * fRec226[0]) + fTemp198 * std::pow(1e+01f, 0.05f * fRec224[0]) + fTemp175 * std::pow(1e+01f, 0.05f * fRec222[0]) + fTemp148 * std::pow(1e+01f, 0.05f * fRec1[0]);
			fVec115[IOTA0 & 2047] = fTemp331;
			float fTemp332 = std::fabs(fTemp331);
			int iTemp333 = (fTemp332 >= fRec239[1]) | (float(iRec238[1]) >= fConst9);
			iRec238[0] = ((iTemp333) ? 0 : iRec238[1] + 1);
			fRec239[0] = ((iTemp333) ? fTemp332 : fRec239[1]);
			fRec237[0] = fConst129 * fRec239[0] + fConst128 * fRec237[1];
			float fTemp334 = std::fabs(fRec237[0]);
			fRec236[0] = std::max<float>(fTemp334, fConst130 * fRec236[1] + fConst131 * fTemp334);
			float fTemp335 = std::min<float>(1.0f, 0.8912509f / std::max<float>(fRec236[0], 1.1920929e-07f));
			fVbargraph37 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp335))));
			float fTemp336 = fTemp335 * fVec115[(IOTA0 - iConst127) & 2047];
			fRec0[0] = std::max<float>(fRec0[1] - fConst1, std::min<float>(12.0f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(0.00031622776f, std::fabs(fTemp336))))));
			fVbargraph38 = FAUSTFLOAT(fRec0[0]);
			float fTemp337 = fTemp336;
			fVec116[0] = fTemp337;
			output0[i0] = FAUSTFLOAT(fTemp337);
			fVbargraph39 = FAUSTFLOAT(fRec0[0]);
			float fTemp338 = fTemp336;
			fVec117[0] = fTemp338;
			fVec118[0] = fConst19 * fRec242[1] - fConst17 * fVec117[1];
			fRec243[0] = fConst22 * (fConst21 * fVec117[1] - (fVec118[1] + fConst16 * fRec243[1]) + fConst15 * fTemp338);
			fRec242[0] = fRec243[0];
			fVec119[0] = 0.50032705f * fRec242[1] - fConst27 * fRec240[1];
			fRec241[0] = fConst28 * (fVec119[1] - fConst25 * fRec241[1] - 1.0006541f * fRec242[1] + 0.50032705f * fRec242[0]);
			fRec240[0] = fRec241[0];
			float fTemp339 = mydsp_faustpower2_f(fRec240[0]);
			fVec120[0] = fTemp339;
			float fTemp340 = fTemp339 + fVec120[1];
			fVec121[0] = fTemp340;
			float fTemp341 = fTemp340 + fVec121[2];
			fVec122[0] = fTemp341;
			float fTemp342 = fTemp341 + fVec122[4];
			fVec123[0] = fTemp342;
			float fTemp343 = fTemp342 + fVec123[8];
			fVec124[IOTA0 & 31] = fTemp343;
			float fTemp344 = fTemp343 + fVec124[(IOTA0 - 16) & 31];
			fVec125[IOTA0 & 63] = fTemp344;
			float fTemp345 = fTemp344 + fVec125[(IOTA0 - 32) & 63];
			fVec126[IOTA0 & 127] = fTemp345;
			float fTemp346 = fTemp345 + fVec126[(IOTA0 - 64) & 127];
			fVec127[IOTA0 & 255] = fTemp346;
			float fTemp347 = fTemp346 + fVec127[(IOTA0 - 128) & 255];
			fVec128[IOTA0 & 511] = fTemp347;
			float fTemp348 = fTemp347 + fVec128[(IOTA0 - 256) & 511];
			fVec129[IOTA0 & 1023] = fTemp348;
			float fTemp349 = fTemp348 + fVec129[(IOTA0 - 512) & 1023];
			fVec130[IOTA0 & 2047] = fTemp349;
			float fTemp350 = fTemp349 + fVec130[(IOTA0 - 1024) & 2047];
			fVec131[IOTA0 & 4095] = fTemp350;
			float fTemp351 = fTemp350 + fVec131[(IOTA0 - 2048) & 4095];
			fVec132[IOTA0 & 8191] = fTemp351;
			float fTemp352 = fTemp351 + fVec132[(IOTA0 - 4096) & 8191];
			fVec133[IOTA0 & 16383] = fTemp352;
			float fTemp353 = fTemp352 + fVec133[(IOTA0 - 8192) & 16383];
			fVec134[IOTA0 & 32767] = fTemp353;
			float fTemp354 = fTemp353 + fVec134[(IOTA0 - 16384) & 32767];
			fVec135[IOTA0 & 65535] = fTemp354;
			float fTemp355 = fTemp354 + fVec135[(IOTA0 - 32768) & 65535];
			fVec136[IOTA0 & 131071] = fTemp355;
			fVec137[IOTA0 & 262143] = fTemp355 + fVec136[(IOTA0 - 65536) & 131071];
			fVec138[0] = fConst19 * fRec246[1] - fConst17 * fVec116[1];
			fRec247[0] = fConst22 * (fConst21 * fVec116[1] - (fVec138[1] + fConst16 * fRec247[1]) + fConst15 * fTemp337);
			fRec246[0] = fRec247[0];
			fVec139[0] = 0.50032705f * fRec246[1] - fConst27 * fRec244[1];
			fRec245[0] = fConst28 * (fVec139[1] - fConst25 * fRec245[1] - 1.0006541f * fRec246[1] + 0.50032705f * fRec246[0]);
			fRec244[0] = fRec245[0];
			float fTemp356 = mydsp_faustpower2_f(fRec244[0]);
			fVec140[0] = fTemp356;
			float fTemp357 = fTemp356 + fVec140[1];
			fVec141[0] = fTemp357;
			float fTemp358 = fTemp357 + fVec141[2];
			fVec142[0] = fTemp358;
			float fTemp359 = fTemp358 + fVec142[4];
			fVec143[0] = fTemp359;
			float fTemp360 = fTemp359 + fVec143[8];
			fVec144[IOTA0 & 31] = fTemp360;
			float fTemp361 = fTemp360 + fVec144[(IOTA0 - 16) & 31];
			fVec145[IOTA0 & 63] = fTemp361;
			float fTemp362 = fTemp361 + fVec145[(IOTA0 - 32) & 63];
			fVec146[IOTA0 & 127] = fTemp362;
			float fTemp363 = fTemp362 + fVec146[(IOTA0 - 64) & 127];
			fVec147[IOTA0 & 255] = fTemp363;
			float fTemp364 = fTemp363 + fVec147[(IOTA0 - 128) & 255];
			fVec148[IOTA0 & 511] = fTemp364;
			float fTemp365 = fTemp364 + fVec148[(IOTA0 - 256) & 511];
			fVec149[IOTA0 & 1023] = fTemp365;
			float fTemp366 = fTemp365 + fVec149[(IOTA0 - 512) & 1023];
			fVec150[IOTA0 & 2047] = fTemp366;
			float fTemp367 = fTemp366 + fVec150[(IOTA0 - 1024) & 2047];
			fVec151[IOTA0 & 4095] = fTemp367;
			float fTemp368 = fTemp367 + fVec151[(IOTA0 - 2048) & 4095];
			fVec152[IOTA0 & 8191] = fTemp368;
			float fTemp369 = fTemp368 + fVec152[(IOTA0 - 4096) & 8191];
			fVec153[IOTA0 & 16383] = fTemp369;
			float fTemp370 = fTemp369 + fVec153[(IOTA0 - 8192) & 16383];
			fVec154[IOTA0 & 32767] = fTemp370;
			float fTemp371 = fTemp370 + fVec154[(IOTA0 - 16384) & 32767];
			fVec155[IOTA0 & 65535] = fTemp371;
			float fTemp372 = fTemp371 + fVec155[(IOTA0 - 32768) & 65535];
			fVec156[IOTA0 & 131071] = fTemp372;
			fVec157[IOTA0 & 262143] = fTemp372 + fVec156[(IOTA0 - 65536) & 131071];
			fVbargraph40 = FAUSTFLOAT(4.3429446f * std::log(std::max<float>(1e-12f, fConst167 * (((iConst165) ? 0.86000985f * fVec157[(IOTA0 - iConst166) & 262143] : 0.0f) + ((iConst163) ? 0.86000985f * fVec156[(IOTA0 - iConst164) & 131071] : 0.0f) + ((iConst161) ? 0.86000985f * fVec155[(IOTA0 - iConst162) & 65535] : 0.0f) + ((iConst159) ? 0.86000985f * fVec154[(IOTA0 - iConst160) & 32767] : 0.0f) + ((iConst157) ? 0.86000985f * fVec153[(IOTA0 - iConst158) & 16383] : 0.0f) + ((iConst155) ? 0.86000985f * fVec152[(IOTA0 - iConst156) & 8191] : 0.0f) + ((iConst153) ? 0.86000985f * fVec151[(IOTA0 - iConst154) & 4095] : 0.0f) + ((iConst151) ? 0.86000985f * fVec150[(IOTA0 - iConst152) & 2047] : 0.0f) + ((iConst149) ? 0.86000985f * fVec149[(IOTA0 - iConst150) & 1023] : 0.0f) + ((iConst147) ? 0.86000985f * fVec148[(IOTA0 - iConst148) & 511] : 0.0f) + ((iConst145) ? 0.86000985f * fVec147[(IOTA0 - iConst146) & 255] : 0.0f) + ((iConst143) ? 0.86000985f * fVec146[(IOTA0 - iConst144) & 127] : 0.0f) + ((iConst141) ? 0.86000985f * fVec145[(IOTA0 - iConst142) & 63] : 0.0f) + ((iConst139) ? 0.86000985f * fVec144[(IOTA0 - iConst140) & 31] : 0.0f) + ((iConst137) ? 0.86000985f * fVec143[iConst138] : 0.0f) + ((iConst135) ? 0.86000985f * fVec142[iConst136] : 0.0f) + ((iConst134) ? 0.86000985f * fTemp356 : 0.0f) + ((iConst133) ? 0.86000985f * fVec141[iConst134] : 0.0f) + ((iConst165) ? 0.86000985f * fVec137[(IOTA0 - iConst166) & 262143] : 0.0f) + ((iConst163) ? 0.86000985f * fVec136[(IOTA0 - iConst164) & 131071] : 0.0f) + ((iConst161) ? 0.86000985f * fVec135[(IOTA0 - iConst162) & 65535] : 0.0f) + ((iConst159) ? 0.86000985f * fVec134[(IOTA0 - iConst160) & 32767] : 0.0f) + ((iConst157) ? 0.86000985f * fVec133[(IOTA0 - iConst158) & 16383] : 0.0f) + ((iConst155) ? 0.86000985f * fVec132[(IOTA0 - iConst156) & 8191] : 0.0f) + ((iConst153) ? 0.86000985f * fVec131[(IOTA0 - iConst154) & 4095] : 0.0f) + ((iConst151) ? 0.86000985f * fVec130[(IOTA0 - iConst152) & 2047] : 0.0f) + ((iConst149) ? 0.86000985f * fVec129[(IOTA0 - iConst150) & 1023] : 0.0f) + ((iConst147) ? 0.86000985f * fVec128[(IOTA0 - iConst148) & 511] : 0.0f) + ((iConst145) ? 0.86000985f * fVec127[(IOTA0 - iConst146) & 255] : 0.0f) + ((iConst143) ? 0.86000985f * fVec126[(IOTA0 - iConst144) & 127] : 0.0f) + ((iConst141) ? 0.86000985f * fVec125[(IOTA0 - iConst142) & 63] : 0.0f) + ((iConst139) ? 0.86000985f * fVec124[(IOTA0 - iConst140) & 31] : 0.0f) + ((iConst137) ? 0.86000985f * fVec123[iConst138] : 0.0f) + ((iConst135) ? 0.86000985f * fVec122[iConst136] : 0.0f) + ((iConst134) ? 0.86000985f * fTemp339 : 0.0f) + ((iConst133) ? 0.86000985f * fVec121[iConst134] : 0.0f)))) + -0.691f);
			output1[i0] = FAUSTFLOAT(fTemp338);
			fRec73[1] = fRec73[0];
			fVec0[1] = fVec0[0];
			fRec77[1] = fRec77[0];
			fRec76[1] = fRec76[0];
			fVec1[1] = fVec1[0];
			fRec75[1] = fRec75[0];
			fRec74[1] = fRec74[0];
			fVec2[1] = fVec2[0];
			fVec3[2] = fVec3[1];
			fVec3[1] = fVec3[0];
			for (int j0 = 4; j0 > 0; j0 = j0 - 1) {
				fVec4[j0] = fVec4[j0 - 1];
			}
			for (int j1 = 11; j1 > 0; j1 = j1 - 1) {
				fVec5[j1] = fVec5[j1 - 1];
			}
			IOTA0 = IOTA0 + 1;
			fRec68[1] = fRec68[0];
			fRec69[1] = fRec69[0];
			fRec66[1] = fRec66[0];
			fRec65[1] = fRec65[0];
			fRec80[1] = fRec80[0];
			fRec79[1] = fRec79[0];
			fRec81[1] = fRec81[0];
			fVec11[1] = fVec11[0];
			fRec78[1] = fRec78[0];
			fVec12[1] = fVec12[0];
			fRec60[1] = fRec60[0];
			fRec61[1] = fRec61[0];
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
			fRec33[1] = fRec33[0];
			fRec34[1] = fRec34[0];
			fRec29[1] = fRec29[0];
			fRec30[1] = fRec30[0];
			fRec24[1] = fRec24[0];
			fRec25[1] = fRec25[0];
			fRec19[1] = fRec19[0];
			fRec20[1] = fRec20[0];
			fVec13[1] = fVec13[0];
			fVec14[1] = fVec14[0];
			fRec18[1] = fRec18[0];
			fRec17[1] = fRec17[0];
			fVec15[1] = fVec15[0];
			fRec16[1] = fRec16[0];
			fRec15[1] = fRec15[0];
			fRec14[1] = fRec14[0];
			fRec13[1] = fRec13[0];
			fVec16[1] = fVec16[0];
			fRec87[1] = fRec87[0];
			fRec86[1] = fRec86[0];
			fVec17[1] = fVec17[0];
			fRec85[1] = fRec85[0];
			fRec84[1] = fRec84[0];
			fRec83[1] = fRec83[0];
			fRec82[1] = fRec82[0];
			fRec12[1] = fRec12[0];
			fRec95[1] = fRec95[0];
			fRec96[1] = fRec96[0];
			fRec97[1] = fRec97[0];
			fVec18[1] = fVec18[0];
			fRec94[1] = fRec94[0];
			fRec93[1] = fRec93[0];
			fVec19[1] = fVec19[0];
			fRec92[1] = fRec92[0];
			fRec91[1] = fRec91[0];
			fRec90[1] = fRec90[0];
			fRec89[1] = fRec89[0];
			fRec88[1] = fRec88[0];
			fRec119[1] = fRec119[0];
			fRec120[1] = fRec120[0];
			fRec115[1] = fRec115[0];
			fRec116[1] = fRec116[0];
			fRec110[1] = fRec110[0];
			fRec111[1] = fRec111[0];
			fRec105[1] = fRec105[0];
			fRec106[1] = fRec106[0];
			fVec20[1] = fVec20[0];
			fVec21[1] = fVec21[0];
			fRec104[1] = fRec104[0];
			fRec103[1] = fRec103[0];
			fVec22[1] = fVec22[0];
			fRec102[1] = fRec102[0];
			fRec101[1] = fRec101[0];
			fRec100[1] = fRec100[0];
			fRec99[1] = fRec99[0];
			fRec98[1] = fRec98[0];
			fRec129[1] = fRec129[0];
			fRec130[1] = fRec130[0];
			fRec131[1] = fRec131[0];
			fVec23[1] = fVec23[0];
			fRec128[1] = fRec128[0];
			fRec127[1] = fRec127[0];
			fVec24[1] = fVec24[0];
			fRec126[1] = fRec126[0];
			fRec125[1] = fRec125[0];
			fRec124[1] = fRec124[0];
			fRec123[1] = fRec123[0];
			fRec122[1] = fRec122[0];
			fRec175[1] = fRec175[0];
			fRec176[1] = fRec176[0];
			fRec171[1] = fRec171[0];
			fRec172[1] = fRec172[0];
			fRec167[1] = fRec167[0];
			fRec168[1] = fRec168[0];
			fRec163[1] = fRec163[0];
			fRec164[1] = fRec164[0];
			fRec158[1] = fRec158[0];
			fRec159[1] = fRec159[0];
			fRec153[1] = fRec153[0];
			fRec154[1] = fRec154[0];
			fRec149[1] = fRec149[0];
			fRec150[1] = fRec150[0];
			fRec144[1] = fRec144[0];
			fRec145[1] = fRec145[0];
			fRec139[1] = fRec139[0];
			fRec140[1] = fRec140[0];
			fVec25[1] = fVec25[0];
			fVec26[1] = fVec26[0];
			fRec138[1] = fRec138[0];
			fRec137[1] = fRec137[0];
			fVec27[1] = fVec27[0];
			fRec136[1] = fRec136[0];
			fRec135[1] = fRec135[0];
			fRec134[1] = fRec134[0];
			fRec133[1] = fRec133[0];
			fRec132[1] = fRec132[0];
			fRec185[1] = fRec185[0];
			fRec186[1] = fRec186[0];
			fRec187[1] = fRec187[0];
			fVec28[1] = fVec28[0];
			fRec184[1] = fRec184[0];
			fRec183[1] = fRec183[0];
			fVec29[1] = fVec29[0];
			fRec182[1] = fRec182[0];
			fRec181[1] = fRec181[0];
			fRec180[1] = fRec180[0];
			fRec179[1] = fRec179[0];
			fRec178[1] = fRec178[0];
			fRec209[1] = fRec209[0];
			fRec210[1] = fRec210[0];
			fRec205[1] = fRec205[0];
			fRec206[1] = fRec206[0];
			fRec200[1] = fRec200[0];
			fRec201[1] = fRec201[0];
			fRec195[1] = fRec195[0];
			fRec196[1] = fRec196[0];
			fVec30[1] = fVec30[0];
			fVec31[1] = fVec31[0];
			fRec194[1] = fRec194[0];
			fRec193[1] = fRec193[0];
			fVec32[1] = fVec32[0];
			fRec192[1] = fRec192[0];
			fRec191[1] = fRec191[0];
			fRec190[1] = fRec190[0];
			fRec189[1] = fRec189[0];
			fRec188[1] = fRec188[0];
			fRec219[1] = fRec219[0];
			fRec220[1] = fRec220[0];
			fRec221[1] = fRec221[0];
			fVec33[1] = fVec33[0];
			fRec218[1] = fRec218[0];
			fRec217[1] = fRec217[0];
			fVec34[1] = fVec34[0];
			fRec216[1] = fRec216[0];
			fRec215[1] = fRec215[0];
			fRec214[1] = fRec214[0];
			fRec213[1] = fRec213[0];
			fRec212[1] = fRec212[0];
			fRec3[2] = fRec3[1];
			fRec3[1] = fRec3[0];
			fRec2[1] = fRec2[0];
			fVec35[1] = fVec35[0];
			fVec36[2] = fVec36[1];
			fVec36[1] = fVec36[0];
			for (int j2 = 4; j2 > 0; j2 = j2 - 1) {
				fVec37[j2] = fVec37[j2 - 1];
			}
			for (int j3 = 11; j3 > 0; j3 = j3 - 1) {
				fVec38[j3] = fVec38[j3 - 1];
			}
			fRec1[1] = fRec1[0];
			fRec223[1] = fRec223[0];
			fVec45[1] = fVec45[0];
			fVec46[2] = fVec46[1];
			fVec46[1] = fVec46[0];
			for (int j4 = 4; j4 > 0; j4 = j4 - 1) {
				fVec47[j4] = fVec47[j4 - 1];
			}
			for (int j5 = 11; j5 > 0; j5 = j5 - 1) {
				fVec48[j5] = fVec48[j5 - 1];
			}
			fRec222[1] = fRec222[0];
			fRec225[1] = fRec225[0];
			fVec55[1] = fVec55[0];
			fVec56[2] = fVec56[1];
			fVec56[1] = fVec56[0];
			for (int j6 = 4; j6 > 0; j6 = j6 - 1) {
				fVec57[j6] = fVec57[j6 - 1];
			}
			for (int j7 = 11; j7 > 0; j7 = j7 - 1) {
				fVec58[j7] = fVec58[j7 - 1];
			}
			fRec224[1] = fRec224[0];
			fRec227[1] = fRec227[0];
			fVec65[1] = fVec65[0];
			fVec66[2] = fVec66[1];
			fVec66[1] = fVec66[0];
			for (int j8 = 4; j8 > 0; j8 = j8 - 1) {
				fVec67[j8] = fVec67[j8 - 1];
			}
			for (int j9 = 11; j9 > 0; j9 = j9 - 1) {
				fVec68[j9] = fVec68[j9 - 1];
			}
			fRec226[1] = fRec226[0];
			fRec229[1] = fRec229[0];
			fVec75[1] = fVec75[0];
			fVec76[2] = fVec76[1];
			fVec76[1] = fVec76[0];
			for (int j10 = 4; j10 > 0; j10 = j10 - 1) {
				fVec77[j10] = fVec77[j10 - 1];
			}
			for (int j11 = 11; j11 > 0; j11 = j11 - 1) {
				fVec78[j11] = fVec78[j11 - 1];
			}
			fRec228[1] = fRec228[0];
			fRec231[1] = fRec231[0];
			fVec85[1] = fVec85[0];
			fVec86[2] = fVec86[1];
			fVec86[1] = fVec86[0];
			for (int j12 = 4; j12 > 0; j12 = j12 - 1) {
				fVec87[j12] = fVec87[j12 - 1];
			}
			for (int j13 = 11; j13 > 0; j13 = j13 - 1) {
				fVec88[j13] = fVec88[j13 - 1];
			}
			fRec230[1] = fRec230[0];
			fRec233[1] = fRec233[0];
			fVec95[1] = fVec95[0];
			fVec96[2] = fVec96[1];
			fVec96[1] = fVec96[0];
			for (int j14 = 4; j14 > 0; j14 = j14 - 1) {
				fVec97[j14] = fVec97[j14 - 1];
			}
			for (int j15 = 11; j15 > 0; j15 = j15 - 1) {
				fVec98[j15] = fVec98[j15 - 1];
			}
			fRec232[1] = fRec232[0];
			fRec235[1] = fRec235[0];
			fVec105[1] = fVec105[0];
			fVec106[2] = fVec106[1];
			fVec106[1] = fVec106[0];
			for (int j16 = 4; j16 > 0; j16 = j16 - 1) {
				fVec107[j16] = fVec107[j16 - 1];
			}
			for (int j17 = 11; j17 > 0; j17 = j17 - 1) {
				fVec108[j17] = fVec108[j17 - 1];
			}
			fRec234[1] = fRec234[0];
			iRec238[1] = iRec238[0];
			fRec239[1] = fRec239[0];
			fRec237[1] = fRec237[0];
			fRec236[1] = fRec236[0];
			fRec0[1] = fRec0[0];
			fVec116[1] = fVec116[0];
			fVec117[1] = fVec117[0];
			fVec118[1] = fVec118[0];
			fRec243[1] = fRec243[0];
			fRec242[1] = fRec242[0];
			fVec119[1] = fVec119[0];
			fRec241[1] = fRec241[0];
			fRec240[1] = fRec240[0];
			fVec120[1] = fVec120[0];
			fVec121[2] = fVec121[1];
			fVec121[1] = fVec121[0];
			for (int j18 = 4; j18 > 0; j18 = j18 - 1) {
				fVec122[j18] = fVec122[j18 - 1];
			}
			for (int j19 = 11; j19 > 0; j19 = j19 - 1) {
				fVec123[j19] = fVec123[j19 - 1];
			}
			fVec138[1] = fVec138[0];
			fRec247[1] = fRec247[0];
			fRec246[1] = fRec246[0];
			fVec139[1] = fVec139[0];
			fRec245[1] = fRec245[0];
			fRec244[1] = fRec244[0];
			fVec140[1] = fVec140[0];
			fVec141[2] = fVec141[1];
			fVec141[1] = fVec141[0];
			for (int j20 = 4; j20 > 0; j20 = j20 - 1) {
				fVec142[j20] = fVec142[j20 - 1];
			}
			for (int j21 = 11; j21 > 0; j21 = j21 - 1) {
				fVec143[j21] = fVec143[j21 - 1];
			}
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
    std::unique_ptr<mydsp> dsp;

public:
    FaustGeneratedPlugin(const uint32_t extraParameters = 0,
                         const uint32_t extraPrograms = 0,
                         const uint32_t extraStates = 0)
        : Plugin(kParameterCount + extraParameters, kProgramCount + extraPrograms, kStateCount + extraStates)
    {
        dsp = std::make_unique<mydsp>();
        dsp->init(getSampleRate());

        // passive controls are only updated on first run, make sure they have valid values now
        dsp->fVbargraph19 = 0;
        dsp->fVbargraph17 = 0;
        dsp->fVbargraph15 = 0;
        dsp->fVbargraph13 = 0;
        dsp->fVbargraph11 = 0;
        dsp->fVbargraph9 = 0;
        dsp->fVbargraph7 = 0;
        dsp->fVbargraph5 = 0;
        dsp->fVbargraph20 = 0;
        dsp->fVbargraph18 = 0;
        dsp->fVbargraph16 = 0;
        dsp->fVbargraph14 = 0;
        dsp->fVbargraph12 = 0;
        dsp->fVbargraph10 = 0;
        dsp->fVbargraph8 = 0;
        dsp->fVbargraph6 = 0;
        dsp->fVbargraph37 = 0;
        dsp->fVbargraph4 = 0;
        dsp->fVbargraph3 = 0;
        dsp->fVbargraph40 = 0;
        dsp->fVbargraph38 = 0;
        dsp->fVbargraph39 = 0;
        dsp->fVbargraph1 = 0;
        dsp->fVbargraph2 = 0;
        dsp->fVbargraph36 = 0;
        dsp->fVbargraph34 = 0;
        dsp->fVbargraph32 = 0;
        dsp->fVbargraph30 = 0;
        dsp->fVbargraph28 = 0;
        dsp->fVbargraph26 = 0;
        dsp->fVbargraph24 = 0;
        dsp->fVbargraph22 = 0;
        dsp->fVbargraph35 = 0;
        dsp->fVbargraph33 = 0;
        dsp->fVbargraph31 = 0;
        dsp->fVbargraph29 = 0;
        dsp->fVbargraph27 = 0;
        dsp->fVbargraph25 = 0;
        dsp->fVbargraph23 = 0;
        dsp->fVbargraph21 = 0;
        dsp->fVbargraph0 = 0;
        
    }

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
        
            
            
        port.groupId = kPortGroupStereo;
            
        

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
        case kParameter_pre_gain:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[9];
            param.unit = kParameterUnits[9];
            param.symbol = kParameterSymbols[9];
            param.shortName = "";
            param.ranges.def = kParameterRanges[9].def;
            param.ranges.min = kParameterRanges[9].min;
            param.ranges.max = kParameterRanges[9].max;
            break;
        case kParameter_sbmb_strength:
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
        case kParameter_vad_ext:
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
        case kParameter_leveler_target:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[12];
            param.unit = kParameterUnits[12];
            param.symbol = kParameterSymbols[12];
            param.shortName = "";
            param.ranges.def = kParameterRanges[12].def;
            param.ranges.min = kParameterRanges[12].min;
            param.ranges.max = kParameterRanges[12].max;
            break;
        case kParameter_leveler_scale:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[13];
            param.unit = kParameterUnits[13];
            param.symbol = kParameterSymbols[13];
            param.shortName = "";
            param.ranges.def = kParameterRanges[13].def;
            param.ranges.min = kParameterRanges[13].min;
            param.ranges.max = kParameterRanges[13].max;
            break;
        case kParameter_mb_exp_strength:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[14];
            param.unit = kParameterUnits[14];
            param.symbol = kParameterSymbols[14];
            param.shortName = "";
            param.ranges.def = kParameterRanges[14].def;
            param.ranges.min = kParameterRanges[14].min;
            param.ranges.max = kParameterRanges[14].max;
            break;
        case kParameter_mb_strength:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[15];
            param.unit = kParameterUnits[15];
            param.symbol = kParameterSymbols[15];
            param.shortName = "";
            param.ranges.def = kParameterRanges[15].def;
            param.ranges.min = kParameterRanges[15].min;
            param.ranges.max = kParameterRanges[15].max;
            break;
        case kParameter_mb_exp_thresh:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[16];
            param.unit = kParameterUnits[16];
            param.symbol = kParameterSymbols[16];
            param.shortName = "";
            param.ranges.def = kParameterRanges[16].def;
            param.ranges.min = kParameterRanges[16].min;
            param.ranges.max = kParameterRanges[16].max;
            break;
        case kParameter_pre_lowcut:
            param.hints = kParameterIsAutomatable
            
            
            
            
                |kParameterIsLogarithmic
            
            ;
            param.name = kParameterNames[17];
            param.unit = kParameterUnits[17];
            param.symbol = kParameterSymbols[17];
            param.shortName = "";
            param.ranges.def = kParameterRanges[17].def;
            param.ranges.min = kParameterRanges[17].min;
            param.ranges.max = kParameterRanges[17].max;
            break;
        case kParameter_vad_gate_thresh:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[18];
            param.unit = kParameterUnits[18];
            param.symbol = kParameterSymbols[18];
            param.shortName = "";
            param.ranges.def = kParameterRanges[18].def;
            param.ranges.min = kParameterRanges[18].min;
            param.ranges.max = kParameterRanges[18].max;
            break;
        case kParameter_vad_smoothing_time:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[19];
            param.unit = kParameterUnits[19];
            param.symbol = kParameterSymbols[19];
            param.shortName = "";
            param.ranges.def = kParameterRanges[19].def;
            param.ranges.min = kParameterRanges[19].min;
            param.ranges.max = kParameterRanges[19].max;
            break;
        
        case kParameter_sb_meter__0:
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
        case kParameter_sb_meter__1:
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
        case kParameter_sb_meter__2:
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
        case kParameter_sb_meter__3:
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
        case kParameter_sb_meter__4:
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
        case kParameter_sb_meter__5:
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
        case kParameter_sb_meter__6:
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
        case kParameter_sb_meter__7:
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
        case kParameter_sb_gain__0:
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
        case kParameter_sb_gain__1:
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
        case kParameter_sb_gain__2:
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
        case kParameter_sb_gain__3:
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
        case kParameter_sb_gain__4:
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
        case kParameter_sb_gain__5:
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
        case kParameter_sb_gain__6:
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
        case kParameter_sb_gain__7:
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
        case kParameter_limiter_gain:
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
        case kParameter_input_peak_channel_0:
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
        case kParameter_input_peak_channel_1:
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
        case kParameter_lufs_out_meter:
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
        case kParameter_output_peak_channel_0:
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
        case kParameter_output_peak_channel_1:
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
        case kParameter_vad_meter:
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
        case kParameter_leveler_gain:
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
        case kParameter_mb_exp_meter0:
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
        case kParameter_mb_exp_meter1:
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
        case kParameter_mb_exp_meter2:
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
        case kParameter_mb_exp_meter3:
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
        case kParameter_mb_exp_meter4:
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
        case kParameter_mb_exp_meter5:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[49];
            param.unit = kParameterUnits[49];
            param.symbol = kParameterSymbols[49];
            param.shortName = "";
            param.ranges.def = kParameterRanges[49].def;
            param.ranges.min = kParameterRanges[49].min;
            param.ranges.max = kParameterRanges[49].max;
            break;
        case kParameter_mb_exp_meter6:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[50];
            param.unit = kParameterUnits[50];
            param.symbol = kParameterSymbols[50];
            param.shortName = "";
            param.ranges.def = kParameterRanges[50].def;
            param.ranges.min = kParameterRanges[50].min;
            param.ranges.max = kParameterRanges[50].max;
            break;
        case kParameter_mb_exp_meter7:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[51];
            param.unit = kParameterUnits[51];
            param.symbol = kParameterSymbols[51];
            param.shortName = "";
            param.ranges.def = kParameterRanges[51].def;
            param.ranges.min = kParameterRanges[51].min;
            param.ranges.max = kParameterRanges[51].max;
            break;
        case kParameter_mb_comp_gain_0:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[52];
            param.unit = kParameterUnits[52];
            param.symbol = kParameterSymbols[52];
            param.shortName = "";
            param.ranges.def = kParameterRanges[52].def;
            param.ranges.min = kParameterRanges[52].min;
            param.ranges.max = kParameterRanges[52].max;
            break;
        case kParameter_mb_comp_gain_1:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[53];
            param.unit = kParameterUnits[53];
            param.symbol = kParameterSymbols[53];
            param.shortName = "";
            param.ranges.def = kParameterRanges[53].def;
            param.ranges.min = kParameterRanges[53].min;
            param.ranges.max = kParameterRanges[53].max;
            break;
        case kParameter_mb_comp_gain_2:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[54];
            param.unit = kParameterUnits[54];
            param.symbol = kParameterSymbols[54];
            param.shortName = "";
            param.ranges.def = kParameterRanges[54].def;
            param.ranges.min = kParameterRanges[54].min;
            param.ranges.max = kParameterRanges[54].max;
            break;
        case kParameter_mb_comp_gain_3:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[55];
            param.unit = kParameterUnits[55];
            param.symbol = kParameterSymbols[55];
            param.shortName = "";
            param.ranges.def = kParameterRanges[55].def;
            param.ranges.min = kParameterRanges[55].min;
            param.ranges.max = kParameterRanges[55].max;
            break;
        case kParameter_mb_comp_gain_4:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[56];
            param.unit = kParameterUnits[56];
            param.symbol = kParameterSymbols[56];
            param.shortName = "";
            param.ranges.def = kParameterRanges[56].def;
            param.ranges.min = kParameterRanges[56].min;
            param.ranges.max = kParameterRanges[56].max;
            break;
        case kParameter_mb_comp_gain_5:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[57];
            param.unit = kParameterUnits[57];
            param.symbol = kParameterSymbols[57];
            param.shortName = "";
            param.ranges.def = kParameterRanges[57].def;
            param.ranges.min = kParameterRanges[57].min;
            param.ranges.max = kParameterRanges[57].max;
            break;
        case kParameter_mb_comp_gain_6:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[58];
            param.unit = kParameterUnits[58];
            param.symbol = kParameterSymbols[58];
            param.shortName = "";
            param.ranges.def = kParameterRanges[58].def;
            param.ranges.min = kParameterRanges[58].min;
            param.ranges.max = kParameterRanges[58].max;
            break;
        case kParameter_mb_comp_gain_7:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[59];
            param.unit = kParameterUnits[59];
            param.symbol = kParameterSymbols[59];
            param.shortName = "";
            param.ranges.def = kParameterRanges[59].def;
            param.ranges.min = kParameterRanges[59].min;
            param.ranges.max = kParameterRanges[59].max;
            break;
        case kParameter_vad_smoothing_meter:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[60];
            param.unit = kParameterUnits[60];
            param.symbol = kParameterSymbols[60];
            param.shortName = "";
            param.ranges.def = kParameterRanges[60].def;
            param.ranges.min = kParameterRanges[60].min;
            param.ranges.max = kParameterRanges[60].max;
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
            return dsp->fVslider10;
        case kParameter_sb_target_spectrum_0:
            return dsp->fVslider17;
        case kParameter_sb_target_spectrum_1:
            return dsp->fVslider16;
        case kParameter_sb_target_spectrum_2:
            return dsp->fVslider15;
        case kParameter_sb_target_spectrum_3:
            return dsp->fVslider14;
        case kParameter_sb_target_spectrum_4:
            return dsp->fVslider13;
        case kParameter_sb_target_spectrum_5:
            return dsp->fVslider12;
        case kParameter_sb_target_spectrum_6:
            return dsp->fVslider11;
        case kParameter_sb_target_spectrum_7:
            return dsp->fVslider8;
        case kParameter_pre_gain:
            return dsp->fVslider7;
        case kParameter_sbmb_strength:
            return dsp->fVslider9;
        case kParameter_vad_ext:
            return dsp->fVslider4;
        case kParameter_leveler_target:
            return dsp->fVslider1;
        case kParameter_leveler_scale:
            return dsp->fVslider5;
        case kParameter_mb_exp_strength:
            return dsp->fVslider19;
        case kParameter_mb_strength:
            return dsp->fVslider18;
        case kParameter_mb_exp_thresh:
            return dsp->fVslider0;
        case kParameter_pre_lowcut:
            return dsp->fVslider6;
        case kParameter_vad_gate_thresh:
            return dsp->fVslider2;
        case kParameter_vad_smoothing_time:
            return dsp->fVslider3;
        case kParameter_sb_meter__0:
            return dsp->fVbargraph19;
        case kParameter_sb_meter__1:
            return dsp->fVbargraph17;
        case kParameter_sb_meter__2:
            return dsp->fVbargraph15;
        case kParameter_sb_meter__3:
            return dsp->fVbargraph13;
        case kParameter_sb_meter__4:
            return dsp->fVbargraph11;
        case kParameter_sb_meter__5:
            return dsp->fVbargraph9;
        case kParameter_sb_meter__6:
            return dsp->fVbargraph7;
        case kParameter_sb_meter__7:
            return dsp->fVbargraph5;
        case kParameter_sb_gain__0:
            return dsp->fVbargraph20;
        case kParameter_sb_gain__1:
            return dsp->fVbargraph18;
        case kParameter_sb_gain__2:
            return dsp->fVbargraph16;
        case kParameter_sb_gain__3:
            return dsp->fVbargraph14;
        case kParameter_sb_gain__4:
            return dsp->fVbargraph12;
        case kParameter_sb_gain__5:
            return dsp->fVbargraph10;
        case kParameter_sb_gain__6:
            return dsp->fVbargraph8;
        case kParameter_sb_gain__7:
            return dsp->fVbargraph6;
        case kParameter_limiter_gain:
            return dsp->fVbargraph37;
        case kParameter_input_peak_channel_0:
            return dsp->fVbargraph4;
        case kParameter_input_peak_channel_1:
            return dsp->fVbargraph3;
        case kParameter_lufs_out_meter:
            return dsp->fVbargraph40;
        case kParameter_output_peak_channel_0:
            return dsp->fVbargraph38;
        case kParameter_output_peak_channel_1:
            return dsp->fVbargraph39;
        case kParameter_vad_meter:
            return dsp->fVbargraph1;
        case kParameter_leveler_gain:
            return dsp->fVbargraph2;
        case kParameter_mb_exp_meter0:
            return dsp->fVbargraph36;
        case kParameter_mb_exp_meter1:
            return dsp->fVbargraph34;
        case kParameter_mb_exp_meter2:
            return dsp->fVbargraph32;
        case kParameter_mb_exp_meter3:
            return dsp->fVbargraph30;
        case kParameter_mb_exp_meter4:
            return dsp->fVbargraph28;
        case kParameter_mb_exp_meter5:
            return dsp->fVbargraph26;
        case kParameter_mb_exp_meter6:
            return dsp->fVbargraph24;
        case kParameter_mb_exp_meter7:
            return dsp->fVbargraph22;
        case kParameter_mb_comp_gain_0:
            return dsp->fVbargraph35;
        case kParameter_mb_comp_gain_1:
            return dsp->fVbargraph33;
        case kParameter_mb_comp_gain_2:
            return dsp->fVbargraph31;
        case kParameter_mb_comp_gain_3:
            return dsp->fVbargraph29;
        case kParameter_mb_comp_gain_4:
            return dsp->fVbargraph27;
        case kParameter_mb_comp_gain_5:
            return dsp->fVbargraph25;
        case kParameter_mb_comp_gain_6:
            return dsp->fVbargraph23;
        case kParameter_mb_comp_gain_7:
            return dsp->fVbargraph21;
        case kParameter_vad_smoothing_meter:
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
            dsp->fVslider10 = value;
            break;
        case kParameter_sb_target_spectrum_0:
            dsp->fVslider17 = value;
            break;
        case kParameter_sb_target_spectrum_1:
            dsp->fVslider16 = value;
            break;
        case kParameter_sb_target_spectrum_2:
            dsp->fVslider15 = value;
            break;
        case kParameter_sb_target_spectrum_3:
            dsp->fVslider14 = value;
            break;
        case kParameter_sb_target_spectrum_4:
            dsp->fVslider13 = value;
            break;
        case kParameter_sb_target_spectrum_5:
            dsp->fVslider12 = value;
            break;
        case kParameter_sb_target_spectrum_6:
            dsp->fVslider11 = value;
            break;
        case kParameter_sb_target_spectrum_7:
            dsp->fVslider8 = value;
            break;
        case kParameter_pre_gain:
            dsp->fVslider7 = value;
            break;
        case kParameter_sbmb_strength:
            dsp->fVslider9 = value;
            break;
        case kParameter_vad_ext:
            dsp->fVslider4 = value;
            break;
        case kParameter_leveler_target:
            dsp->fVslider1 = value;
            break;
        case kParameter_leveler_scale:
            dsp->fVslider5 = value;
            break;
        case kParameter_mb_exp_strength:
            dsp->fVslider19 = value;
            break;
        case kParameter_mb_strength:
            dsp->fVslider18 = value;
            break;
        case kParameter_mb_exp_thresh:
            dsp->fVslider0 = value;
            break;
        case kParameter_pre_lowcut:
            dsp->fVslider6 = value;
            break;
        case kParameter_vad_gate_thresh:
            dsp->fVslider2 = value;
            break;
        case kParameter_vad_smoothing_time:
            dsp->fVslider3 = value;
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
        float params[20] = {
            dsp->fVslider10,
            dsp->fVslider17,
            dsp->fVslider16,
            dsp->fVslider15,
            dsp->fVslider14,
            dsp->fVslider13,
            dsp->fVslider12,
            dsp->fVslider11,
            dsp->fVslider8,
            dsp->fVslider7,
            dsp->fVslider9,
            dsp->fVslider4,
            dsp->fVslider1,
            dsp->fVslider5,
            dsp->fVslider19,
            dsp->fVslider18,
            dsp->fVslider0,
            dsp->fVslider6,
            dsp->fVslider2,
            dsp->fVslider3,
            
        };

        // tell dsp to change sample rate
        dsp->init(newSampleRate);

        // set parameters back, which have been reset in the dsp
        dsp->fVslider10 = params[0];
        dsp->fVslider17 = params[1];
        dsp->fVslider16 = params[2];
        dsp->fVslider15 = params[3];
        dsp->fVslider14 = params[4];
        dsp->fVslider13 = params[5];
        dsp->fVslider12 = params[6];
        dsp->fVslider11 = params[7];
        dsp->fVslider8 = params[8];
        dsp->fVslider7 = params[9];
        dsp->fVslider9 = params[10];
        dsp->fVslider4 = params[11];
        dsp->fVslider1 = params[12];
        dsp->fVslider5 = params[13];
        dsp->fVslider19 = params[14];
        dsp->fVslider18 = params[15];
        dsp->fVslider0 = params[16];
        dsp->fVslider6 = params[17];
        dsp->fVslider2 = params[18];
        dsp->fVslider3 = params[19];
        
    }

    // ----------------------------------------------------------------------------------------------------------------

    DISTRHO_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(FaustGeneratedPlugin)
};

// --------------------------------------------------------------------------------------------------------------------

END_NAMESPACE_DISTRHO