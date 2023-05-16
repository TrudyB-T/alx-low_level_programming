#include "main.h"

/**
 *  _islower -  checks for lowercase character
 * @c : character to be checked
 * Return: 1 if c is lowercase or 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c < 123)
	{
		return (1);
	}
	return (0);
}
