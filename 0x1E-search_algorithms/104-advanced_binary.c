#include "search_algos.h"

/**
 * rec_search - searches for a value in an array of
 * integers using the Binary search algorithm
 *
 * @array:  pointer to the first element of the array to search in
 * @size: size is the number of elements in array
 * @value: value to search for
 * Return: first index where value is located or -1 if
 * value is not present in array or if array is NULL
 */

int __search(int *array, size_t size, int value)
{
	size_t l = size / 2;
	size_t m;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (m = 0; m < size; m++)
		printf("%s %d", (m == 0) ? ":" : ",", array[m]);

	printf("\n");

	if (l && size % 2 == 0)
		l--;

	if (value == array[l])
	{
		if (l > 0)
			return (__search(array, l + 1, value));
		return ((int)l);
	}

	if (value < array[l])
		return (__search(array, l + 1, value));

	l++;
	return (__search(array + l, size - l, value) + l);
}


/**
 * advanced_binary - t searches for a value in a sorted array of integers
 *
 * @array: pointer to the first element of the array to search in
 * @size: size is the number of elements in array
 * @value: value to search for
 * Return: first index where value is located or -1 if
 * value is not present in array or if array is NULL
 */

int advanced_binary(int *array, size_t size, int value)
{
	int n;

	n = __search(array, size, value);

	if (n >= 0 && array[n] != value)
		return (-1);

	return (n);
}
