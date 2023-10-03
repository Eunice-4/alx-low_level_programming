#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * create_file - creates a new file
 * @filename: name of file to create
 * @text_content: text to put into file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t result;
	int file_descriptor;

	if (filename == NULL)
	{
		return (-1);
	}
	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (file_descriptor == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		result = write(file_descriptor, text_content, strlen(text_content));
	}
	if (result == -1)
	{
		close(file_descriptor);
		return (-1);
	}
	close(file_descriptor);
	return (1);
}
