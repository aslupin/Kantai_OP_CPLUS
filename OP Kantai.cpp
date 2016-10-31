/*
* New Year Greeting (Porn Pee Mai) on C++
* (Modified from only my railgun on C++)
*
* Creator: Visatouch Deeying (xerodotc) <xerodotc@gmail.com>
* Date: 1 Jan 2014
*/

#include <stdio.h>
#include <iostream>
#include <windows.h>

// Define accidentals sign
#define AC_SHARP 1
#define AC_NATURAL 0
#define AC_FLAT -1

// Define initial beats per minute
#define BPM 90

using namespace std;

double beat_factor; // How long that one room (four beats) should be played in seconds.

// Prototype
void playNote(char note, int ac, int octave, double duration);
void Key(const char *note, int octave, int beat);
void KeyD(const char *note, int octave, int beat, bool dotted);
void Rest(int beat, bool dotted);
void SetBPM(double bpm);

/*
* Main function
*/
int main()
{
	SetBPM(BPM);
	
    //Intro
    Key("G#", 5,16);
    Key("G#", 5,16);
    Key("G#", 5,8);
    Key("G#", 5,8);
    KeyD("G#", 5, 8, true);
    KeyD("G#", 5, 8, true);
    Key("A#", 6,8);
    KeyD("G", 5, 8, true);
    KeyD("F", 5, 8, true);
    KeyD("D#", 5, 4, true);
    Key("A#", 6,16);
    Key("G#", 5,16);
	Rest(20, true); 
    Key("C", 6,8);
    Key("A#", 6,8);
    Key("C", 6,8);
    Key("D#", 6,8);
    Key("C#", 6,8);
     Key("C", 6,16);
    Key("A#", 6,16);
    Rest( 32, true);
    Key("G#", 5,16);
    Rest( 32, true);
    KeyD("A#", 6, 4, true);
    Key("A#", 6,16);
    Key("G#", 5,16);
    Key("G", 5,16);
    Key("G#", 5,16);
    Key("A#", 6,16);
    Key("D#", 6,16);
    
	// P1 
    
    Rest( 20, true);
    Key("C#", 6,16);
	Rest( 20, true);
    KeyD("C", 6, 8, true);
    Key("A#", 6,8);
    Key("C", 6,8);
    Key("F", 6,8);
    Key("D#", 6,8);
    Key("C", 6,16);
    Key("A#", 6,16);
    
    Rest( 32, true);
    Key("G#", 5,16);
    Rest( 32, true);
    Key("A#", 6,8);
    Key("G#", 5,16);
    Key("A#", 6,16);
    Key("C", 6,8);
    Key("A#", 6,16);
    Key("C", 6,16);
    Key("C#", 6,8);
    Key("C", 6,16);
    Key("C#", 6,16);
    Key("D#", 6,16);
    Key("F", 6,16);
    Key("G", 6,16);
    Key("G#", 6,16);
    Key("A#", 7,16);
    
    Key("C", 7,8);
    Key("A#", 7,8);
    Key("C", 7,8);
    Key("D#", 7,8);
    Key("C#", 7,8);
    Key("C", 7,16);
    Key("A#", 7,16);
    Rest( 32, true);
    Key("G#", 6,16);
    Rest( 32, true);
    KeyD("A#", 7, 4, true);
    Key("A#", 7,16);
    Key("G#", 6, 16);
    Key("G", 6, 16);
    Key("G#", 6, 16);
    Key("A#", 7, 16);
    Key("D#", 7, 16);
    Rest( 32, true);
    Key("C#", 7, 16);
    Rest( 32, true);
    KeyD("C", 7, 8, true);
    Key("A#", 7, 8);
    Key("C", 7, 8);
    Key("F", 7, 8);
    Key("D#", 7, 8);
    Key("C", 7, 16);
    Key("A#", 7, 16);
    Rest( 32, true);
    Key("G#", 6, 16);
    Rest( 32, true);
    Key("A#", 7, 8);
    Key("G#", 6, 16);
    Key("A#", 7, 16);
    Key("C", 7, 8);
    Key("A#", 7, 16);
    Key("C", 7, 16);
    Key("D#", 7, 8);
    Key("C", 7, 16);
    Key("D#", 7, 16);
    Key("F", 7, 16);
    Key("G", 7, 16);
    Key("G", 7, 16);
    
    //P2 Songs
    Key("D#", 6, 8);
    Key("C", 6, 8);
    Key("A#", 6, 16);
    Key("A#", 6, 8);
    Key("G#", 5, 8);
    Key("A#", 6, 2);
    Key("D#", 6, 8);
    Key("C", 6, 8);
    Key("A#", 6, 16);
    Key("A#", 6, 8);
    Key("G#", 5, 8);
    Key("A#", 6, 8);
    Key("D#", 6, 8);
    KeyD("C", 6, 8, true);
    Key("A#", 6, 16);
    Key("G#", 5, 16);
    Rest( 16, true);
    Key("G#", 5, 16);
    Rest( 32, true);
    Key("G#", 5, 8);
    Key("F", 5, 16);
    Key("A#", 6, 16);
    Rest( 32, true);
    Key("G#", 5, 16);
    Rest( 32, true);
    Key("G#", 5, 8);
    Rest( 32, true);
    Key("F", 5, 16);
    Key("C", 6, 16);
    Rest( 32, true);
    Key("A#", 6, 16);
    Rest( 32, true);
    KeyD("A#", 6, 8, true);
    Key("F", 5, 16);
    Key("C", 6, 16);
    Rest( 32, true);
    Key("A#", 6, 16);
    Rest( 32, true);
    Key("A#", 6, 8);
    Key("G#", 5, 16);
    Key("A#", 6, 16);
    Key("C", 6, 16);  
	//^^octave clear^^//
	
    Rest( 16, true);
    Key("C", 6, 8);
    Key("C", 6, 8);
    Key("C", 6, 16);
    KeyD("D#", 6, 8,true);
    Key("C", 6, 8);
    Key("A#", 6, 8);
    Key("G#", 5, 8);
    Key("A#", 6, 8);
    Key("C", 6, 8);
    Key("A#", 6, 8);
    Key("G#", 5, 8);
    Key("F", 5, 10);
    Key("F", 5, 2);
    	//^^octave clear^^//
    	
    Key("G#", 5, 4);
    Key("F", 5, 4);
    Key("G#", 5, 4);
    Key("C", 6, 4);
    Key("A#", 6, 4);
    Key("C", 6, 8);
    Key("D#", 6, 8);
    Key("C", 6, 8);
    Key("A#", 6, 16);
    Key("G#", 5, 8);
     //^^octave clear^^//
     
	Rest( 8, true);
    Key("G#", 6, 8);
    Key("G#", 6, 8);
    KeyD("A#", 7, 8, true);
    KeyD("G#", 6, 8, true);
    Key("D#", 6, 8);
    
    KeyD("A#", 7, 8, true);
    KeyD("G#", 6, 8, true);
    Key("D#", 6, 8);
    KeyD("A#", 7, 8, true);
    KeyD("G#", 6, 8, true);
    Key("C", 7, 8);
    Rest( 16, true);
    Key("G#", 6, 8);
    Key("G#", 6, 8);
    Key("G#", 6, 8);
    KeyD("A#", 7, 8, true);
    KeyD("G#", 6, 8, true);
    Key("D#", 6, 8);
    KeyD("D#", 7, 8, true);
    KeyD("C#", 7, 8, true);
    Key("C", 7, 8);
    KeyD("C#", 7, 8, true);
    KeyD("C", 7, 8, true);
    Key("G#", 6, 8);
    Rest( 32, true);
    Key("G#", 6, 16);
    Key("A#", 7, 16);
    Key("G#", 6, 16);
    KeyD("C", 7, 8, true);
    Key("G#", 6, 16);
    Key("A#", 7, 16);
    Key("G#", 6, 16);
    Key("C", 7, 8);
    Key("C", 7, 16);
    Key("G#", 6, 8);
    Key("G#", 6, 16);
    Rest( 32, true);
    Key("G#", 6, 16);
    Key("A#", 7, 16);
    Key("G#", 6, 16);
    KeyD("C", 7, 8, true);
    Key("G#", 6, 16);
    Key("A#", 7, 16);
    Key("G#", 6, 16);
    Key("C", 7, 8);
    Key("C", 7, 16);
    Key("G#", 6, 8);
    Key("G#", 6, 16);
    Rest( 32, true);
    Key("C", 6, 16);
    Key("C", 6, 16);
    Key("C", 6, 16);
    Key("C", 6, 16);
    Key("C", 6, 16);
    Key("C", 6, 16);
    Key("C", 6, 16);
    Key("D#", 6, 16);
    Key("C", 6, 8);
    KeyD("A#", 6, 2,true);
    //octavefinish//
    
    //P3
    Rest( 16/3, true);
    Key("C", 5, 8);
    Key("C", 6, 16);
    Key("A#", 6, 16);
    Rest( 32/3, true);
    Key("A#", 6, 16);
    Key("C", 6, 8);
    Key("A#", 6, 16);
    Key("C", 6, 8);
    Key("A#", 6, 8);
    Key("C", 6, 8);
    Key("A#", 6, 8);
    Key("A#", 6, 16);
    Key("C", 6, 16);
    Key("D#", 6, 8);
    Key("D#", 6, 16);
    KeyD("D#", 6, 8, true);
    Key("D#", 6, 16);
    Key("C#", 6, 16);
    Key("C", 6, 8);
	KeyD("A#", 6, 4, true);
    Key("G#", 5, 8);
    Key("A#", 6, 8);
    //octavefinish//
    
    Rest( 32/3, true);
    Key("A#", 6, 16);
    Key("A#", 6, 16);
    Key("A#", 6, 16);
    Key("A#", 6, 8);
    Key("A#", 6, 16);
    Key("G#", 5, 16);
    Key("A#", 6, 8);
    Key("G#", 5, 16);
    Key("C", 6, 4);
    Key("A#", 6, 8);
    Key("G#", 5, 16);
    Key("C", 6, 8);
    Key("C", 6, 8);
    Key("A#", 6, 16);
    Key("G#", 5, 16);
    Key("C", 6, 8);
    Key("C", 6, 8);
    Key("A#", 6, 16);
    Key("G#", 5, 8);
    Key("G#", 5, 16);
     //octavefinish//
     
    Key("C", 6, 8);
    Key("A#", 6, 16);
    Key("C", 6, 8);
    Key("A#", 6, 8);
    Key("C", 6, 8);
    Key("A#", 6, 8);
    Key("A#", 6, 16);
    KeyD("C", 6, 16, true);
    KeyD("D#", 6, 16, true);
    Key("D#", 6, 16);
    KeyD("D#", 6, 16, true);
    Key("D#", 6, 16);
    Key("C#", 6, 16);
    Key("C", 6, 8);
    KeyD("A#", 6, 4, true);
    Key("G#", 5, 8);
    Key("A#", 6, 8);
    
    Rest( 32, true);
    Key("A#", 6, 16);
    Key("A#", 6, 16);
    Key("A#", 6, 16);
    Key("A#", 6, 8);
    Key("A#", 6, 16);
    Key("G#", 5, 16);
    Key("A#", 6, 8);
    Key("G#", 5, 16);
    Key("C", 6, 4);
    Key("A#", 6, 8);
    Key("G#", 5, 16);
    Key("C", 6, 8);
    Key("C", 6, 8);
    Key("A#", 6, 16);
	Key("G#", 5, 16);  
	Key("C", 6, 8);
	Key("C", 6, 8);
	Key("A#", 6, 16);
	Key("G#", 5, 8);
	Key("G#", 5, 16);
	
	//P4
	Rest( 16, true);
    Key("G#", 5, 8);
    Key("G#", 5, 8);
    Key("G#", 5,16);
    Key("G#", 5,16);
    Key("G#", 5,8);
    Key("G#", 5,8);
    KeyD("G#", 5, 8, true);
    KeyD("G#", 5, 8, true);
    Key("A#", 6,8);
    KeyD("G", 5, 8, true);
    KeyD("F", 5, 8, true);
    KeyD("D#", 5, 4, true);
    Key("A#", 6,16);
    Key("G#", 5,16);
	Rest(20, true); 
    Key("C", 6,8);
    
    Key("A#", 6,8);
    Key("C", 6,8);
    Key("D#", 6,8);
    Key("C#", 6,8);
     Key("C", 6,16);
    Key("A#", 6,16);
    Rest( 32, true);
    Key("G#", 5,16);
    Rest( 32, true);
    KeyD("A#", 6, 4, true);
    Key("A#", 6,16);
    Key("G#", 5,16);
    Key("G", 5,16);
    Key("G#", 5,16);
    Key("A#", 6,16);
    Key("D#", 6,16);
    
    Rest( 20, true);
    Key("C#", 6,16);
	Rest( 20, true);
    KeyD("C", 6, 8, true);
    Key("A#", 6,8);
    Key("C", 6,8);
    Key("F", 6,8);
    Key("D#", 6,8);
    Key("C", 6,16);
    Key("A#", 6,16);
    
    Rest( 32, true);
    Key("G#", 5,16);
    Rest( 32, true);
    Key("A#", 6,8);
    Key("G#", 5,16);
    Key("A#", 6,16);
    Key("C", 6,8);
    Key("A#", 6,16);
    Key("C", 6,16);
    Key("C#", 6,8);
    Key("C", 6,16);
    Key("C#", 6,16);
    Key("D#", 6,16);
    Key("F", 6,16);
    Key("G", 6,16);
    Key("G#", 6,16);
    Key("A#", 7,16);
    
    Key("C", 7,8);
    Key("A#", 7,8);
    Key("C", 7,8);
    Key("D#", 7,8);
    Key("C#", 7,8);
    Key("C", 7,16);
    Key("A#", 7,16);
    Rest( 32, true);
    Key("G#", 6,16);
    Rest( 32, true);
    KeyD("A#", 7, 4, true);
    Key("A#", 7,16);
    Key("G#", 6, 16);
    Key("G", 6, 16);
    Key("G#", 6, 16);
    Key("A#", 7, 16);
    Key("D#", 7, 16);
    Rest( 32, true);
    Key("C#", 7, 16);
    Rest( 32, true);
    KeyD("C", 7, 8, true);
    Key("A#", 7, 8);
    Key("C", 7, 8);
    Key("F", 7, 8);
    Key("D#", 7, 8);
    Key("C", 7, 16);
    Key("A#", 7, 16);
    Rest( 32, true);
    Key("G#", 6, 16);
    Rest( 32, true);
    Key("A#", 7, 8);
    Key("G#", 6, 16);
    Key("A#", 7, 16);
    Key("C", 7, 8);
    Key("A#", 7, 16);
    Key("C", 7, 16);
    Key("D#", 7, 8);
    Key("C", 7, 16);
    Key("D#", 7, 16);
    Key("F", 7, 16);
    Key("G", 7, 16);
    Key("G", 7, 16);
    
   
    
    //P5
    KeyD("A#", 7, 8, true);
    KeyD("C", 7, 8, true);
    Key("C", 7, 8);
    KeyD("C", 7, 8, true);
    KeyD("D#", 7, 8, true);
    Key("G", 6, 8);
    KeyD("G#", 6, 8, true);
    KeyD("A#", 7, 8, true);
    Key("C", 7, 8);
    KeyD("C", 7, 16, true);
    KeyD("G#", 6, 16, true);
    KeyD("G#", 6, 16, true);
    KeyD("G#", 6, 16, true);
    KeyD("G#", 6, 16, true);
    KeyD("G#", 6, 16, true);
    Key("C", 6, 4);
    Key("A#", 6, 4);
    Key("G#", 6, 1);
      
    
	return 0;
}

/*
* Recalculate beat factor according to BPM
*
* Input:
*	- bpm: Beats per minutes
*/
void SetBPM(double bpm)
{
	// Calculate beat_factor
	beat_factor = 60.0 / bpm;
	beat_factor *= 4.0;
}

/*
* Play non-dotted note
*
* Input:
* 	- note: Note labeled in alphabet with accidental (e.g. "A#")
* 	- octave: Octave
* 	- beat: Quarter note (4)? or eighth note (8)? etc.
*/
void Key(const char *note, int octave, int beat)
{
	KeyD(note, octave, beat, false);
}

/*
* Play note (specify beat)
*
* Input:
* 	- note: Note labeled in alphabet with accidental (e.g. "A#")
* 	- octave: Octave
* 	- beat: Quarter note (4)? or eighth note (8)? etc.
* 	- dotted: Is it dotted note?
*/
void KeyD(const char *note, int octave, int beat, bool dotted)
{
	int ac = AC_NATURAL;

	if (strlen(note) > 1)
	{
		switch (note[1])
		{
			case '#':
			ac = AC_SHARP;
			break;

			case 'b':
			ac = AC_FLAT;
			break;
		}
	}

	if (dotted) playNote(note[0], ac, octave, beat_factor / beat * 1000 + beat_factor / (beat * 2) * 1000);
	else playNote(note[0], ac, octave, beat_factor / beat * 1000);
}

/*
* Rest note (aka Sleep)
*
* Input:
* 	- beat: Quarter note (4)? or eighth note (8)? etc.
* 	- dotted: Is it dotted note?
*/
void Rest(int beat, bool dotted)
{
	if (dotted) Sleep(beat_factor / beat * 1000 + beat_factor / (beat * 2) * 1000);
	else Sleep(beat_factor / beat * 1000);
}

/*
* Play note (specify duration)
*
* Input:
* 	- note: Note as alphabet (exactly one character no accidental)
* 	- ac: Accidental (AC_SHARP | AC_NATURAL | AC_FLAT)
* 	- octave: Octave
* 	- duration: How long that note should be played in msec.
*/
void playNote(char note, int ac, int octave, double duration)
{
	int id;
	int i;
	double mult;
	int f[12] = {440, 466, 494, 523, 554, 587, 622, 659, 699, 740, 784, 830};

	switch (note)
	{
		case 'A':
		case 'B':
		id = (note - 'A') * 2;
		break;

		case 'C':
		case 'D':
		case 'E':
		id = 3 + (note - 'C') * 2;
		break;

		case 'F':
		case 'G':
		id = 8 + (note - 'F') * 2;
		break;
	}

	id += ac;

	mult = 1.0;
	if (octave > 4)
	{
		for (i = 4; i < octave; i++)
		{
			mult *= 2.0;
		}
	}
	else if (octave < 4)
	{
		for (i = 4; i > octave; i--)
		{
			mult /= 2.0;
		}
	}

	Beep(f[id] * mult, duration);
}
