#include "holberton.h"
#include <stdio.h>

/**
 * leet - check the code for Holberton School students.
 * @s: - variable
 * Return: Always 0.
 */

char *leet(char *s)
{
	char s1[] = "AaEeOoTtLl";
	char s2[] = "52525151484855554949";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s1[j] != '\0'; j++)
		{
			if (s1[i] == s[j])
			{
				s[i] = s2[j];
			/*	break;*/
			}
		}
	}
	return (s);
}
