#include "main.h"
/**
 *_isalpha - function
 *@c: value
 *Return: returns
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
