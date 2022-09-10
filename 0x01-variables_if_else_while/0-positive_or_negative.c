#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** 
 * This program will assign a random number to the variable
 *  Each time variable n is executed, order to print whether the number stored in the variable n is positive, zero or negative
 *  Return: Always 0 (Success)
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
	 	printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);
	return (0);
}

