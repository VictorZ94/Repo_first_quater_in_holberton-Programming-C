#include "holberton.h"

/**
 * print_line - check the code for Holberton School students.
 * @n: - variable
 * Return: Always 0.
 */

void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; x <= n; x++)
		{
		_putchar ('-');
		}
	}
_putchar ('\n');
}
