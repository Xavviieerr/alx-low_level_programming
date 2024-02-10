#include "main.h"
/**
 *print_binary - prints binary of a number
 *@n: number to be converted
 */
void print_binary(unsigned long int n)
{
	int bit_position;
	int binary_digit, i;

	bit_position = sizeof(n) * 8 - 1;
	while (bit_position >= 0 && !(n & (1 << bit_position)))
	{
		bit_position--;
	}
	i = bit_position;
	while (i >= 0)
	{
		binary_digit = (n >> i) & 1;
		_putchar(binary_digit + '0');
		i--;
	}
}
