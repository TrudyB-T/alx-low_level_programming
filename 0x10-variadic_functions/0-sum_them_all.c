#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of arguments 
 * @...: parameters
 *
 * Return: 0 if n is zero
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list k;
	unsigned int l;
	int sum = 0;

	va_start(k, n);

	if (n == 0)
	{
		return (0);
	}
	for (l = 0; l < n; l++)
	{
		sum += va_arg(k, int);
	}
	
	va_end(k);
	return (sum);
}
