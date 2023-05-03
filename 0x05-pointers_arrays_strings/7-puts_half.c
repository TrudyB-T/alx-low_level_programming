#include "main.h"

/**
 * puts_half -  prints half of a string
 * @str : string to be printed
 * returns : nothing
 */

void puts_half(char *str)
{
	int w = 0;
	int x;

	while (str[w] != '\0')
	{
		w++;
	}
	if (w % 2 == 1)
	{
		x = (w - 1) / 2;
		x += 1;
	}
	else
	{
		x = w / 2;
	}

	for (; x < w; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
