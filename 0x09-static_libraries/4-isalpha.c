#include "holberton.h"
/**
 * _isalpha - check the code for Holberton School students.
 * @r: - name variable declared integer
 *
 * Return: Always 0.
 */

int _isalpha(int r)
{
	if (((r >= 65) && (r <= 90)) || ((r >= 97) && (r <= 122)))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
