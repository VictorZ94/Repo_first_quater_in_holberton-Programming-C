#include "holberton.h"
#include <stdio.h>

/**
 * _atoi - check the code for Holberton School students.
 * @s: - variables
 * Return: Always 0.
 */

int _atoi(char *s)
{
	int i, n;
	int a = -1;

	for (i = 0; s[i] != '\0'; i++;)
	{
		if (s[i] >= '-')
		{
		a *= -1;
		}
		else if ((s[i] >= '0') && (s[i] <= 9))
		{
		n *= 10;
		}
		s[i] -'0' = -n;
		else
		{
		break;
		}
	}
	n *= a;
return (n);
}
