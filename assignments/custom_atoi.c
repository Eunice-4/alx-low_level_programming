#include "shell.h"
#include <stdio.h>
#include <stdlib.h>

int custom_atoi(const char *str)
{
	int i = 0;
	int end = 0;
	int polarity = 1;

	if (str[0] == '-')
	{
		polarity = -1;
		i = 1;
	}

	while (str[i] != '\0')
	{

		if (str[i] >= '0' && str[i] <= '9')
		{
			end = end * 10 + (str[i] - '0');
		}
		else
		{
			break;
		}
		i++;
	}
	return (polarity * end);
}
