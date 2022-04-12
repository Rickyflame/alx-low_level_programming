#include "main.h"

/**
 * powB raises the number base to power power
 * @base: the base
 * @power: the power
 * Return: return the answer
 */
int powB(int base, int power)
{
	int i, prod = 1;

	for (i = 0; i < power; i++)
	{
		prod = prod * base;
	}
	return (prod);
}

/**
 * numlength - returns the length og string
 * @num: operand number
 * Return: number of digits
 */
int numlength(int num)
{
	int length = 0;

	if (!num)
	{
		return (1);
	}

	while (num)
	{
		num = num / 10;
		length += 1;
	}

	return (length);
}

/**
 * putnchar - prints a number of any digit
 * @num: takes an input number
 */
void putnchar(int num)
{
	int length = numlength(num), j = length -1, k, tmp2, digit1;

	if (num ==0)
		_putchar(48);
	else
	{
		while (j >=0)
		{
			if (num % powB(10, j) == 0 && j != 0)
			{
				_putchar(48 + num / powB(10, j));
				for (k = j; k > 0; k--)
				{
					_putchar(48);
				}
				j = -1;
			}
			else
			{
				digit1 = num / powB(10, j);
				_putchar(digit1 + 48);
				tmp2 = num;
				num = powB(10, j) * digit1;
				if (numlength(tmp2) - numlength(num) == 2)
				{
					_putchar(48);
					j--;
				}
				j--;
			}
		}
	}
}

/**
 * sumr - returns the sum of numbers fro start to end with step
 * @start: the first number
 * @end: the last number
 * @step: the number of steps
 * Return: sum
 */
int sumr(int start, int end, int step)
{
	int sum = 0, i;

	for (i = start; i < end; i += step)
	{
		sum += i;
	}
	return (sum);
}
/**
 * main - prints the sum of all numbers under 1024
 * that are divisble by 3 or 5
 * Return: 0
 */
int main(void)
{
	putnchar(sumr(3, 1024, 3) + sumr(5, 1024, 5) - sumr(15, 1024, 15));
	_putchar('\n')
	return (0);
}
