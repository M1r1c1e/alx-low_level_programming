#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adding a new node at the start of a list_t list.
 * @head: Pointer to the pointer of the top of the list.
 * @str: String to be added to the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *miranew_node;

	if (str == NULL)
		return (NULL);

	miranew_node = malloc(sizeof(list_t));

	if (miranew_node == NULL)
		return (NULL);

	miranew_node->str = strdup(str);

	if (miranew_node->str == NULL)
	{
		free(miranew_node);
		return (NULL);
	}

	miranew_node->len = strlen(str);
	miranew_node->next = *head;
	*head = miranew_node;

	return (miranew_node);
}
