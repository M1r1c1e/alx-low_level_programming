#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adding a new node at the end of a list_t list.
 * @head: A Pointer to the pointer of the head of the list.
 * @str: the String to be added to the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *miranew_node, *miratemp;

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
	miranew_node->next = NULL;

	if (*head == NULL)
	{
		*head = miranew_node;
		return (miranew_node);
	}

	miratemp = *head;

	while (miratemp->next != NULL)
	{
		miratemp = miratemp->next;
	}

	miratemp->next = miranew_node;

	return (miranew_node);
}

