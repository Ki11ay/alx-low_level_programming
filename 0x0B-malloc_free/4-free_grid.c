#include "main.h"
#include <stdlib.h>

/**
 * free_grid -a function that frees the 2D grid
 * @grid: the return of the last task(arr)
 * @height: height of the grid
*/
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
