#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int m, n, z;

	for (m = 0; m <= 9; m++)
	{
		for (n = 0; n <= 9; n++)
		{
		z = m * n;
		if (z > 9)
		{
		_putchar (z / 10 + '0');
		_putchar (z % 10 + '0');
		}
		else if ((n != 0) && (n != 9))
		{
		_putchar (' ');
		_putchar (z + '0');
		}
		else
		{ 
		_putchar (z + '0');
		}
			if (n != 9)
			{
			_putchar (',');
			_putchar (' ');
			}
		}
	_putchar ('\n');
	}
}
