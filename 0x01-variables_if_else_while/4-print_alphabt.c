#include <stdio.h>
/**
  *main-entry point
  *Description : 'displays lowercase alphabets from a to z except q and e'
  * Return: always 0
  */
int main(void)
{
	int n = 97;

	while (n < 123)
	{
		if (n == 101 || n == 113)
		{
			++n;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
