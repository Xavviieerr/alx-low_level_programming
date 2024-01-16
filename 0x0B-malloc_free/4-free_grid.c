#include "main.h"
/**
 *free_grid - frees two dimensional arrays
 *@grid: two dimensional array
 *@height: height of sub array
 *Return: returns
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
