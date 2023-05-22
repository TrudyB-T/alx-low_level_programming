#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: string one 
 * @s2: string two
 * @n: memory to be allocated
 *
 * Return: a pointer to the allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int q = 0;
	unsigned int w = 0;
	unsigned int e = 0;
	unsigned int r = 0;
	char *l;

		if (s1 == NULL)
			s1 = "";

	if (s2 == NULL)
                s2 = "";

	 while (s1[q])
		 q++;

	 while (s2[e])
		e++;

	if (n >= e)
		r = q + e;

	else
	       r = q + n;

	l = malloc(sizeof(char) * r + 1);

	if (l == NULL)
		return(NULL);

	e = 0;

	while (w < r)
	{
		if (w <= q)
			l[w] = s1[w];

		if (w >= q)
		{
			l[w] = s2[e];
			e++;
		}
		q++;
	}
	l[w] = '\0';
	return (l);
}
