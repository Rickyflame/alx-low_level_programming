#include "main.h"

/**
 * _putchar - prints the numbers
 *
 * Void : has no return
 */
void print_numbers(void)
{
	char i = 0;

	while (i <= 9)
	{
		_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}
