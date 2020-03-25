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
	unsigned int count = 0;

	current = *head;

	if (*head == NULL)
		return (NULL);

	while (current != NULL)
	{

		if (count == idx)
		{
			newNodoidx = malloc(sizeof(listint_t));

			if (newNodoidx == NULL)
				return (NULL);

			newNodoidx->n = n;
			newNodoidx->next = current->next;
			current->next = newNodoidx;
		}

		if (current->next == NULL && count == (idx - 1))
		{
			current->next = newNodoidx;
			return (NULL);
		}

		count++;
		current = current->next;
	}
return (newNodoidx);
}
