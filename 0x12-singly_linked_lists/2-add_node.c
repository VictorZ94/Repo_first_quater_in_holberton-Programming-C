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
	int i, newlen;
	char *duplicate;

	/*newlen = strdup(str);*/
	for (newlen = 0; str[newlen]; newlen++)
	{
	}

	if (str == NULL)
		return (NULL);

	new = *head;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	duplicate = malloc(sizeof(char) * newlen + 1);

	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		duplicate[i] = str[i];
	}

	new->str = duplicate;
	new->len = newlen;
	new->next = *head;
	*head = new;

return (new);
}
