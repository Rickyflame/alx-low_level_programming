#include "main.h"

/**
 * _memcpy - function copies bytes from memory
 * @dest: memory area
 * @src: source memory file
 * @n: byte size
 * return: the pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
