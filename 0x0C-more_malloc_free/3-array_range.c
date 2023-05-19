#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * *array_range - creates an array of integers
 * @max: greater number
 * @min: lesser number
 *
 * Return: the pointer to the newly created array
 */


int *array_range(int min, int max)
{
	int m = 0;
	int *n;

	if (max < min)
		return (NULL);

	n = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (n == NULL)
		return (NULL);

	for (; min <= max; m++)
		n[m] = min++;

	return (n);
}
