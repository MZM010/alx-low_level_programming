#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes;
	char *buffer;

	if (!filename || !letters)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	bytes = read(fd, buffer, letters);
	bytes = write(STDOUT_FILENO, buffer, bytes);
	if (fd == -1 || bytes == -1)
	{
		free(buffer);
		return (0);
	}
	close(fd);
	return (bytes);
}
