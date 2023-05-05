#include "main.h"
#include <stdio.h>

/**
 *  _strcmp - compares two strings
 *
 * @s1 :the pointer to the first string to be compared
 *
 * @s2 :the pointer to the second string to be compared
 *
 * Return: the difference between *s1 and *s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
