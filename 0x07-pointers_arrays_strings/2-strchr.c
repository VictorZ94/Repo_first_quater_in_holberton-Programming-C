#include "holberton.h"

/**
 * _strchr - check the code for Holberton School students.
 * @s: - address momery of string
 * @c: - character particular
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == '\0')
	{
		return (s);
	}

	return ('\0');
}
