#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: integer whose last digit will ne printed
 * Return: lastdigit of n
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-1 * n);
	}
}
int print_last_digit(int n)
{
	int i;

	i = _abs((n % 10));
	_putchar(i + 48);
	return (i);
}
