#include <stdio.h>
#include "main.h"

/**
 * flip_bits -  returns the number of bits you would need
 * to flip to get from one number to another
 * @n: parameter
 * @m: parameter
 *
 * Return: nothing
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j = 0;
	int k = 0;
	unsigned long int a;
	unsigned long int b = n ^ m;

	for (j = 63; j > -1; j--)
	{
		a = b >> j;

		if (a & 1)
			k++;
	}
	return (k);
}
