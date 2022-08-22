#include "main.h"

char *create_buf(char *file);
void close_file(int fd);

/**
 * create_buf - allocate 1024 bytes to buf
 * @file: file to be stored in
 *
 * Return: pointer
 */

char *create_buf(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buf);
}

/**
 * close_file - closes a file
 * @fd: file
 *
 * Return: void
 */

void close_file(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %s\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another
 * @argc: Number of arguments given
 * @argv: array of pointers
 * Return: 0 (ON Success)
 */

int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO,
				"Usage: cp file_From file_to\n");
		exit(97);
	}
	buf = create_buf(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buf, 1024);
	to = open(argv[2], O_CREATE | O_WRONLY | O_TRUNC, 0664);
	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}
		w = write(to, buf, r);
		if (to == -1 || w == -1)
		{
			dprintf(STERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}
		r = read(from, buf, 1024);
		to = open(argv[2], OWRONLY | O_APPEND);
	} while (r > 0);
	free(buf);
	close(from);
	close(to);
	return (0);
}
