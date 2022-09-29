/*
  Snapduino Motion
  This experiment will demonstrate the how to detect motion
  using the Snapduino.

  Daniel Porrey
  https://www.hackster.io/snapcircuits

*/
#include "TinyTone.h"

// ***
// *** Incude the songs to play. Caution, adding too many may 
// *** cause the ATtiny85 to run out of memory. Watch when it 
// *** compiles - it has 500 bytes of program memory.
// ***
#include "Happy.h"      // HappyBirthday
#include "Shave.h"      // ShaveAndAHaircut
#include "Twinkle.h"    // TwinkleLittleStar
#include "KnowIt.h"   // HappyAndYouKnowIt
#include "OldMacDonald.h" //Old MacDonald
#include "humptydumpty.h" //Humpty Dumpty
#include "MisterSun.h"    //Mister Sun
#include "Bingo.h"        //Bingo
#include "HeadShouldersKneesAndToes.h" //Head shoulders Knees and Toes"
#include "Mary.h"        //Mary had a little lamb

#define SPEAKER_PIN 10

// ***
// *** Select the songs to play by adding them to this list.
// ***
// SONG _songs[] = { ShaveAndAHaircut, HappyBirthday, TwinkleLittleStar, HappyAndYouKnowIt, OldMacDonald, HumptyDumpty, MisterSun, Bingo, HeadShouldersKneesAndToes, Mary };

SONG _songs[] = { HumptyDumpty, MisterSun, Bingo, HeadShouldersKneesAndToes, Mary};


void setup()
{
  // ***
  // ***
  // ***
  pinMode(SPEAKER_PIN, OUTPUT);
}

void loop()
{
  // ***
  // *** Play each of the selected songs one at a time.
  // ***
  for (int i = 0; i < sizeof(_songs) / sizeof(SONG); i++)
  {
    playMelody(_songs[i].notes, _songs[i].noteCount, _songs[i].tempo);
    delay(1000);
  }
}
