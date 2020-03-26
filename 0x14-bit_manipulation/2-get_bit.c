#include <stdio.h>
#include "holberton.h"

/**
 * get_bit - function return index.
 * @n: 1er parameter
 * @index: second parameter
 * Return: Always 0.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > sizeof(n) * 8)
		return (-1);

	for (i = 0; i < index; i++)
	{
		n = n >> 1;
	}
return (n & 1);
}
