#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of arguments
 * Return: returns sum of all arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ads;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(ads, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ads, int);
	}
	va_end(ads);
	return (sum);
}
