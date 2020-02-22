#include "holberton.h"

/**
 * reverse_array - check the code for Holberton School students.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int  j, z;

	n -= 1;
	for (j = 0; j < n; j++)
	{
		z = a[j];
		a[j] = a[n];
		a[n] = z;
	n--;
	}
}
