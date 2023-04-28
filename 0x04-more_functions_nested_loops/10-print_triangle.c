#include "main.h"

/**
 * print_triangle -  prints a triangle
 * @size : size of the square
 * return : always 0
 */
void print_triangle(int size)
{
	int p, m, h;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (p = 0; p < size; p++)
		{
			for (m = size - p; m > 1; m--)
			{
				_putchar(32);
			}
			for (h = 0; h <= p; h++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
