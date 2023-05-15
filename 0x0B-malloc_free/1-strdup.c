#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *  which contains a copy of the string given as a parameter.
 *  @str: string
 *
 *  Return: NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *s;
	int j = 0;
	int k = 1;

	s = malloc((sizeof(char) * k) + 1);


	if (str == NULL)
		return (NULL);

	while (str[k])
	{
		k++;
	}


	while (j < k)
	{
		s[j] = str[j];
		j++;
	}

	s[j] = '\0';
	return (s);
}
