#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * main -  copies the content of a file to another file
 * @file_from: file to copy from
 * @file_to: file to copy to
 * @argc: Number of arguments passed to the program
 * @argv: Array of pointers to the arguments
 * Return: 0(success)
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO,
		"Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	
	if (file_from < 0)
	{
		dprintf(STDERR_FILENO,
		"Error: Can't read file from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY, O_CREAT, O_TRUNC, 0664);

	if (file_to < 0)
	{
		dprintf(STDERR_FILENO,
		"Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);

		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", argv[2]);
			close(file_from);
			close(file_to);
			exit(99);
		}
	}
	if (bytes_read < 0)
	{
		dprintf(STDERR_FILENO,
		"Error: Can't read file from file %s\n", argv[1]);
		close(file_from);
		close(file_to);
		exit(98);
	}
	if (close(file_from) < 0)
	{
		dprintf(STDERR_FILENO,
		"Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to) < 0)
	{
		dprintf(STDERR_FILENO,
		"Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	close(file_from);
	close(file_to);
	return (0);
}