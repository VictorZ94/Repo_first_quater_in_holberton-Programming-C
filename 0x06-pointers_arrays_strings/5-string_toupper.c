#include "holberton.h"

/**
 * string_toupper - check the code for Holberton School students.
 * @s: - variable
 * Return: Always 0.
 */

char *string_toupper(char *s)
{
	int i;
	int p = 32;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] > 97) && (s[i] < 122))
		{
			s[i] = s[i] - p;
		}
		else
		{
		s[i] = s[i];
		}
	}
return (s);
}
