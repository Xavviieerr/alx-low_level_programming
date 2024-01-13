#include "main.h"
/**
 *_strcpy - function
 *@dest: first
 *@src: second
 *Return: returns
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr;

	if (dest == 0)
		return (0);
	ptr = dest;
	while (*src != 0)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
