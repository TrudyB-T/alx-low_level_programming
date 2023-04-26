#include "main.h"

/*
 * main - Entry point
 * Description : 'prints lowercase alphabets ten times'
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
