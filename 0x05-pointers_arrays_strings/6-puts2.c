#include "holberton.h"

/**
 * puts2 - check the code for Holberton School students.
 * @str: - pointer a type char
 * Return: Always 0.
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	_putchar (str[i]);
	i = i + 2;
	}
_putchar ('\n');
}
