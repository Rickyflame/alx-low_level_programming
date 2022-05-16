#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - function searches for an integer
 * @array: pointer array
 * @size: number of elements in an array
 * @cmp: function pointer
 * Return: returns -1 if no element matches or something else
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}
