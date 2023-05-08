#include "main.h"
#include <string.h>


/**
 * _memset - fills memory with a constant byte
 *
 * @s : points to memory area to be filled with constants
 * @n : first number of bytes of memory area to be filled with constant byte
 * @b : the constant byte
 *
 * Return: the pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int l = 0;

	for (; n > 0; l++)
	{
		s[l] = b;
		n--;
	}

	return (s);
}
