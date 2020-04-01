#include "holberton.h"

/**
 * create_file - Function to read and print text file.
 * @filename: argument get in with pointer
 * @letters: size of text
 * Return: what read.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int w, i;
	/*char *buf ;*/

	while(text_content[i] != '\0')
		i++;

	/*buf = malloc(sizeof(char) * i);
	if (buf == NULL)
		return (0);*/

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		fd = open(filename, O_CREAT);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	w = write(fd, text_content, i);
	if (w == -1)
		return (-1);

	close(fd);

/*free(buf);*/
return (1);
}
