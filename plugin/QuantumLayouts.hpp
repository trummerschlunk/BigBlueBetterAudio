// Copyright 2025-2026 Filipe Coelho <falktx@falktx.com>
// SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#include "Quantum.hpp"

START_NAMESPACE_DGL

// --------------------------------------------------------------------------------------------------------------------
// single spacer

struct QuantumSingleSpacer : HorizontalLayout
{
    QuantumSpacer spacer;

    explicit QuantumSingleSpacer(NanoSubWidget* const parent)
        : spacer(parent)
    {
        widgets.push_back({ &spacer, Expanding });
    }
};

// --------------------------------------------------------------------------------------------------------------------
// single expanding label

struct QuantumSingleLabel : HorizontalLayout
{
    QuantumLabel label;

    explicit QuantumSingleLabel(NanoSubWidget* const parent, const QuantumTheme& theme)
        : label(parent, theme)
    {
        widgets.push_back({ &label, Expanding });
    }

    void adjustSize()
    {
        label.adjustSize();
    }
};

// --------------------------------------------------------------------------------------------------------------------
// single separator line

struct QuantumSingleSeparatorLine : HorizontalLayout
{
    QuantumHorizontalSeparatorLine separator;

    explicit QuantumSingleSeparatorLine(NanoSubWidget* const parent, const QuantumTheme& theme)
        : separator(parent, theme)
    {
        widgets.push_back({ &separator, Expanding });
    }

    void adjustSize(const QuantumMetrics& metrics)
    {
        separator.setSize(metrics.separatorHorizontal);
    }
};

// --------------------------------------------------------------------------------------------------------------------
// single expanding switch

struct QuantumSingleSwitch : HorizontalLayout
{
    QuantumSwitch switch_;

    explicit QuantumSingleSwitch(NanoSubWidget* const parent, const QuantumTheme& theme)
        : switch_(parent, theme)
    {
        widgets.push_back({ &switch_, Expanding });
    }

    void adjustSize()
    {
        switch_.adjustSize();
    }
};

// --------------------------------------------------------------------------------------------------------------------
// fixed meter, expanding label

struct QuantumValueMeterWithLabel : HorizontalLayout
{
    QuantumValueMeter meter;
    QuantumLabel label;

    explicit QuantumValueMeterWithLabel(NanoSubWidget* const parent, const QuantumTheme& theme)
        : meter(parent, theme),
          label(parent, theme)
    {
        widgets.push_back({ &meter, Fixed });
        widgets.push_back({ &label, Expanding });
    }

    void adjustSize(const QuantumMetrics& metrics)
    {
        meter.setSize(metrics.valueMeterHorizontal);
        label.adjustSize();
    }
};

// --------------------------------------------------------------------------------------------------------------------
// fixed radio switch, expanding label

struct QuantumRadioSwitchWithLabel : HorizontalLayout
{
    QuantumRadioSwitch switch_;
    QuantumLabel label;

    explicit QuantumRadioSwitchWithLabel(NanoSubWidget* const parent, const QuantumTheme& theme)
        : switch_(parent, theme),
          label(parent, theme)
    {
        widgets.push_back({ &switch_, Fixed });
        widgets.push_back({ &label, Expanding });
    }

    void adjustSize(const QuantumMetrics& metrics)
    {
        switch_.setSize(metrics.radioSwitch);
        label.adjustSize();
    }
};

// --------------------------------------------------------------------------------------------------------------------
// fixed slider, expanding label

struct QuantumValueSliderWithLabel : HorizontalLayout
{
    QuantumValueSlider slider;
    QuantumLabel label;

    explicit QuantumValueSliderWithLabel(NanoSubWidget* const parent, const QuantumTheme& theme)
        : slider(parent, theme),
          label(parent, theme)
    {
        widgets.push_back({ &slider, Fixed });
        widgets.push_back({ &label, Expanding });
    }

    void adjustSize(const QuantumMetrics& metrics)
    {
        slider.setSize(metrics.valueSlider);
        label.adjustSize();
    }
};

// --------------------------------------------------------------------------------------------------------------------
// fixed slider and label, centered

struct QuantumValueCenteredSliderWithLabel : HorizontalLayout
{
    QuantumSpacer spacerL;
    QuantumValueSlider slider;
    QuantumLabel label;
    QuantumSpacer spacerR;

    explicit QuantumValueCenteredSliderWithLabel(NanoSubWidget* const parent, const QuantumTheme& theme)
        : spacerL(parent),
          slider(parent, theme),
          label(parent, theme),
          spacerR(parent)
    {
        widgets.push_back({ &spacerL, Expanding });
        widgets.push_back({ &slider, Fixed });
        widgets.push_back({ &label, Fixed });
        widgets.push_back({ &spacerR, Expanding });
    }

    void adjustSize(const QuantumMetrics& metrics)
    {
        slider.setSize(metrics.valueSlider);
        label.adjustSize();
    }
};

// --------------------------------------------------------------------------------------------------------------------
// custom layout for 8 value meters

struct BBBAudioValueMeters : HorizontalLayout
{
    QuantumLabel spacer1;
    QuantumSmallKnobWithUnitInNewline knob;
    QuantumValueMeter m1, m2, m3, m4, m5, m6, m7, m8;
    QuantumSpacer spacer2;

    explicit BBBAudioValueMeters(NanoSubWidget* const parent,
                                 const QuantumTheme& theme,
                                 const QuantumValueMeter::Orientation orientation)
        : spacer1(parent, theme),
          knob(parent, theme),
          m1(parent, theme),
          m2(parent, theme),
          m3(parent, theme),
          m4(parent, theme),
          m5(parent, theme),
          m6(parent, theme),
          m7(parent, theme),
          m8(parent, theme),
          spacer2(parent)
    {
        m1.setOrientation(orientation);
        m2.setOrientation(orientation);
        m3.setOrientation(orientation);
        m4.setOrientation(orientation);
        m5.setOrientation(orientation);
        m6.setOrientation(orientation);
        m7.setOrientation(orientation);
        m8.setOrientation(orientation);

        widgets.push_back({ &spacer1, Expanding });
        widgets.push_back({ &knob, Fixed });
        widgets.push_back({ &m1, Fixed });
        widgets.push_back({ &m2, Fixed });
        widgets.push_back({ &m3, Fixed });
        widgets.push_back({ &m4, Fixed });
        widgets.push_back({ &m5, Fixed });
        widgets.push_back({ &m6, Fixed });
        widgets.push_back({ &m7, Fixed });
        widgets.push_back({ &m8, Fixed });
        widgets.push_back({ &spacer2, Expanding });
    }

    void adjustSize(const QuantumMetrics& metrics)
    {
        knob.setSize(metrics.knob);
        m1.setSize(metrics.valueMeterVertical);
        m2.setSize(metrics.valueMeterVertical);
        m3.setSize(metrics.valueMeterVertical);
        m4.setSize(metrics.valueMeterVertical);
        m5.setSize(metrics.valueMeterVertical);
        m6.setSize(metrics.valueMeterVertical);
        m7.setSize(metrics.valueMeterVertical);
        m8.setSize(metrics.valueMeterVertical);
    }
};

// --------------------------------------------------------------------------------------------------------------------

END_NAMESPACE_DGL
