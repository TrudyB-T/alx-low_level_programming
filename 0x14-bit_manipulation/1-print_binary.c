#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number to represent in binary
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int j = 0;
	int k = 0;
	unsigned long int b = 0;

	for (j = 63; j >= 0; j--)
	{
		b = n >> j;

		if (b & 1)
		{
			_putchar('1');
			k++;
		}

		else if (k != 0)
			_putchar('0');
	}

	if (k == 0)
		_putchar('0');
}
