#include "holberton.h"

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: 
 */

int main(int argc, char *argv[])
{
	int fd_origin, fd_dest, bytes_read, bytes_write;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp fd_origin fd_dest\n");
		exit(97);
	}

	fd_origin = argv[1];
	fd_dest = argv[2];
	bytes_read = open (fd_dest, O_RDONLY);
	if (fd_dest == (-1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fd_origin);
			exit(98);
		}

	bytes_write = open(file_dest, O_CREAT | O_TRUNC | O_WRONLY, 0664);

	if (fdw == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fd_dest);
		exit(99);
	}
	close(fd_origen);
	close(fd_destino);
	return (EXIT_SUCCESS);
}
