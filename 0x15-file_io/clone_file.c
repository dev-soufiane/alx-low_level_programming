#include "main.h"

/**
 * clone_file - Copies the content of one file to another
 * @fileFrom: file to be copied
 * @fileTo: file to copy content to
 *
 * Return: Nothing
 */

void clone_file(char *fileFrom, char *fileTo)
{
	int f_from, f_to;
	char bfr[BUFFER_SIZE];
	ssize_t r, w;

	f_from = open(fileFrom, O_RDONLY);

	if (f_from == -1)
	{
		exit_98(fileFrom);
	}

	f_to = open(fileTo, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (f_to == -1)
	{
		exit_99(fileTo);
	}

	while ((r = read(f_from, bfr, BUFFER_SIZE)) > 0)
	{
		w = write(f_to, bfr, r);
		if (w == -1)
		{
			exit_99(fileTo);
		}
	}

	if (r == -1)
	{
		exit_98(fileFrom);
	}
	if (close(f_from) == -1)
	{
		exit_100(f_from);
	}
	if (close(f_to) == -1)
	{
		exit_100(f_to);
	}
}
