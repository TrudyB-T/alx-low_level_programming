#include "main.h"
#include <stdio.h>

/**
 * _puts - prints string to stdout
 * @str : string to be printed
 * return : nothing
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
