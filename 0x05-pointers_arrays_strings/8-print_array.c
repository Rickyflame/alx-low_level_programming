#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an arrayof integers
 * @a: first integer
 * @n: second integer
 * void has no return value
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
