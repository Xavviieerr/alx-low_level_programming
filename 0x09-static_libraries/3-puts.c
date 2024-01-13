#include "main.h"
/**
 *_puts - function
 *@s: value
 *Return: returns
 */
void _puts(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != 0)
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
