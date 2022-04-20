#include "main.h"

/**
 * *_strcpy - copies the function pointed to by src
 * @dest: destination of the return value
 * @src: string to be copied
 * Return: Always 1
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
		{
			break;

		}
		count++;
	}
	return (dest);
}
