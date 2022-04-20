#include "main.h"

/**
 * rev_string - function reverses a string
 * @s: represents the function
 * void has no return value
 */
void rev_string(char *s)
{
	int i, len, half;
	char temp;

	for (len = 0; s[len] != '\0'; len++)
	{
		;
		i = 0;
		half = len / 2;
	}
	while (half--)
	{
		temp = s[len - i - 1];
		s[len - i - 1] = s[i];
		s[i] = temp;
		i++;
	}
}
