#include "main.h"

/**
 * _pow_recursion - function returns the value of x raised to y
 * @x: value of a number
 * @y: power to be raised by
 * Return: value of answer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
