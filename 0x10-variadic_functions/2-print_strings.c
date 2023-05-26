#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: the string to be printed between numbers
 * @n:the number of strings passed to the function
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int v = 0;
	va_list k;
	char *s;

	va_start(k, n);

		for (; v < n; v++)
		{
			s = va_arg(k, char*);

			if (s == NULL)

				printf("(nil)");

				else
				printf("%s", s);

				if (separator != NULL && v != (n - 1))

					printf("%s", separator);

		}
		printf("\n");
		va_end(k);
}
