#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes to concatinates from string s2
 * Return: returns NULL if it fails and a pointer on success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int lens = n, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		lens++;
	concat = malloc(sizeof(char) * (lens + 1));

	if (concat == NULL)
		return (NULL);
	lens = 0;
	for (i = 0; s1[i]; i++)
		concat[lens++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		concat[lens++] = s2[i];
	concat[lens] = '\0';
	return (concat);
}
