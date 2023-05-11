#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - checks if the input integer is a prime number
 * @n : input
 *
 * Return: Always 0
 */

int is_prime_number(int n)
{
	if (n == 1 * n && n > 1 && n % 2 != 0 && n % 5 != 0)
	{
		return (1);
	}
	return (0);
}
