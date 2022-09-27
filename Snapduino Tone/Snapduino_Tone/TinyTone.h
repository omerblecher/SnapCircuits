#ifndef TINY_TONE_H
#define TINY_TONE_H

const double TwelfthRootOfTwo = 1.0594630943592952645;
const double BaseFrequency = 16.35;

// *************************************************
// *** Public Constants
// *************************************************
#define WHOLE      1
#define HALF       2
#define DOTHALF    2
#define QUARTER    4
#define DOTQUARTER 6
#define EIGHTH     8
#define DOTEIGHTH 12
#define SIXTEENTH 16

#define REST 0
#define C    1
#define CS   2
#define D    3
#define DS   4
#define E    5
#define F    6
#define FS   7
#define G    8
#define GS   9
#define A   10
#define AS  11
#define BF  11
#define B   12

#define DO              1
#define DO_DIESIS       2
#define RE_BEMOLLE      2
#define RE              3
#define RE_DIESIS       4
#define MI_BEMOLLE      4
#define MI              5
#define FA              6
#define FA_DIESIS       7
#define SOL_BEMOLLE     7
#define SOL             8
#define SOL_DIESIS      9
#define LA_BEMOLLE      9
#define LA              10
#define LA_DIESIS       11
#define SI_BEMOLLE      11
#define SI              12



struct NOTE
{
  uint8_t scale;
  uint8_t octave;
  uint16_t duration;
};

struct SONG
{
  NOTE* notes;
  uint16_t noteCount;
  uint16_t tempo;
};

// ***
// *** Takes a note on the scale from 1 to 12 and the
// *** desired octave and calcuates the frequeny.
// ***
double noteFrequency(NOTE note)
{
  double returnValue = 0.0;

  // ***
  // *** Make sure the octave is 0 to 8 and scale is 1 to 12.
  // ***
  if ((note.octave >= 0 && note.octave < 9) && (note.scale > 0 && note.scale < 13))
  {
    returnValue = BaseFrequency;

    uint8_t multiplier = (12 * note.octave - 1) + note.scale;

    for (int i = 0; i < multiplier; i++)
    {
      returnValue *= TwelfthRootOfTwo;
    }
  }

  return returnValue;
}



volatile uint32_t toggle_count;



void playMelody(NOTE* melody, uint16_t noteCount, uint16_t tempo)
{
  for (int i = 0; i < noteCount; i++)
  {
    uint16_t frequency = (uint16_t)noteFrequency(melody[i]);
    uint16_t noteDuration = tempo / melody[i].duration;

    // ***
    // *** Watch for rests with a frequency of 0.
    // ***
    if (frequency != 0)
    {
      // ***
      // *** Play the note.
      // ***
      tone(10, frequency,noteDuration);
    }

    // ***
    // *** Need to wait for the note finish playing.
    // ***
    int delayAfter = noteDuration * 1.3;
    delay(delayAfter);

    noTone(10);
  }
}
#endif
