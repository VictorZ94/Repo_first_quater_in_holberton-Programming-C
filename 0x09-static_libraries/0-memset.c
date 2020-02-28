#include "holberton.h"

/**
 * _memset - is used to fill a block of memory with a particular value.
 * @s: the address of memory to print
 * @b: particular value
 * @n: value input
 *
 * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
