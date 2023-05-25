#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: the string to be printed between numbers
 * @n:the number of integers passed to the function
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int v = 0;
	va_list k;
	va_start(k, n);

		for (; v < n; v++)
		{
			printf("%d", va_arg(k, int));

			if (separator != NULL && v != (n-1))
				printf("%s", separator);
		}
	printf("\n");
	va_end(k);
}
