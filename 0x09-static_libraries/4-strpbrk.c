#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s : string
 * @accept : input
 *
 * Return: Always 0
 */

char *_strpbrk(char *s, char *accept)
{
	int k;
	int j;

	for (k = 0; s[k] != '\0'; k++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[k] == accept[j])
				return (s + k);
		}
	}

	return (0);
}
