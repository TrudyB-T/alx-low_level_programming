#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * index: index of the bit to be gotten
 *
 * Returns: the value of the bit at index
 * or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int num = 0;

	if (index > 63)
	{
		return (-1);
	}

	num = (n >> index) & 1;

	return (num);
}
