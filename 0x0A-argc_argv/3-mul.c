#include <stdio.h>
#include <stdlib.h>
/**
 *main - multiplier
 *@argc: total arguments
 *@argv: arguments
 *
 *Return: return 0
 */
int main(int argc, char **argv)
{
	int product, value1, value2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	value1 = atoi(argv[1]);
	value2 = atoi(argv[2]);

	product = value1 * value2;
	printf("%d\n", product);
	return (0);
}
