#include "main.h"
/**
 *malloc_checked - malloc creator
 *@b: size of memory to be allocated
 *Return: returns pointer to created space in memory
 */
void *malloc_checked(unsigned int b)
{
	void *arr;

	arr = malloc(b);
	if (arr == NULL)
	{
		exit(98);
	}
	return (arr);
}
