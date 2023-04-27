#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c : number to be checked
 * return : 1 if character is a digit or 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	return (0);
}
