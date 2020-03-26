#include "holberton.h"

/**
 * print_binary - Function to convert binary to decimal.
 * @n: parameter const char
 * Return: Always 0.
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
