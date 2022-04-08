#include <stdio.h>

/**
 * main - prints the numbers from zero to nine
 *
 * Return: Always0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9;)
	{
		printf("%d", i++);
	}
	printf("\n");
	return (0);
}
