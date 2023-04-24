#include <stdio.h>
/**
  *main-entry point
  *Description : 'prints all the numbers of base 16 in lowercase'
  * Return: always 0
  */
int main(void)
{
	int n;
	int y;
		
	for (n = 48; n < 58; ++n)
	{
		putchar(n);
	}
	for (y = 97; y < 103; ++y)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
