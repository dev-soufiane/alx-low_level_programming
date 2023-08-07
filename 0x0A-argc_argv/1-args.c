#include "main.h"

/**
* main -  Prints the number of arguments passed into it.
* @argc: The number of command line arguments.
* @argv: An array of strings containing the command line arguments.
*
* Return: 0 on successful execution.
*/

int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
