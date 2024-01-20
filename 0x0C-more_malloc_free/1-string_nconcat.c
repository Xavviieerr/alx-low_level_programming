#include "main.h"
/**
 *string_nconcat - concantenation function
 *@s1: first string
 *@s2: second string
 *@n: constraint
 *Return: returns pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int length, length2, i, j, k, total;

	length = 0, i = 0, length2 = 0, j = 0, k = 0, total = 0;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[length] != '\0')
	{
		length++;
	}
	while (s2[length2] != '\0')
	{
		length2++;
	}
	total = (n >= length2) ? length + length2 + 1 : length + n + 1;
	arr = malloc(total * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	while (s1[j])
	{
		arr[i] = s1[j];
		i++;
		j++;
	}
	while (k < n && s2[k])
	{
		arr[i] = s2[k];
		i++;
		k++;
	}
	arr[i] = '\0';
	return (arr);
}
