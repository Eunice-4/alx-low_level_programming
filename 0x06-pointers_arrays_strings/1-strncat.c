#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string to which src will be concatenated
 * @src: source string to be concatenated to desc
 * @n: maximum number of characters to concatenate from src
 * Return: a pointer to the resulting string desc
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
