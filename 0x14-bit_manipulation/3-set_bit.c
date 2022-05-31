#include "main.h"

/**
 * set_bit - function that setsthe value of a bit
 * to 1 at a gven index
 * @n: pointer to an unsigned long int
 * @index: index of the bit
 * Return: returns 1 if it works or -1 if a nerror occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 63)
		return (-1);
	a = 1 << index;
	*n = (*n | a);
	return (1);
}
