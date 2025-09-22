
//------------------------------------------------------------------------------
// This file was generated using the Faust compiler (https://faust.grame.fr),
// and the Faust post-processor (https://github.com/jpcima/faustpp).
//
// Source: bbba.dsp
// Name: bbba
// Description: 
// Author: 
// Copyright: 
// License: GPLv3+
// Version: 
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


class mydsp : public dsp {
	
 FAUSTPP_PRIVATE:
	
	float fRec9[2];
	int IOTA0;
	float fVec0[8192];
	int fSampleRate;
	int iConst1;
	float fRec8[2];
	float fRec11[2];
	float fVec1[8192];
	int iConst2;
	float fRec10[2];
	float fRec13[2];
	float fVec2[8192];
	int iConst3;
	float fRec12[2];
	float fRec15[2];
	float fVec3[8192];
	int iConst4;
	float fRec14[2];
	float fRec17[2];
	float fVec4[8192];
	int iConst5;
	float fRec16[2];
	float fRec19[2];
	float fVec5[8192];
	int iConst6;
	float fRec18[2];
	float fRec21[2];
	float fVec6[8192];
	int iConst7;
	float fRec20[2];
	float fRec23[2];
	float fVec7[8192];
	int iConst8;
	float fRec22[2];
	float fVec8[2048];
	int iConst9;
	float fRec6[2];
	float fVec9[2048];
	int iConst10;
	float fRec4[2];
	float fVec10[2048];
	int iConst11;
	float fRec2[2];
	float fVec11[1024];
	int iConst12;
	float fRec0[2];
	
 public:
	
	void metadata(Meta* m) { 
		m->declare("compile_options", "-a /tmp/tmpj12yn7ks.cpp -lang cpp -es 1 -mcd 16 -single -ftz 0");
		m->declare("delays.lib/name", "Faust Delay Library");
		m->declare("delays.lib/version", "0.1");
		m->declare("filename", "bbba.dsp");
		m->declare("filters.lib/allpass_comb:author", "Julius O. Smith III");
		m->declare("filters.lib/allpass_comb:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/allpass_comb:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/lowpass0_highpass1", "MIT-style STK-4.3 license");
		m->declare("filters.lib/name", "Faust Filters Library");
		m->declare("filters.lib/version", "0.3");
		m->declare("maths.lib/author", "GRAME");
		m->declare("maths.lib/copyright", "GRAME");
		m->declare("maths.lib/license", "LGPL with exception");
		m->declare("maths.lib/name", "Faust Math Library");
		m->declare("maths.lib/version", "2.5");
		m->declare("name", "bbba");
		m->declare("platform.lib/name", "Generic Platform Library");
		m->declare("platform.lib/version", "0.3");
		m->declare("reverbs.lib/mono_freeverb:author", "Romain Michon");
		m->declare("reverbs.lib/name", "Faust Reverb Library");
		m->declare("reverbs.lib/version", "0.2");
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
		float fConst0 = std::min<float>(1.92e+05f, std::max<float>(1.0f, float(fSampleRate)));
		iConst1 = int(0.036666665f * fConst0) + 5;
		iConst2 = int(0.035306122f * fConst0) + 5;
		iConst3 = int(0.033809524f * fConst0) + 5;
		iConst4 = int(0.0322449f * fConst0) + 5;
		iConst5 = int(0.030748298f * fConst0) + 5;
		iConst6 = int(0.028956916f * fConst0) + 5;
		iConst7 = int(0.026938776f * fConst0) + 5;
		iConst8 = int(0.025306122f * fConst0) + 5;
		iConst9 = std::min<int>(1024, std::max<int>(0, int(0.0126077095f * fConst0) + 4));
		iConst10 = std::min<int>(1024, std::max<int>(0, int(0.01f * fConst0) + 4));
		iConst11 = std::min<int>(1024, std::max<int>(0, int(0.0077324263f * fConst0) + 4));
		iConst12 = std::min<int>(1024, std::max<int>(0, int(0.0051020407f * fConst0) + 4));
	}
	
	FAUSTPP_VIRTUAL void instanceResetUserInterface() {
	}
	
	FAUSTPP_VIRTUAL void instanceClear() {
		for (int l0 = 0; l0 < 2; l0 = l0 + 1) {
			fRec9[l0] = 0.0f;
		}
		IOTA0 = 0;
		for (int l1 = 0; l1 < 8192; l1 = l1 + 1) {
			fVec0[l1] = 0.0f;
		}
		for (int l2 = 0; l2 < 2; l2 = l2 + 1) {
			fRec8[l2] = 0.0f;
		}
		for (int l3 = 0; l3 < 2; l3 = l3 + 1) {
			fRec11[l3] = 0.0f;
		}
		for (int l4 = 0; l4 < 8192; l4 = l4 + 1) {
			fVec1[l4] = 0.0f;
		}
		for (int l5 = 0; l5 < 2; l5 = l5 + 1) {
			fRec10[l5] = 0.0f;
		}
		for (int l6 = 0; l6 < 2; l6 = l6 + 1) {
			fRec13[l6] = 0.0f;
		}
		for (int l7 = 0; l7 < 8192; l7 = l7 + 1) {
			fVec2[l7] = 0.0f;
		}
		for (int l8 = 0; l8 < 2; l8 = l8 + 1) {
			fRec12[l8] = 0.0f;
		}
		for (int l9 = 0; l9 < 2; l9 = l9 + 1) {
			fRec15[l9] = 0.0f;
		}
		for (int l10 = 0; l10 < 8192; l10 = l10 + 1) {
			fVec3[l10] = 0.0f;
		}
		for (int l11 = 0; l11 < 2; l11 = l11 + 1) {
			fRec14[l11] = 0.0f;
		}
		for (int l12 = 0; l12 < 2; l12 = l12 + 1) {
			fRec17[l12] = 0.0f;
		}
		for (int l13 = 0; l13 < 8192; l13 = l13 + 1) {
			fVec4[l13] = 0.0f;
		}
		for (int l14 = 0; l14 < 2; l14 = l14 + 1) {
			fRec16[l14] = 0.0f;
		}
		for (int l15 = 0; l15 < 2; l15 = l15 + 1) {
			fRec19[l15] = 0.0f;
		}
		for (int l16 = 0; l16 < 8192; l16 = l16 + 1) {
			fVec5[l16] = 0.0f;
		}
		for (int l17 = 0; l17 < 2; l17 = l17 + 1) {
			fRec18[l17] = 0.0f;
		}
		for (int l18 = 0; l18 < 2; l18 = l18 + 1) {
			fRec21[l18] = 0.0f;
		}
		for (int l19 = 0; l19 < 8192; l19 = l19 + 1) {
			fVec6[l19] = 0.0f;
		}
		for (int l20 = 0; l20 < 2; l20 = l20 + 1) {
			fRec20[l20] = 0.0f;
		}
		for (int l21 = 0; l21 < 2; l21 = l21 + 1) {
			fRec23[l21] = 0.0f;
		}
		for (int l22 = 0; l22 < 8192; l22 = l22 + 1) {
			fVec7[l22] = 0.0f;
		}
		for (int l23 = 0; l23 < 2; l23 = l23 + 1) {
			fRec22[l23] = 0.0f;
		}
		for (int l24 = 0; l24 < 2048; l24 = l24 + 1) {
			fVec8[l24] = 0.0f;
		}
		for (int l25 = 0; l25 < 2; l25 = l25 + 1) {
			fRec6[l25] = 0.0f;
		}
		for (int l26 = 0; l26 < 2048; l26 = l26 + 1) {
			fVec9[l26] = 0.0f;
		}
		for (int l27 = 0; l27 < 2; l27 = l27 + 1) {
			fRec4[l27] = 0.0f;
		}
		for (int l28 = 0; l28 < 2048; l28 = l28 + 1) {
			fVec10[l28] = 0.0f;
		}
		for (int l29 = 0; l29 < 2; l29 = l29 + 1) {
			fRec2[l29] = 0.0f;
		}
		for (int l30 = 0; l30 < 1024; l30 = l30 + 1) {
			fVec11[l30] = 0.0f;
		}
		for (int l31 = 0; l31 < 2; l31 = l31 + 1) {
			fRec0[l31] = 0.0f;
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
		ui_interface->closeBox();
	}
	
	FAUSTPP_VIRTUAL void compute(int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
		FAUSTFLOAT* input0 = inputs[0];
		FAUSTFLOAT* output0 = outputs[0];
		for (int i0 = 0; i0 < count; i0 = i0 + 1) {
			fRec9[0] = 0.1f * fRec9[1] + 0.9f * fRec8[1];
			float fTemp0 = float(input0[i0]);
			fVec0[IOTA0 & 8191] = fTemp0 + 0.9f * fRec9[0];
			fRec8[0] = fVec0[(IOTA0 - iConst1) & 8191];
			fRec11[0] = 0.1f * fRec11[1] + 0.9f * fRec10[1];
			fVec1[IOTA0 & 8191] = fTemp0 + 0.9f * fRec11[0];
			fRec10[0] = fVec1[(IOTA0 - iConst2) & 8191];
			fRec13[0] = 0.1f * fRec13[1] + 0.9f * fRec12[1];
			fVec2[IOTA0 & 8191] = fTemp0 + 0.9f * fRec13[0];
			fRec12[0] = fVec2[(IOTA0 - iConst3) & 8191];
			fRec15[0] = 0.1f * fRec15[1] + 0.9f * fRec14[1];
			fVec3[IOTA0 & 8191] = fTemp0 + 0.9f * fRec15[0];
			fRec14[0] = fVec3[(IOTA0 - iConst4) & 8191];
			fRec17[0] = 0.1f * fRec17[1] + 0.9f * fRec16[1];
			fVec4[IOTA0 & 8191] = fTemp0 + 0.9f * fRec17[0];
			fRec16[0] = fVec4[(IOTA0 - iConst5) & 8191];
			fRec19[0] = 0.1f * fRec19[1] + 0.9f * fRec18[1];
			fVec5[IOTA0 & 8191] = fTemp0 + 0.9f * fRec19[0];
			fRec18[0] = fVec5[(IOTA0 - iConst6) & 8191];
			fRec21[0] = 0.1f * fRec21[1] + 0.9f * fRec20[1];
			fVec6[IOTA0 & 8191] = fTemp0 + 0.9f * fRec21[0];
			fRec20[0] = fVec6[(IOTA0 - iConst7) & 8191];
			fRec23[0] = 0.1f * fRec23[1] + 0.9f * fRec22[1];
			fVec7[IOTA0 & 8191] = fTemp0 + 0.9f * fRec23[0];
			fRec22[0] = fVec7[(IOTA0 - iConst8) & 8191];
			float fTemp1 = fRec22[0] + fRec20[0] + fRec18[0] + fRec16[0] + fRec14[0] + fRec12[0] + fRec10[0] + fRec8[0] + 0.9f * fRec6[1];
			fVec8[IOTA0 & 2047] = fTemp1;
			fRec6[0] = fVec8[(IOTA0 - iConst9) & 2047];
			float fRec7 = 0.0f - 0.9f * fTemp1;
			float fTemp2 = fRec6[1] + fRec7 + 0.9f * fRec4[1];
			fVec9[IOTA0 & 2047] = fTemp2;
			fRec4[0] = fVec9[(IOTA0 - iConst10) & 2047];
			float fRec5 = 0.0f - 0.9f * fTemp2;
			float fTemp3 = fRec4[1] + fRec5 + 0.9f * fRec2[1];
			fVec10[IOTA0 & 2047] = fTemp3;
			fRec2[0] = fVec10[(IOTA0 - iConst11) & 2047];
			float fRec3 = 0.0f - 0.9f * fTemp3;
			float fTemp4 = fRec2[1] + fRec3 + 0.9f * fRec0[1];
			fVec11[IOTA0 & 1023] = fTemp4;
			fRec0[0] = fVec11[(IOTA0 - iConst12) & 1023];
			float fRec1 = 0.0f - 0.9f * fTemp4;
			output0[i0] = FAUSTFLOAT(fRec1 + fRec0[1]);
			fRec9[1] = fRec9[0];
			IOTA0 = IOTA0 + 1;
			fRec8[1] = fRec8[0];
			fRec11[1] = fRec11[0];
			fRec10[1] = fRec10[0];
			fRec13[1] = fRec13[0];
			fRec12[1] = fRec12[0];
			fRec15[1] = fRec15[0];
			fRec14[1] = fRec14[0];
			fRec17[1] = fRec17[0];
			fRec16[1] = fRec16[0];
			fRec19[1] = fRec19[0];
			fRec18[1] = fRec18[0];
			fRec21[1] = fRec21[0];
			fRec20[1] = fRec20[0];
			fRec23[1] = fRec23[0];
			fRec22[1] = fRec22[0];
			fRec6[1] = fRec6[0];
			fRec4[1] = fRec4[0];
			fRec2[1] = fRec2[0];
			fRec0[1] = fRec0[0];
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
        
    }

    /*
    void printCurrentValues()
    {
        d_stdout("==== preset data start ===");
        
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
        
        
        }
    }

   /* -----------------------------------------------------------------------------------------------------------------
    * Internal data */

    float getParameterValue(const uint32_t index) const override
    {
        switch (index)
        {
        
        default:
            return 0.0f;
        }
    }

    void setParameterValue(const uint32_t index, const float value) override
    {
        switch (index)
        {
        
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
        float params[0] = {
            
        };

        // tell dsp to change sample rate
        dsp->init(newSampleRate);

        // set parameters back, which have been reset in the dsp
        
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