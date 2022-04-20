#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: represents the string
 * void has no return value
 */
void puts_half(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
	{
		;
	}
	len++;

	for (len /= 2; str[len] != '\0'; len++)
	{
		_putchar(str[len]);
	}
	_putchar('\n');
}
