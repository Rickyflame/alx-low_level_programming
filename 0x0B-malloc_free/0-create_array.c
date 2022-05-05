#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: char to initialize
 * Return: returns the pointer initialized or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *m = malloc(size);

	if (size == 0 || m == 0)
	{
		return (0);
	}

	while (size--)
	{
		m[size] = c;
	}
	return (m);
}
