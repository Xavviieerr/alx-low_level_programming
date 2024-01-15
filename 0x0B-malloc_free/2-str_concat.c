#include "main.h"
/**
 *str_concat - concantenate strings
 *@s1: first string
 *@s2: second string
 *Return: returns
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int tlength, length1, length2, i, j;
	char *con;

	length1 = 0, length2 = 0;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[length1] != '\0')
	{
		length1++;
	}
	while (s2[length2] != '\0')
	{
		length2++;
	}
	tlength = length1 + length2;
	con = malloc(sizeof(char) * (tlength + 1));
	if (con == NULL)
	{
		return (NULL);
	}
	i = 0, j = 0;
	while (i < length1)
	{
		con[i] = s1[i];
		i++;
	}
	while (i < tlength)
	{
		con[i] = s2[j];
		i++;
		j++;
	}
	con[i] = '\0';
	return (con);
}
