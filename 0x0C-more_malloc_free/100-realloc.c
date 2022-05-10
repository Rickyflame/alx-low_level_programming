#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function reallocates a memory block
 * @ptr: pointer to the previously allocated memory
 * @old_size: bytes size of the allocated space of ptr
 * @new_size: new size of the new memory block
 * Return: returns pointer to the new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_num;
	unsigned int new, i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		free(ptr);
		new_num = malloc(new_size);
		if (new_num == NULL)
		{
			free(new_num);
			return (NULL);
		}
		return (new_num);
	}
	if (new_size == old_size)
		return (ptr);
	new_num = malloc(new_size);
	if (new_num == NULL)
	{
		free(ptr);
		free(new_num);
		return (NULL);
	}
	new = new_size > old_size ? old_size : new_size;
	for (i = 0; i < new; i++)
		new_num[i] = ((char *) ptr)[i];
	free(ptr);
	return (new_num);
}
