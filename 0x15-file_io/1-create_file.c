#include "main.h"

/**
 * create_file - Create or overwrite a file with content.
 * @filename: Name of the file.
 * @text_content: Content to write (can be NULL).
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int bytes_written = 0;
	int text_length = 0;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_length] != '\0')
		{
			text_length++;
		}
		bytes_written = write(file_descriptor, text_content, text_length);

		if (bytes_written == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}
	close(file_descriptor);
	return (1);
}
