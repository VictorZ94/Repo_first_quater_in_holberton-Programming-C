#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - check the code for Holberton School students.
 * @s1: varible pointer to char
 * @s2: varibale pointer to char
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i = 0;
	int size, j, z;

	if (s1 == NULL)
		s1 = " ";

	if (s2 == NULL)
		s2 = " ";

	while (s1[i] != '\0')
	{
		i++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}

	s = malloc((i + j + 1) * sizeof(char));

	if (s == NULL)
		return ('\0');

	size = 0;
	while (size < i)
	{
		s[size] = s1[size];
		size++;
	}

	z = 0;
	while (z < j)
	{
		s[size] = s2[z];
		z++;
		size++;
	}

s[size] = '\0';
return (s);
}
