#include "main.h"
/**
 *_print_rev_recursion - prints in reverse
 *@s: string
 *Return: returns
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{	
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
