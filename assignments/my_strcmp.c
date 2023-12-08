#include "shell.h"

int my_strcmp(const char *strA, const char *strB)
{
	while (*strA && *strB && (*strA == *strB)) 
	{
		strA++;
		strB++;
	}
	
	if (*strA == *strB)
	{
		return (0);
	}
	else if (*strA < *strB)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}

