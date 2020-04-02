#include "holberton.h"

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: Always successful
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, bytes_write, bytes_read, bytes_close;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]), exit(98);

	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);

	for (bytes_read = 1024; bytes_read == 1024;)
	{
		bytes_read = read(file_from, buffer, 1024);
		if (bytes_read == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]), exit(98);

		bytes_write = write(file_to, buffer, 1024);
		if (bytes_write == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				argv[2]), exit(99);
	}

	bytes_close = close(file_from);
	if (bytes_close == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);

	bytes_close = close(file_to);
	if (bytes_close == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	return (0);
}
