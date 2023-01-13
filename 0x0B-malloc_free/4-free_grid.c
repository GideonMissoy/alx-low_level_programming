#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: 2 dimensional grid
 * @height: height
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int p;

	if (grid == NULL || height <= 0)
		return;
	for (p = 0; p < height; p++)
		free(grid[p]);
	free(grid);
}
