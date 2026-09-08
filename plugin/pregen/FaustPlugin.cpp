
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
	float fConst2;
	float fConst3;
	FAUSTFLOAT fVslider0;
	float fConst4;
	float fConst5;
	float fConst6;
	float fConst7;
	float fConst8;
	FAUSTFLOAT fVslider1;
	float fVec0[2];
	float fRec2[2];
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
	float fVec1[2];
	float fConst26;
	float fConst27;
	float fRec12[2];
	float fRec11[2];
	float fConst28;
	float fVec2[2];
	float fConst29;
	float fRec10[2];
	float fRec9[2];
	float fConst30;
	float fConst31;
	float fRec8[2];
	float fRec7[2];
	float fConst32;
	float fRec6[2];
	float fConst33;
	float fConst34;
	FAUSTFLOAT fVslider2;
	FAUSTFLOAT fVslider3;
	float fConst35;
	float fConst36;
	float fConst37;
	float fRec16[2];
	float fConst38;
	float fRec17[2];
	float fConst39;
	float fRec15[2];
	float fRec14[2];
	float fConst40;
	float fConst41;
	float fConst42;
	float fConst43;
	float fRec25[2];
	float fConst44;
	float fRec26[2];
	float fConst45;
	float fRec27[2];
	float fVec3[2];
	float fConst46;
	float fConst47;
	float fRec24[2];
	float fRec23[2];
	float fVec4[2];
	float fRec22[2];
	float fRec21[2];
	float fRec20[2];
	float fRec19[2];
	float fConst48;
	float fConst49;
	float fConst50;
	float fRec30[2];
	float fConst51;
	float fRec31[2];
	float fConst52;
	float fRec29[2];
	float fRec28[2];
	float fConst53;
	float fConst54;
	float fConst55;
	float fRec35[2];
	float fConst56;
	float fRec36[2];
	float fConst57;
	float fRec34[2];
	float fRec33[2];
	float fConst58;
	float fConst59;
	float fConst60;
	float fRec40[2];
	float fConst61;
	float fRec41[2];
	float fConst62;
	float fRec39[2];
	float fRec38[2];
	float fConst63;
	float fConst64;
	float fConst65;
	float fRec45[2];
	float fConst66;
	float fRec46[2];
	float fConst67;
	float fRec44[2];
	float fRec43[2];
	float fConst68;
	float fConst69;
	float fConst70;
	float fRec50[2];
	float fConst71;
	float fRec51[2];
	float fConst72;
	float fRec49[2];
	float fRec48[2];
	float fConst73;
	float fConst74;
	float fRec55[2];
	float fConst75;
	float fRec56[2];
	float fConst76;
	float fRec54[2];
	float fRec53[2];
	float fRec13[2];
	FAUSTFLOAT fVslider4;
	FAUSTFLOAT fVslider5;
	float fConst77;
	float fConst78;
	float fRec58[2];
	float fConst79;
	float fConst80;
	float fRec59[2];
	float fConst81;
	float fConst82;
	float fRec60[2];
	float fConst83;
	float fConst84;
	float fRec61[2];
	float fConst85;
	float fRec62[2];
	float fConst86;
	float fRec63[2];
	float fConst87;
	float fRec64[2];
	float fConst88;
	float fConst89;
	float fRec65[2];
	float fConst90;
	float fRec66[2];
	float fConst91;
	float fConst92;
	float fRec67[2];
	float fConst93;
	float fConst94;
	float fRec68[2];
	float fConst95;
	float fRec69[2];
	float fRec70[2];
	float fConst96;
	float fConst97;
	float fRec71[2];
	float fConst98;
	float fRec72[2];
	float fRec3[2];
	float fRec4[2];
	float fRec73[2];
	float fRec74[2];
	float fRec76[2];
	float fRec77[2];
	float fRec79[2];
	float fRec80[2];
	float fRec82[2];
	float fRec83[2];
	float fRec85[2];
	float fRec86[2];
	float fRec88[2];
	float fRec89[2];
	float fRec91[2];
	float fRec92[2];
	float fVec5[2];
	float fRec1[2];
	float fConst99;
	float fConst100;
	float fRec0[3];
	int IOTA0;
	float fVec6[512];
	int iConst101;
	float fConst102;
	float fConst103;
	float fConst104;
	int iRec96[2];
	float fRec97[2];
	float fRec95[2];
	float fConst105;
	float fConst106;
	float fRec94[2];
	FAUSTFLOAT fVbargraph0;
	
 public:
	mydsp() {
	}
	
	mydsp(const mydsp&) = default;
	
	FAUSTPP_VIRTUAL ~mydsp() = default;
	
	mydsp& operator=(const mydsp&) = default;
	
	void metadata(Meta* m) { 
		m->declare("analyzers.lib/name", "Faust Analyzer Library");
		m->declare("analyzers.lib/version", "1.3.0");
		m->declare("author", "Klaus Scheuermann");
		m->declare("basics.lib/name", "Faust Basic Element Library");
		m->declare("basics.lib/peakholder:author", "Dario Sanfilippo");
		m->declare("basics.lib/peakholder:copyright", "Copyright (C) 2022 Dario Sanfilippo <sanfilippo.dario@gmail.com>");
		m->declare("basics.lib/peakholder:license", "MIT-style STK-4.3 license");
		m->declare("basics.lib/version", "1.22.0");
		m->declare("compile_options", "-a /Users/klausscheuermann/Library/Caches/TemporaryItems/faustpp/83851-md.cpp -lang cpp -fpga-mem-th 4 -ct 1 -es 1 -mcd 16 -mdd 1024 -mdy 33 -single -ftz 0");
		m->declare("filename", "bbba.dsp");
		m->declare("filters.lib/fir:author", "Julius O. Smith III");
		m->declare("filters.lib/fir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/fir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/highpass:author", "Julius O. Smith III");
		m->declare("filters.lib/highpass:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
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
		m->declare("filters.lib/tf2:author", "Julius O. Smith III");
		m->declare("filters.lib/tf2:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf2:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/tf2s:author", "Julius O. Smith III");
		m->declare("filters.lib/tf2s:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf2s:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/version", "1.7.1");
		m->declare("license", "GPLv3");
		m->declare("maths.lib/author", "GRAME");
		m->declare("maths.lib/copyright", "GRAME");
		m->declare("maths.lib/license", "LGPL with exception");
		m->declare("maths.lib/name", "Faust Math Library");
		m->declare("maths.lib/version", "2.9.0");
		m->declare("name", "bbba");
		m->declare("platform.lib/name", "Generic Platform Library");
		m->declare("platform.lib/version", "1.3.0");
		m->declare("routes.lib/name", "Faust Signal Routing Library");
		m->declare("routes.lib/version", "1.3.0");
		m->declare("signals.lib/name", "Faust Routing Library");
		m->declare("signals.lib/onePoleSwitching:author", "Jonatan Liljedahl, revised by Dario Sanfilippo");
		m->declare("signals.lib/onePoleSwitching:licence", "STK-4.3");
		m->declare("signals.lib/version", "1.6.0");
		m->declare("version", "0.29");
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
		fConst0 = std::min<float>(1.92e+05f, std::max<float>(1.0f, static_cast<float>(fSampleRate)));
		fConst1 = std::tan(37699.113f / fConst0);
		fConst2 = 1.0f / fConst1;
		fConst3 = 1.0f / ((fConst2 + 1.0f) / fConst1 + 1.0f);
		fConst4 = 1.0f / (fConst2 + 1.0f);
		fConst5 = 1.0f - fConst2;
		fConst6 = 1.0f / std::tan(131.94688f / fConst0);
		fConst7 = 1.0f / (fConst6 + 1.0f);
		fConst8 = 1.0f - fConst6;
		fConst9 = std::tan(28434.555f / fConst0);
		fConst10 = 44.1f / fConst0;
		fConst11 = std::exp(-(1e+02f / fConst0));
		fConst12 = 1.0f - fConst11;
		fConst13 = std::tan(119.806114f / fConst0);
		fConst14 = mydsp_faustpower2_f(fConst13);
		fConst15 = 0.50032705f * (fConst14 + 1.0f);
		fConst16 = 1.0f / (fConst13 + fConst15);
		fConst17 = std::tan(5283.415f / fConst0);
		fConst18 = mydsp_faustpower2_f(fConst17);
		fConst19 = 1.4142135f * fConst17;
		fConst20 = 1.0f / (fConst18 + fConst19 + 1.0f);
		fConst21 = fConst18 + -1.5848527f;
		fConst22 = 2.0f * fConst21;
		fConst23 = fConst18 + (1.0f - fConst19);
		fConst24 = 1.7803667f * fConst17;
		fConst25 = fConst18 + (1.5848527f - fConst24);
		fConst26 = 2.0f * (fConst18 + -1.0f);
		fConst27 = fConst18 + fConst24 + 1.5848527f;
		fConst28 = fConst15 - fConst13;
		fConst29 = 1.0006541f * (fConst14 + -1.0f);
		fConst30 = std::exp(-(1e+01f / fConst0));
		fConst31 = 1.0f - fConst30;
		fConst32 = 1.0f - fConst10;
		fConst33 = std::exp(-(5.714286f / fConst0));
		fConst34 = 0.01f * (1.0f - fConst33);
		fConst35 = std::tan(444.2212f / fConst0);
		fConst36 = fConst35 * (fConst35 + 0.70710677f) + 1.0f;
		fConst37 = 2.0f / fConst36;
		fConst38 = fConst35 / fConst36;
		fConst39 = 1.0f / fConst36;
		fConst40 = 2.8150427f * fConst25;
		fConst41 = std::tan(222.1106f / fConst0);
		fConst42 = fConst41 * (fConst41 + 0.70710677f) + 1.0f;
		fConst43 = 2.0f / fConst42;
		fConst44 = fConst41 / fConst42;
		fConst45 = 1.0f / fConst42;
		fConst46 = 5.6300855f * fConst21;
		fConst47 = 2.8150427f * fConst27;
		fConst48 = std::tan(888.4424f / fConst0);
		fConst49 = fConst48 * (fConst48 + 0.70710677f) + 1.0f;
		fConst50 = 2.0f / fConst49;
		fConst51 = fConst48 / fConst49;
		fConst52 = 1.0f / fConst49;
		fConst53 = std::tan(1777.199f / fConst0);
		fConst54 = fConst53 * (fConst53 + 0.70710677f) + 1.0f;
		fConst55 = 2.0f / fConst54;
		fConst56 = fConst53 / fConst54;
		fConst57 = 1.0f / fConst54;
		fConst58 = std::tan(3554.398f / fConst0);
		fConst59 = fConst58 * (fConst58 + 0.70710677f) + 1.0f;
		fConst60 = 2.0f / fConst59;
		fConst61 = fConst58 / fConst59;
		fConst62 = 1.0f / fConst59;
		fConst63 = std::tan(7108.482f / fConst0);
		fConst64 = fConst63 * (fConst63 + 0.70710677f) + 1.0f;
		fConst65 = 2.0f / fConst64;
		fConst66 = fConst63 / fConst64;
		fConst67 = 1.0f / fConst64;
		fConst68 = std::tan(14217.277f / fConst0);
		fConst69 = fConst68 * (fConst68 + 0.70710677f) + 1.0f;
		fConst70 = 2.0f / fConst69;
		fConst71 = fConst68 / fConst69;
		fConst72 = 1.0f / fConst69;
		fConst73 = fConst9 * (fConst9 + 0.70710677f) + 1.0f;
		fConst74 = 2.0f / fConst73;
		fConst75 = fConst9 / fConst73;
		fConst76 = 1.0f / fConst73;
		fConst77 = std::exp(-(4e+01f / fConst0));
		fConst78 = std::exp(-(12.5f / fConst0));
		fConst79 = std::exp(-(8.0f / fConst0));
		fConst80 = 0.01f * (1.0f - fConst79);
		fConst81 = std::exp(-(66.666664f / fConst0));
		fConst82 = std::exp(-(25.0f / fConst0));
		fConst83 = std::exp(-(13.333333f / fConst0));
		fConst84 = 0.01f * (1.0f - fConst83);
		fConst85 = std::exp(-(2e+02f / fConst0));
		fConst86 = 0.01f * (1.0f - fConst77);
		fConst87 = std::exp(-(5e+02f / fConst0));
		fConst88 = std::exp(-(5.0f / fConst0));
		fConst89 = 0.01f * (1.0f - fConst88);
		fConst90 = std::exp(-(33.333332f / fConst0));
		fConst91 = std::exp(-(6.6666665f / fConst0));
		fConst92 = 0.01f * (1.0f - fConst91);
		fConst93 = std::exp(-(5e+01f / fConst0));
		fConst94 = std::exp(-(16.666666f / fConst0));
		fConst95 = 0.01f * fConst31;
		fConst96 = std::exp(-(2e+01f / fConst0));
		fConst97 = 0.01f * (1.0f - fConst96);
		fConst98 = std::exp(-(333.33334f / fConst0));
		fConst99 = (fConst2 + -1.0f) / fConst1 + 1.0f;
		fConst100 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst1));
		iConst101 = static_cast<int>(0.002f * fConst0);
		fConst102 = std::exp(-(3141.5928f / fConst0));
		fConst103 = 1.0f - fConst102;
		fConst104 = 0.01f * fConst0;
		fConst105 = std::exp(-(6.2831855f / fConst0));
		fConst106 = 1.0f - fConst105;
	}
	
	FAUSTPP_VIRTUAL void instanceResetUserInterface() {
		fVslider0 = static_cast<FAUSTFLOAT>(0.0f);
		fVslider1 = static_cast<FAUSTFLOAT>(2.0f);
		fVslider2 = static_cast<FAUSTFLOAT>(6e+01f);
		fVslider3 = static_cast<FAUSTFLOAT>(1.0f);
		fVslider4 = static_cast<FAUSTFLOAT>(6e+01f);
		fVslider5 = static_cast<FAUSTFLOAT>(-18.0f);
	}
	
	FAUSTPP_VIRTUAL void instanceClear() {
		for (int l0 = 0; l0 < 2; l0 = l0 + 1) {
			fVec0[l0] = 0.0f;
		}
		for (int l1 = 0; l1 < 2; l1 = l1 + 1) {
			fRec2[l1] = 0.0f;
		}
		for (int l2 = 0; l2 < 2; l2 = l2 + 1) {
			fVec1[l2] = 0.0f;
		}
		for (int l3 = 0; l3 < 2; l3 = l3 + 1) {
			fRec12[l3] = 0.0f;
		}
		for (int l4 = 0; l4 < 2; l4 = l4 + 1) {
			fRec11[l4] = 0.0f;
		}
		for (int l5 = 0; l5 < 2; l5 = l5 + 1) {
			fVec2[l5] = 0.0f;
		}
		for (int l6 = 0; l6 < 2; l6 = l6 + 1) {
			fRec10[l6] = 0.0f;
		}
		for (int l7 = 0; l7 < 2; l7 = l7 + 1) {
			fRec9[l7] = 0.0f;
		}
		for (int l8 = 0; l8 < 2; l8 = l8 + 1) {
			fRec8[l8] = 0.0f;
		}
		for (int l9 = 0; l9 < 2; l9 = l9 + 1) {
			fRec7[l9] = 0.0f;
		}
		for (int l10 = 0; l10 < 2; l10 = l10 + 1) {
			fRec6[l10] = 0.0f;
		}
		for (int l11 = 0; l11 < 2; l11 = l11 + 1) {
			fRec16[l11] = 0.0f;
		}
		for (int l12 = 0; l12 < 2; l12 = l12 + 1) {
			fRec17[l12] = 0.0f;
		}
		for (int l13 = 0; l13 < 2; l13 = l13 + 1) {
			fRec15[l13] = 0.0f;
		}
		for (int l14 = 0; l14 < 2; l14 = l14 + 1) {
			fRec14[l14] = 0.0f;
		}
		for (int l15 = 0; l15 < 2; l15 = l15 + 1) {
			fRec25[l15] = 0.0f;
		}
		for (int l16 = 0; l16 < 2; l16 = l16 + 1) {
			fRec26[l16] = 0.0f;
		}
		for (int l17 = 0; l17 < 2; l17 = l17 + 1) {
			fRec27[l17] = 0.0f;
		}
		for (int l18 = 0; l18 < 2; l18 = l18 + 1) {
			fVec3[l18] = 0.0f;
		}
		for (int l19 = 0; l19 < 2; l19 = l19 + 1) {
			fRec24[l19] = 0.0f;
		}
		for (int l20 = 0; l20 < 2; l20 = l20 + 1) {
			fRec23[l20] = 0.0f;
		}
		for (int l21 = 0; l21 < 2; l21 = l21 + 1) {
			fVec4[l21] = 0.0f;
		}
		for (int l22 = 0; l22 < 2; l22 = l22 + 1) {
			fRec22[l22] = 0.0f;
		}
		for (int l23 = 0; l23 < 2; l23 = l23 + 1) {
			fRec21[l23] = 0.0f;
		}
		for (int l24 = 0; l24 < 2; l24 = l24 + 1) {
			fRec20[l24] = 0.0f;
		}
		for (int l25 = 0; l25 < 2; l25 = l25 + 1) {
			fRec19[l25] = 0.0f;
		}
		for (int l26 = 0; l26 < 2; l26 = l26 + 1) {
			fRec30[l26] = 0.0f;
		}
		for (int l27 = 0; l27 < 2; l27 = l27 + 1) {
			fRec31[l27] = 0.0f;
		}
		for (int l28 = 0; l28 < 2; l28 = l28 + 1) {
			fRec29[l28] = 0.0f;
		}
		for (int l29 = 0; l29 < 2; l29 = l29 + 1) {
			fRec28[l29] = 0.0f;
		}
		for (int l30 = 0; l30 < 2; l30 = l30 + 1) {
			fRec35[l30] = 0.0f;
		}
		for (int l31 = 0; l31 < 2; l31 = l31 + 1) {
			fRec36[l31] = 0.0f;
		}
		for (int l32 = 0; l32 < 2; l32 = l32 + 1) {
			fRec34[l32] = 0.0f;
		}
		for (int l33 = 0; l33 < 2; l33 = l33 + 1) {
			fRec33[l33] = 0.0f;
		}
		for (int l34 = 0; l34 < 2; l34 = l34 + 1) {
			fRec40[l34] = 0.0f;
		}
		for (int l35 = 0; l35 < 2; l35 = l35 + 1) {
			fRec41[l35] = 0.0f;
		}
		for (int l36 = 0; l36 < 2; l36 = l36 + 1) {
			fRec39[l36] = 0.0f;
		}
		for (int l37 = 0; l37 < 2; l37 = l37 + 1) {
			fRec38[l37] = 0.0f;
		}
		for (int l38 = 0; l38 < 2; l38 = l38 + 1) {
			fRec45[l38] = 0.0f;
		}
		for (int l39 = 0; l39 < 2; l39 = l39 + 1) {
			fRec46[l39] = 0.0f;
		}
		for (int l40 = 0; l40 < 2; l40 = l40 + 1) {
			fRec44[l40] = 0.0f;
		}
		for (int l41 = 0; l41 < 2; l41 = l41 + 1) {
			fRec43[l41] = 0.0f;
		}
		for (int l42 = 0; l42 < 2; l42 = l42 + 1) {
			fRec50[l42] = 0.0f;
		}
		for (int l43 = 0; l43 < 2; l43 = l43 + 1) {
			fRec51[l43] = 0.0f;
		}
		for (int l44 = 0; l44 < 2; l44 = l44 + 1) {
			fRec49[l44] = 0.0f;
		}
		for (int l45 = 0; l45 < 2; l45 = l45 + 1) {
			fRec48[l45] = 0.0f;
		}
		for (int l46 = 0; l46 < 2; l46 = l46 + 1) {
			fRec55[l46] = 0.0f;
		}
		for (int l47 = 0; l47 < 2; l47 = l47 + 1) {
			fRec56[l47] = 0.0f;
		}
		for (int l48 = 0; l48 < 2; l48 = l48 + 1) {
			fRec54[l48] = 0.0f;
		}
		for (int l49 = 0; l49 < 2; l49 = l49 + 1) {
			fRec53[l49] = 0.0f;
		}
		for (int l50 = 0; l50 < 2; l50 = l50 + 1) {
			fRec13[l50] = 0.0f;
		}
		for (int l51 = 0; l51 < 2; l51 = l51 + 1) {
			fRec58[l51] = 0.0f;
		}
		for (int l52 = 0; l52 < 2; l52 = l52 + 1) {
			fRec59[l52] = 0.0f;
		}
		for (int l53 = 0; l53 < 2; l53 = l53 + 1) {
			fRec60[l53] = 0.0f;
		}
		for (int l54 = 0; l54 < 2; l54 = l54 + 1) {
			fRec61[l54] = 0.0f;
		}
		for (int l55 = 0; l55 < 2; l55 = l55 + 1) {
			fRec62[l55] = 0.0f;
		}
		for (int l56 = 0; l56 < 2; l56 = l56 + 1) {
			fRec63[l56] = 0.0f;
		}
		for (int l57 = 0; l57 < 2; l57 = l57 + 1) {
			fRec64[l57] = 0.0f;
		}
		for (int l58 = 0; l58 < 2; l58 = l58 + 1) {
			fRec65[l58] = 0.0f;
		}
		for (int l59 = 0; l59 < 2; l59 = l59 + 1) {
			fRec66[l59] = 0.0f;
		}
		for (int l60 = 0; l60 < 2; l60 = l60 + 1) {
			fRec67[l60] = 0.0f;
		}
		for (int l61 = 0; l61 < 2; l61 = l61 + 1) {
			fRec68[l61] = 0.0f;
		}
		for (int l62 = 0; l62 < 2; l62 = l62 + 1) {
			fRec69[l62] = 0.0f;
		}
		for (int l63 = 0; l63 < 2; l63 = l63 + 1) {
			fRec70[l63] = 0.0f;
		}
		for (int l64 = 0; l64 < 2; l64 = l64 + 1) {
			fRec71[l64] = 0.0f;
		}
		for (int l65 = 0; l65 < 2; l65 = l65 + 1) {
			fRec72[l65] = 0.0f;
		}
		for (int l66 = 0; l66 < 2; l66 = l66 + 1) {
			fRec3[l66] = 0.0f;
		}
		for (int l67 = 0; l67 < 2; l67 = l67 + 1) {
			fRec4[l67] = 0.0f;
		}
		for (int l68 = 0; l68 < 2; l68 = l68 + 1) {
			fRec73[l68] = 0.0f;
		}
		for (int l69 = 0; l69 < 2; l69 = l69 + 1) {
			fRec74[l69] = 0.0f;
		}
		for (int l70 = 0; l70 < 2; l70 = l70 + 1) {
			fRec76[l70] = 0.0f;
		}
		for (int l71 = 0; l71 < 2; l71 = l71 + 1) {
			fRec77[l71] = 0.0f;
		}
		for (int l72 = 0; l72 < 2; l72 = l72 + 1) {
			fRec79[l72] = 0.0f;
		}
		for (int l73 = 0; l73 < 2; l73 = l73 + 1) {
			fRec80[l73] = 0.0f;
		}
		for (int l74 = 0; l74 < 2; l74 = l74 + 1) {
			fRec82[l74] = 0.0f;
		}
		for (int l75 = 0; l75 < 2; l75 = l75 + 1) {
			fRec83[l75] = 0.0f;
		}
		for (int l76 = 0; l76 < 2; l76 = l76 + 1) {
			fRec85[l76] = 0.0f;
		}
		for (int l77 = 0; l77 < 2; l77 = l77 + 1) {
			fRec86[l77] = 0.0f;
		}
		for (int l78 = 0; l78 < 2; l78 = l78 + 1) {
			fRec88[l78] = 0.0f;
		}
		for (int l79 = 0; l79 < 2; l79 = l79 + 1) {
			fRec89[l79] = 0.0f;
		}
		for (int l80 = 0; l80 < 2; l80 = l80 + 1) {
			fRec91[l80] = 0.0f;
		}
		for (int l81 = 0; l81 < 2; l81 = l81 + 1) {
			fRec92[l81] = 0.0f;
		}
		for (int l82 = 0; l82 < 2; l82 = l82 + 1) {
			fVec5[l82] = 0.0f;
		}
		for (int l83 = 0; l83 < 2; l83 = l83 + 1) {
			fRec1[l83] = 0.0f;
		}
		for (int l84 = 0; l84 < 3; l84 = l84 + 1) {
			fRec0[l84] = 0.0f;
		}
		IOTA0 = 0;
		for (int l85 = 0; l85 < 512; l85 = l85 + 1) {
			fVec6[l85] = 0.0f;
		}
		for (int l86 = 0; l86 < 2; l86 = l86 + 1) {
			iRec96[l86] = 0;
		}
		for (int l87 = 0; l87 < 2; l87 = l87 + 1) {
			fRec97[l87] = 0.0f;
		}
		for (int l88 = 0; l88 < 2; l88 = l88 + 1) {
			fRec95[l88] = 0.0f;
		}
		for (int l89 = 0; l89 < 2; l89 = l89 + 1) {
			fRec94[l89] = 0.0f;
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
		return new mydsp(*this);
	}
	
	FAUSTPP_VIRTUAL int getSampleRate() {
		return fSampleRate;
	}
	
	FAUSTPP_VIRTUAL void buildUserInterface(UI* ui_interface) {
		ui_interface->openHorizontalBox("main");
		ui_interface->declare(&fVslider1, "1", "");
		ui_interface->declare(&fVslider1, "symbol", "pre_gain");
		ui_interface->declare(&fVslider1, "unit", "dB");
		ui_interface->addVerticalSlider("preGain", &fVslider1, FAUSTFLOAT(2.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(2e+01f), FAUSTFLOAT(0.1f));
		ui_interface->declare(&fVslider3, "3", "");
		ui_interface->declare(&fVslider3, "symbol", "vad_ext");
		ui_interface->addVerticalSlider("vad_ext", &fVslider3, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.001f));
		ui_interface->declare(&fVbargraph0, "99", "");
		ui_interface->declare(&fVbargraph0, "symbol", "limiter_gain");
		ui_interface->addVerticalBargraph("LimiterGR", &fVbargraph0, FAUSTFLOAT(-12.0f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVslider0, "9", "");
		ui_interface->declare(&fVslider0, "symbol", "post_gain");
		ui_interface->declare(&fVslider0, "unit", "dB");
		ui_interface->addVerticalSlider("postGain", &fVslider0, FAUSTFLOAT(0.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(2e+01f), FAUSTFLOAT(0.1f));
		ui_interface->openHorizontalBox("leveler");
		ui_interface->declare(&fVslider5, "1", "");
		ui_interface->declare(&fVslider5, "symbol", "leveler_target");
		ui_interface->declare(&fVslider5, "unit", "dB");
		ui_interface->addVerticalSlider("target", &fVslider5, FAUSTFLOAT(-18.0f), FAUSTFLOAT(-6e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("multiband_compressor");
		ui_interface->declare(&fVslider4, "symbol", "mb_strength");
		ui_interface->addVerticalSlider("mb_strength", &fVslider4, FAUSTFLOAT(6e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("spectral_balancer");
		ui_interface->declare(&fVslider2, "1", "");
		ui_interface->declare(&fVslider2, "symbol", "sb_strength");
		ui_interface->declare(&fVslider2, "unit", "%");
		ui_interface->addVerticalSlider("sb_strength", &fVslider2, FAUSTFLOAT(6e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->closeBox();
	}
	
	FAUSTPP_VIRTUAL void compute(int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
		FAUSTFLOAT* input0 = inputs[0];
		FAUSTFLOAT* output0 = outputs[0];
		float fSlow0 = fConst3 * std::pow(1e+01f, 0.05f * static_cast<float>(fVslider0));
		float fSlow1 = std::pow(1e+01f, 0.05f * static_cast<float>(fVslider1));
		float fSlow2 = static_cast<float>(fVslider2) * static_cast<float>(fVslider3);
		float fSlow3 = fConst34 * fSlow2;
		float fSlow4 = 0.01f * static_cast<float>(fVslider4);
		float fSlow5 = static_cast<float>(fVslider5);
		float fSlow6 = fSlow5 + -6.5f;
		float fSlow7 = fSlow5 + -5.5f;
		float fSlow8 = fConst80 * fSlow2;
		float fSlow9 = fSlow5 + -8.5f;
		float fSlow10 = fSlow5 + -7.5f;
		float fSlow11 = fConst84 * fSlow2;
		float fSlow12 = fSlow5 + -12.5f;
		float fSlow13 = fSlow5 + -11.5f;
		float fSlow14 = fConst86 * fSlow2;
		float fSlow15 = fSlow5 + -13.5f;
		float fSlow16 = fConst89 * fSlow2;
		float fSlow17 = fConst92 * fSlow2;
		float fSlow18 = fConst95 * fSlow2;
		float fSlow19 = fSlow5 + -10.5f;
		float fSlow20 = fConst97 * fSlow2;
		for (int i0 = 0; i0 < count; i0 = i0 + 1) {
			float fTemp0 = fSlow1 * static_cast<float>(input0[i0]);
			fVec0[0] = fTemp0;
			fRec2[0] = -(fConst7 * (fConst8 * fRec2[1] - fConst6 * (fTemp0 - fVec0[1])));
			fVec1[0] = fConst23 * fRec11[1] - fConst25 * fRec2[1];
			fRec12[0] = fConst20 * (fConst22 * fRec2[1] - (fVec1[1] + fConst26 * fRec12[1]) + fConst27 * fRec2[0]);
			fRec11[0] = fRec12[0];
			fVec2[0] = 0.50032705f * fRec11[1] - fConst28 * fRec9[1];
			fRec10[0] = fConst16 * (fVec2[1] - fConst29 * fRec10[1] - 1.0006541f * fRec11[1] + 0.50032705f * fRec11[0]);
			fRec9[0] = fRec10[0];
			float fTemp1 = std::fabs(0.92736715f * fRec9[0]);
			fRec8[0] = std::max<float>(fTemp1, fConst30 * fRec8[1] + fConst31 * fTemp1);
			fRec7[0] = fConst12 * fRec8[0] + fConst11 * fRec7[1];
			float fTemp2 = std::log(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec7[0])));
			fRec6[0] = fConst10 * std::min<float>(1.0f, std::max<float>(0.0f, 0.16666667f * (8.685889f * fTemp2 + 5e+01f))) + fConst32 * fRec6[1];
			float fTemp3 = fRec16[1] + fConst35 * (fRec2[0] - fRec17[1]);
			fRec16[0] = fConst37 * fTemp3 - fRec16[1];
			float fTemp4 = fRec17[1] + fConst38 * fTemp3;
			fRec17[0] = 2.0f * fTemp4 - fRec17[1];
			float fRec18 = fConst39 * fTemp3;
			float fTemp5 = std::fabs(2.4153774f * fRec18);
			fRec15[0] = std::max<float>(fTemp5, fConst30 * fRec15[1] + fConst31 * fTemp5);
			fRec14[0] = fConst12 * fRec15[0] + fConst11 * fRec14[1];
			float fTemp6 = fTemp2 - std::log(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec14[0])));
			float fTemp7 = 8.685889f * fTemp6;
			float fTemp8 = fRec25[1] + fConst41 * (fRec2[0] - fRec26[1]);
			fRec25[0] = fConst43 * fTemp8 - fRec25[1];
			float fTemp9 = fRec26[1] + fConst44 * fTemp8;
			fRec26[0] = 2.0f * fTemp9 - fRec26[1];
			fRec27[0] = fConst45 * fTemp8;
			fVec3[0] = fConst40 * fRec27[1] - fConst23 * fRec23[1];
			fRec24[0] = fConst20 * (fVec3[1] - fConst26 * fRec24[1] + fConst46 * fRec27[1] + fConst47 * fRec27[0]);
			fRec23[0] = fRec24[0];
			fVec4[0] = 0.50032705f * fRec23[1] - fConst28 * fRec21[1];
			fRec22[0] = fConst16 * (fVec4[1] - fConst29 * fRec22[1] - 1.0006541f * fRec23[1] + 0.50032705f * fRec23[0]);
			fRec21[0] = fRec22[0];
			float fTemp10 = std::fabs(0.92736715f * fRec21[0]);
			fRec20[0] = std::max<float>(fTemp10, fConst30 * fRec20[1] + fConst31 * fTemp10);
			fRec19[0] = fConst12 * fRec20[0] + fConst11 * fRec19[1];
			float fTemp11 = std::log(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec19[0]))) - fTemp2;
			float fTemp12 = fRec30[1] + fConst48 * (fRec2[0] - fRec31[1]);
			fRec30[0] = fConst50 * fTemp12 - fRec30[1];
			float fTemp13 = fRec31[1] + fConst51 * fTemp12;
			fRec31[0] = 2.0f * fTemp13 - fRec31[1];
			float fRec32 = fConst52 * fTemp12;
			float fTemp14 = std::fabs(2.5673494f * fRec32);
			fRec29[0] = std::max<float>(fTemp14, fConst30 * fRec29[1] + fConst31 * fTemp14);
			fRec28[0] = fConst12 * fRec29[0] + fConst11 * fRec28[1];
			float fTemp15 = fTemp2 - std::log(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec28[0])));
			float fTemp16 = fRec35[1] + fConst53 * (fRec2[0] - fRec36[1]);
			fRec35[0] = fConst55 * fTemp16 - fRec35[1];
			float fTemp17 = fRec36[1] + fConst56 * fTemp16;
			fRec36[0] = 2.0f * fTemp17 - fRec36[1];
			float fRec37 = fConst57 * fTemp16;
			float fTemp18 = std::fabs(2.700754f * fRec37);
			fRec34[0] = std::max<float>(fTemp18, fConst30 * fRec34[1] + fConst31 * fTemp18);
			fRec33[0] = fConst12 * fRec34[0] + fConst11 * fRec33[1];
			float fTemp19 = fTemp2 - std::log(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec33[0])));
			float fTemp20 = fRec40[1] + fConst58 * (fRec2[0] - fRec41[1]);
			fRec40[0] = fConst60 * fTemp20 - fRec40[1];
			float fTemp21 = fRec41[1] + fConst61 * fTemp20;
			fRec41[0] = 2.0f * fTemp21 - fRec41[1];
			float fRec42 = fConst62 * fTemp20;
			float fTemp22 = std::fabs(3.086633f * fRec42);
			fRec39[0] = std::max<float>(fTemp22, fConst30 * fRec39[1] + fConst31 * fTemp22);
			fRec38[0] = fConst12 * fRec39[0] + fConst11 * fRec38[1];
			float fTemp23 = fTemp2 - std::log(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec38[0])));
			float fTemp24 = fRec45[1] + fConst63 * (fRec2[0] - fRec46[1]);
			fRec45[0] = fConst65 * fTemp24 - fRec45[1];
			float fTemp25 = fRec46[1] + fConst66 * fTemp24;
			fRec46[0] = 2.0f * fTemp25 - fRec46[1];
			float fRec47 = fConst67 * fTemp24;
			float fTemp26 = std::fabs(3.7323728f * fRec47);
			fRec44[0] = std::max<float>(fTemp26, fConst30 * fRec44[1] + fConst31 * fTemp26);
			fRec43[0] = fConst12 * fRec44[0] + fConst11 * fRec43[1];
			float fTemp27 = fTemp2 - std::log(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec43[0])));
			float fTemp28 = fRec50[1] + fConst68 * (fRec2[0] - fRec51[1]);
			fRec50[0] = fConst70 * fTemp28 - fRec50[1];
			float fTemp29 = fRec51[1] + fConst71 * fTemp28;
			fRec51[0] = 2.0f * fTemp29 - fRec51[1];
			float fRec52 = fConst72 * fTemp28;
			float fTemp30 = std::fabs(4.045619f * fRec52);
			fRec49[0] = std::max<float>(fTemp30, fConst30 * fRec49[1] + fConst31 * fTemp30);
			fRec48[0] = fConst12 * fRec49[0] + fConst11 * fRec48[1];
			float fTemp31 = fTemp2 - std::log(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec48[0])));
			float fTemp32 = fRec55[1] + fConst9 * (fRec2[0] - fRec56[1]);
			fRec55[0] = fConst74 * fTemp32 - fRec55[1];
			float fTemp33 = fRec56[1] + fConst75 * fTemp32;
			fRec56[0] = 2.0f * fTemp33 - fRec56[1];
			float fRec57 = fConst76 * fTemp32;
			float fTemp34 = std::fabs(4.1160913f * fRec57);
			fRec54[0] = std::max<float>(fTemp34, fConst30 * fRec54[1] + fConst31 * fTemp34);
			fRec53[0] = fConst12 * fRec54[0] + fConst11 * fRec53[1];
			float fTemp35 = fTemp2 - std::log(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec53[0])));
			float fTemp36 = 1.0857362f * (fTemp11 - fTemp6 - fTemp15 - fTemp19 - fTemp23 - fTemp27 - fTemp31 - fTemp35);
			float fTemp37 = std::min<float>(1.0f, std::max<float>(0.0f, 0.16666667f * (18.0f - (fTemp7 + fTemp36))));
			float fTemp38 = 8.685889f * fTemp11;
			float fTemp39 = std::min<float>(1.0f, std::max<float>(0.0f, 0.16666667f * (fTemp38 + (18.0f - fTemp36))));
			float fTemp40 = 8.685889f * fTemp15;
			float fTemp41 = std::min<float>(1.0f, std::max<float>(0.0f, 0.16666667f * (18.0f - (fTemp40 + fTemp36))));
			float fTemp42 = 8.685889f * fTemp19;
			float fTemp43 = std::min<float>(1.0f, std::max<float>(0.0f, 0.16666667f * (18.0f - (fTemp42 + fTemp36))));
			float fTemp44 = 8.685889f * fTemp23;
			float fTemp45 = std::min<float>(1.0f, std::max<float>(0.0f, 0.16666667f * (18.0f - (fTemp44 + fTemp36))));
			float fTemp46 = 8.685889f * fTemp27;
			float fTemp47 = std::min<float>(1.0f, std::max<float>(0.0f, 0.16666667f * (18.0f - (fTemp46 + fTemp36))));
			float fTemp48 = 8.685889f * fTemp31;
			float fTemp49 = std::min<float>(1.0f, std::max<float>(0.0f, 0.16666667f * (18.0f - (fTemp48 + fTemp36))));
			float fTemp50 = 8.685889f * fTemp35;
			float fTemp51 = std::min<float>(1.0f, std::max<float>(0.0f, 0.16666667f * (18.0f - (fTemp50 + fTemp36))));
			float fTemp52 = ((-1e+01f - fTemp38) * fTemp39 + (fTemp7 + -5.0f) * fTemp37 + (fTemp40 + -5.0f) * fTemp41 + (fTemp42 + -8.0f) * fTemp43 + (fTemp44 + -9.0f) * fTemp45 + (fTemp46 + -1e+01f) * fTemp47 + (fTemp48 + -7.0f) * fTemp49 + (fTemp50 + -4.0f) * fTemp51) / std::max<float>(1.1920929e-07f, fTemp51 + fTemp49 + fTemp47 + fTemp45 + fTemp43 + fTemp41 + fTemp39 + fTemp37);
			float fTemp53 = -5.0f - fTemp52;
			float fTemp54 = fTemp7 + fTemp53;
			fRec13[0] = fSlow3 * fTemp37 * std::min<float>(9.0f, std::max<float>(-12.0f, static_cast<float>((fTemp54 > 0.0f) - (fTemp54 < 0.0f)) * std::max<float>(0.0f, std::fabs(fTemp54) + -1.0f))) + fConst33 * fRec13[1];
			float fTemp55 = fRec6[0] * fRec13[0];
			float fTemp56 = fTemp55 + 8.685889f * std::log(std::max<float>(1.1754944e-38f, std::fabs(0.70710677f * fRec18)));
			int iTemp57 = (fTemp56 > fSlow6) + (fTemp56 > fSlow7);
			float fTemp58 = std::max<float>(0.0f, ((iTemp57 == 0) ? 0.0f : ((iTemp57 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp56 + 6.5f - fSlow5) : fTemp56 + 6.0f - fSlow5)));
			float fTemp59 = ((-(0.75f * fTemp58) > fRec58[1]) ? fConst78 : fConst77);
			fRec58[0] = fRec58[1] * fTemp59 - 0.75f * fTemp58 * (1.0f - fTemp59);
			float fTemp60 = fTemp55 + fSlow4 * (fRec58[0] + 1.5f);
			float fTemp61 = fTemp42 + (-8.0f - fTemp52);
			fRec59[0] = fSlow8 * fTemp43 * std::min<float>(12.0f, std::max<float>(-12.0f, static_cast<float>((fTemp61 > 0.0f) - (fTemp61 < 0.0f)) * std::max<float>(0.0f, std::fabs(fTemp61) + -1.0f))) + fConst79 * fRec59[1];
			float fTemp62 = fRec6[0] * fRec59[0];
			float fTemp63 = fTemp62 + 8.685889f * std::log(std::max<float>(1.1754944e-38f, std::fabs(0.70710677f * fRec37)));
			int iTemp64 = (fTemp63 > fSlow9) + (fTemp63 > fSlow10);
			float fTemp65 = std::max<float>(0.0f, ((iTemp64 == 0) ? 0.0f : ((iTemp64 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp63 + 8.5f - fSlow5) : fTemp63 + 8.0f - fSlow5)));
			float fTemp66 = ((-(0.75f * fTemp65) > fRec60[1]) ? fConst82 : fConst81);
			fRec60[0] = fRec60[1] * fTemp66 - 0.75f * fTemp65 * (1.0f - fTemp66);
			float fTemp67 = fTemp62 + fSlow4 * (fRec60[0] + 1.5f);
			float fTemp68 = fTemp46 + (-1e+01f - fTemp52);
			fRec61[0] = fSlow11 * fTemp47 * std::min<float>(12.0f, std::max<float>(-12.0f, static_cast<float>((fTemp68 > 0.0f) - (fTemp68 < 0.0f)) * std::max<float>(0.0f, std::fabs(fTemp68) + -1.0f))) + fConst83 * fRec61[1];
			float fTemp69 = fRec6[0] * fRec61[0];
			float fTemp70 = fTemp69 + 8.685889f * std::log(std::max<float>(1.1754944e-38f, std::fabs(0.70710677f * fRec47)));
			int iTemp71 = (fTemp70 > fSlow12) + (fTemp70 > fSlow13);
			float fTemp72 = std::max<float>(0.0f, ((iTemp71 == 0) ? 0.0f : ((iTemp71 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp70 + 12.5f - fSlow5) : fTemp70 + 12.0f - fSlow5)));
			float fTemp73 = ((-(0.75f * fTemp72) > fRec62[1]) ? fConst81 : fConst85);
			fRec62[0] = fRec62[1] * fTemp73 - 0.75f * fTemp72 * (1.0f - fTemp73);
			float fTemp74 = fTemp69 + fSlow4 * (fRec62[0] + 1.5f);
			float fTemp75 = fTemp50 + (-4.0f - fTemp52);
			fRec63[0] = fSlow14 * fTemp51 * std::min<float>(6.0f, std::max<float>(-12.0f, static_cast<float>((fTemp75 > 0.0f) - (fTemp75 < 0.0f)) * std::max<float>(0.0f, std::fabs(fTemp75) + -1.0f))) + fConst77 * fRec63[1];
			float fTemp76 = fRec6[0] * fRec63[0];
			float fTemp77 = fTemp76 + 8.685889f * std::log(std::max<float>(1.1754944e-38f, std::fabs(0.70710677f * fRec57)));
			int iTemp78 = (fTemp77 > fSlow15) + (fTemp77 > fSlow12);
			float fTemp79 = std::max<float>(0.0f, ((iTemp78 == 0) ? 0.0f : ((iTemp78 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp77 + 13.5f - fSlow5) : fTemp77 + 13.0f - fSlow5)));
			float fTemp80 = ((-(0.75f * fTemp79) > fRec64[1]) ? fConst81 : fConst87);
			fRec64[0] = fRec64[1] * fTemp80 - 0.75f * fTemp79 * (1.0f - fTemp80);
			float fTemp81 = fTemp76 + fSlow4 * (fRec64[0] + 1.5f);
			float fTemp82 = -1e+01f - (fTemp38 + fTemp52);
			fRec65[0] = fSlow16 * fTemp39 * std::min<float>(6.0f, std::max<float>(-12.0f, static_cast<float>((fTemp82 > 0.0f) - (fTemp82 < 0.0f)) * std::max<float>(0.0f, std::fabs(fTemp82) + -1.0f))) + fConst88 * fRec65[1];
			float fTemp83 = fRec65[0] * fRec6[0];
			float fTemp84 = fTemp83 + 8.685889f * std::log(std::max<float>(1.1754944e-38f, std::fabs(0.70710677f * fRec27[0])));
			int iTemp85 = (fTemp84 > fSlow6) + (fTemp84 > fSlow7);
			float fTemp86 = std::max<float>(0.0f, ((iTemp85 == 0) ? 0.0f : ((iTemp85 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp84 + 6.5f - fSlow5) : fTemp84 + 6.0f - fSlow5)));
			float fTemp87 = ((-(0.75f * fTemp86) > fRec66[1]) ? fConst30 : fConst90);
			fRec66[0] = fRec66[1] * fTemp87 - 0.75f * fTemp86 * (1.0f - fTemp87);
			float fTemp88 = fTemp83 + fSlow4 * (fRec66[0] + 1.5f);
			float fTemp89 = fTemp40 + fTemp53;
			fRec67[0] = fSlow17 * fTemp41 * std::min<float>(12.0f, std::max<float>(-12.0f, static_cast<float>((fTemp89 > 0.0f) - (fTemp89 < 0.0f)) * std::max<float>(0.0f, std::fabs(fTemp89) + -1.0f))) + fConst91 * fRec67[1];
			float fTemp90 = fRec6[0] * fRec67[0];
			float fTemp91 = fTemp90 + 8.685889f * std::log(std::max<float>(1.1754944e-38f, std::fabs(0.70710677f * fRec32)));
			int iTemp92 = (fTemp91 > fSlow10) + (fTemp91 > fSlow6);
			float fTemp93 = std::max<float>(0.0f, ((iTemp92 == 0) ? 0.0f : ((iTemp92 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp91 + 7.5f - fSlow5) : fTemp91 + 7.0f - fSlow5)));
			float fTemp94 = ((-(0.75f * fTemp93) > fRec68[1]) ? fConst94 : fConst93);
			fRec68[0] = fRec68[1] * fTemp94 - 0.75f * fTemp93 * (1.0f - fTemp94);
			float fTemp95 = fTemp90 + fSlow4 * (fRec68[0] + 1.5f);
			float fTemp96 = fTemp44 + (-9.0f - fTemp52);
			fRec69[0] = fSlow18 * fTemp45 * std::min<float>(12.0f, std::max<float>(-12.0f, static_cast<float>((fTemp96 > 0.0f) - (fTemp96 < 0.0f)) * std::max<float>(0.0f, std::fabs(fTemp96) + -1.0f))) + fConst30 * fRec69[1];
			float fTemp97 = fRec6[0] * fRec69[0];
			float fTemp98 = fTemp97 + 8.685889f * std::log(std::max<float>(1.1754944e-38f, std::fabs(0.70710677f * fRec42)));
			int iTemp99 = (fTemp98 > fSlow13) + (fTemp98 > fSlow19);
			float fTemp100 = std::max<float>(0.0f, ((iTemp99 == 0) ? 0.0f : ((iTemp99 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp98 + 11.5f - fSlow5) : fTemp98 + 11.0f - fSlow5)));
			float fTemp101 = ((-(0.75f * fTemp100) > fRec70[1]) ? fConst93 : fConst11);
			fRec70[0] = fRec70[1] * fTemp101 - 0.75f * fTemp100 * (1.0f - fTemp101);
			float fTemp102 = fTemp97 + fSlow4 * (fRec70[0] + 1.5f);
			float fTemp103 = fTemp48 + (-7.0f - fTemp52);
			fRec71[0] = fSlow20 * fTemp49 * std::min<float>(9.0f, std::max<float>(-12.0f, static_cast<float>((fTemp103 > 0.0f) - (fTemp103 < 0.0f)) * std::max<float>(0.0f, std::fabs(fTemp103) + -1.0f))) + fConst96 * fRec71[1];
			float fTemp104 = fRec6[0] * fRec71[0];
			float fTemp105 = fTemp104 + 8.685889f * std::log(std::max<float>(1.1754944e-38f, std::fabs(0.70710677f * fRec52)));
			int iTemp106 = (fTemp105 > fSlow12) + (fTemp105 > fSlow13);
			float fTemp107 = std::max<float>(0.0f, ((iTemp106 == 0) ? 0.0f : ((iTemp106 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp105 + 12.5f - fSlow5) : fTemp105 + 12.0f - fSlow5)));
			float fTemp108 = ((-(0.75f * fTemp107) > fRec72[1]) ? fConst81 : fConst98);
			fRec72[0] = fRec72[1] * fTemp108 - 0.75f * fTemp107 * (1.0f - fTemp108);
			float fTemp109 = fTemp104 + fSlow4 * (fRec72[0] + 1.5f);
			float fTemp110 = std::exp(0.057564627f * (0.00059f * fTemp60 + 0.01003f * fTemp67 + 0.16735f * fTemp74 + 1.23852f * fTemp81 - (0.00012f * fTemp88 + 0.00245f * fTemp95 + 0.04112f * fTemp102 + 0.6028f * fTemp109)));
			float fTemp111 = (fRec3[1] + fConst9 * (fRec2[0] - fRec4[1])) / (fConst9 * (fConst9 + 1.5f / fTemp110) + 1.0f);
			fRec3[0] = 2.0f * fTemp111 - fRec3[1];
			float fTemp112 = fRec4[1] + fConst9 * fTemp111;
			fRec4[0] = 2.0f * fTemp112 - fRec4[1];
			float fRec5 = fTemp111;
			float fTemp113 = fRec5 * (mydsp_faustpower2_f(fTemp110) + -1.0f) / fTemp110;
			float fTemp114 = fRec2[0] + 1.5f * fTemp113;
			float fTemp115 = std::exp(0.057564627f * (0.00068f * fTemp88 + 0.0135f * fTemp95 + 0.22574f * fTemp102 + 1.62165f * fTemp109 - (0.00325f * fTemp60 + 0.05536f * fTemp67 + 0.81715f * fTemp74 + 0.60264f * fTemp81)));
			float fTemp116 = (fRec73[1] + fConst68 * (fTemp114 - fRec74[1])) / (fConst68 * (fConst68 + 1.5f / fTemp115) + 1.0f);
			fRec73[0] = 2.0f * fTemp116 - fRec73[1];
			float fTemp117 = fRec74[1] + fConst68 * fTemp116;
			fRec74[0] = 2.0f * fTemp117 - fRec74[1];
			float fRec75 = fTemp116;
			float fTemp118 = fTemp113 + fRec75 * (mydsp_faustpower2_f(fTemp115) + -1.0f) / fTemp115;
			float fTemp119 = fRec2[0] + 1.5f * fTemp118;
			float fTemp120 = std::exp(0.057564627f * (0.01451f * fTemp60 + 0.24587f * fTemp67 + 1.78298f * fTemp74 + 0.16725f * fTemp81 - (0.00302f * fTemp88 + 0.06024f * fTemp95 + 0.89053f * fTemp102 + 0.81733f * fTemp109)));
			float fTemp121 = (fRec76[1] + fConst63 * (fTemp119 - fRec77[1])) / (fConst63 * (fConst63 + 1.5f / fTemp120) + 1.0f);
			fRec76[0] = 2.0f * fTemp121 - fRec76[1];
			float fTemp122 = fRec77[1] + fConst63 * fTemp121;
			fRec77[0] = 2.0f * fTemp122 - fRec77[1];
			float fRec78 = fTemp121;
			float fTemp123 = fTemp118 + fRec78 * (mydsp_faustpower2_f(fTemp120) + -1.0f) / fTemp120;
			float fTemp124 = fRec2[0] + 1.5f * fTemp123;
			float fTemp125 = std::exp(0.057564627f * (0.0127f * fTemp88 + 0.25175f * fTemp95 + 1.83204f * fTemp102 + 0.22587f * fTemp109 - (0.06095f * fTemp60 + 0.91263f * fTemp67 + 0.89004f * fTemp74 + 0.04111f * fTemp81)));
			float fTemp126 = (fRec79[1] + fConst58 * (fTemp124 - fRec80[1])) / (fConst58 * (fConst58 + 1.5f / fTemp125) + 1.0f);
			fRec79[0] = 2.0f * fTemp126 - fRec79[1];
			float fTemp127 = fRec80[1] + fConst58 * fTemp126;
			fRec80[0] = 2.0f * fTemp127 - fRec80[1];
			float fRec81 = fTemp126;
			float fTemp128 = fTemp123 + fRec81 * (mydsp_faustpower2_f(fTemp125) + -1.0f) / fTemp125;
			float fTemp129 = fRec2[0] + 1.5f * fTemp128;
			float fTemp130 = std::exp(0.057564627f * (0.25035f * fTemp60 + 1.84578f * fTemp67 + 0.24485f * fTemp74 + 0.00999f * fTemp81 - (0.05244f * fTemp88 + 0.9186f * fTemp95 + 0.91077f * fTemp102 + 0.05519f * fTemp109)));
			float fTemp131 = (fRec82[1] + fConst53 * (fTemp129 - fRec83[1])) / (fConst53 * (fConst53 + 1.5f / fTemp130) + 1.0f);
			fRec82[0] = 2.0f * fTemp131 - fRec82[1];
			float fTemp132 = fRec83[1] + fConst53 * fTemp131;
			fRec83[0] = 2.0f * fTemp132 - fRec83[1];
			float fRec84 = fTemp131;
			float fTemp133 = fTemp128 + fRec84 * (mydsp_faustpower2_f(fTemp130) + -1.0f) / fTemp130;
			float fTemp134 = fRec2[0] + 1.5f * fTemp133;
			float fTemp135 = std::exp(0.057564627f * (0.21506f * fTemp88 + 1.85152f * fTemp95 + 0.25042f * fTemp102 + 0.0134f * fTemp109 - (0.9089f * fTemp60 + 0.91688f * fTemp67 + 0.05976f * fTemp74 + 0.00243f * fTemp81)));
			float fTemp136 = (fRec85[1] + fConst48 * (fTemp134 - fRec86[1])) / (fConst48 * (fConst48 + 1.5f / fTemp135) + 1.0f);
			fRec85[0] = 2.0f * fTemp136 - fRec85[1];
			float fTemp137 = fRec86[1] + fConst48 * fTemp136;
			fRec86[0] = 2.0f * fTemp137 - fRec86[1];
			float fRec87 = fTemp136;
			float fTemp138 = fTemp133 + fRec87 * (mydsp_faustpower2_f(fTemp135) + -1.0f) / fTemp135;
			float fTemp139 = fRec2[0] + 1.5f * fTemp138;
			float fTemp140 = std::exp(0.057564627f * (1.80799f * fTemp60 + 0.25175f * fTemp67 + 0.01449f * fTemp74 + 0.00059f * fTemp81 - (0.77301f * fTemp88 + 0.91783f * fTemp95 + 0.06104f * fTemp102 + 0.00325f * fTemp109)));
			float fTemp141 = (fRec88[1] + fConst35 * (fTemp139 - fRec89[1])) / (fConst35 * (fConst35 + 1.5f / fTemp140) + 1.0f);
			fRec88[0] = 2.0f * fTemp141 - fRec88[1];
			float fTemp142 = fRec89[1] + fConst35 * fTemp141;
			fRec89[0] = 2.0f * fTemp142 - fRec89[1];
			float fRec90 = fTemp141;
			float fTemp143 = fTemp138 + fRec90 * (mydsp_faustpower2_f(fTemp140) + -1.0f) / fTemp140;
			float fTemp144 = fRec2[0] + 1.5f * fTemp143;
			float fTemp145 = std::exp(0.057564627f * (1.35422f * fTemp88 + 0.22165f * fTemp95 + 0.01302f * fTemp102 + 0.00069f * fTemp109 - (0.77469f * fTemp60 + 0.05398f * fTemp67 + 0.00309f * fTemp74 + 0.00013f * fTemp81)));
			float fTemp146 = (fRec91[1] + fConst41 * (fTemp144 - fRec92[1])) / (fConst41 * (fConst41 + 1.5f / fTemp145) + 1.0f);
			fRec91[0] = 2.0f * fTemp146 - fRec91[1];
			float fTemp147 = fRec92[1] + fConst41 * fTemp146;
			fRec92[0] = 2.0f * fTemp147 - fRec92[1];
			float fRec93 = fTemp146;
			float fTemp148 = fRec2[0] + 1.5f * (fTemp143 + fRec93 * (mydsp_faustpower2_f(fTemp145) + -1.0f) / fTemp145);
			fVec5[0] = fTemp148;
			fRec1[0] = -(fConst4 * (fConst5 * fRec1[1] - (fTemp148 + fVec5[1])));
			fRec0[0] = fRec1[0] - fConst3 * (fConst99 * fRec0[2] + fConst100 * fRec0[1]);
			float fTemp149 = fSlow0 * (fRec0[2] + fRec0[0] + 2.0f * fRec0[1]);
			fVec6[IOTA0 & 511] = fTemp149;
			float fTemp150 = std::fabs(fTemp149);
			int iTemp151 = (fTemp150 >= fRec97[1]) | (static_cast<float>(iRec96[1]) >= fConst104);
			iRec96[0] = ((iTemp151) ? 0 : iRec96[1] + 1);
			fRec97[0] = ((iTemp151) ? fTemp150 : fRec97[1]);
			fRec95[0] = fConst103 * fRec97[0] + fConst102 * fRec95[1];
			float fTemp152 = std::fabs(fRec95[0]);
			fRec94[0] = std::max<float>(fTemp152, fConst105 * fRec94[1] + fConst106 * fTemp152);
			float fTemp153 = std::min<float>(1.0f, 0.8912509f / std::max<float>(fRec94[0], 1.1920929e-07f));
			fVbargraph0 = static_cast<FAUSTFLOAT>(8.685889f * std::log(std::max<float>(1.1754944e-38f, std::fabs(fTemp153))));
			output0[i0] = static_cast<FAUSTFLOAT>(fVec6[(IOTA0 - iConst101) & 511] * fTemp153);
			fVec0[1] = fVec0[0];
			fRec2[1] = fRec2[0];
			fVec1[1] = fVec1[0];
			fRec12[1] = fRec12[0];
			fRec11[1] = fRec11[0];
			fVec2[1] = fVec2[0];
			fRec10[1] = fRec10[0];
			fRec9[1] = fRec9[0];
			fRec8[1] = fRec8[0];
			fRec7[1] = fRec7[0];
			fRec6[1] = fRec6[0];
			fRec16[1] = fRec16[0];
			fRec17[1] = fRec17[0];
			fRec15[1] = fRec15[0];
			fRec14[1] = fRec14[0];
			fRec25[1] = fRec25[0];
			fRec26[1] = fRec26[0];
			fRec27[1] = fRec27[0];
			fVec3[1] = fVec3[0];
			fRec24[1] = fRec24[0];
			fRec23[1] = fRec23[0];
			fVec4[1] = fVec4[0];
			fRec22[1] = fRec22[0];
			fRec21[1] = fRec21[0];
			fRec20[1] = fRec20[0];
			fRec19[1] = fRec19[0];
			fRec30[1] = fRec30[0];
			fRec31[1] = fRec31[0];
			fRec29[1] = fRec29[0];
			fRec28[1] = fRec28[0];
			fRec35[1] = fRec35[0];
			fRec36[1] = fRec36[0];
			fRec34[1] = fRec34[0];
			fRec33[1] = fRec33[0];
			fRec40[1] = fRec40[0];
			fRec41[1] = fRec41[0];
			fRec39[1] = fRec39[0];
			fRec38[1] = fRec38[0];
			fRec45[1] = fRec45[0];
			fRec46[1] = fRec46[0];
			fRec44[1] = fRec44[0];
			fRec43[1] = fRec43[0];
			fRec50[1] = fRec50[0];
			fRec51[1] = fRec51[0];
			fRec49[1] = fRec49[0];
			fRec48[1] = fRec48[0];
			fRec55[1] = fRec55[0];
			fRec56[1] = fRec56[0];
			fRec54[1] = fRec54[0];
			fRec53[1] = fRec53[0];
			fRec13[1] = fRec13[0];
			fRec58[1] = fRec58[0];
			fRec59[1] = fRec59[0];
			fRec60[1] = fRec60[0];
			fRec61[1] = fRec61[0];
			fRec62[1] = fRec62[0];
			fRec63[1] = fRec63[0];
			fRec64[1] = fRec64[0];
			fRec65[1] = fRec65[0];
			fRec66[1] = fRec66[0];
			fRec67[1] = fRec67[0];
			fRec68[1] = fRec68[0];
			fRec69[1] = fRec69[0];
			fRec70[1] = fRec70[0];
			fRec71[1] = fRec71[0];
			fRec72[1] = fRec72[0];
			fRec3[1] = fRec3[0];
			fRec4[1] = fRec4[0];
			fRec73[1] = fRec73[0];
			fRec74[1] = fRec74[0];
			fRec76[1] = fRec76[0];
			fRec77[1] = fRec77[0];
			fRec79[1] = fRec79[0];
			fRec80[1] = fRec80[0];
			fRec82[1] = fRec82[0];
			fRec83[1] = fRec83[0];
			fRec85[1] = fRec85[0];
			fRec86[1] = fRec86[0];
			fRec88[1] = fRec88[0];
			fRec89[1] = fRec89[0];
			fRec91[1] = fRec91[0];
			fRec92[1] = fRec92[0];
			fVec5[1] = fVec5[0];
			fRec1[1] = fRec1[0];
			fRec0[2] = fRec0[1];
			fRec0[1] = fRec0[0];
			IOTA0 = IOTA0 + 1;
			iRec96[1] = iRec96[0];
			fRec97[1] = fRec97[0];
			fRec95[1] = fRec95[0];
			fRec94[1] = fRec94[0];
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
        
            
        port.groupId = kPortGroupMono;
            
            
        

        // everything else is as default
        Plugin::initAudioPort(input, index, port);
    }

    void initParameter(const uint32_t index, Parameter& param) override
    {
        switch (index)
        {
        case kParameter_pre_gain:
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
        case kParameter_vad_ext:
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
        case kParameter_post_gain:
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
        case kParameter_leveler_target:
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
        case kParameter_mb_strength:
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
        case kParameter_sb_strength:
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
        
        case kParameter_limiter_gain:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[6];
            param.unit = kParameterUnits[6];
            param.symbol = kParameterSymbols[6];
            param.shortName = "";
            param.ranges.def = kParameterRanges[6].def;
            param.ranges.min = kParameterRanges[6].min;
            param.ranges.max = kParameterRanges[6].max;
            break;
        
        }
    }

   /* -----------------------------------------------------------------------------------------------------------------
    * Internal data */

    float getParameterValue(const uint32_t index) const override
    {
        switch (index)
        {
        case kParameter_pre_gain:
            return dsp->fVslider1;
        case kParameter_vad_ext:
            return dsp->fVslider3;
        case kParameter_post_gain:
            return dsp->fVslider0;
        case kParameter_leveler_target:
            return dsp->fVslider5;
        case kParameter_mb_strength:
            return dsp->fVslider4;
        case kParameter_sb_strength:
            return dsp->fVslider2;
        case kParameter_limiter_gain:
            return dsp->fVbargraph0;
        
        default:
            return 0.0f;
        }
    }

    void setParameterValue(const uint32_t index, const float value) override
    {
        switch (index)
        {
        case kParameter_pre_gain:
            dsp->fVslider1 = value;
            break;
        case kParameter_vad_ext:
            dsp->fVslider3 = value;
            break;
        case kParameter_post_gain:
            dsp->fVslider0 = value;
            break;
        case kParameter_leveler_target:
            dsp->fVslider5 = value;
            break;
        case kParameter_mb_strength:
            dsp->fVslider4 = value;
            break;
        case kParameter_sb_strength:
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
        float params[6] = {
            dsp->fVslider1,
            dsp->fVslider3,
            dsp->fVslider0,
            dsp->fVslider5,
            dsp->fVslider4,
            dsp->fVslider2,
            
        };

        // tell dsp to change sample rate
        dsp->init(newSampleRate);

        // set parameters back, which have been reset in the dsp
        dsp->fVslider1 = params[0];
        dsp->fVslider3 = params[1];
        dsp->fVslider0 = params[2];
        dsp->fVslider5 = params[3];
        dsp->fVslider4 = params[4];
        dsp->fVslider2 = params[5];
        
    }

    // ----------------------------------------------------------------------------------------------------------------

    DISTRHO_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(FaustGeneratedPlugin)
};

// --------------------------------------------------------------------------------------------------------------------

END_NAMESPACE_DISTRHO
