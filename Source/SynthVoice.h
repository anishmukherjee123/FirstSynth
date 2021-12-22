/*
  ==============================================================================

    SynthVoice.h
    Created: 21 Dec 2021 7:09:05pm
    Author:  Anish Mukherjee

  ==============================================================================
*/

#pragma once
#include <JuceHeader.h>
#include "SynthSound.h"

/*
 virtual bool     canPlaySound (SynthesiserSound *)=0
      Must return true if this voice object is capable of playing the given sound. More...
  
 virtual void     startNote (int midiNoteNumber, float velocity, SynthesiserSound *sound, int currentPitchWheelPosition)=0
      Called to start a new note. More...
  
 virtual void     stopNote (float velocity, bool allowTailOff)=0
      Called to stop a note. More...
  
 virtual bool     isVoiceActive () const
      Returns true if this voice is currently busy playing a sound. More...
  
 virtual void     pitchWheelMoved (int newPitchWheelValue)=0
      Called to let the voice know that the pitch wheel has been moved. More...
  
 virtual void     controllerMoved (int controllerNumber, int newControllerValue)=0
      Called to let the voice know that a midi controller has been moved. More...
  
 virtual void     aftertouchChanged (int newAftertouchValue)
      Called to let the voice know that the aftertouch has changed. More...
  
 virtual void     channelPressureChanged (int newChannelPressureValue)
      Called to let the voice know that the channel pressure has changed. More...
  
 virtual void     renderNextBlock (AudioBuffer< float > &outputBuffer, int startSample, int numSamples)=0
      Renders the next block of data for this voice. More...
  
 virtual void     renderNextBlock (AudioBuffer< double > &outputBuffer, int startSample, int numSamples)
      A double-precision version of renderNextBlock() More...
  
 virtual void     setCurrentPlaybackSampleRate (double newRate)
      Changes the voice's reference sample rate. More...
  
 virtual bool     isPlayingChannel (int midiChannel) const
      Returns true if the voice is currently playing a sound which is mapped to the given midi channel. More...
 */

class SynthVoice : public juce::SynthesiserVoice
{
    
public:
    // overriding methods from SynthesiserVoice JUCE class
    bool canPlaySound(juce::SynthesiserSound* sound) override;
    void startNote(int midiNoteNumber, float velocity, juce::SynthesiserSound *sound, int currentPitchWheelPosition) override;
    void stopNote(float velovity, bool allowTailOff) override;
    bool isVoiceActive() const override;
    void pitchWheelMoved(int newPitchWheelValue) override;
    void controllerMoved(int controllerNumber, int newControllerValue) override;
    void aftertouchChanged(int newAftertouchValue) override;
    void channelPressureChanged(int newChannelPressureValue) override;
    // might need to make a version of this that takes a double instead of a float
    void renderNextBlock(juce::AudioBuffer<float> &outputBuffer, int startSample, int numSamples) override;
    void setCurrentPlaybackSampleRate(double newRate) override;
    bool isPlayingChannel(int midiChannel) const override;
    
private:
    
};

