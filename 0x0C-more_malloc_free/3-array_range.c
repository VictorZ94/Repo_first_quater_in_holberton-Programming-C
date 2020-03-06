#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - prints buffer in hexa
 * @min: the address of memory to print
 * @max: the size of the memory to print
 *
 * Return: pointer.
 */

int *array_range(int min, int max)
{

	int *s;
	int i;
	int size = max - min;

	if (min > max)
		return (NULL);

	s = malloc(sizeof(int) * (size + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
	{
		s[i] = min++;
	}
return (s);
}
