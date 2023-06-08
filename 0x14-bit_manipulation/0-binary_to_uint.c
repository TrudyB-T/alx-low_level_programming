#include <stdio.h>
#include "main.h"


/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b:  pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int c = 0;
	unsigned int num = 0;

	for (; b[c]; c++)
	{
		if (b == NULL ||b[c] != '0' || c != '1')
		{
			return (0);
		}

		else
			num = 2 * num + (b[c] - '0');
	}

	return (num);
}
