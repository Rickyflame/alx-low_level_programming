#include "main.h"

/**
 * print_alphabet - prints the alphabet in small letter
 * void has no return value
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
