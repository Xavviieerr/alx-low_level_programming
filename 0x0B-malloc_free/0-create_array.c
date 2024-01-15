#include "main.h"
/**
 *create_array - array creator using malloc
 *@size: size of array
 *@c: character
 *Return: returns
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size == 0)
	{
		return (NULL);
	}
	i = 0;
	ar = malloc(sizeof(char) * size);
	if (ar == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	return (ar);
}
