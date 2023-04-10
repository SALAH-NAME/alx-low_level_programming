#include "main.h"

/**
 * append_text_to_file - appends text at the file end
 * @filename: filename
 * @text_content: added content
 * Return: 1 if file exists, -1 if fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f, num_letters, num_write;

	if (!filename)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);

	if (f == -1)
		return (-1);

	if (text_content)
	{
		for (num_letters = 0; text_content[num_letters]; num_letters++)
			;

		num_write = write(f, text_content, num_letters);

		if (num_write == -1)
			return (-1);
	}

	close(f);

	return (1);
}
