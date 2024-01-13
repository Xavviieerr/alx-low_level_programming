#include "main.h"
/**
 *_memcpy - function
 *@dest: first
 *@src: second
 *@n: third
 *Return: returns
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
