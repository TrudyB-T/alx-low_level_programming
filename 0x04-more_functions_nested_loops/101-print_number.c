#include "main.h"

/**
 * print_number - prints an integer
 * @n : integer to be printed
 * return : always 0
 */
void print_number(int n)
{
	unsigned int y = n;

	if (n < 0)
	{
		n *= -1;
		y = n;
		_putchar('-');
	}
	y /= 10;
	if (y != 0)
		print_number(y);
	_putchar((unsigned int) n % 10 + '0');
}
