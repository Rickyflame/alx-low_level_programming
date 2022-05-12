#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function frees dogs
 * @d: properties of the dog
 * Return: void has no return value
 */
void free_dog(dog_t *d)
{
	if (d != 0)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
