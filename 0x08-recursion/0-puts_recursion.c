#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s:input string
 *
 * Return: On success 1.
 * On errot, -1 is returned, and errno is set appropriately.
 */

void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}


