#include <stdio.h>
/**
 *main - prints the cli arguments
 *@argc: total arguments
 *@argv: array of arguments
 *
 *Return: returns 0
 */
int main(int argc, char **argv)
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
