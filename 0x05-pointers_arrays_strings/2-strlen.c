#include "main.h"
#include <stdio.h>
#include <string.h>

/*
 * _strlen - returns the length of a string
 * @s : the string to get the length of
 * return : length of a string
 */

int _strlen(char *s)

{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
