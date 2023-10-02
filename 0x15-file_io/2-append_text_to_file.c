#include "main.h"

/**
 * append_text_to_file - Append text to the end of a file.
 * @filename: File to append to.
 * @text_content: Text to add.
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, write_count = 0;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[write_count])
			write_count++;
		if (write(file_descriptor, text_content, write_count) != write_count)
		{
			close(file_descriptor);
			return (-1);
		}
	}
	close(file_descriptor);
	return (1);
}
