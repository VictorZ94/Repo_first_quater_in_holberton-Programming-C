#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - check the code for Holberton School students.
 * @str: varible pointer to char
 * Return: Always 0.
 */

char *_strdup(char *str)
{
	char *s;
	int size, i;

	if (str == NULL)
		return ('\0');

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	s = malloc((i + 1) * sizeof(char));

	if (s == NULL)
		return ('\0');

	size = 0;
	while (size < i)
	{
		s[size] = str[size];
		size++;
	}
s[i] = '\0';
return (s);
}
