#ifndef HUMPTYDUMPTY_H
#define HUMPTYDUMPTY_H

#include "TinyTone.h"

// ***
// *** Humpty Dumpty
// ***
const NOTE _notesHumptyDumpty[] =  { {DO, 4, QUARTER}, {DO, 4, EIGHTH}, {MI, 4, QUARTER}, {MI, 4, EIGHTH},
                                    {RE, 4, EIGHTH}, {MI, 4, EIGHTH}, {RE, 4, EIGHTH}, {DO, 4, QUARTER} , {REST, 4, EIGHTH},
                                     {MI, 4, QUARTER}, {MI, 4, EIGHTH}, {SOL, 4, QUARTER}, {SOL, 4, EIGHTH},
                                    {FA, 4, EIGHTH}, {SOL, 4, EIGHTH}, {FA, 4, EIGHTH}, {MI, 4, QUARTER} , {REST, 4, EIGHTH},
                                    {LA, 4, EIGHTH}, {LA, 4, EIGHTH}, {LA, 4, EIGHTH}, {SOL, 4, EIGHTH}, {SOL, 4, EIGHTH}, {SOL, 4, EIGHTH},
                                    {FA, 4, EIGHTH}, {FA, 4, EIGHTH}, {FA, 4, EIGHTH}, {MI, 4, QUARTER} , {REST, 4, EIGHTH},
                                    {FA, 4, EIGHTH}, {FA, 4, EIGHTH}, {FA, 4, EIGHTH}, {MI, 4, EIGHTH}, {MI, 4, EIGHTH}, {MI, 4, EIGHTH},
                                    {RE, 4, EIGHTH}, {MI, 4, EIGHTH}, {RE, 4, EIGHTH}, {DO, 4, QUARTER} , {REST, 4, EIGHTH}};

const SONG HumptyDumpty = { _notesHumptyDumpty, sizeof(_notesHumptyDumpty)/sizeof(_notesHumptyDumpty[0]), 1000 };
#endif
