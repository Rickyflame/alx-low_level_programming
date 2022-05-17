#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings
 * @separator: string to be printed between the string
 * @n: number of strings passed
 * Return: void has no return value
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list stnc;
	unsigned int i;
	char *str;

	va_start(stnc, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(stnc, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(stnc);
}
