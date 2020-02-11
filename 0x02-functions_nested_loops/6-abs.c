#include "holberton.h"

/**
 * _abs - check the code for Holberton School students.
 * @r: - variable
 * Return: Always 0.
 */

int _abs(int r)
{
	int v;

	if (r < 0)
	{
	v = r * -1;
	return (v);
	}
	else
	{
	return (r);
	}
}

