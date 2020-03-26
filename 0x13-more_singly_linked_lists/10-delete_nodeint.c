#include "lists.h"

/**
 * delete_nodeint_at_index - function that
 * @head: pointer to the head of the list
 * @index: parameter number index
 *
 * Return: current element within node
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *delnodo, *current;
	unsigned int i = 0;

	if (head && *head)
	{
		current = *head;

		if (head == NULL)
			return (-1);

		if (index == 0)
		{
			*head = (*head)->next;
			free(current);
			return (1);
		}

		while (i < index - 1)
		{
			current = current->next;
			i++;
			if (current == NULL)
			return (-1);
		}
		delnodo = current->next;

		if (delnodo == NULL)
			return (-1);

		current->next = delnodo->next;
		free(delnodo);
		return (1);
	}
	return (-1);
}
