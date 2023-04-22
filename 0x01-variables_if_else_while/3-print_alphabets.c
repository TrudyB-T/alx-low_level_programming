#include <stdio.h>
/**
  *main-entry point
  *Description : 'displays lowercase and uppercase alphabets from a to z'
  * Return: always 0
  */
int main(void)
{
	int n = 97;
	int y = 65;

	while (n < 123)
	{
		putchar(n);
		n++;
	}
	while (y < 91)
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
