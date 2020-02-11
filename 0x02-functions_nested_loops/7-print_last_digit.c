#include "holberton.h"

/**
 * print_last_digit - check the code for Holberton School students.
 * @r: - check the code
 *
 * Return: Always 0.
 */

int print_last_digit(int r)
{
	int v = (r % 10);
	int n = (v * -1);

	if (r > 0)
	{
	_putchar (v + '0');
	return (v);
	}
		else if (r == 0)
		{
		_putchar (r + '0');
		return (r);
		}
			else
			{
			_putchar (n + '0');
			return (n);
			}
}
