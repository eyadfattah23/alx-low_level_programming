#include "main.h"
/**
 * free_grid - frees a 2 dimensional grid
 * @grid: pointer to the array to be freed
 * @height: rows num
 */

void free_grid(int **grid, int height)
{
	height -= 1;

	while (height >= 0)
	{
		free(grid[height]);
		height-=1;
	}
	free(grid);
}
