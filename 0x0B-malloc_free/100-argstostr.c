#include "main.h"
/**
 *argstostr - argument to string function
 *@ac: argument count
 *@av: array of arguments
 *Return: returns pointer to two dimension array
 */
char *argstostr(int ac, char **av)
{
	int i, length, j, k, totallength;
	char *concantenated;

	totallength = 0, i = 0;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (i < ac)
	{
		length = 0;
		while (av[i][length] != '\0')
		{
			length++;
		}
		totallength += length + 1;
		i++;
	}
	concantenated = malloc(totallength + 1);
	if (concantenated == NULL)
	{
		return (NULL);
	}
	i = 0, j = 0;
	while (j < ac)
	{
		k = 0;
		while (av[j][k] != '\0')
		{
			concantenated[i] = av[j][k];
			k++;
			i++;
		}
		concantenated[i] = '\n';
		i++;
		j++;
	}
	concantenated[i] = '\0';
	return (concantenated);
}
