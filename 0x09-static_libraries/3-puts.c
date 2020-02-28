#include "holberton.h"

/**
 * _puts - check the code for Holberton School students.
 * @str: - vaiable
 * Return: Always tr.
 */

void _puts(char *str)
{

	int i;

	while (*str != '\0')
	{
	i++;
	_putchar (*str);
	str++;
	}
_putchar ('\n');
}
