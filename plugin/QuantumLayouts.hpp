// Copyright 2025 Filipe Coelho <falktx@falktx.com>
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

END_NAMESPACE_DGL
