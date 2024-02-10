#include "main.h"
/**
 *get_bit - get bit at a point
 *@n: number whose bit value to retrieve
 *@index: index of the bit to retrieve, starting from 0
 *Return: value of the bit at index, or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	if (n & (1 << index))
		return (1);
	else
		return (0);
}
