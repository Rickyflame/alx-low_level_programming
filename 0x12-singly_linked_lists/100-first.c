#include <stdio.h>

/**
 * print_bfmain - function prints before the main function
 * is executed
 * Return: void has no return value
 */
void __attribute__((constructor)) print_bfmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
