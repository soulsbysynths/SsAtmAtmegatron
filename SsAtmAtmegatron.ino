//SSAtmAtmegatron.ino   Atmegatron Arduino sketch
//Copyright (C) 2015  Paul Soulsby
//
//This program is free software: you can redistribute it and/or modify
//it under the terms of the GNU General Public License as published by
//the Free Software Foundation, either version 3 of the License, or
//(at your option) any later version.
//
//This program is distributed in the hope that it will be useful,
//but WITHOUT ANY WARRANTY; without even the implied warranty of
//MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//GNU General Public License for more details.
//
//You should have received a copy of the GNU General Public License
//along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include <Atm.h>
#include <AtmEngineSettings.h>
#include <AtmHardware.h>
#include <AtmEngine.h>
#include <AtmEngineProgmem.h>
#include <Pwm.h>
#include <ClipDistortion.h>
#include <Flanger.h>
#include <Wavecrusher.h>
#include <Arpeggiator.h>
#include <ArpeggiatorBase.h>
#include <ArpeggiatorProgmem.h>
#include <Midi.h>
#include <MidiBase.h>
#include <AtmPitch.h>
#include <Portamento.h>
#include <Lfo.h>
#include <LfoProgmem.h>
#include <MasterClock.h>
#include <BiquadFilter.h>
#include <Amplifier.h>
#include <Envelope.h>
#include <AtmPatchBase.h>
#include <AtmPatch.h>
#include <AtmOscillator.h>
#include <AtmOscillatorProgmem.h>
#include <Wavetable.h>
#include <AtmAudio.h>
#include <SsHelpers.h>
#include <LedCircular.h>
#include <LedRgb.h>
#include <Led.h>
#include <AnalogueControl.h>
#include <Switch.h>
#include <RotaryEncoder.h>


Atm atmegatron;

void setup()
{
	atmegatron.initialize();
}

void loop()
{
	static unsigned long last_millis;
	unsigned char ticksPassed = millis() - last_millis;
	last_millis += ticksPassed;
	atmegatron.poll(ticksPassed);	
}

