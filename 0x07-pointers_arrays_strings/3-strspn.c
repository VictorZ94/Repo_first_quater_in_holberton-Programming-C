#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - check the code for Holberton School students.
 * @s: - varible
 * @accept: variable
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{

	const char *p;
	const char *a;
	size_t count = 0;

	for (p = s; *p != '\0'; ++p)
	{
		for (a = accept; *a != '\0'; ++a)
		{
			if (*p == *a)
			break;
		}
	if (*a == '\0')
		return (count);
	++count;
	}
return (count);
}
