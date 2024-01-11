#include "main.h"

int is_prime_recursive(int num, int divisor);
/**
 *is_prime_number - function
 *@n:value
 *Return: returns
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_recursive(n, 2));
}

/**
 *is_prime_recursive - helper
 *@num: first
 *@divisor: second
 *Return: returns
 */
int is_prime_recursive(int num, int divisor)
{
	if (divisor * divisor > num)
	{
		return (1);
	}
	if (num % divisor == 0)
	{
		return (0);
	}
	return (is_prime_recursive(num, divisor + 1));
}
