#include "3-calc.h"
/**
 *main - main function
 *@argc: total array size
 *@argv: array
 *Return: returns value
 */
int main(int argc, char *argv[])
{
	char *op;
	int value, num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	value = get_op_func(argv[2])(num1, num2);
	printf("%d\n", value);
	return (0);
}
