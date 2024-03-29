#include "lists.h"
/**
 * print_listint_safe - reverses a listint_t linked list.
 *
 * @head: List
 *
 * Return: new head
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0, j;
	const listint_t *temp_head = head, *loop_node;

	while (temp_head)
	{
		printf("[%p] %d\n", (void *)temp_head, temp_head->n);
		i++;
		temp_head = temp_head->next;
		loop_node = head;

		j = 0;
		while (j < i)
		{
			if (temp_head == loop_node)
			{
				printf("-> [%p] %d\n", (void *)temp_head, temp_head->n);
				return (i);
			}
			loop_node = loop_node->next;
			j++;
		}
	}
	return (i);
}
