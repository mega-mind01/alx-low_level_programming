#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free memory
 *
 * @grid: grid block to free
 * @height: column to free
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
