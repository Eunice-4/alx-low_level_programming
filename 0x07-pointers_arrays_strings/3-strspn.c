#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: input string
 * @accept: string containing valid characters for the prefix substring
 * Return: the length of the prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	{
		while (s[i] != '\0' && accept[i] != '\0' && s[i] ==  accept[i])
		{
			i++;
		}
	}
	return (i);
}
