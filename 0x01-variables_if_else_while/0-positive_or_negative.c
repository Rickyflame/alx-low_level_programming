#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - assigns a random number to int n everytime
 * it executes the program
 * Return: Always 0 (Success)
 * Betty style doc for function main goes there
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*code - n is positive or negative*/
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
