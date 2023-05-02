#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses strings
 * @s : string to reverse
 * return : nothing
 */

void rev_string(char *s)
{
	int p = 0, d = 0;
	char r;

	while (s[d++])
		p++;

	for (d = p - 1; d >= p / 2; d--)
	{
		r = s[d];
		s[d] = s[p - d - 1];
		s[p - d - 1] = r;
	}
}
