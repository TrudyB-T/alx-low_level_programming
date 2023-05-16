#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a string
 *
 * @src :the source code
 *
 * @dest :the destination code
 *
 * @n :the number of bytes from src to be coppied
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j = 0, k = 0;

	while (src[j++])
		k++;

	for (j = 0; src[j] && j < n; j++)
		dest[j] = src[j];

	for (j = k; j < n; j++)
		dest[j] = '\0';

	return (dest);
}
