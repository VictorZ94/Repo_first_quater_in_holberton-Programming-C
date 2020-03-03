#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - prints buffer in hexa
 * @c: size of array
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	if (size == 0)
		return ('\0');

	s = malloc((size) * sizeof(char));

	while (i < size)
	{
		if (s == NULL)
		{
			return ('\0');
		}
		else
		{
			s[i] = c;
			i++;
		}
	}

s[i] = '\0';
return (s);
}
