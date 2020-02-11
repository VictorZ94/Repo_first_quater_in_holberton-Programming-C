#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{

	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
		_putchar (j);
		}
	_putchar('\n');
	}

/**	int i = 0, j;
*	while (i <= 9)
*	{
*		j = 'a';
*		while (j <= 'z')
*		{
*		_putchar(j);
*		j++;
*		}
*	_putchar('\n');
*	i++;
*	}
*/
}
