#include <stdio.h>

/**
 * main - echo command-line arguments; 1st version
 * main - check the code for Holberton School students.
 * @argc: for argument count
 * @argv: for argument vector
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);
return (0);
}
