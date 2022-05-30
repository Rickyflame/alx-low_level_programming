#include "main.h"

/**
 * get_bit - function that returns the value of abit at a given index
 * @n: unsigned integer
 * @index: is the index of the bit
 * Return: returns the value of the bit at index or -1 if
 * an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (0);
	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == i)
		{
			return (n & 1);
		}
	}
	return (-1);
}
