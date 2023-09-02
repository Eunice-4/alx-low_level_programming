#include <stdio.h>
#include "main.h"

/**
 * main -  prints the number of arguments passed into it
 * @argv: array of arguments
 * @argc: number of arguments
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
