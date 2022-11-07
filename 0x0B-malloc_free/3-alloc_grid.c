#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * alloc_grid - to return a pointer to two dimensional array of integers
 * @width: the of the grid
 * @height: the height,
 *
 * Return: pointer to two dimensional array
 */


int **alloc_grid(int width, int height)
{
	int **twoD;
	int hgt_index, wid_index;

	if (width <= 0 || height <= 0)
	return (NULL);

	twoD = malloc(sizeof(int *) * height);

	if (twoD == NULL)
	return (NULL);

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
	twoD[hgt_index] = malloc(sizeof(int) * width);

	if (twoD[hgt_index] == NULL)
	{
	for (; hgt_index >= 0; hgt_index--)
	free(twoD[hgt_index]);

	free(twoD);
	return (NULL);
	}
	}

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
	for (wid_index = 0; wid_index < width; wid_index++)
	twoD[hgt_index][wid_index] = 0;
	}

	return (twoD);
}
