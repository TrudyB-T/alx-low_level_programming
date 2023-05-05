#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of integers
 * @n : the number of elements of the array
 * @a : the array to be reversed
 *
 */

void reverse_array(int *a, int n)
{
	int k, j;

	for (j = n - 1; j >= n / 2; j--)
	{
		k = a[n - 1 - j];
		a[n - 1 - j] = a[j];
		a[j] = k;
	}
}
