#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 * @s: memory area
 * @b: constant byte
 * @n: bytes filled
 * Return: the pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
