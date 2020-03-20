#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node - print contain list
 * @str: the string added
 * @head: the first string in list
 * Return: pointer to function
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int newlen;

	for (newlen = 0; str[newlen]; newlen++)
	{
	}

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = newlen;
	new->next = *head;
	*head = new;

return (new);
}
