#include "holberton.h"

/**
 * read_textfile - f that reads a text file and prints it to the POSIX stdout
 * @filename: name of the file to read
 * @letters: the number of letters (or number of bytes) to be read and printed
 * Return: the actual number of letters to be read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;/*integer value returned by the open function*/
	char *buf;/*the characters are being read*/
	ssize_t num_bytes_r, num_bytes_w;

	if (filename == NULL)
		return (0);

	fd = open("filename", O_RDONLY);/*way to open file*/
	if (fd == -1)
	{
                return (0);
        }

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	num_bytes_r = read(fd, buf, letters);
	if (num_bytes_r == -1)
		return (0);

	num_bytes_w = write(STDIN_FILENO, buf, num_bytes_r);
	if (num_bytes_w == -1)
		return (0);

	close(fd);
	return (num_bytes_r);
}
