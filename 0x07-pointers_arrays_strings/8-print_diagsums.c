#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - the sum of the two diagonals of a square matrix of integers
 * @a: 2d array of chars
 *@size: number matrix
*Return: void
 */

void print_diagsums(int *a, int size)
{
	int z;
	int add1, add2;

	add1 = 0;
	add2 = 0;

	z = 0;
	while (z < size)
	{
		add1 = add1 + *(a + z * size + z);
		add2 = add2 + *(a + z * size + size - z - 1);

		z++;
	}

	printf("%i, %i\n", add1, add2);

}
