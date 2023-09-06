#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - frees the 2d array
 *
 * @grid: the grid
 * @height: the height of the array
 *
 * Return: void
*/

void free_grid(int **grid, int height)
{
	int round;

	for (round = 0; round < height; round++)
		free(grid[round]);
	free(grid);
}
