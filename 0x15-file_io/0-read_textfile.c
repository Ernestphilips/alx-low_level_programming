#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output
 * @filename: pointer to the name of the file
 * @letters: the number of letters the function should
 * read and print.
 * Return: 0 if filename is NULL and if write fails or does not
 * write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	r = read(fd, buffer, letters);
	close(fd);

	if (r == -1)
	{
		free(buffer);
		return (0);
	}

	w = write(STDOUT_FILENO, buffer, r);
	free(buffer);

	if (r != w)
		return (0);

	return (w);
}
