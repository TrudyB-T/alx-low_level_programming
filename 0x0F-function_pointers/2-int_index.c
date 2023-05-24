#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @size: number of elements in the array
 * @cmp: pointer to function that compares values
 * @array: array
 *
 * Return: -1 if no element matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int v = 0;

	if (array == NULL && size <= 0 && cmp == NULL)
		return (-1);

	for (; v < size; v++)
	{
		if (cmp(array[v]))
			return (v);
	}
	return (-1);
}
