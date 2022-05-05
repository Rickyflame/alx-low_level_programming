#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function frees a 2 dimentional grid
 * @grid: address of the 2 dimensional grid
 * @height: height of the grid
 * Return: no return value
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
