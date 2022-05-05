#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns apointer to a newly allocated space
 * @str: character representation
 * Return: returns a copy of the string given a parameter
 */
char *_strdup(char *str)
{
	int a = 0, b = 0;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[b] != '\0')
		b++;
	s = malloc((b + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	while (str[a] != '\0')
	{
		s[a] = str[a];
		a++;
	}
	return (s);
}
