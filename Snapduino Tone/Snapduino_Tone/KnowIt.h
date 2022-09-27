#ifndef KNOW_IT_H
#define KNOW_IT_H

#include "TinyTone.h"

// ***
// *** If You’re Happy and You Know It
// ***
const NOTE _notesIfYouHappyAndYouKnowIt[] =  { {DO, 4, DOTEIGHTH}, {DO, 4, SIXTEENTH}, {FA, 4, DOTEIGHTH}, {FA, 4, SIXTEENTH}, {FA, 4, DOTEIGHTH}, {FA, 4, SIXTEENTH}, {FA, 4, DOTEIGHTH}, {FA, 4, SIXTEENTH}, {MI, 4, DOTEIGHTH}, {FA, 4, SIXTEENTH}, {SOL, 4, QUARTER},
                          {REST, 0, DOTEIGHTH}, {REST, 0, DOTEIGHTH},
                          {DO, 4, DOTEIGHTH}, {DO, 4, SIXTEENTH}, {SOL, 4, DOTEIGHTH}, {SOL, 4, SIXTEENTH}, {SOL, 4, DOTEIGHTH}, {SOL, 4, SIXTEENTH}, {SOL, 4, DOTEIGHTH}, {SOL, 4, SIXTEENTH}, {FA, 4, DOTEIGHTH}, {SOL, 4, SIXTEENTH}, {LA, 4, QUARTER},
                          {REST, 0, DOTEIGHTH}, {REST, 0, DOTEIGHTH},
                          {LA, 4, DOTEIGHTH}, {LA, 4, SIXTEENTH}, {SI_BEMOLLE, 4, DOTEIGHTH}, {SI_BEMOLLE, 4, SIXTEENTH}, {SI_BEMOLLE, 4, DOTEIGHTH}, {SI_BEMOLLE, 4, SIXTEENTH}, {D, 4, DOTEIGHTH}, {D, 4, SIXTEENTH},
                          {SI_BEMOLLE, 4, DOTEIGHTH}, {SI_BEMOLLE, 4, SIXTEENTH}, {LA, 4, DOTEIGHTH}, {LA, 4, SIXTEENTH}, {LA, 4, DOTEIGHTH}, {SOL, 4, SIXTEENTH}, {FA, 4, DOTEIGHTH}, {FA, 4, SIXTEENTH},
                          {LA, 4, DOTEIGHTH}, {LA, 4, SIXTEENTH}, {SOL, 4, DOTEIGHTH}, {SOL, 4, SIXTEENTH}, {SOL, 4, DOTEIGHTH}, {FA, 4, SIXTEENTH}, {MI, 4, DOTEIGHTH}, {MI, 4, SIXTEENTH}, {D, 4, DOTEIGHTH}, {MI, 4, SIXTEENTH}, {FA, 4, QUARTER} };

const SONG HappyAndYouKnowIt = { _notesIfYouHappyAndYouKnowIt, sizeof(_notesIfYouHappyAndYouKnowIt)/sizeof(_notesIfYouHappyAndYouKnowIt[0]), 2200 };
#endif
