#include<stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int d = 48;
	char c ='a';
	while (d < 58)
	{
		putchar(d);
		d++;
	}
	while (c <= 'f')
	{
		putchar('\n');
	}
	return (0);
}