#include "3-calc.h"

/**
 * main - Executes arithmetic operations based on command line arguments
 * @argc: The number of command line arguments
 * @argv: An array of strings containing the command line arguments
 *
 * Return: 0 on success, 1 or 2 on error
 */

int main(int argc, char *argv[])
{
	int a, b, result;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (func == NULL)
	{
		printf("Error\n");
		return (2);
	}

	result = func(a, b);

	printf("%d\n", result);

	return (0);
}
