#ifndef SHAVE_H
#define SHAVE_H

#include "TinyTone.h"

// ***
// *** Shave and a Haircut
// ***
const NOTE _notesShave[] =  { {DO, 4, QUARTER}, {SOL, 3, EIGHTH}, {SOL, 3, EIGHTH}, {LA, 3, QUARTER}, {SOL, 3, QUARTER}, {REST, 0, QUARTER}, {SI, 3, QUARTER}, {DO, 4, QUARTER} };

const SONG ShaveAndAHaircut = { _notesShave, sizeof(_notesShave)/sizeof(_notesShave[0]), 1000 };
#endif
