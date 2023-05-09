#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of
 * the two diagonals of a square matrix of integers
 *
 * @size: input
 * @a: string
 *
 * Return: Always 0
 */

void print_diagsums(int *a, int size)
{
	int w;
	int x;
	int y = 0;
	int z = 0;

	for (w = 0; w <= (size * size); w = w + size + 1)
		y = y + a[w];

	for (x = size - 1; x <= (size * size) - size; x = x + size - 1)
		z = z + a[x];
	printf("%d, %d\n", y, z);
}
