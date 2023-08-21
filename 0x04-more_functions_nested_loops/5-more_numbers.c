#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14
 * Return: No return
 */
void more_numbers(void)
{
	int j;

	for (j = 1; j <= 10; j++)
	{
	int i;

	for (i = 0; i <= 14; i++)
	{
		if (i > 9)
		{
		putchar(i / 10 + '0');
		}
		putchar(i % 10 + '0');
	}
	putchar('\n');
	}
}
