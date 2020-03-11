#include "holberton.h"
#include <stdio.h>

/**
 * natural_sqrt - function alternativa
 * @a: 1st parameter
 * @b: 2do parameter
 * Return: Recursion
 **/

int natural_sqrt(int a, int b)
{
	if (a == (b * b))
		return (b);

	if (b * b > a)
		return (-1);

	return (natural_sqrt(a, b + 1));
}

/**
 * _sqrt_recursion - check the code for Holberton School students.
 * @n: - parameter int type
 * Return: Always 0.
 */

int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);

	if (n == 0)
		return (0);

	if (n < 1)
		return (-1);

	return (natural_sqrt(n, 1));

return (0);
}
