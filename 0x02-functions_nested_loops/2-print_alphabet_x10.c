#include "main.h"

/**
 * main - Entry poin
 *
 * print_alphabet_x10 - prints lowercase alphabets 10 times
 * Description : 'prints alphabets in lowercase 10 times'
 *
 * return : always 0
 */

void print_alphabet_x10(void)
{
	char t;
	int n = 0;

	while (n < 10)
	{
		for (t = 'a'; t <= 'z'; t++)
	{
		_putchar(t);
	}
	_putchar('\n');
	n++;
	}
}
