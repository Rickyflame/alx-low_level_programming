#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: whole string
 * @needle: substring
 * Return: pointer to the begining of located substring
 */


char *_strstr(char *haystack, char *needle)
{
int a, b;

for (a = 0; haystack[a] > '\0'; a++)
{
	for (b = a; haystack[b] > '\0' && needle[b - a] > '\0'; b++)
	{
		if (haystack[b] != needle[b - a])
		{
			break;
		}
	}
	if (needle[b - a] == '\0')
	{
		return (haystack + a);
	}
}
return (0);
}
