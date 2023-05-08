#include "main.h"
#include <string.h>


/**
 * _memcpy - fills memory with a constant byte
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

	for (; n > 0; l++)
	{
		src[l] = dest[l];
		n--;
	}

	return (dest);
}
