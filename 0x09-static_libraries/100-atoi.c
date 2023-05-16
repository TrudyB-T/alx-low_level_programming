#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts string to integer
 * @s : pointer to be converted
 *
 * Return: integer or 0 if
 * there are no numbers in the string
 */

int _atoi(char *s)
{
	int k = 0;
	unsigned int l = 0;
	int j = 0;
	int m = 1;

	while (s[k])
	{
		if (s[k] == 45)
		{
			m *= -1;
		}
		while (s[k] >= 48 && s[k] <= 57)
		{
			j = 1;
			l = (l * 10) + (s[k] - '0');
			k++;
		}
		if (j == 1)
		{
			break;
		}
		k++;
	}
	l *= m;
	return (l);
}
