#include "main.h"

/**
 * read_textfile - Reads a text file and
 * printd it to the POSIX
 * @filename: name of file to be read from
 * @letters: number of chars to read
 *
 * Return: ssize_t
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	if (o == -1 || r == -1 || w == -1)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(o);
	return (w);
}
