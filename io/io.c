#include "io.h"

#define BUFFER_SIZE 32

void print(emperorList_t* l) { printf("%s\n", charListToString(l)); }

// TODO: Implement file-writing
void write(emperorList_t*, emperorList_t*) {}

// TODO: Implement file-writing
void read(emperorList_t*, emperorList_t*) {}

emperorList_t* getStdin()
{
	char* buffer            = (char*)malloc(BUFFER_SIZE * sizeof(char));
	size_t bufferSize       = BUFFER_SIZE;
	emperorList_t* toReturn = initEmperorList();
	while (getLine(&buffer, &bufferSize, stdin))
	{
		unite(toReturn, stringToCharList(buffer));
	}

	return toReturn;
}
