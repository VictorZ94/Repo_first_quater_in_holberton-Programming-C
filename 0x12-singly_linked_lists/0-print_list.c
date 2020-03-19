#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - print contain list
 * @h: parameter function
 * Return: Always 0.
 */

size_t print_list(const list_t *h)
{

	int i = 0;
	const list_t *tmp = h;

	while (tmp !=  '\0')
	{
		if (tmp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", tmp->len, tmp->str);
		}
		tmp = tmp->next;
		i++;
	}
return (i);
}
