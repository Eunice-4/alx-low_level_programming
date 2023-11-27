#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/*
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: text to be read
 * @letters: no of letters to be read
 * Return: the actual number of letters that can be printed
 * 0 if it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t space, new_file = 0;

	FILE *file = fopen(filename, "r");

	if (file == NULL)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	space = fread(buffer, sizeof(char), letters, file);
	if (space > 0)
	{
		new_file = fwrite(buffer, sizeof(char), space, stdout);
	}

	free(buffer);
	fclose(file);
	return (new_file);
}

