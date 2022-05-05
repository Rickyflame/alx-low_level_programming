#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: Returns a concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int a = 0, b = 0;
	char *ptr, *ret;

	ptr = s1;
	if (s1)
		while (*ptr++)
			a++;
	else
		s1 = "";

	ptr = s2;
	if (s2)
		while (*ptr++)
			b++;
	else
		s2 = "";
	ret = malloc(a + b + 1);
	if (!ret)
		return (NULL);
	ptr = ret;
	while (*s1)
		*ptr++ = *s1++;
	while (*s2)
		*ptr++ = *s2++;
	*ptr = 0;
	return (ret);
}
