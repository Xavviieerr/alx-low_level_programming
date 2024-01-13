#include "main.h"
/**
 *_strlen - function
 *@s: value
 *Return: returns
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != 0)
	{
		i++;
	}
	return (i);
}
