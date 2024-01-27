#include "function_pointers.h"
/**
 *array_iterator - iterates througn an array
 *@array: array to be iterated
 *@size: size of the array
 *@action: callback function
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;
	if (array != NULL && size > 0 && action != NULL)
	{

		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
