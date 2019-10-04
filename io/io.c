#include "io.h"

#define BUFFER_SIZE 32

void std_print(base_Any_t l) { printf("%s\n", base_charListToString(l)); }

// TODO: Implement file-writing
void std_write(base_Any_t UNUSED(_1), base_Any_t UNUSED(_2)) {}

// TODO: Implement file-writing
void std_read(base_Any_t UNUSED(_1), base_Any_t UNUSED(_2)) {}

base_Any_t std_getStdin()
{
	char* buffer        = (char*)malloc(BUFFER_SIZE * sizeof(char));
	size_t bufferSize   = BUFFER_SIZE;
	base_Any_t toReturn = base_initEmperorList();
	while (getline(&buffer, &bufferSize, stdin))
	{
		base_unite(toReturn, base_stringToCharList(buffer));
	}

	free(buffer);

	return toReturn;
}
