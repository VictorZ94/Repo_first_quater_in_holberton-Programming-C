#include <stdio.h>
#include <stdlib.h>

/**
 * main - echo command-line arguments; 1st version
 * main - check the code for Holberton School students.
 * @argc: for argument count
 * @argv: for argument vector
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		puts("Error");
	}
	else
	{
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	}

return (0);
}
