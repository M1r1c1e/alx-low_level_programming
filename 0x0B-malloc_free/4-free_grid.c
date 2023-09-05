#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid -  freeing a two dimensional grid previously created
 * @height: input
 * @grid: input
 * Return: Null if 0 or negative.
 */
void free_grid(int **grid, int height)
{
	int tall;

	for (tall = 0; tall < height; tall++)
		free(grid[tall]);
	free(grid);
}
