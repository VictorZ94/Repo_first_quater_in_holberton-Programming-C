#include "holberton.h"
/**
 * print_sign  - check the code for Holberton School students.
 * @r: - cheche the code fot holberton school students.
 *
 * Return: Always 0.
 */

int print_sign(int r)
{

	if (r > 0)
	{
	_putchar (43);
	return (1);
	}
	else if (r == 0)
	{
	_putchar (48);
	return (0);
	}
	else
	{
	_putchar (45);
	return (-1);
	}
}
