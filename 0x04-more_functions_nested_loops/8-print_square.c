#include "main.h"

/**
 * print_square -  prints a square
 * @size : size of the square
 * return : always 0
 */
void print_square(int size)
{
	int p, m;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (p = 0; p < size; p++)
		{
			for (m = 0; m < size; m++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
