#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
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
