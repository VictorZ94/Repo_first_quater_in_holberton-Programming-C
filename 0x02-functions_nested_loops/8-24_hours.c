#include "holberton.h"

/**
 * jack_bauer - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int h;
	int m;

	/* for para las horas */
	for (h = 0; h < 24; h++)
	{
		/** for para los minutos*/
		for (m = 0; m < 60; m++)
		{
		_putchar (h / 10 + '0');
		_putchar (h % 10 + '0');
		_putchar (':');
		_putchar (m / 10 + '0');
		_putchar (m % 10 + '0');
		_putchar ('\n');
		}
	}
}
