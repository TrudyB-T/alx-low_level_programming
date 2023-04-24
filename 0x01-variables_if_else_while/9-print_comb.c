#include <stdio.h>
/**
  *main-entry point
  *Description : 'prints all possible combinations of single-digit numbers'
  * Return: always 0
  */
int main(void)
{
	int n;
	int y;

	for (n = 0; n < 10; ++n)
	{
		putchar(n + 48);
		if (n == 9)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
