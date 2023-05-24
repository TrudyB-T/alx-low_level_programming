#include "function_pointers.h"
#include <stdio.h>


/**
 * array_iterator - executes a function given as
 * a parameter on each element of an array
 * @array: an array
 * @size: size of the array
 * @action: pointer to the function
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int v = 0;

	if (array != NULL && action != NULL)
	{
		for (; v < size;)
		{
			action(array[v]);
			v++;
		}
	}
}
