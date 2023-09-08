#include "main.h"

/**
 * _strlen - Calculates the length of a string
 * @str: The input string
 *
 * Return: The length of the string
 */

int _strlen(char *str)
{
	int len = 0;

	if (str == NULL)
		return (0);

	while (str[len])
		len++;

	return (len);
}

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: pointer to the filename
 * @text_content: text to append to the file
 *
 * Return: 1 if successful, -1 if it fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f, w, i;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);

	if (f == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	i = _strlen(text_content);

	w = write(f, text_content, i);

	if (w == -1)
	{
		close(f);
		return (-1);
	}

	close(f);

	return (1);
}
