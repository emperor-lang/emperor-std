#ifndef IO_H_
#define IO_H_

#include <base-banned.h>
#include <base.h>
#include <stdio.h>
#include <stdlib.h>

void print(emperorList_t*);
// void printString(char*);
void write(emperorList_t*, emperorList_t*);
void read(emperorList_t*, emperorList_t*);
emperorList_t* getStdin();

#endif /* IO_H_ */
