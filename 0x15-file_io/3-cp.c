#include "main.h"

/**
 * exit_97 - Displays the usage instructions and exit with code 97
 *
 * Return: Nothing
 */

void exit_97(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
 * exit_98 - Prints an error message and exits with code 98
 * @filename: name of the file
 *
 * Return: Nothing
 */

void exit_98(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}

/**
 * exit_99 - Prints an error message and exits with code 99
 * @filename: name of the file
 *
 * Return: Nothing
 */

void exit_99(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}

/**
 * exit_100 - Prints an error message and exits with code 100
 * @fd: file descriptor
 *
 * Return: Nothing
 */

void exit_100(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
 * main - program that copies the content of a file to another file
 * @argc: number of arguments
 * @argv: An array of strings containing the command line arguments
 *
 * Return: 0 on success, -1 on failure
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		exit_97();
	}

	clone_file(argv[1], argv[2]);

	return (0);
}
