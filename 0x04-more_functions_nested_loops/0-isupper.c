#include "main.h"

/**
 *  _isupper - checks if a letter is uppercase
 * @c - alphabet to be checked
 * Return: 1 if c is uppercase or 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	return (0);
}
