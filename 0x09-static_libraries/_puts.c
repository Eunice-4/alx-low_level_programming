#include <unistd.h>

/**
 * _puts - Prints a string to stdout.
 * @str: The string to be printed.
 */
void _puts(const char *str)
{
	int i = 0;
	
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

