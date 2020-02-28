#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - check the code for Holberton School students.
 * @str: varia
 * Return: Always 0.
 */
int _strlen(char *str)
{
	int i = 0;

	for (; *str != '\0'; i++)
	{
	str++;
	}
return (i);
}
