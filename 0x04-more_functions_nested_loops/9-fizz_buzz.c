#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
	int z, t, c;

	for (z = 1; z <= 100; z++)
	{
		for (t = 1; t <= 100; t = t * 3)
		{
		printf("%d ", t);
			for (c = 0; c <= 100; c = c * 5)
			{
			printf("%d ", c);
			}
		}
	printf("%d ", z);
	}
putchar ('\n');
return (0);
}
