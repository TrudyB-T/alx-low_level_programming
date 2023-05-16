#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src
 * to the buffer pointed to by dest
 *
 * @src : source value
 * @dest : destination value
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int k;

	for (k = 0; src[k] != '\0'; k++)
	{
		dest[k] = src[k];
	}
	dest[k++] = '\0';
	return (dest);
}
