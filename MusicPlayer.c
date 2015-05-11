#include "speaker.h"

const int tempo = 150;

#define rest(beat) wait_avr((beat*tempo))
#define E2(beat) speaker_play_frequency(82, (beat*tempo))
#define F2(beat) speaker_play_frequency(87, (beat*tempo))
#define G2(beat) speaker_play_frequency(98, (beat*tempo))
#define A2(beat) speaker_play_frequency(110, (beat*tempo))
#define B2f(beat) speaker_play_frequency(116, (beat*tempo))
#define B2(beat) speaker_play_frequency(123, (beat*tempo))
#define C3(beat) speaker_play_frequency(130, (beat*tempo))
#define D3(beat) speaker_play_frequency(146, (beat*tempo))
#define E3f(beat) speaker_play_frequency(155, (beat*tempo))
#define E3(beat) speaker_play_frequency(164, (beat*tempo))
#define F3(beat) speaker_play_frequency(174, (beat*tempo))
#define F3s(beat) speaker_play_frequency(185, (beat*tempo))
#define G3(beat) speaker_play_frequency(196, (beat*tempo))
#define G3s(beat) speaker_play_frequency(207, (beat*tempo))
#define A3(beat) speaker_play_frequency(220, (beat*tempo))
#define B3f(beat) speaker_play_frequency(233, (beat*tempo))
#define B3(beat) speaker_play_frequency(246, (beat*tempo))
#define C4(beat) speaker_play_frequency(261, (beat*tempo))
#define C4s(beat) speaker_play_frequency(275, (beat*tempo))
#define D4f(beat) speaker_play_frequency(280, (beat*tempo))
#define D4(beat) speaker_play_frequency(293, (beat*tempo))
#define E4f(beat) speaker_play_frequency(311, (beat*tempo))
#define E4(beat) speaker_play_frequency(329, (beat*tempo))
#define F4(beat) speaker_play_frequency(349, (beat*tempo))
#define G4(beat) speaker_play_frequency(392, (beat*tempo))
#define A4(beat) speaker_play_frequency(440, (beat*tempo))
#define B4f(beat) speaker_play_frequency(466, (beat*tempo))
#define B4(beat) speaker_play_frequency(493, (beat*tempo))
#define C5(beat) speaker_play_frequency(523, (beat*tempo))

void musicplayer_play_twinkletwinkle()
{
	C4(100); //twin
	C4(100); //kle
	G4(100); //twin
	G4(100); //kle
	A4(100); //lit
	A4(100); //tle
	G4(200); //star

	F4(100); //how
	F4(100); //I
	E4(100); //won
	E4(100); //der

	D4(100); //what
	D4(100); //you
	C4(200); //are

	G4(100); //Up
	G4(100); //a
	F4(100); //bove
	F4(100); //the

	E4(100); //sky
	E4(100); //so
	D4(200); //high

	G4(100); //like
	G4(100); //a
	F4(100); //dia
	F4(100); //mond

	E4(100); //in
	E4(100); //the
	D4(200); //sky

	C4(100); //twin
	C4(100); //kle
	G4(100); //twin
	G4(100); //kle

	A4(100); //lit
	A4(100); //tle
	G4(200); //star

	F4(100); //how
	F4(100); //I
	E4(100); //won
	E4(100); //der

	D4(100); //what
	D4(100); //you
	C4(400); //are
}

void musicplayer_play_supermario()
{
	//M1
	D4(4);
	D4(8);
	D4(6);
	D4(6);
	B3f(2);
	B4f(8);

	//M2
	F4(8);
	rest(2);
	F3(8);
	rest(2);

	//M3
	B3f(8);
	rest(1);
	F3(10);
	F3(4);
	D3(8);

	//M4
	rest(1);
	G3(8);
	A3(8);
	G3s(8);
	G3(8);

	//M5
	F3(4);
	D4(8);
	F4(4);
	G4(8);
	E4f(6);
	F4(4);

	//M6
	F4(4);
	D4(8);
	B3f(4);
	C4(6);
	A3(2);
	A3(8);

	//M3
	rest(0.05);
	B3f(8);
	rest(0.05);
	rest(1);
	F3(10);
	F3(4);
	rest(0.05);
	D3(8);
	rest(0.05);

	//M4
	rest(1);
	G3(8);
	A3(8);
	G3s(8);
	G3(8);

	//M5
	F3(4);
	D4(8);
	F4(4);
	G4(8);
	E4f(6);
	F4(4);

	//M6
	F4(4);
	D4(8);
	B3f(4);
	C4(6);
	A3(2);
	A3(8);

	//M7
	rest(1);
	F4(6);
	E4(6);
	D4f(4);
	C4s(8);
	D4(8);

	//M8
	F3(6);
	G3(6);
	B3f(2);
	rest(1);
	G3(6);
	B3f(6);
	C4(2);
	rest(1);

	//M7
	rest(1);
	F4(6);
	E4(6);
	D4f(4);
	C4s(8);
	D4(8);

	//M9
	B4f(8);
	rest(0.05);
	B4f(4);
	rest(0.05);
	B4f(8);
	rest(1);
	rest(2);

	//M7
	rest(1);
	F4(6);
	E4(6);
	D4f(4);
	C4s(8);
	D4(8);

	//M8
	F3(6);
	G3(6);
	B3f(2);
	rest(1);
	G3(6);
	B3f(6);
	C4(2);
	rest(1);
	
	//M10
	rest(1);
	C4s(10);
	C4(4);
	C4(12);
	rest(0.05);
	B3f(6);

	//M11
	B3f(4);
	rest(1);
	rest(2);
	rest(8);

	//M12
	B3f(4);
	B3f(8);
	B3f(4);
	B3f(8);
	B3f(4);
	C4(8);
	
	//M13
	D4(4);
	B3f(8);
	G3(4);
	F3(8);
	rest(2);

	//M14
	B3f(4);
	B3f(8);
	B3f(4);
	B3f(8);
	B3f(4);
	C4(6);
	D4(2);
	
	//M15
	rest(8);
	
	//M12
	B3f(4);
	B3f(8);
	B3f(4);
	B3f(8);
	B3f(4);
	C4(8);

	//M13
	D4(4);
	B3f(8);
	G3(4);
	F3(8);
	rest(2);
	
	//M1
	rest(0.05);
	D4(4);
	rest(0.05);
	D4(8);
	D4(6);
	D4(6);
	B3f(2);
	rest(0.05);
	B4f(8);

	//M2
	F4(8);
	rest(2);
	F3(8);
	rest(2);
	
	//M16
	D4(4);
	B3f(8);
	F3(6);
	F3(4);
	rest(1);
	F3s(8);

	//M17
	G3(4);
	E4f(8);
	E4f(8);
	G3(8);
	rest(2);
	rest(1);

	//M18
	A3(8);
	G4(8);
	G4(8);
	G4(8);
	F4(8);
	E4f(8);
	
	//M13
	D4(4);
	B3f(8);
	G3(4);
	F3(8);
	rest(2);
	
	//M16
	D4(4);
	B3f(8);
	F3(6);
	F3(4);
	rest(1);
	F3s(8);

	//M17
	G3(4);
	E4f(8);
	E4f(8);
	G3(8);
	rest(2);
	rest(1);

	//M19
	A3(8);
	E4f(8);
	E4f(8);
	E4f(8);
	D4(8);
	C4(8);
	
	//M20
	rest(0.05);
	B3f(8);
	rest(2);
	rest(8);	
}

void musicplayer_play_happybirthday()
{
	C3(4.0);
	wait_avr(60);
	C3(4.0);
	wait_avr(60);
	D3(8.0);
	wait_avr(60);
	C3(8.0);
	wait_avr(60);
	F3(8.0);
	wait_avr(60);
	E3(10.0);
	wait_avr(60);
	C3(4.0);
	wait_avr(60);
	C3(4.0);
	wait_avr(60);
	D3(8.0);
	wait_avr(60);
	C3(8.0);
	wait_avr(60);
	G3(8.0);
	wait_avr(60);
	F3(10.0);
	wait_avr(60);
	C3(4.0);
	wait_avr(60);
	C3(4.0);
	wait_avr(60);
	C4(8.0);
	wait_avr(60);
	A3(8.0);
	wait_avr(60);
	F3(8.0);
	wait_avr(60);
	E3(8.0);
	wait_avr(60);
	D3(8.0);
	wait_avr(60);
	B3f(4.0);
	wait_avr(60);
	B3f(4.0);
	wait_avr(60);
	A3(8.0);
	wait_avr(60);
	F3(8.0);
	wait_avr(60);
	G3(8.0);
	wait_avr(60);
	F3(12.0);
	wait_avr(60);
}