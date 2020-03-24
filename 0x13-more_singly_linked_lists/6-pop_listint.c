#include "lists.h"

/**
 * pop_listint - funtion to count number of element or nodes
 * @head: pointer to each data og the node
 *
 * Return: int n
 */

int pop_listint(listint_t **head)
{

	listint_t *toDelete;
	int temp = 0;

	if (*head == NULL)
		return (0);

	if (*head != NULL)
		toDelete = (*head)->next;
		temp = (*head)->n;
		free(*head);
		*head = toDelete;

return (temp);
}
