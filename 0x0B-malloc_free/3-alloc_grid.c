#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer.
 */

int **alloc_grid(int width, int height)
{

	int **grid;
	int i, j, z;

	if (width <= 0 || height <= 0)
		return (0);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i] = malloc(sizeof(int) * width);

			if (grid[i] == NULL)
			{
				for (z = 0; z < j; z++)
				{
					free(grid[j]);
				}
			free(grid);
			return (0);
			}
		grid[i][j] = 0;
		}
	}

return (grid);
}