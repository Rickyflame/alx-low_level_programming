#include "main.h"

/**
 * print_line - draws a straight line
 * @n: number of times the character _ should be printed
 * void has no return value
 */
void print_line(int n)
{
	int i = 0;

	while (i < n && n > 0)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
