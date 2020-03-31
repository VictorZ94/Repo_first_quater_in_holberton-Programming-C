#include "holberton.h"

/**
 * read_textfile - Function to read and print text file.
 * @filename: argument get in with pointer
 * @letters: size of text
 * Return: what read.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int r, w;
	char *buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);

	r = read(fd, buf, letters);
	if (r == -1)
		return (0);

	w = write(STDOUT_FILENO, buf, r);
	if (w == -1)
		return (0);

	close(fd);

free(buf);
return (r);
}
