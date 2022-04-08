#include <stdio.h>

/**
 * main - print all the hhexadecimal numbers
 * followed by new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char ch;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
