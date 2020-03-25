#include "lists.h"

/**
 * insert_nodeint_at_index - function that
 * @head: pointer to the head of the list
 * @idx: parameter number index
 * @n: new value to save in node
 * Return: current element within node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *newNodoidx, *current;
	unsigned int i = 0;

	current = *head;

	if (*head == NULL)
		return (NULL);

	while (current && i < idx - 1)
	{
		current = current->next;
		i++;
	}

	if (!current)
		return (NULL);

	newNodoidx = malloc(sizeof(listint_t));

	if (newNodoidx == NULL)
		return (NULL);

	if (idx == 0)
	{
		newNodoidx->next = current;
		current = newNodoidx;
		return (newNodoidx);
	}

	newNodoidx->n = n;
	newNodoidx->next = current->next;
	current->next = newNodoidx;

return (newNodoidx);
}
