#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - print lower case alphabets
 *
 * Return: void
 */

void print_alphabet(void)
{
		char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
}
