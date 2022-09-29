#ifndef BINGO_H
#define BINGO_H

#include "TinyTone.h"

// *** Bingo
// ***
const NOTE _notesBingo[] =  { {RE,4, EIGHTH},
                              {SOL,4, EIGHTH}, {SOL, 4, EIGHTH}, {RE,4, EIGHTH}, {RE, 4, EIGHTH},
                              {MI,4, EIGHTH}, {MI, 4, EIGHTH}, {RE,4, EIGHTH}, {RE, 4, EIGHTH},
                              {SOL,4, EIGHTH}, {SOL, 4, EIGHTH}, {LA,4, EIGHTH}, {LA, 4, EIGHTH},
                              {SI,4, QUARTER}, {SOL, 4, QUARTER},
                              {SI,4, QUARTER}, {SI, 4, QUARTER},
                              {DO,5, EIGHTH}, {DO,5, EIGHTH}, {DO, 5, QUARTER},
                              {LA,4, QUARTER}, {LA, 4, QUARTER},
                              {SI,4, EIGHTH}, {SI, 4, EIGHTH},{SI,4, QUARTER}, 
                              {SOL,4, QUARTER}, {SOL, 4, QUARTER},
                              {LA,4, EIGHTH}, {LA, 4, EIGHTH}, {LA,4, EIGHTH}, {SOL,4, EIGHTH},
                              {FA_DIESIS,4, EIGHTH}, {RE, 4, EIGHTH}, {MI,4, EIGHTH}, {FA_DIESIS,4, EIGHTH},
                              {SOL,4, QUARTER}, {SOL, 4, QUARTER} };
                          
const SONG Bingo = { _notesBingo, sizeof(_notesBingo)/sizeof(_notesBingo[0]), 1500 };
#endif
