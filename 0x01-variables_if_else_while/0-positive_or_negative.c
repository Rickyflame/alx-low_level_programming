#include <stdio.h>
#include <time.h>
/* more headers goes here
 *
 * main - Entry point 
 *
 * Return: Always 0 (Success)
 * Betty style doc for function main goes there
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is postive\n", n);
	}
	if (n = 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
