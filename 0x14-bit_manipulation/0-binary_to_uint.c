#include "main.h"
/**
 *binary_to_uint - converts binary to unit
 *@b: string of binary
 *
 *Return: returns converted binary
 */
unsigned int binary_to_uint(const char *b)
{
	int i, length, total, doubler;

	i = 0, length = 0, total = 0, doubler = 1;
	if (b == NULL)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
		i++;
	}
	while (b[length] != '\0')
	{
		length++;
	}
	length--;
	while (length >= 0)
	{
		if (b[length] == '1')
		{
			total += doubler;
		}
		doubler *= 2;
		length--;
	}
	return (total);
}
