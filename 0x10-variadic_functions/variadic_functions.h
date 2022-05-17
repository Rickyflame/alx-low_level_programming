#ifndef VARIADIC_FUNCTIONS_
#define VARIADIC_FUNCTIONS_

#include <stdarg.h>
#include <stdio.h>

/* putchar function*/
int _putchar(char c);

/*function that returns the sum of all its parameters*/
int sum_them_all(const unsigned int n, ...);

/* functions that prints numbers, followed by a new line*/
void print_numbers(const char *separator, const unsigned int n, ...);

/* function that prints strings, followed by a new line*/
void print_strings(const char *separator, const unsigned int n, ...);

#endif
