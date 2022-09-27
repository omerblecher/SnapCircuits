#ifndef HAPPY_H
#define HAPPY_H

#include "TinyTone.h"

// ***
// *** Happy Birthday
// ***
const NOTE _notesHappyBirthday[] =  { {DO,4, DOTEIGHTH}, {DO,4, SIXTEENTH}, {RE, 4, QUARTER}, {DO,4, QUARTER}, {FA, 4, QUARTER}, {MI, 4, HALF},
                          {DO,4, DOTEIGHTH}, {DO,4, SIXTEENTH}, {RE, 4, QUARTER}, {DO,4, QUARTER}, {SOL, 4, QUARTER}, {FA, 4, HALF},
                          {DO,4, DOTEIGHTH}, {DO,4, SIXTEENTH}, {DO,5, QUARTER}, {LA, 4, QUARTER}, {FA, 4, QUARTER}, {MI, 4, QUARTER}, {RE, 4, DOTHALF},
                          {SI_BEMOLLE, 4, DOTEIGHTH}, {SI_BEMOLLE, 4, SIXTEENTH}, {LA, 4, QUARTER}, {FA, 4, QUARTER}, {SOL, 4, QUARTER}, {FA, 4, DOTHALF} };
                          
const SONG HappyBirthday = { _notesHappyBirthday, sizeof(_notesHappyBirthday)/sizeof(_notesHappyBirthday[0]), 1500 };
#endif
