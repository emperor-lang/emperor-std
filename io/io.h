#ifndef IO_H_
#define IO_H_

#include <stdio.h>
#include <stdlib.h>

#include <base.h>

void print(base_Any_t);
void std_printString(char*);
void std_write(base_Any_t, base_Any_t);
void std_read(base_Any_t, base_Any_t);
base_Any_t std_getStdin();

#endif /* IO_H_ */
