#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str : string to be changed
 *
 * Return: a pointer to the resulting string
 */

char *string_toupper(char *str)
{
	int p = 0;

	while (str[p])
	{
		if (str[p] >= 'a' && str[p] <= 'z')
			str[p] -= 32;
		p++;
	}
	return (str)
}
