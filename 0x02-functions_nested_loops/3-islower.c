#include "main.h"

/**
 * main - entry point
 * Description: 'check if c is in lowercase'
 * @c: character to be checked
 * Return: 1 if char is lowercase otherwise 0
 */

int _isalpha(int c)

{
	if (c >= 97 && c < 123)
	{
		return (1);
		}
		return (0);
}
