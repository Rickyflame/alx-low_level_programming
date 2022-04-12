#include "main.h"

/**
 * _abs - checks if number is positive or negative
 * @n: integer to be checked
 * Return: returns value of abs(n)
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
/**
 * print_last_digit - prints the last digit of a number
 * @n: integer whose last digit will ne printed
 * Return: lastdigit of n
 */

int print_last_digit(int n)
{
	int i;

	i = _abs((n % 10));
	_putchar(i + 48);
	return (i);
}
