#include "shell.h"

int my_strcmp(const char *strA, const char *strB)
{
	while (*strA && *strB && (*strA == *strB)) 
	{
		strA++;
		strB++;
	}

	if (*strA == '\0' && *strB == '\0')
	{
		return (0);
	}

	return (*strA - *strB);
}

