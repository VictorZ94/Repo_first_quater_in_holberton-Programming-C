#include "holberton.h"

/**
 * append_text_to_file - Function to read and print text file.
 * @filename: argument get in with pointer
 * @text_content: file to redirection created
 * Return: 1 on success.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int w, c;
	int i = 0;


	if (filename == NULL)
		return (-1);

	if (text_content == '\0')
		text_content = "";

		fd = open(filename, O_WRONLY | O_APPEND);
			if (fd  < 0)
				return (-1);

		while (text_content[i] != '\0')
		i++;

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
