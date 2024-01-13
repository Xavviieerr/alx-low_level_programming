#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
/**
 *main - adder function
 *@argc: total arguments
 *@argv: array of arguments
 *
 *Return: returns 0
 */
int main(int argc, char **argv)
{
	int sum, j, i;

	i = 1;
	j = 0;
	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			if (!isdigit((unsigned char)argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
