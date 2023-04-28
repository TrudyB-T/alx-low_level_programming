#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c : character to be checked
 * Return : 1 for a character that is a digit or 0 for anything else
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	return (0);
}