#ifndef TWINKLE_H
#define TWINKLE_H

#include "TinyTone.h"

// ***
// *** TwinklMI, Twinkle Little Star
// ***
const NOTE _notesTwinkle[] =  { {DO, 4, QUARTER}, {DO, 4, QUARTER}, {SOL, 4, QUARTER}, {SOL, 4, QUARTER}, {LA, 4, QUARTER}, {LA, 4, QUARTER}, {SOL, 4, HALF},
                          {FA, 4, QUARTER}, {FA, 4, QUARTER}, {MI, 4, QUARTER}, {MI, 4, QUARTER}, {RE, 4, QUARTER}, {RE, 4, QUARTER}, {DO, 4, HALF},
                          {SOL, 4, QUARTER}, {SOL, 4, QUARTER}, {FA, 4, QUARTER}, {FA, 4, QUARTER}, {MI, 4, QUARTER}, {MI, 4, QUARTER}, {RE, 4, HALF},
                          {SOL, 4, QUARTER}, {SOL, 4, QUARTER}, {FA, 4, QUARTER}, {FA, 4, QUARTER}, {MI, 4, QUARTER}, {MI, 4, QUARTER}, {RE, 4, HALF},
                          {DO, 4, QUARTER}, {DO, 4, QUARTER}, {SOL, 4, QUARTER}, {SOL, 4, QUARTER}, {LA, 4, QUARTER}, {LA, 4, QUARTER}, {SOL, 4, HALF},
                          {FA, 4, QUARTER}, {FA, 4, QUARTER}, {MI, 4, QUARTER}, {MI, 4, QUARTER}, {RE, 4, QUARTER}, {RE, 4, QUARTER}, {DO, 4, HALF} };

const SONG TwinkleLittleStar = { _notesTwinkle, sizeof(_notesTwinkle)/sizeof(_notesTwinkle[0]), 1000 };
#endif
