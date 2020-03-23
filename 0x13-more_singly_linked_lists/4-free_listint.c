#include "lists.h"
/**
 * free_listint - function that
 * frees a list_t list.
 * @head: pointer to the head of the list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		/* freeing the memory allocated with malloc */
		free(temp);
	}
	/* frees the last memory allocation */
	free(head);
}
