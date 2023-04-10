#include "main.h"

/**
 * read_textfile - reads a text file and print
 * @filename: filename
 * @letters: numbers of letters printed
 * Return: numbers of letters printed, 0 if fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t num_read, num_write;
	char *buffer;

	if (!filename)
		return (0);

	f = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (!buffer)
		return (0);

	num_read = read(f, buffer, letters);
	num_write = write(STDOUT_FILEND, buffer, num_read);

	close(f);

	free(buffer);

	return (num_write);
}
