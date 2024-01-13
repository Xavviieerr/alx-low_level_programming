#include "main.h"
/**
 *_memset - function
 *@s: first
 *@b: second
 *@n: third
 *Return: returns
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}

	return (s);
}
