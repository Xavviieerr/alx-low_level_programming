#include "main.h"
/**
 *array_range - range of values
 *@min: minimum
 *@max: maximum
 *Return: returns pointer
 */
int *array_range(int min, int max)
{
	int *arr;
	int count, i, copy;

	count = 0, i = 0;
	copy = min;
	if (min > max)
	{
		return (NULL);
	}
	if (copy != max)
	{
		copy++;
		count++;
	}
	arr = malloc(sizeof(int) * count + 2);
	if (arr == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
