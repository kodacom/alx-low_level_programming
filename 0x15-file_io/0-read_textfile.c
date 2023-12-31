#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads text file(s) print to standard output.
 * @filename: text file(s) being read.
 * @letters: The number of letters it should read and print.
 * Return: w- actual number of bytes read and printed
 * 0 when file cannot be opened or read
 * 0 when filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}


