#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserting a new node at a given position.
 * @head: Pointer to the pointer of the head of the list.
 * @idx: Index where the new node should be included.
 * @n: Integer value to be added to the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *miranew_node, *miratemp;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	miranew_node = malloc(sizeof(listint_t));

	if (miranew_node == NULL)
		return (NULL);

	miranew_node->n = n;

	if (idx == 0)
	{
		miranew_node->next = *head;
		*head = miranew_node;
		return (miranew_node);
	}

	miratemp = *head;

	for (i = 0; i < idx - 1 && miratemp != NULL; i++)
	{
		miratemp = miratemp->next;
	}

	if (miratemp == NULL)
	{
		free(miranew_node);
		return (NULL);
	}

	miranew_node->next = miratemp->next;
	miratemp->next = miranew_node;

	return (miranew_node);
}

