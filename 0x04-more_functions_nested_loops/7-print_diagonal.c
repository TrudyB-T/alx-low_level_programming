#include "main.h"

/**
 * print_diagonal - draws a straight line in the terminal
 * @n : the number of times the character _ should be printed
 * return : always 0
 */
void print_diagonal(int n)
{
	int p, m;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (p = 0; p < n; p++)
		{
                for (m = 0; m < p; m++)
		{
		       	_putchar(32);
		}
		_putchar(92);
		_putchar('\n');
		}
	}
}
