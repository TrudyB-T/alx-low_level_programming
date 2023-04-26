#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @w: number to be treated
 * Return: value of the last digit of number
 */
int print_last_digit(int w)
{
	int h;

	h = w % 10;
	if (h < 0)
	{
	h = h * -1;
	}
	_putchar(h + '0');
	return (h);
}
