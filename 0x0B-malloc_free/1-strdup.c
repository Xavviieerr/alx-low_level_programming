#include "main.h"
/**
 *_strdup - string duplicator
 *@str: string to be duplicated
 *Return: returns
 */
char *_strdup(char *str)
{
	char *st;
	unsigned int length, i;

	i = 0;
	length = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length] != '\0')
	{
		length++;
	}
	st = malloc(sizeof(char) * (length + 1));
	if (st == NULL)
	{
		return (NULL);
	}
	while (i < length)
	{
		st[i] = str[i];
		i++;
	}
	return (st);
}
