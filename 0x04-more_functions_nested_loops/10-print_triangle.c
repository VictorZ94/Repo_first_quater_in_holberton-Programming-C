#include "holberton.h"
/**
 * print_triangle - check the code for Holberton School students.
 *@size: - variable -
 * Return: Always 0.
 */

void print_triangle(int size)
{

	int x, y;

	if (size > 0)
	{
		for (y = 0; y < size; y++)
		{
			for (x = size; x > y; x--)
			{
			_putchar (' ');
			}
			for (x = 0; x <= y; x++)
			{
			_putchar ('#');
			}
	_putchar ('\n');
		}
	}
	else
	{
	_putchar ('\n');
	}
}
