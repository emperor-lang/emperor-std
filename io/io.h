#ifndef STD_H_
#define STD_H_

#include <banned.h>
#include <base.h>
#include <stdio.h>
#include <stdlib.h>

void print(emperorList_t*);
// void printString(char*);
void write(emperorList_t*, emperorList_t*);
void read(emperorList_t*, emperorList_t*);
emperorList_t* getStdin();

#endif