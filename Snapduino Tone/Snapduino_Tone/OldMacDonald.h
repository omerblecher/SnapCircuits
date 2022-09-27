#ifndef OLDMACDONALD_H
#define OLDMACDONALD_H

#include "TinyTone.h"

// ***
// *** Old MacDonald
// ***
const NOTE _oldMcdonaldNotes[] =  { {SOL,4, QUARTER}, {SOL,4, QUARTER}, {SOL, 4, QUARTER}, {RE,4, QUARTER}, 
                          {MI, 4, QUARTER}, {MI, 4, QUARTER}, {RE,4, HALF}, 
                          {SI ,4, QUARTER}, {SI ,4, QUARTER}, {LA, 4, QUARTER}, {LA, 4, QUARTER}, 
                          {SOL,4, DOTHALF}, {RE ,4, QUARTER},
                          {SOL,4, QUARTER}, {SOL,4, QUARTER}, {SOL, 4, QUARTER}, {RE,4, QUARTER}, 
                          {MI, 4, QUARTER}, {MI, 4, QUARTER}, {RE,4, HALF},
                          {SI ,4, QUARTER}, {SI ,4, QUARTER}, {LA, 4, QUARTER}, {LA, 4, QUARTER},
                          {SOL,4, DOTHALF}, {RE ,4, EIGHTH}, {RE ,4, EIGHTH},
                          {SOL,4, QUARTER}, {SOL,4, QUARTER}, {SOL, 4, QUARTER}, {RE ,4, EIGHTH}, {RE ,4, EIGHTH},
                          {SOL,4, QUARTER}, {SOL,4, QUARTER}, {SOL, 4, HALF}, 
                          {SOL,4, EIGHTH}, {SOL,4, EIGHTH}, {SOL, 4, QUARTER},{SOL,4, EIGHTH}, {SOL, 4, EIGHTH}, {SOL,4, QUARTER}, 
                          {SOL,4, EIGHTH}, {SOL,4, EIGHTH}, {SOL, 4, EIGHTH},{SOL,4, EIGHTH}, {SOL, 4, QUARTER}, {SOL,4, QUARTER}, 
                          {SOL,4, QUARTER}, {SOL,4, QUARTER}, {SOL, 4, QUARTER}, {RE,4, QUARTER}, 
                          {MI, 4, QUARTER}, {MI, 4, QUARTER}, {RE,4, HALF}, 
                          {SI ,4, QUARTER}, {SI ,4, QUARTER}, {LA, 4, QUARTER}, {LA, 4, QUARTER},
                          {SOL,4, WHOLE}};
                          
const SONG OldMacDonald = { _oldMcdonaldNotes, sizeof(_oldMcdonaldNotes)/sizeof(_oldMcdonaldNotes[0]), 1000 };
#endif
