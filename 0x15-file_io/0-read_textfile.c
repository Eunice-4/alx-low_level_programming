#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to POSIX standard output
 * @filename: text file to be read and printed
 * @letters: no of letters to be printed
 * Return: number of letters, or 0 if failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int file_descriptor;
	int bytes_read;
	int bytes_written;

	if (filename == NULL)
	{
		return (0);
	}
	file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}
	bytes_read = read(file_descriptor, buffer, letters);

	if (bytes_read == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_written == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}
	free(buffer);
	close(file_descriptor);
	return (bytes_read);
}
