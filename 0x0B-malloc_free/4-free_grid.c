#include "main.h"


/**
 * free_grid - Frees a 2 dimensional array of integers
 * @grid: 2 dimensional grid
 * @height: The height of the grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);


}
