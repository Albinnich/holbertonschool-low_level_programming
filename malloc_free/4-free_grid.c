#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_grid - function free_grid frees 2d grid
 * @grid: parameter
 * @height: parameter
 * Return: nothing returns
 */

void free_grid(int **grid, int height)

{
	int i;

	if (grid != NULL)
		for (i = 0; i < height; i++)

			free(grid[i]);
	free(grid);
}
