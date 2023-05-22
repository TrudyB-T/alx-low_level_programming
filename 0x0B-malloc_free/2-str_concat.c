#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string 
 *
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int m = 0;
	int n = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	int m = 0;
        int n = 0;

	while (s1[m] != '\0')
		m++;

	while (s2[n] != '\0')
	       n++;

	s = malloc(sizeof(char) * (m + n + 1));

	if (s == NULL)
	return (NULL)

	s[m] = '\0';
	return (s);
}
