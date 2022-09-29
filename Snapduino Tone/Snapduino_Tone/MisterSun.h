#ifndef MISTERSUN_H
#define MISTERSUN_H

#include "TinyTone.h"

// ***
// *** Mister Sun
// ***
const NOTE _notesMisterSun[] =  { {SOL, 4, EIGHTH}, {LA, 4, EIGHTH}, {SI, 4, EIGHTH}, 
                                    {DO, 5, QUARTER}, {REST, 5, QUARTER}, {MI, 5, QUARTER}, {REST, 5, QUARTER} , 
                                     {RE, 5, EIGHTH}, {MI, 5, EIGHTH}, {RE, 5, EIGHTH}, {DO, 5, EIGHTH}, {LA, 4, QUARTER}, {REST, 5, QUARTER}, 
                                    {MI, 5, QUARTER}, {MI, 5, QUARTER}, {MI, 5, EIGHTH}, {RE, 5, QUARTER} , {DO, 5, EIGHTH},
                                    {DO, 5, HALF}, {REST, 5, EIGHTH}, {SOL, 4, EIGHTH}, {LA, 4, EIGHTH}, {SI, 4, EIGHTH}, 
                                    {DO, 5, QUARTER}, {REST, 5, QUARTER}, {MI, 5, QUARTER}, {REST, 5, QUARTER} ,
                                    {RE, 5, EIGHTH}, {MI, 5, EIGHTH}, {RE, 5, EIGHTH}, {DO, 5, EIGHTH}, {LA, 4, QUARTER}, {RE, 5, QUARTER},
                                    {MI, 5, QUARTER}, {MI, 5, EIGHTH}, {MI, 5, EIGHTH}, {MI, 5, EIGHTH}, {RE_DIESIS, 5, QUARTER}, {RE, 5, EIGHTH},
                                    {RE, 5, HALF}, {REST, 5, HALF},
                                    {MI, 5, QUARTER}, {MI, 5, EIGHTH}, {MI, 5, EIGHTH}, {MI, 5, EIGHTH}, {RE, 5, EIGHTH}, {DO, 5, QUARTER},
                                    {RE, 5, QUARTER}, {SI, 4, QUARTER}, {SOL, 4, QUARTER}, {REST, 5, QUARTER},
                                    {MI, 5, QUARTER}, {MI, 5, QUARTER}, {MI, 5, EIGHTH}, {RE, 5, EIGHTH} , {DO, 5, EIGHTH},{MI, 5, EIGHTH},
                                    {RE, 5, QUARTER}, {SI, 4, QUARTER}, {SOL, 4, EIGHTH}, {SOL, 4, EIGHTH} , {LA, 4, EIGHTH},{SI, 4, EIGHTH},
                                    {DO, 5, QUARTER}, {REST, 5, QUARTER}, {MI, 5, QUARTER}, {REST, 5, QUARTER},
                                    {RE, 5, EIGHTH}, {MI, 5, EIGHTH}, {RE, 5, EIGHTH}, {DO, 5, EIGHTH}, {LA, 4, QUARTER}, {RE, 5, QUARTER},
                                    {MI, 5, QUARTER}, {MI, 5, QUARTER}, {MI, 5, EIGHTH}, {RE, 5, QUARTER}, {DO, 5, EIGHTH},
                                    {DO, 5, WHOLE}};

const SONG MisterSun = { _notesMisterSun, sizeof(_notesMisterSun)/sizeof(_notesMisterSun[0]), 1000 };
#endif
