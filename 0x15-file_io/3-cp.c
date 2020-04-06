#include "holberton.h"

/**
 * main - Function to copy from file to another.
 * @argc: argument to main, count
 * @argv: argument to main, char
 * Return: 1 on success.
 */

int main(int argc, char *argv[])
{
	int fdr, fdw, i, j;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdr = open(argv[1], O_RDONLY);
	if (fdr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read to %s\n", argv[1]);
		exit(98);
	}
	fdw = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fdw == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((i = read(fdr, buf, 1024)) > 0)
	{
		j = write(fdw, buf, i);
		if (j == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (i == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]), exit(98);
	if (close(fdr) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdr), exit(100);
	if (close(fdw) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdw), exit(100);
return (0);
}
