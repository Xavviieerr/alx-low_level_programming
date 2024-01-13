#include <stdio.h>
/**
 *main - prints number of arguments
 *@argc: total arguments
 *@argv: arguments
 *
 * Return: return 0
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
