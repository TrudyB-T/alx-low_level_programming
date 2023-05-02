#include "main.h"

/**
 * print_rev - prints strings in reverse
 * @s : string to be printed in reverse
 * return : nothing
 */

void print_rev(char *s)
{
	int q = 0;

	while (s[q] != '\0')
	{
		q++;
	}
	for (q -= 1; q >= 0; q--)
	{
		_putchar(s[q]);
	}
	_putchar('\n');
}
