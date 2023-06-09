#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_calloc -  allocates memory for an array, using malloc
 * @nmemb: element of an array
 * @size: memory size to allocate
 *
 * Return: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	int n = 0;
	int o = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(o);

		if (s == NULL)
			return (NULL);

	while (n < o)
	{
		s[n] = 0;
		n++;
	}

	return (s);
}
