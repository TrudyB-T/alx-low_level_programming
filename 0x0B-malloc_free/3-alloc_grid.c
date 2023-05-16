#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int **alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: number
 * @height: number
 *
 * Return: NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int b = 0;
	int l = 0;
	int **n;

	if (width <= 0 && height <= 0)
		return (NULL);

	n = malloc(sizeof(int *) * height);

	if (n == NULL)
		return (NULL);

	for (; b < height; b++)
	{
		n[b] = malloc(sizeof(int) * width);

		if (n[b] == NULL)
		{
			for (; b >= 0; b--)
				free(n[b]);
			free(n);
			return (NULL);
		}
	}

	for (; b < height; b++)
	{
		for (; l < width; l++)
			n[b][l] = 0;
	}
	return (n);
}
