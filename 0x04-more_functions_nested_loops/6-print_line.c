#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
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
