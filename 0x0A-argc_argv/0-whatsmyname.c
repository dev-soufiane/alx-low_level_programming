#include "main.h"

/**
* main - Prints the program's name.
* @argc: The number of command line arguments.
* @argv: An array of strings containing the command line arguments.
*
* Return: Always 0.
*/

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
