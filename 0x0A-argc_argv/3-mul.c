#include "main.h"
#include <stdlib.h>

/**
* main - Program that multiplies two numbers.
* @argc: Number of command-line arguments.
* @argv: Array of command-line argument strings.
*
* Return: 0 on success, 1 on error.
*/

int main(int argc, char *argv[])
{
	int result;

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", result);
	}

	else
	{
		printf("Error\n");

		return (1);
	}

	return (0);
}
