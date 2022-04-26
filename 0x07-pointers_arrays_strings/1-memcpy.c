#include "main.h"

/**
 * _memcpy - copies memory area from src to dest
 * @dest: destination memory area
 * @src: source memory area
 * @n: bytes filled
 * return: the pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	a = 0;
	while (a < n)
	{
		*(dest + a) = *(src + a);
		a++;
	}
	return (dest);
}
