#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: n is an integer
 * 
 * Return: 1 for positve, 0 for zero and -1 for negetive numbers
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
