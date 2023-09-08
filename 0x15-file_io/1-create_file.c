#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: pointer to the filename
 * @text_content: text to write to the file
 *
 * Return: 1 if successful, -1 if it fails
 */

int create_file(const char *filename, char *text_content)
{
	int f, w, i;

	i = 0;

	if (filename == NULL)
		return (0);

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (f == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[i] != '\0')
		i++;

	w = write(f, text_content, i);

	if (w == -1)
		return (-1);

	close(f);

	return (1);
}
