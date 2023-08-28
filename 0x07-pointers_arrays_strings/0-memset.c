#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @n: number of bytes to be filled
 * @s: memory area
 * @b: constant byte
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
