#include "main.h"

/**
 * more_numbers - prints 0 to 14 ten times
 *
 * void has no return
 */
void more_numbers(void)
{
	char i = 0;
	char k, j;

	while (i < 10)
	{
		for (j = 0; j < 15; j++)
		{
			k = j;
			if (j > 9)
			{
				_putchar('1');
				k = j % 10;
			}
			_putchar('0' + k);
		}
		_putchar('\n');
		i++;
	}
}
