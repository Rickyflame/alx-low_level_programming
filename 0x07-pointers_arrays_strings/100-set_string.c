#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: The pointer.
 * @to: The char.
 * Return: void has no return value
 */
void set_string(char **s, char *to)
{
	*s = to;
}
