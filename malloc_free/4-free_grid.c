#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a two dimensional grid
 * @grid: pointer to the grid
 * @height: number of rows
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
