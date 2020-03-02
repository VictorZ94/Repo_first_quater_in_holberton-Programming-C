#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - echo command-line arguments; 1st version
 * main - check the code for Holberton School students.
 * @argc: for argument count
 * @argv: for argument vector
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int sum;
	int i = 0;

	while (i < argc)
	{
		if (isdigit(argv[i] == 0))
		{
			puts("Error");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	i++;
	}
	printf("%d\n", sum);

return (0);
}
