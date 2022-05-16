#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function that executes a function giveen as a parameter
 * @array: pointer that retruns an integer
 * @size: size of the array
 * @action: pointer to the function
 * Return: void has no retrun value
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action && array)
		while (size--)
			action(*(array++));
}
