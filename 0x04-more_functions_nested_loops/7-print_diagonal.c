#include "holberton.h"

/**
 * print_diagonal - check the code for Holberton School students.
 * @n: - varible
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
			_putchar (' ');
			}
		_putchar (92);
		_putchar ('\n');
		}
	}
	else
	{
	_putchar ('\n');
	}
}
