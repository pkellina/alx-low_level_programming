#include "main.h"

/**
 * _islower - checks for lowercase alphabets
 *
 * @c: c is a ascii character
 *
 * Return: 1 if lowercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
