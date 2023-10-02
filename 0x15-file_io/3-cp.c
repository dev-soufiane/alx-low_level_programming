#include "main.h"

/**
 * print_error - Print file close error.
 * @file_des: File descriptor.
 *
 * Return: None.
 */

void print_error(int file_des)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_des);
	exit(100);
}

/**
 * copy_file - Copy content from source to destination file.
 * @source_fd: Source file descriptor.
 * @dest_fd: Destination file descriptor.
 *
 * Return: 0 on success, -1 on failure.
 */

int copy_file(int source_fd, int dest_fd)
{
	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	while ((bytes_read = read(source_fd, buffer, 1024)) > 0)
	{
		bytes_written = write(dest_fd, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			return (-1);
		}
	}
	return ((bytes_read == 0) ? 0 : -1);
}

/**
 * open_source_and_destination - Open source and destination files.
 * @argv: Array containing program command line arguments.
 * @source_fd: Pointer to store source file descriptor.
 * @dest_fd: Pointer to store destination file descriptor.
 *
 * Return: 0 on success, -1 on failure
 */

int open_source_and_destination(char *argv[], int *source_fd, int *dest_fd)
{
	*source_fd = open(argv[1], O_RDONLY);

	if (*source_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (-1);
	}

	*dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (*dest_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(*source_fd);
		return (-1);
	}
	return (0);
}

/**
 * main - Copy content from one file to another.
 * @argc: Number of command line arguments.
 * @argv: Array containing program command line arguments.
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int source_fd, dest_fd;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (open_source_and_destination(argv, &source_fd, &dest_fd) == -1)
		exit(98);
	if (copy_file(source_fd, dest_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(source_fd);
		close(dest_fd);
		exit(99);
	}
	if (close(source_fd) < 0)
		print_error(source_fd);
	if (close(dest_fd) < 0)
		print_error(dest_fd);

	return (0);
}
