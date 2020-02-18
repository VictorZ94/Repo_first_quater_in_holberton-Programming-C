#include "holberton.h"

/**
 * print_rev - check the code for Holberton School students.
 * @s: - ffff
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int i;


	while (*s != '\0')
	{
	s++;
	i++;
	}

	i = i - 1;

	while (i >= 0)
	{
	i--;
	s--;
	_putchar (*s);
	}
_putchar ('\n');
}
