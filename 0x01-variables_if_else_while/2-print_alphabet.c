#include <stdio.h>
/**
  *main-entry point
  *Description : 'displays lowercase alphabets from a to z'
  * Return: always 0
  */
int main(void)
{
	int n = 97;

	while (n < 123)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
