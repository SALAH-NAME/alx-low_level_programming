#include "main.h"

/**
 * read_textfile - read a text file and prints letters
 * @filename: filename
 * @letters: numbers of letters printed
 * Return: numbers of letters printed, returns 0 if fials
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t num_read, num_write;
	char *buff;

	if (!filename)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));

	if (!buff)
		return (0);

	num_read = read(f, buff, letters);
	num_write = write(STDOUT_FILENO, buff, num_read);

	close(f);

	free(buff);

	return (num_write);
}
