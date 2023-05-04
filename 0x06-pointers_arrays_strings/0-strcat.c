#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @src : destination string
 * @dest : source string
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int j = 0, k;

	while (dest[j])
	{
		j++;
	}

	for (k = 0; src[k] != 0; k++)
	{
		dest[j] = src[k];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
