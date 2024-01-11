#include "main.h"

int find_sqrt(int n, int guess);

/**
 *_sqrt_recursion - finds square root
 *@n: value
 *Return: returns
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (find_sqrt(n, 1));
}

/**
 *find_sqrt - helper function
 *@n: first
 *@guess: second
 *Return: returns
 */
int find_sqrt(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	if (guess * guess < n)
	{
		return (find_sqrt(n, guess + 1));
	}
	return (-1);
}
