#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum integer value
 * @max: maximum integer value
 * Return: returns a pointer
 */
int *array_range(int min, int max)
{
	int *b;
	int i;

	if (min > max)
		return (NULL);
	b = malloc((max - min + 1) * sizeof(*b));
	if (b == NULL)
	{
		free(b);
		return (NULL);
	}
	for (i = 0; i <= max - min; i++)
		b[i] = min + i;
	return (b);
}
