#include "3-calc.h"

/**
 *op_add - adds two number
 *@a: first
 *@b: second
 *Return: integer
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - subtract
 *@a: first
 *@b: second
 *Return: integer
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multiply
 *@a: first
 *@b: second
 *Return: integer
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - divider
 *@a: first
 *@b: second
 *Return: integer
 */
int op_div(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	{
		return (a / b);
	}
}

/**
 *op_mod - modulo
 *@a: first
 *@b: second
 *Return: integer
 */
int op_mod(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	{
		return (a % b);
	}
}
