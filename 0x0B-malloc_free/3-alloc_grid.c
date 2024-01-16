#include "main.h"
/**
 *alloc_grid - two dimensional arrat
 *@width: x axis
 *@height: y axis
 *Return: returns pointer to the two dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **mother;
	int i, j;

	i = 0, j = 0;
	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	mother = malloc(sizeof(int *) * height);
	if (mother == NULL)
	{
		return (NULL);
	}
	while (i < height)
	{
		mother[i] = malloc(sizeof(int) * width);
		if (mother[i] == NULL)
		{
			return (NULL);
		}
		while (j < width)
		{
			mother[i][j] = 0;
			j++;
		}
		i++;
		j = 0;
	}
	return (mother);
}
