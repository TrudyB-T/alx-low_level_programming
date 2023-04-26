#include "main.h"

/**
 * print_times_table - 'prints the n times table,starting with 0'
 * @n: value of the times table to be printed
 * Return: Always 0
 */

void print_times_table(int n)

{
	int v, b, c;

	if (n >= 0 && n <= 15)
	{
		for (v = 0; v <= n; v++)
		{
			_putchar('0');
			for (b = 0; b <= n; b++)
			{
				_putchar(',');
				_putchar(' ');
				c = v * b;
				if (c <= 99)
				_putchar(' ');
				if (c <= 9)
					_putchar(' ');
				if (c >= 100)
				{
					_putchar((c / 100) + '0');
					_putchar(((c / 10)) % 10 + '0');
				}
				else if  (c <= 99 && c >= 10)
				{
					_putchar((c / 100) + '0');
				}
				_putchar((c / 100) % '0');
			}
			_putchar('\n');
		}
	}
}

