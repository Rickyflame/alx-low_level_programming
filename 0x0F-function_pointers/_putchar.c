#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: on success 2
 * On error, -1 is returned, nd errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
