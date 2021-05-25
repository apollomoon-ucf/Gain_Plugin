/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class Gain_slider_brianMoonAudioProcessorEditor  : public juce::AudioProcessorEditor,                                                public juce::Slider::Listener
{
public:
    Gain_slider_brianMoonAudioProcessorEditor (Gain_slider_brianMoonAudioProcessor&);
    ~Gain_slider_brianMoonAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;
    void sliderValueChanged (juce::Slider* slider) override;

private:
    juce::Slider gain_slider;
    Gain_slider_brianMoonAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Gain_slider_brianMoonAudioProcessorEditor)
};
