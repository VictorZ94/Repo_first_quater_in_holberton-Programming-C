#include "lists.h"
/**
 * free_listint2 - function that
 * frees a list_t list.
 * @head: pointer to the head of the list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *temp2;

	temp2 = *head;

	while (temp2 != NULL)
	{
		temp = temp2;
		temp2 = temp2->next;
		free(temp);
	}
	*head = NULL;
}
