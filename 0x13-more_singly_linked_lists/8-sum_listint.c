#include "lists.h"

/**
 * sum_listint - function that
 * @head: pointer to the head of the list
 * Return: current element within node
 */

int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;
	int count = 0;

	current = head;

	if (head == NULL)
		return (0);

	while (current != NULL)
	{
		sum += current->n; /*sum = sum + current->*/

		count++;
		current = current->next;
	}
return (sum);
}
