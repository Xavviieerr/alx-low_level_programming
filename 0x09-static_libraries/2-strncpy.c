#include "main.h"
/**
 *_strncpy - function
 *@dest: first
 *@src: second
 *@n:third
 *Return: returns
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr;
	int i;

	ptr = dest;
	for (i = 0; i < n; i++)
	{
		if (*src != 0)
		{
			*dest = *src;
			src++;
		}
		else
		{
			*dest = '\0';
		}
		dest++;
	}
	return (ptr);
}
