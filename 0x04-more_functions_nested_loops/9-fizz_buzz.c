#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
	int z;

	for (z = 1; z <= 100; z++)
	{
		if (z % 3 == 0)
		{
		printf ("Fizz ");
		}
		else if (z % 5 == 0)
		{
		printf ("Buzz ");
		}
		else if ((z % 3 == 0) && (z % 5 == 0))
		{
		printf ("FizzBuzz ");
		}
		else
		{
		printf("%d ", z);
		}
	}
putchar ('\n');
return (0);
}
