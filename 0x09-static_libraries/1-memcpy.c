#include "main.h"
#include <string.h>


/**
 * _memcpy - copies memory area
 *
 * @src : first memory area to copy from
 * @n : number of bytes to be copied
 * @dest : second memory area to copy to
 *
 * Return: a pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int l = 0;
	int k = n;

	for (; k > l; l++)
	{
		dest[l] = src[l];
		n--;
	}

	return (dest);
}
