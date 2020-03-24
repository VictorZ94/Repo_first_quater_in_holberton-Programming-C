#include "lists.h"

/**
 * get_nodeint_at_index - function that
 * @head: pointer to the head of the list
 * @index: index number the node
 * Return: current element within node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int count = 0;

	current = head;

	if (head == NULL)
		return (NULL);

	while (current != NULL)
	{
		if (count == index)
		return (current);

		count++;
		current = current->next;
	}
return (current);
}
