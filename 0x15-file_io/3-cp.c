#include "holberton.h"

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: Always successful
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, r, w, c, i;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"),
			exit(97);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]), exit(98);

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
			argv[2]), exit(99);

	for (i = 0; i < 1024; i++)
		buffer[i] = 0;
	{
		r = read(file_from, buffer, 1024);
		if (r == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]), exit(98);

		w = write(file_to, buffer, r);
		if (w == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				argv[2]), exit(99);
	}
	c = close(file_from);
	if (c == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from),
			exit(100);

	c = close(file_to);
	if (c == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to),
			exit(100);
	return (0);
}
