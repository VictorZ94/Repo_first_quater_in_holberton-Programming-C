#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - check if a number is equal to 98
 * @array: pointer to array of integer
 * @size: size of array
 * @cmp: function pointer
 *
 * Return: 0 if false, something else otherwise.
 */

int int_index(int *array, int size, int (*cmp)(int))
{

	int i;

	if (array == NULL)
		return (-1);

	if (cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i == array[i] || i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
		return (i);
		}
	}
return (-1);
}
