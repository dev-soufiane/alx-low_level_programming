#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file name pointer
 * @letters: number of letters it should read and print
 *
 * Return: numbers of letters to be printed or 0 if it fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bfr;
	int f;
	ssize_t r, w;

	if (filename == NULL)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);

	bfr = malloc(letters);

	if (bfr == NULL)
	{
		close(f);
		return (0);
	}

	r = read(f, bfr, letters);
	w = write(STDOUT_FILENO, bfr, r);

	close(f);
	free(bfr);

	return (w);
}
