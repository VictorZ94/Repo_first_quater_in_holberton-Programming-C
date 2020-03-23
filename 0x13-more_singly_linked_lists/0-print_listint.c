#include "lists.h"

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
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
