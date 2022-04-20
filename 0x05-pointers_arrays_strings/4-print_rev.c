#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: represents the string
 * void has no return value
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
