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
	int w, c;
	int i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content == NULL)
		return (-1);

	while (text_content && text_content[i])
	{
		i++;
	}

	if (text_content)
	{
		w = write(fd, text_content, i);
		if (w < 0)
			return (-1);
	}

	c = close(fd);
	if (c < 0)
		return (-1);

return (1);
}
