#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - check the code for Holberton School students.
 * @a: - Variable
 * @b: variable
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;

}
