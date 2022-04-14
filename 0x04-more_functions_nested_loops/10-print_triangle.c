#include "main.h"

/**
 * print_triangle - draws a triangle
 * @size: size of the triangle
 * void has no return value
 */
void print_triangle(int size)
{
	int i, j, x = size - 1;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < x)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			x--;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
