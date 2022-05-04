#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: the copy destination
 * @src: the copy source
 * @n: bytes to be copied
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*src && n--)
	{
		*dest++ = *src++;
	}
	if (!*src)
	{
		while (*dest && n--)
		{
			*dest++ = 0;
		}
	}
	return (ptr);
}
