#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: The integer to be checked
 * Return: 1 for positive num, -1 for negative number, 0 for anything else
 */

int print_sign(int n)

{

	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	{
	_putchar('0');
	return (0);
	}
}

