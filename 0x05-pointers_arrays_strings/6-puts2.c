#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * @str : string to be printed
 * return : nothing
 */

void puts2(char *str)
{
	int k = 0;
	int h;

	while (str[k] != '\0')
	{
	k++;
	}
	for (h = 0; h < k; h += 2)
	{
	_putchar(str[h]);
	}
	_putchar('\n');
}
