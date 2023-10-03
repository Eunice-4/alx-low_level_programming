#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file to append
 * @text_content: string containing text to append
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;
	ssize_t result;

	if (filename == NULL)
	{
		return (-1);
	}
	file_descriptor = open(filename, O_RDWR | O_APPEND);

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
