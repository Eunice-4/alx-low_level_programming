#include "shell.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * custom_strlen - custom strlen
 * @str: input string
 * Return: length of the string
 */
int custom_strlen(const char *str)
{
	const char *ptr = str;
	while (*ptr)
	{
		ptr++;
	}
	return (ptr - str);
}

int main(void)
{
	char *user_input = NULL;
	size_t size_of_input = 0;
	ssize_t work_done;

	while (1)
	{
		display_prompt();

		work_done = getline(&user_input, &size_of_input, stdin);

		if (work_done == -1)
		{
			perror("Error: Getline");
			exit(1);
		}
		if (my_strcmp(user_input, "exit") == 0)
		{
			break;
		}
		run_command(user_input);
	}

	return (0);
}

