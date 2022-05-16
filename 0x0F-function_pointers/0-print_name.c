#include "function_pointers.h"

/**
 * print_name - function prints a name
 * @name: pointer for name
 * @f: pointer for function returning an int
 * Return:void has no return value
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
