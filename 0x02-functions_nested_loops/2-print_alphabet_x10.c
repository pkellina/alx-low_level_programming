#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int iteration = 0;
	char letter = 'a';

	while (iteration < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		
		}
		_putchar('\n');
		
		iteration++;
	}
}
