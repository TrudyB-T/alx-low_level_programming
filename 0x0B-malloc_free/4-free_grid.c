#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * free_grid -  frees a 2 dimensional grid previously
 *  created by alloc_grid function.
 *
 * @grid: 2 dimensional grid
 * @height: number
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int l = 0;

	for (; l < height; l++)
	{
		free(grid[l]);
	}
	free(grid);
}
