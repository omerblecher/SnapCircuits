#ifndef HEADSHOULDERS_H
#define HEADSHOULDERS_H

#include "TinyTone.h"

// *** Bingo
// ***
const NOTE _notesHeadShouldersKneesAndToes[] =  { 
                              {SOL,4, HALF}, {LA, 4, EIGHTH}, {SOL,4, EIGHTH}, {FA_DIESIS, 4, EIGHTH}, {SOL,4, EIGHTH},
                              {MI,4, QUARTER}, {SOL, 4, EIGHTH}, {SOL,4, EIGHTH}, {SOL, 4, HALF},
                              {SOL,4, HALF}, {LA, 4, EIGHTH}, {SOL,4, EIGHTH}, {FA_DIESIS, 4, EIGHTH}, {SOL,4, EIGHTH},
                              {RE,4, QUARTER}, {SOL, 4, EIGHTH}, {SOL,4, EIGHTH}, {SOL, 4, EIGHTH}, {FA, 4, EIGHTH}, {MI, 4, EIGHTH}, {RE, 4, EIGHTH},
                              {DO,4, QUARTER}, {MI, 4, QUARTER}, {SOL,4, QUARTER}, {DO, 5, QUARTER},
                              {RE,5, EIGHTH}, {DO, 5, EIGHTH}, {SI,4, EIGHTH}, {DO, 5, EIGHTH}, {LA,4, HALF}, 
                              {SI,4, HALF}, {SI, 4, EIGHTH}, {SOL,4, EIGHTH}, {LA, 4, EIGHTH}, {SI,4, EIGHTH},
                              {DO,5, QUARTER}, {DO, 4, EIGHTH}, {DO,4, EIGHTH}, {DO, 4, HALF}};
                          
const SONG HeadShouldersKneesAndToes = { _notesHeadShouldersKneesAndToes, sizeof(_notesHeadShouldersKneesAndToes)/sizeof(_notesHeadShouldersKneesAndToes[0]), 1000 };
#endif
