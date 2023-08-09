#include <stdlib.h>
#include "main.h"

/**
 * main - program to add positive numbers
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int i, j, x, sum;
	char numbers[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

	if (argc == 1)
	{
		printf("0\n");
	}
	sum = 0;

	for (i = 1; i < argc; i++)
	{
		int Arg_check = 1;

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			int Num_check = 0;

			for (x = 0; x < 10; x++)
			{
				if (argv[i][j] == numbers[x])
				{
					Num_check = 1;
					break;
				}
			}
			if (!Num_check)
			{
				Arg_check = 0;
				break;
			}
		}
		if (!Arg_check)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
