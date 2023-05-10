#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion -  prints a string, followed by a new line
 * @s: string
 *
 * Return: Always 0
 */

void _puts_recursion(char *s)
{

		if (*s == '\0')
		{
			_putchar('\n');
			return;
		}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
