#include "lists.h"

/**
 * add_nodeint- funtion to count number of element or nodes
 * @n: parameter to pointer a n in struct
 * @head: pointer to each data og the node
 *
 * Return: iterator
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *addnode;

	addnode = malloc(sizeof(listint_t));

	if (addnode == NULL)
		return (NULL);

	addnode->n = n;
	addnode->next = *head; /* to avoid that it detele nodes add previous*/
	*head = addnode;

return (addnode);
}
