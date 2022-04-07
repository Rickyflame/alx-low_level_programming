#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
		printf("Size of a char: %i byte(s)\n", sizeof(char));
		printf("Size of an int: %i byte(s)\n", sizeof(int));
		printf("Sizeof a long int: %i byte(s)\n", sizeof(long int));
		printf("Sizeof a long long int: %i byte(s)\n", sizeof(long long int));
		printf("Sizeof a float: %i byte(s)\n", sizeof(float));
		return (0);
}
