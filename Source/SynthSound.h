/*
  ==============================================================================

    SynthSound.h
    Created: 21 Dec 2021 7:10:02pm
    Author:  Anish Mukherjee

  ==============================================================================
*/

#pragma once
#include <JuceHeader.h>

class SynthSound : public juce::SynthesizerSound {
    
public:
    bool appliesToNote(int midiNoteNumber) override {return true;}
    bool appliesToChannel(int midiChannel) override {return true;}
    
};
