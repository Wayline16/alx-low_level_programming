#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * Write a function that frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 * Prototype: void free_grid(int **grid, int height);
 * Note that we will compile with your alloc_grid.c file.
 * Make sure it compiles.
 */
void free_grid(int **grid, int height)
{
	int y;

	if (grid == NULL || grid == 0)
	{
		return;
	}
	for (y = 0; y < height;  y++)
	{
		free(grid[y]);
	}
	free(grid);
}
