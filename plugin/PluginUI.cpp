// Copyright 2025 Filipe Coelho <falktx@falktx.com>
// SPDX-License-Identifier: GPL-3.0-or-later

#include "DistrhoPluginInfo.h"
#include "DistrhoUI.hpp"
#include "DistrhoStandaloneUtils.hpp"

#include "QuantumGroups.hpp"
#include "pregen-gui/FaustPluginInfo.h"

// --------------------------------------------------------------------------------------------------------------------
// make sure our expectations match

static_assert(kParameterRanges[kParameter_input_peak_channel_0].def ==
              kParameterRanges[kParameter_input_peak_channel_1].def, "channel data mismatch");
static_assert(kParameterRanges[kParameter_input_peak_channel_0].min ==
              kParameterRanges[kParameter_input_peak_channel_1].min, "channel data mismatch");
static_assert(kParameterRanges[kParameter_input_peak_channel_0].max ==
              kParameterRanges[kParameter_input_peak_channel_1].max, "channel data mismatch");

static_assert(kParameterRanges[kParameter_output_peak_channel_0].def ==
              kParameterRanges[kParameter_output_peak_channel_1].def, "channel data mismatch");
static_assert(kParameterRanges[kParameter_output_peak_channel_0].min ==
              kParameterRanges[kParameter_output_peak_channel_1].min, "channel data mismatch");
static_assert(kParameterRanges[kParameter_output_peak_channel_0].max ==
              kParameterRanges[kParameter_output_peak_channel_1].max, "channel data mismatch");

static_assert(kParameterRanges[kParameter_output_peak_channel_0].def ==
              kParameterRanges[kParameter_lufs_out_meter].def, "channel data mismatch");
static_assert(kParameterRanges[kParameter_output_peak_channel_0].min >=
              kParameterRanges[kParameter_lufs_out_meter].min, "channel data mismatch");
static_assert(kParameterRanges[kParameter_output_peak_channel_0].max ==
              kParameterRanges[kParameter_lufs_out_meter].max, "channel data mismatch");

static_assert(kParameterRanges[kParameter_input_peak_channel_0].def ==
              kParameterRanges[kParameter_output_peak_channel_0].def, "channel data mismatch");
static_assert(kParameterRanges[kParameter_input_peak_channel_0].min ==
              kParameterRanges[kParameter_output_peak_channel_0].min, "channel data mismatch");
static_assert(kParameterRanges[kParameter_input_peak_channel_0].max ==
              kParameterRanges[kParameter_output_peak_channel_0].max, "channel data mismatch");

static_assert(kParameterRanges[kParameter_leveler_gain].min == -50.f, "leveler gain -50 dB min");
static_assert(kParameterRanges[kParameter_leveler_gain].max == +50.f, "leveler gain +50 dB max");
static_assert(kParameterRanges[kParameter_leveler_gain].def == 0.f, "leveler gain 0 dB default");

START_NAMESPACE_DISTRHO

// --------------------------------------------------------------------------------------------------------------------

class BBBAudioUI : public UI,
                   public ButtonEventHandler::Callback,
                   public KnobEventHandler::Callback
{
    BBBAudioTheme theme;

    // group of widgets
    InputMeterGroup inputGroup;
    InputLevelerGroup inputLevelerGroup;
    VoiceIsolationGroup voiceIsolationGroup;
    VoiceOptimizationGroup voiceOptimizationGroup;
    OutputMeterGroup outputGroup;

   #ifndef __MOD_DEVICES__
    // global enable
    QuantumLabel globalEnableLabel;
    QuantumRadioSwitch globalEnableSwitch;
   #endif

    // standalone widgets
    QuantumButton standaloneInput;

    // cached enabled state
    struct {
        bool global = true;
        bool leveler = true;
        bool voiceIsolation = true;
        bool voiceOptimization = true;
    } enabled;

public:
   /**
      UI class constructor.
      The UI should be initialized to a default state that matches the plugin side.
    */
    BBBAudioUI()
        : UI(),
          theme(getScaleFactor()),
          inputGroup(this, this, theme),
          inputLevelerGroup(this, this, this, theme),
          voiceIsolationGroup(this, this, this, theme),
          voiceOptimizationGroup(this, this, this, theme),
          outputGroup(this, theme),
         #ifndef __MOD_DEVICES__
          globalEnableLabel(this, theme),
          globalEnableSwitch(this, theme),
         #endif
          standaloneInput(this, theme)
    {
        loadSharedResources();

        const double scaleFactor = getScaleFactor();

       #ifndef __MOD_DEVICES__
        globalEnableLabel.setLabel("Global Enable");
        globalEnableLabel.setName("Global Enable Label");

        globalEnableSwitch.setCallback(this);
        globalEnableSwitch.setCheckable(true);
        globalEnableSwitch.setChecked(true, false);
        globalEnableSwitch.setId(kParameterCount + kExtraParamGlobalBypass);
        globalEnableSwitch.setName("Global Enable Button");
       #endif

        if (isUsingNativeAudio() && supportsAudioInput() && !isAudioInputEnabled())
        {
            standaloneInput.setLabel("Enable Input");
            standaloneInput.setName("Enable Input");
            standaloneInput.setCallback(this);
        }
        else
        {
            standaloneInput.hide();
        }

        setGeometryConstraints(DISTRHO_UI_DEFAULT_WIDTH * scaleFactor, DISTRHO_UI_DEFAULT_HEIGHT * scaleFactor);

        // initial resize and reposition
        resizeWidgets(getWidth(), getHeight());
    }

protected:
    void repositionWidgets()
    {
        const QuantumMetrics metrics(theme);

        const uint width = getWidth();
        const uint startY = theme.windowPadding * 2 + metrics.radioSwitch.getHeight();
        const uint midY = startY * 0.5f;

       #ifndef __MOD_DEVICES__
        globalEnableSwitch.setAbsolutePos(theme.windowPadding, midY - globalEnableSwitch.getHeight() * 0.5f);
        globalEnableLabel.setAbsolutePos(globalEnableSwitch.getAbsoluteX() + globalEnableSwitch.getWidth() + theme.padding,
                                         midY - globalEnableLabel.getHeight() * 0.5f);
       #endif

        inputGroup.setAbsolutePos(theme.windowPadding, startY);
        inputLevelerGroup.setAbsolutePos(theme.windowPadding + inputGroup.getWidth() + theme.padding, startY);
        voiceIsolationGroup.setAbsolutePos(inputLevelerGroup.getAbsoluteX() + inputLevelerGroup.getWidth() + theme.padding, startY);
        voiceOptimizationGroup.setAbsolutePos(voiceIsolationGroup.getAbsoluteX() + voiceIsolationGroup.getWidth() + theme.padding, startY);
        outputGroup.setAbsolutePos(width - outputGroup.getWidth() - theme.windowPadding - theme.padding, startY);

        standaloneInput.setAbsolutePos(getWidth() * 0.5f - standaloneInput.getWidth() * 0.5f,
                                       midY - standaloneInput.getHeight() * 0.5f);
    }

    void resizeWidgets(const uint width, const uint height)
    {
        const QuantumMetrics metrics(theme);

        const uint startY = theme.windowPadding * 2 + metrics.button.getHeight();
        const uint contentHeight = height - startY - theme.windowPadding;

       #ifndef __MOD_DEVICES__
        globalEnableLabel.adjustSize();
        globalEnableSwitch.adjustSize();
       #endif

        standaloneInput.adjustSize();

        inputGroup.adjustSize(metrics, contentHeight);
        inputLevelerGroup.adjustSize(metrics, contentHeight);
        voiceOptimizationGroup.adjustSize(metrics, contentHeight);
        outputGroup.adjustSize(metrics, contentHeight);

        const uint leftoverWidth = width - theme.windowPadding * 2 - theme.padding * 5
            - inputGroup.getWidth()
            - inputLevelerGroup.getWidth()
            - voiceOptimizationGroup.getWidth()
            - outputGroup.getWidth();
        voiceIsolationGroup.adjustSize(leftoverWidth, contentHeight);

        repositionWidgets();
    }

    // ----------------------------------------------------------------------------------------------------------------
    // DSP/Plugin Callbacks

   /**
      A parameter has changed on the plugin side.@n
      This is called by the host to inform the UI about parameter changes.
    */
    void parameterChanged(uint32_t index, float value) override
    {
        switch (static_cast<Parameters>(index))
        {
        // inputs
        case kParameter_sb_strength:
            voiceOptimizationGroup.ballancerMeters.knob.setValue(value, false);
            return;
        case kParameter_pre_gain:
            inputGroup.gainKnob.setValue(value, false);
            return;
        case kParameter_sbmb_strength:
            enabled.voiceOptimization = value >= 0.5f;
            voiceOptimizationGroup.title.switch_.setChecked(enabled.voiceOptimization, false);
            voiceOptimizationGroup.updateColors();
            return;
        case kParameter_leveler_target:
            inputLevelerGroup.targetKnob.setValue(value, false);
            return;
        case kParameter_leveler_scale:
            enabled.leveler = value >= 0.5f;
            inputLevelerGroup.enableSwitch.setChecked(enabled.leveler, false);
            inputLevelerGroup.enableSwitch.setEnabled(enabled.global && enabled.leveler, false);
            inputLevelerGroup.leveler.setEnabled(enabled.global && enabled.leveler);
            inputLevelerGroup.targetKnob.setEnabled(enabled.global && enabled.leveler, false);
            return;
        case kParameter_mb_strength:
            voiceOptimizationGroup.mbDynamicsMeters.knob.setValue(value, false);
            return;
        // outputs
        case kParameter_sb_gain__0:
            voiceOptimizationGroup.ballancerMeters.m1.setValue(value);
            return;
        case kParameter_sb_gain__1:
            voiceOptimizationGroup.ballancerMeters.m2.setValue(value);
            return;
        case kParameter_sb_gain__2:
            voiceOptimizationGroup.ballancerMeters.m3.setValue(value);
            return;
        case kParameter_sb_gain__3:
            voiceOptimizationGroup.ballancerMeters.m4.setValue(value);
            return;
        case kParameter_sb_gain__4:
            voiceOptimizationGroup.ballancerMeters.m5.setValue(value);
            return;
        case kParameter_sb_gain__5:
            voiceOptimizationGroup.ballancerMeters.m6.setValue(value);
            return;
        case kParameter_sb_gain__6:
            voiceOptimizationGroup.ballancerMeters.m7.setValue(value);
            return;
        case kParameter_sb_gain__7:
            voiceOptimizationGroup.ballancerMeters.m8.setValue(value);
            return;
        case kParameter_limiter_gain:
            outputGroup.meter.setValueLimiter(value);
            return;
        case kParameter_input_peak_channel_0:
            inputGroup.meter.setValueL(value);
            return;
        case kParameter_input_peak_channel_1:
            inputGroup.meter.setValueR(value);
            return;
        case kParameter_lufs_out_meter:
            outputGroup.meter.setValueLufs(value);
            return;
        case kParameter_output_peak_channel_0:
            outputGroup.meter.setValueL(value);
            return;
        case kParameter_output_peak_channel_1:
            outputGroup.meter.setValueR(value);
            return;
        case kParameter_leveler_gain:
            inputLevelerGroup.leveler.setValue(value);
            return;
        case kParameter_mb_comp_gain_0:
            voiceOptimizationGroup.mbDynamicsMeters.m1.setValue(value);
            return;
        case kParameter_mb_comp_gain_1:
            voiceOptimizationGroup.mbDynamicsMeters.m2.setValue(value);
            return;
        case kParameter_mb_comp_gain_2:
            voiceOptimizationGroup.mbDynamicsMeters.m3.setValue(value);
            return;
        case kParameter_mb_comp_gain_3:
            voiceOptimizationGroup.mbDynamicsMeters.m4.setValue(value);
            return;
        case kParameter_mb_comp_gain_4:
            voiceOptimizationGroup.mbDynamicsMeters.m5.setValue(value);
            return;
        case kParameter_mb_comp_gain_5:
            voiceOptimizationGroup.mbDynamicsMeters.m6.setValue(value);
            return;
        case kParameter_mb_comp_gain_6:
            voiceOptimizationGroup.mbDynamicsMeters.m7.setValue(value);
            return;
        case kParameter_mb_comp_gain_7:
            voiceOptimizationGroup.mbDynamicsMeters.m8.setValue(value);
            return;
        case kParameter_sb_target_spectrum_0:
        case kParameter_sb_target_spectrum_1:
        case kParameter_sb_target_spectrum_2:
        case kParameter_sb_target_spectrum_3:
        case kParameter_sb_target_spectrum_4:
        case kParameter_sb_target_spectrum_5:
        case kParameter_sb_target_spectrum_6:
        case kParameter_sb_target_spectrum_7:
        case kParameter_vad_ext:
        case kParameter_pre_lowcut:
        case kParameter_sb_meter__0:
        case kParameter_sb_meter__1:
        case kParameter_sb_meter__2:
        case kParameter_sb_meter__3:
        case kParameter_sb_meter__4:
        case kParameter_sb_meter__5:
        case kParameter_sb_meter__6:
        case kParameter_sb_meter__7:
            return;
            // unused
            return;
        case kParameterCount:
            break;
        }

        DISTRHO_SAFE_ASSERT_RETURN(index >= kParameterCount,);

        switch (static_cast<ExtraParameters>(index - kParameterCount))
        {
        case kExtraParamGlobalBypass:
            enabled.global = value < 0.5f;
            globalEnableSwitch.setChecked(enabled.global, false);
            inputGroup.meter.setEnabled(enabled.global);
            inputGroup.gainKnob.setEnabled(enabled.global, false);
            inputLevelerGroup.leveler.setEnabled(enabled.global && enabled.leveler);
            inputLevelerGroup.enableSwitch.setEnabled(enabled.global && enabled.leveler, false);
            inputLevelerGroup.targetKnob.setEnabled(enabled.global && enabled.leveler, false);
            voiceIsolationGroup.title.switch_.setEnabled(enabled.global, false);
            voiceIsolationGroup.switchEnableStats.switch_.setEnabled(enabled.global && enabled.voiceIsolation, false);
            voiceIsolationGroup.updateColors();
            voiceOptimizationGroup.title.switch_.setEnabled(enabled.global && enabled.voiceOptimization, false);
            voiceOptimizationGroup.updateColors();
            outputGroup.meter.setEnabled(enabled.global);
            break;
        case kExtraParamEnableVoiceIsolation:
            enabled.voiceIsolation = value >= 0.5f;
            voiceIsolationGroup.title.switch_.setChecked(enabled.voiceIsolation, false);
            voiceIsolationGroup.switchEnableStats.switch_.setEnabled(enabled.global && enabled.voiceIsolation, false);
            voiceIsolationGroup.updateColors();
            break;
        case kExtraParamThreshold:
            voiceIsolationGroup.sliderThreshold.slider.setValue(value, false);
            break;
        case kExtraParamGracePeriod:
            voiceIsolationGroup.sliderGracePeriod.slider.setValue(value, false);
            break;
        case kExtraParamEnableStats:
            voiceIsolationGroup.switchEnableStats.switch_.setChecked(value >= 0.5f, false);
            voiceIsolationGroup.updateColors();
            break;
        case kExtraParamCurrentVAD:
            voiceIsolationGroup.statCurrent.meter.setValue(value);
            break;
        case kExtraParamAverageVAD:
            voiceIsolationGroup.statAverage.meter.setValue(value);
            break;
        case kExtraParamMinimumVAD:
            voiceIsolationGroup.statMinimum.meter.setValue(value);
            break;
        case kExtraParamMaximumVAD:
            voiceIsolationGroup.statMaximum.meter.setValue(value);
            break;
        case kExtraParamCount:
            break;
        }
    }

    // ----------------------------------------------------------------------------------------------------------------
    // Widget Callbacks

    void onNanoDisplay() override
    {
        const uint width = getWidth();
        const uint widthBy3 = width / 3;
        const uint height = getHeight();

        beginPath();
        rect(0, 0, width, getHeight());
        fillColor(theme.windowBackgroundColor);
        fill();

        const Color color2(Color(theme.widgetBackgroundColor, theme.windowBackgroundColor, 0.5f).withAlpha(0.5f));
        const Color color1(color2.withAlpha(0.f));

        beginPath();
        rect(0, 0, widthBy3, height);
        fillPaint(linearGradient(0, 0, widthBy3, 0, color2, color1));
        fill();

        beginPath();
        rect(width - widthBy3, 0, widthBy3, height);
        fillPaint(linearGradient(width - widthBy3, 0, width, 0, color1, color2));
        fill();

        beginPath();
        rect(widthBy3 - 1, 0, widthBy3 + 2, height);
        fillColor(color1);
        fill();

        // plugin name
        fontSize(theme.bigFontSize);
        fillColor(theme.textLightColor);
        textAlign(ALIGN_RIGHT|ALIGN_MIDDLE);
        text(width - theme.windowPadding,
             theme.windowPadding + globalEnableLabel.getHeight() / 2,
             "Big Blue Better Audio",
             nullptr);
    }

    void buttonClicked(SubWidget* const widget, int) override
    {
        if (widget == &standaloneInput)
        {
            if (requestAudioInput())
                standaloneInput.hide();
            return;
        }

        const uint id = widget->getId();

        QuantumSwitch* const qswitch = reinterpret_cast<QuantumSwitch*>(widget);
        DISTRHO_SAFE_ASSERT_RETURN(qswitch != nullptr,);

        const bool qenabled = qswitch->isChecked();
        float value;

        switch (id)
        {
        case kParameter_sbmb_strength:
            enabled.voiceOptimization = qenabled;
            voiceOptimizationGroup.updateColors();
            value = qenabled ? 100.f : 0.f;
            break;
        case kParameter_leveler_scale:
            enabled.leveler = qenabled;
            inputLevelerGroup.enableSwitch.setChecked(enabled.leveler, false);
            inputLevelerGroup.enableSwitch.setEnabled(enabled.global && enabled.leveler, false);
            inputLevelerGroup.leveler.setEnabled(enabled.global && enabled.leveler);
            inputLevelerGroup.targetKnob.setEnabled(enabled.global && enabled.leveler, false);
            value = qenabled ? 1.f : 0.f;
            break;
        case kParameterCount + kExtraParamGlobalBypass:
            enabled.global = qenabled;
            inputGroup.meter.setEnabled(enabled.global);
            inputGroup.gainKnob.setEnabled(enabled.global, false);
            inputLevelerGroup.leveler.setEnabled(enabled.global && enabled.leveler);
            inputLevelerGroup.enableSwitch.setEnabled(enabled.global && enabled.leveler, false);
            inputLevelerGroup.targetKnob.setEnabled(enabled.global && enabled.leveler, false);
            voiceIsolationGroup.title.switch_.setEnabled(enabled.global, false);
            voiceIsolationGroup.switchEnableStats.switch_.setEnabled(enabled.global && enabled.voiceIsolation, false);
            voiceIsolationGroup.updateColors();
            voiceOptimizationGroup.title.switch_.setEnabled(enabled.global && enabled.voiceOptimization, false);
            voiceOptimizationGroup.updateColors();
            outputGroup.meter.setEnabled(enabled.global);
            value = qenabled ? 0.f : 1.f;
            break;
        case kParameterCount + kExtraParamEnableVoiceIsolation:
            enabled.voiceIsolation = qenabled;
            voiceIsolationGroup.switchEnableStats.switch_.setEnabled(enabled.global && enabled.voiceIsolation, false);
            voiceIsolationGroup.updateColors();
            value = qenabled ? 1.f : 0.f;
            break;
        case kParameterCount + kExtraParamEnableStats:
            voiceIsolationGroup.updateColors();
            value = qenabled ? 1.f : 0.f;
            break;
        default:
            return;
        }

        // report change to host
        editParameter(id, true);
        setParameterValue(id, value);
        editParameter(id, false);
    }

    void knobDragStarted(SubWidget* const widget) override
    {
        editParameter(widget->getId(), true);
    }

    void knobDragFinished(SubWidget* const widget) override
    {
        editParameter(widget->getId(), false);
    }

    void knobValueChanged(SubWidget* const widget, const float value) override
    {
        setParameterValue(widget->getId(), value);
    }

    // ----------------------------------------------------------------------------------------------------------------
    // UI Callbacks

    void onResize(const ResizeEvent& ev) override
    {
        UI::onResize(ev);

        resizeWidgets(ev.size.getWidth(), ev.size.getHeight());
    }

    // ----------------------------------------------------------------------------------------------------------------

    DISTRHO_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(BBBAudioUI)
};

// --------------------------------------------------------------------------------------------------------------------

UI* createUI()
{
    return new BBBAudioUI();
}

// --------------------------------------------------------------------------------------------------------------------

END_NAMESPACE_DISTRHO
