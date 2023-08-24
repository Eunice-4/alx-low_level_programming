#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to be capitalized
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
		index++;
		if (str[index] == ' ' ||
		str[index] == '\t' ||
		str[index] == '\n' ||
		str[index] == ',' ||
		str[index] == ';' ||
		str[index] == '.' ||
		str[index] == '!' ||
		str[index] == '?' ||
		str[index] == '"' ||
		str[index] == '(' ||
		str[index] == ')' ||
		str[index] == '{' ||
		str[index] == '}' ||
		index == 0)
		{
		str[index] -= 32;
		}
		index++;
	}
	return (str);
}
