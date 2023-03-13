#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2 dim grid
 * @grid: multi dim array
 * @height: height of grid
 * Return: ()
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
