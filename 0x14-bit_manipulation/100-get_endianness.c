#include "main.h"

/**
 * get_endianness - function that checks the endianness
 * Return: returns 0 if big endian and 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x;
	char *y;

	x = 1;
	y = (char *) &x;
	return ((int)*y);
}
