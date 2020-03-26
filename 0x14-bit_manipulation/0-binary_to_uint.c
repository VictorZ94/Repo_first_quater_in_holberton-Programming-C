#include <stdlib.h>
#include <ctype.h>
#include "holberton.h"

/**
 * binary_to_uint - Function to convert binary to decimal.
 * @b: parameter const char
 * Return: Always 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);

		decimal = decimal << 1;

		if (b[i] == '1')
			decimal = decimal ^ 1;
		i++;
	}
	return (decimal);
}
