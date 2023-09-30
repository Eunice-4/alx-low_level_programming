#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to the string of binary number
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
        int exponent;
        unsigned int co_num;

        co_num = 0;

        exponent = strlen(b) - 1;

        for (; *b != '\0'; b++)
        {
                if (!b || (*b != '0' && *b != '1'))
                {
                        return (0);
                }
                if (*b == '1')
                {
                        co_num = (1 << exponent) + co_num;
                }
                exponent--;
        }
        return (co_num);
}
