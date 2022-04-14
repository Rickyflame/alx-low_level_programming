#include "main.h"

/**
 * print_most_numbers - prints the numbers form 0 to 9
 *
 * void has no return
 */
void print_most_numbers(void)
{
	char i = 0;

	while (i < 10)
	{
		if (i != 2 && i != 4)
		{
			_putchar('0' + i);
		}
		i++;
	}
	_putchar('\n');
}
