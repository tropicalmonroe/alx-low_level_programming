#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free memory allocation
 * @grid: freed 2-d array
 * @height: grid height
 * Return:0
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
