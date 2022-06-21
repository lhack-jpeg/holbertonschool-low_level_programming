#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees the malloc for a 2d array
 * @grid: the pointer to the array
 * @height: How many rows in the array
 *Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
