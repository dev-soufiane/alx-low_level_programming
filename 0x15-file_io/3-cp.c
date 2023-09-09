#include "main.h"

/**
 * exit_97 - Displays the usage instructions and exit with code 97
 * @argc: number of command line arguments
 *
 * Return: Nothing
 */

void exit_97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * exit_98 - Prints an error message and exits with code 98
 * @tf: true or false
 * @filename: name of the file
 * @f_from: file from to copy
 * @f_to: file to copy to
 *
 * Return: Nothing
 */

void exit_98(ssize_t tf, char *filename, int f_from, int f_to)
{
	if (tf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		if (f_from != -1)
			close(f_from);
		if (f_to != -1)
			close(f_to);
		exit(98);
	}
}

/**
 * exit_99 - Prints an error message and exits with code 99
 * @tf: true or false
 * @filename: name of the file
 * @f_from: file from to copy
 * @f_to: file to copy to
 *
 * Return: Nothing
 */

void exit_99(ssize_t tf, char *filename, int f_from, int f_to)
{
	if (tf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		if (f_from != -1)
			close(f_from);
		if (f_to != -1)
			close(f_to);
		exit(99);
	}
}

/**
 * exit_100 - Prints an error message and exits with code 100
 * @tf: true or false
 * @fd: file descriptor
 *
 * Return: Nothing
 */

void exit_100(int tf, int fd)
{
	if (tf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
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
	char buffer[BUFFER_SIZE];
	ssize_t r, w;
	mode_t perms;
	int f_from, f_to, ct, cf;

	exit_97(argc);
	f_from = open(argv[1], O_RDONLY);
	exit_98((ssize_t)f_from, argv[1], -1, -1);
	perms = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	f_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, perms);
	exit_99((ssize_t)f_to, argv[2], f_from, -1);
	r = BUFFER_SIZE;
	while (r == BUFFER_SIZE)
	{
		r = read(f_from, buffer, BUFFER_SIZE);
		exit_98(r, argv[1], f_from, f_to);
		w = write(f_to, buffer, r);
		if (w != r)
			w = -1;
		exit_99(w, argv[2], f_from, f_to);
	}
	ct = close(f_to);
	cf = close(f_from);
	exit_100(ct, f_to);
	exit_100(cf, f_from);
	return (0);
}
