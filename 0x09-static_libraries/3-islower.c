#include "holberton.h"

/**
 * _islower  - check the code for Holberton School students.
 * @r: - cheche the code fot holberton school students.
 *
 * Return: Always 0.
 */

int _islower(int r)
{
	if ((r >= 97) && (r <= 122))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
