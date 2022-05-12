#include "dog.h"
#include <stdlib.h>

/**
 * copy - make a copy
 * @src: data of the original
 * Return: returns a pointer
 */
char *copy(char *src)
{
	char *ptr;
	int i, len;

	if (src == NULL)
	{
		return (NULL);
	}

	for (len = 0; src[len] != '\0'; len++)
		;
	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		ptr[i] = src[i];
	}
	ptr[i] = '\0';
	return (ptr);
}
/**
 * new_dog - function creates a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: new name of the owner
 * Return: returns the name and owner of the dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bailey;
	char *new_name, *new_owner;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	bailey = malloc(sizeof(dog_t));
	if (bailey == NULL)
	{
		return (NULL);
	}
	new_name = copy(name);
	if (new_name == NULL)
	{
		free(bailey);
		return (NULL);
	}
	(*bailey).name = new_name;
	(*bailey).age = age;
	new_owner = copy(owner);
	if (new_owner == NULL)
	{
		free((*bailey).name);
		free(bailey);
		return (NULL);
	}
	(*bailey).owner = new_owner;
	return (bailey);
}
