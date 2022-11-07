#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * free_grid - to free two dimensional grids previously created.
 * @grid: the two dimensional grid
 * @height: the height of the grid
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL || height != 0)
	{

	for (i = 0; i < height; i++)
	{
	free(grid[i]);
	}

	free(grid);

	}

}
