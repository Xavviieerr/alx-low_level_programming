#include "main.h"
/**
 *_atoi - function
 *@s: value
 *Return: returns
 */
int _atoi(char *s)
{
	int i, flag;
	unsigned int product;

	product = 0;
	flag = 1;
	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] == '-')
			flag *= -1;
		else if (s[i] >= 48 && s[i] <= 57)
		{
			product *= 10;
			product += s[i] - 48;
			if (s[i + 1] >= 48 && s[i + 1] <= 57)
				continue;
			else
				break;
		}
	}
	return (product * flag);
}
