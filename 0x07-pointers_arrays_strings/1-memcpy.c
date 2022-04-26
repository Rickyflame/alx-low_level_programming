#include "main.h"

/**
 * _memcpy - function copies bytes from memory
 * @dest: destination memory area
 * @src: source memory area
 * @n: bytes filled
 * return: the pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) =  *(src + i);
	}
	return (dest);
}
