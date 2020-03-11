#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name as is
 * @name: name of the person
 * @f: member|
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;

	if (name == NULL)
		return;

	(*f)(name); /* f (name); are the same. */
}
