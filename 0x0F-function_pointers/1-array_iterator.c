#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints an integer
 * @array: array of integers
 * @size: size of array
 * @action: function pointer
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;

	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
