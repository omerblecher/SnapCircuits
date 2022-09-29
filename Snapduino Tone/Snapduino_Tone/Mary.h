#ifndef MARY_H
#define MARY_H

#include "TinyTone.h"

// *** Bingo
// ***
const NOTE _notesMary[] =  { 
                              {SI,4, QUARTER}, {LA, 4, QUARTER}, {SOL, 4, QUARTER}, {LA, 4, QUARTER},
                              {SI,4, QUARTER}, {SI, 4, QUARTER}, {SI, 4, HALF}, 
                              {LA,4, QUARTER}, {LA, 4, QUARTER}, {LA, 4, HALF}, 
                              {SI,4, QUARTER}, {RE, 5, QUARTER}, {RE, 5, HALF}, 
                              {SI,4, QUARTER}, {LA, 4, QUARTER}, {SOL, 4, QUARTER}, {LA, 4, QUARTER},
                              {SI,4, QUARTER}, {SI, 4, QUARTER}, {SI, 4, QUARTER}, {SI, 4, QUARTER},
                              {LA,4, QUARTER}, {LA, 4, QUARTER}, {SI, 4, QUARTER}, {LA, 4, QUARTER},
                              {SOL,4, WHOLE}};
                          
const SONG Mary = { _notesMary, sizeof(_notesMary)/sizeof(_notesMary[0]), 1000 };
#endif
