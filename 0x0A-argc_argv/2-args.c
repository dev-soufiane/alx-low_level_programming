#include "main.h"

/**
* main - Prints all arguments it receives.
* @argc: Number of command-line arguments.
* @argv: Array of command-line arguments.
*
* Return: Always 0.
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
