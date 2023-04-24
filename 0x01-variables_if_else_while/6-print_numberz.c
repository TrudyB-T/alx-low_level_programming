#include <stdio.h>
/**
  *main-entry point
  *Description : 'displays single digits starting from 0'
  * Return: always 0
  */
int main(void)
{
	int n;

	for (n = 0; n < 10; ++n)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
