#include "holberton.h"
#include <stdio.h>
/**
 * print_number - check the code for Holberton School students.
 *@n: - print
 * Return: Always 0.
 */

void print_number(int n)
{
	if (n < 0)
	{
	_putchar('-');
	n = -n;
	}

	if (n / 10)
	{
	_putchar (n / 10 + '0');
	}
	_putchar (n % 10 + '0');
}