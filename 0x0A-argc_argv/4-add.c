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
	int i, j;

	while (argv[i] != '\0')
	{
		while (argv[i][j])
		{
			if (isdigit(argv[i][j])== 0 || isdigit(argv[i] == 0))
			{
			puts("Error");
			return (1);
			}
		j++;
		}
	i++;
	}
	i = 1;

	while (argv[i] != argv[argc])
	{
	sum += atoi(argv[i]);
	i++;
	}
printf("%d\n", sum);
return (0);
}
