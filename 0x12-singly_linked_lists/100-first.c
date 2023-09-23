#include <stdio.h>

void start(void) __attribute__((constructor));

/**
 * start - prints two sentences before the main function
 * Return: 0
 */
void start(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
