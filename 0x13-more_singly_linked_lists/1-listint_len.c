#include "lists.h"

/**
 * listint_len - funtion to count number of element or nodes
 * @h: parameter to pointer a n
 * Return: iterator
 */

size_t listint_len(const listint_t *h)
{

	int i = 0;

	while (h !=  '\0')
	{

		h = h->next;
		i++;

	}
return (i);
}
