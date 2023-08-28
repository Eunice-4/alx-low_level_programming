#include "main.h"

/**
 * _strchr - locates a character in a string
 * @c: character to be located
 * @s: string to be checked
 * Return: c or NULL if character is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
