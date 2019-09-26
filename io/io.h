#ifndef IO_H_
#define IO_H_

#include <stdio.h>
#include <stdlib.h>

#include <base.h>

void print(emperorList_t*);
// void printString(char*);
void write(emperorList_t*, emperorList_t*);
void read(emperorList_t*, emperorList_t*);
emperorList_t* getStdin();

#endif /* IO_H_ */
