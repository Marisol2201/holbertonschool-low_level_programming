#include "holberton.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: name of the file to create
 * @text_content: string to be written into file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, bytes_write;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_RDWR);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (len = 0; text_content[len]; len++)
		;
	bytes_write = write(fd, text_content, len);
	if (bytes_write == -1)
		return (-1);
	close(fd);
	return (1);
}
