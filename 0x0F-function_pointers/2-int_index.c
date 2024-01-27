#include "function_pointers.h"
/**
 *int_index - checks for first number 
 *@array: array of elements
 *@size: size of array
 *@cmp: callback function
 *Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (size <= 0)
	{
		return (-1);
	}
	if (array != NULL)
	{
		while (i < size)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
			else
			{
				i++;
			}
		}
	}
	return (-1);
}
