#include "main.h"

/**
 * check_arguments - Check if the correct number of arguments is provided.
 * @argc: Number of arguments.
 *
 * Return: None.
 */

void check_arguments(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * check_readability - Check if file_from exists and can be read.
 * @check: Check result.
 * @file_from: File_from name.
 * @fd_from: File descriptor of file_from, or -1.
 * @fd_to: File descriptor of file_to, or -1.
 *
 * Return: None.
 */

void check_readability(ssize_t check, char *file_from, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(98);
	}
}

/**
 * check_writability - Check if file_to can be created or written to.
 * @check: Check result.
 * @file_to: File_to name.
 * @fd_from: File descriptor of file_from, or -1.
 * @fd_to: File descriptor of file_to, or -1.
 *
 * Return: None.
 */

void check_writability(ssize_t check, char *file_to, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(99);
	}
}

/**
 * check_closing - Check if file descriptors were closed properly.
 * @check: Check result.
 * @fd: File descriptor.
 *
 * Return: None.
 */

void check_closing(int check, int fd)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copy the content of a file to another file.
 * @argc: Number of arguments passed.
 * @argv: Array of pointers to the arguments.
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int source_fd, dest_fd;
	ssize_t read_bytes, written_bytes;
	char buffer[1024];
	mode_t permis;

	check_arguments(argc);
	source_fd = open(argv[1], O_RDONLY);
	check_readability((ssize_t)source_fd, argv[1], -1, -1);
	permis = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, permis);
	check_writability((ssize_t)dest_fd, argv[2], source_fd, -1);
	read_bytes = 1024;
	while (read_bytes == 1024)
	{
		read_bytes = read(source_fd, buffer, 1024);
		check_readability(read_bytes, argv[1], source_fd, dest_fd);
		written_bytes = write(dest_fd, buffer, read_bytes);
		if (written_bytes != read_bytes)
			written_bytes = -1;
		check_writability(written_bytes, argv[2], source_fd, dest_fd);
	}
	check_closing(close(dest_fd), dest_fd);
	check_closing(close(source_fd), source_fd);
	return (0);
}
