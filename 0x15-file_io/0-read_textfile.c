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
	if (filename == NULL)
	{
		return (0);
	}

	FILE *file = fopen(filename, "r");

	if (file == NULL)
	{
		return (0);
	}

	char *buffer = (char *)malloc((letters + 1) * sizeof(char));

	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	int ch;

	ssize_t rd = 0;

	size_t cnt = 0;

	while ((ch = fgetc(file)) != EOF && cnt < letters)
	{
		buffer[cnt] = (char)ch;
		cnt++;
	}

	buffer[cnt] = '\0';

	ssize_t wtt = printf("%s", buffer);

	fclose(file);
	free(buffer);

	return (wtt);
}

