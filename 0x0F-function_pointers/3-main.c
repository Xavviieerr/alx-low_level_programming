#include "3-calc.h"
/**
 *main - main function
 *@argc: total array size
 *@argv: array
 *Return: returns value
 */
int main(int argc, char *argv[])
{
	int value, first, second;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	first = atoi(argv[1]);
	second = atoi(argv[3]);

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	value = get_op_func(argv[2])(first, second);
	printf("%d\n", value);
	return (0);
}
