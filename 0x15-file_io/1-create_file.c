#include "holberton.h"

/**
 * create_file - Function to read and print text file.
 * @filename: argument get in with pointer
 * @text_content: file to redirection created
 * Return: 1 on success.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int w, i, c;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	while (text_content[i] != '\0')
	i++;

	w = write(fd, text_content, i);
	if (w < 0)
		return (-1);

	c = close(fd);
	if (c < 0)
		return (-1);

return (1);
}
