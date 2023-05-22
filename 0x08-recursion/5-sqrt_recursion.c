#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n : number to calculate the square root of 
 *
 * Return: the natural square root of a number
 */

int _sqrt_recursion(int n)
{
	int k = 0;

	if (k * k > n )
		return (-1);

			if (k * k == n)
				return (k);
			return (_sqrt_recursion(k + 1));
}
