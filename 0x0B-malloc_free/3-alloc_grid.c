#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - return a pointer to a 2 dimensional
 * array of integers
 * @width: array width
 * @height: array height
 *
 * Return: a pointer of two dimentional array
 */
int **alloc_grid(int width, int height)
{
	int **grit, i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **) malloc (height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i< height; i++)
	{
		grid[i] = malloc (width * sizeof(int));
		if (grid[i] == NULL)
		{
			while (i>= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return (NULL);
		}
	}
	return (grid);
}
