#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function returns a pointe to a 2 dimentional array
 * @width: horizontal length of the array
 * @height: vertial length of the array
 * Return: returns a pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **gridout;
	int a, b;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	gridout = malloc(height * sizeof(int *));
	if (gridout == NULL)
	{
		free(gridout);
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		gridout[a] = malloc(width * sizeof(int));
		if (gridout[a] == NULL)
		{
			for (a--; a >= 0; a--)
				free(gridout[a]);
			free(gridout);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)
			gridout[a][b] = 0;
	return (gridout);
}
