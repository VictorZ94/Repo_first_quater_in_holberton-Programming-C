#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{

	long int n = 612852475143;
	int a = 2;

	while (n != 1)
	{
		if (n % a == 0)
		{
			n = n / a;
			printf("%ld ", n);
		}
		else
		{
			a++;
		}
	}
putchar ('\n');
return (0);
}
