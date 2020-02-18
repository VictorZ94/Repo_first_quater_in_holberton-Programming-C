#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
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
