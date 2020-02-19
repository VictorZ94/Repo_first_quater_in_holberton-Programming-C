#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int i,j,c;

	while (s[i] != '\0')
	{
	i++;
	}

	i = i - 1;

	for (j = 0; j < i; j++)
	{
	c = s[j];
	s[j] = s[i];
	s[i] = c;
	i--;
	}
}
