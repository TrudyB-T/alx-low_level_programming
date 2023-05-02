#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a : first integer to be swapped
 * @b : second integer to be swapped
 * return : nothing
 */

void swap_int(int *a, int *b)
{
	int y;

	y = *a;
	*a = *b;
	*b = y;
}
