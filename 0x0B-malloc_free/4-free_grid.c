#include "main.h"
#include <stdlib.h>
/**
 * free_grid -  frees a 2 dimensional grid
 * @grid: array to free
 * @height: hieght of arrat
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < hieght; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
