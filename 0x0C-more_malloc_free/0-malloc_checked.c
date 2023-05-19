#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * *malloc_checked - allocates memory using malloc
 * @b: memory size to allocate
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);

	if (n == NULL)

		exit(98);
	return (n);
}
