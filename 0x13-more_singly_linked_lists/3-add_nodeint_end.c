#include "lists.h"

/**
 * add_nodeint_end - funtion to count number of element or nodes
 * @n: parameter to pointer a n in struct
 * @head: pointer to each data og the node
 *
 * Return: iterator
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *endnode;
	listint_t *tmp;

	endnode = malloc(sizeof(listint_t));

	if (endnode == NULL)
		return (NULL);

	endnode->n = n;
	endnode->next = NULL;

	if (*head == NULL)
	{
		endnode->next = *head;
		*head = endnode;
	}
	else
	{
		tmp = *head;

		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = endnode;
	}
return (endnode);
}
