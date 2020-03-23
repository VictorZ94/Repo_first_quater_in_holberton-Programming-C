#include "lists.h"

/**
 * print_listint - singly linked list
 * @h: parameter pointer to int n
 *
 * Return: iterator
 */

size_t print_listint(const listint_t *h)
{

	int i = 0;

	while (h !=  '\0')
	{

		printf("%d\n", h->n);
		h = h->next;
		i++;

	}
return (i);
}
