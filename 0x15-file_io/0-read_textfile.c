#include "holberton.h"

/**
 * read_textfile - f that reads a text file and prints it to the POSIX stdout
 * @filename: name of the file to read
 * @letters: the number of letters (or number of bytes) to be read and printed
 * Return: the actual number of letters to be read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_write, bytes_read;
	char *buf; /*save the characters that are read*/
	int fd; /*file indicator*/

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY); /*file access mode when is opened*/
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	bytes_read = read(fd, buf, letters);
	if (bytes_read == -1)
		return (0);
	bytes_write = write(STDOUT_FILENO, buf, bytes_read);
	if (bytes_write == -1)
		return (0);
	close(fd);
	return (bytes_read);
}
