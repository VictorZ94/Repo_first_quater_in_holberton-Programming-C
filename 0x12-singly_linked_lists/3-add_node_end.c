#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - check the code for Holberton School students.
 * @head: hdosad
 * @str: jdjdfj
 * Return: Always 0.
 */

list_t *add_node_end(list_t **head, const char *str)
{

	list_t *newNodo;
	list_t *tmp;

	int newlen;

	for (newlen = 0; str[newlen]; newlen++)
	{
	}

	newNodo = malloc(sizeof(list_t));

	if (!newNodo)
		return (NULL);

	newNodo->str = strdup(str);
	newNodo->len = newlen;
	newNodo->next = NULL;

	if (*head == NULL)
	{
		newNodo->next = *head;
		*head = newNodo;
	}
	else
	{
		tmp = *head;

		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = newNodo;
	}

return (newNodo);
}
