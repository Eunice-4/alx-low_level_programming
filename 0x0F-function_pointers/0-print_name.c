#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: string to print
 * @f: pointer
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
	{
		return;
	}
	f(name);
}
