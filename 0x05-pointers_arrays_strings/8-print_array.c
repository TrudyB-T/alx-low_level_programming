#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @n : number of elements of the array to be printed
 * @a : array of integers
 * return : nothing
 */

void print_array(int *a, int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		printf("%d", a[k]);
		if (k != (n - 1))
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
