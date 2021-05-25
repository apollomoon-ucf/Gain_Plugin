/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
Gain_slider_brianMoonAudioProcessorEditor::Gain_slider_brianMoonAudioProcessorEditor (Gain_slider_brianMoonAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    gain_slider.setSliderStyle (juce::Slider::SliderStyle::LinearVertical);
    gain_slider.setRange (0.0f, 1.0f, 0.01f);
    gain_slider.setValue (0.5f);
    addAndMakeVisible (gain_slider);
    
    
    setSize (200, 300);
}

Gain_slider_brianMoonAudioProcessorEditor::~Gain_slider_brianMoonAudioProcessorEditor()
{
}

//==============================================================================
void Gain_slider_brianMoonAudioProcessorEditor::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    g.setColour (juce::Colours::white);
    g.setFont (15.0f);
    g.drawFittedText ("Hello, World! Brian's first audio plugin!", getLocalBounds(), juce::Justification::centred, 1);
}

void Gain_slider_brianMoonAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
}