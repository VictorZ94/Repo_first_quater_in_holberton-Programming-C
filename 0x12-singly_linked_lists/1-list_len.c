#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - print contain list
 * @h: parameter function
 * Return: Always 0.
 */

size_t list_len(const list_t *h)
{

	int i = 0;

	while (h != '\0')
	{
		h = h->next;
		i++;
	}

return (i);
}
