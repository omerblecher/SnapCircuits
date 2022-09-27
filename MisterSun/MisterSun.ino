
#include "pitches.h"

// notes in the melody:
int melody[] = {
NO_NOTES, NOTE_G5, NOTE_A5, NOTE_B5,
NOTE_C6, NO_NOTES, NOTE_E6, NO_NOTES,
NOTE_D6, NOTE_E6, NOTE_D6, NOTE_C6, NOTE_A5, NO_NOTES,
NOTE_E6, NOTE_E6, NOTE_E6, NOTE_D6, NOTE_C6,
NOTE_C6, NO_NOTES, NOTE_G5, NOTE_A5, NOTE_B5,
NOTE_C6, NO_NOTES, NOTE_E6, NO_NOTES,
NOTE_D6, NOTE_E6, NOTE_D6, NOTE_C6, NOTE_A5, NOTE_D6,
NOTE_E6, NOTE_E6, NOTE_E6, NOTE_E6, NOTE_DS6, NOTE_D6, 
NOTE_D6, NO_NOTES,
NOTE_E6, NOTE_E6, NOTE_E6, NOTE_E6, NOTE_D6, NOTE_C6,
NOTE_D6, NOTE_B5, NOTE_G5, NO_NOTES,
NOTE_E6, NOTE_E6, NOTE_E6, NOTE_D6, NOTE_C6, NOTE_E6,
NOTE_D6, NOTE_B5, NOTE_G5, NOTE_G5, NOTE_A5, NOTE_B5,
NOTE_C6, NO_NOTES, NOTE_E6, NO_NOTES,
NOTE_D6, NOTE_E6, NOTE_D6, NOTE_C6, NOTE_A5, NOTE_D6,
NOTE_E6, NOTE_E6, NOTE_E6, NOTE_D6, NOTE_C6, 
NOTE_C6

};
// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
5, 1, 1, 1,
2, 2, 2, 2,
1, 1, 1, 1, 2, 2,
2, 2, 1, 2, 1,
4, 1, 1, 1, 1,
2, 2, 2, 2,
1, 1, 1, 1, 2, 2,
2, 1, 1, 1, 2, 1,
4, 4,
2, 1, 1, 1, 1, 2,
2, 2, 2, 2,
2, 2, 1, 1, 1, 1,
2, 2, 1, 1, 1, 1,
2, 2, 2, 2,
1, 1, 1, 1, 2, 2,
2, 2, 1, 2, 1,
8

};










void setup() {
  // put your setup code here, to run once:

}

void loop() {
      // iterate over the notes of the melody:
      for (int thisNote = 0; thisNote <  (sizeof(melody) / sizeof(melody[0])) ; thisNote++) {
      
      // to calculate the note duration, take one second
      // divided by the note type.
      //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    
      double noteDuration = (1000 * noteDurations[thisNote]) / 8;
      
      if(melody[thisNote] != NO_NOTES){
          
          tone(10, melody[thisNote],noteDuration);
      
          // to distinguish the notes, set a minimum time between them.
          // the note’s duration + 30% seems to work well:
          int pauseBetweenNotes = noteDuration * 1.30;
          delay(pauseBetweenNotes);
          // stop the tone playing:
          noTone(10);
      }
      else {
        delay(noteDuration);
      }

  }
}
