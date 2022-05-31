#include "main.h"

/**
 * clear_bit - function that set the value of a bit to 0
 * @n: pointer to unsigned long int integer
 * @index: index of the bit to set
 * Return: returns 1 if it worked or -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 63)
		return (-1);
	a = 1 << index;
	if (*n & a)
		*n ^= a;
	return (1);
}
