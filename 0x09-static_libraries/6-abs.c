#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *@z: number to be computed
 * Return: Absolute value of number
 */
int _abs(int z)
{
	if (z < 0)
	{
		int abs_val;

		abs_val = z * -1;
		return (abs_val);
	}
	return (z);
}
