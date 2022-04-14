#include "main.h"

/**
 * print_line - prints a straight line in the terminal
 * @n: numbers of times _ will be draw
 * void has no return
 */
void print_line(int n)
{
	int i = 0;

	while(i < n && n > 0)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
