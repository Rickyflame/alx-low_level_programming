#include "main.h"

/**
 * binary_to_uint - function converts binanry to numbers
 * @b: pointer to a string
 * Return: returns the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	int len, base_t;

	if (!b)
	{
		return (0);
	}
	ui = 0;
	for (len = 0; b[len] != '\0'; len++)
		;
	for (len--, base_t = 1; len >= 0; len--, base_t *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		if (b[len] & 1)
		{
			ui += base_t;
		}
	}
	return (ui);
}
