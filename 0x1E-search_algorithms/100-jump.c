#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array of
 * integers using the Jump search algorithm
 *
 * @array:  pointer to the first element of the array to search in
 * @size: size is the number of elements in array
 * @value: value to search for
 * Return: first index where value is located or -1 if
 * value is not present in array or if array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	int index, l, j, prev;

	if (array == NULL || size == 0)
		return (-1);

	l = (int)sqrt((double)size);
	j = 0;
	prev = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		j++;
		prev = index;
		index = j * l;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
