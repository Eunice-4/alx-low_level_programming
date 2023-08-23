#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string to which str is copied
 * @src: source string to be copied
 * @n: maximum number of characters to be copied from str
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
