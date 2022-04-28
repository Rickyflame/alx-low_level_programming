#include "main.h"

/**
 * isit_prime - checks if a number is a prime number
 * @n: input integer
 * @b: input integer
 * Return: if prime number then 1, otherwise 0
 */
int isit_prime(unsigned int n, unsigned int b)
{
	if (n % b == 0)
	{
		if (n == b)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return  (0 + isit_prime(n, b + 1));
}

/**
 * is_prime_number - checks if a number is a prime number
 * @n: input integer
 * Return: if prime number then 1, otherwise 0
 */
int is_prime_number(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (0);
	}
	return (isit_prime(n, 2));
}
