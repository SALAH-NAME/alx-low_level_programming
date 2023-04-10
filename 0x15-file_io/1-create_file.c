#include "main.h"

/**
 * create_file - create a file
 * @filename: filename
 * @text_content: content writed in the file
 * Return: 1 if it sucess, -1 if fials
 */

int create_file(const char *filename, char *text_content)
{
	int f, num_letters, num_write;

	if (!filename)
		return (-1);

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (f == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (num_letters = 0; text_content[num_letters]; num_letters++)
		;

	num_write = write(f, text_content, num_letters);

	if (num_write == -1)
		return (-1);

	close(f);

	return (1);
}
