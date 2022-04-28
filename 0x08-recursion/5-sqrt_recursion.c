#include "main.h"

/**
 * find_root - finds the squareroot of a number
 * @val: the value to find the squareroot
 * @root: root to be tested
 * Return: returns the value of find_root
 */
int find_root(int val, int root)
{
	if ((root * root) == val)
	{
		return (root);
	}
	if (root == val / 2)
	{
		return (-1);
	}
	return (find_root(val, root + 1));
}

/**
 * _sqrt_recursion - returns the square root of number
 * @n: The number to return the square root of
 * Return: returns the value of the squareroot
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (find_root(n, root));
}
