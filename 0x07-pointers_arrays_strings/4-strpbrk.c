#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
	const char *sc1,*sc2;

	for (sc1 = s; *sc1 != '\0'; ++sc1)
	{
		for (sc2 = accept; *sc2 != '\0'; ++sc2)
		{
		if (*sc1 == *sc2)
		return (char *) sc1;
		}
	}
  return NULL;
}
