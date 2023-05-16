#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: input
 *
 * Return: always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, c, d;

	c = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		d = 0;

		for (b = 0; accept[b] != '\0'; b++)
		{
			if (accept[b] == s[a])
			{
				c++;
				d = 1;
			}
		}
		if (d == 0)
			return (c);
	}
	return (c);
}
