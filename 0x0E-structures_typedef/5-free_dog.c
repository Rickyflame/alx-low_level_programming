#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function frees dogs
 * @dog_t: name of the dog
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
