#include "main.h"

/**
 *int _isdigit(int c) - checks for a digit (0 through 9)
 * @c - number to be checked
 * Return: 1 if c is a digit or otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	return (0);
}
