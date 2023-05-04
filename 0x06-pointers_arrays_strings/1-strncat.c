#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 *
 * @src :the source code
 *
 * @dest :the destination code
 *
 * @n :the number of bytes from src to be appended to dest
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int j = 0, k = 0;

		while (dest[j++])
			k++;

				for (j = 0; src[j] && j < n; j++)
					dest[k++] = src[j];
		return (dest);
}
