#include "main.h"

/**
 * _pow_recursion - returns the value of n raised to the power of m
 * @n: number to used
 * @m: exponent to be used
 *
 * Return n ^ m
 */

int _pow_recursion(int n, int m)
{
	if (n < 0)
		return (-1);
	if (m == 0)
		return (1);
	return (n * _pow_recursion(n, m - 1));
}

