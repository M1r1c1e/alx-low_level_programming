#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adding a new node at the end of a listint_t list.
 * @head: Pointing to the pointer of the head of the list.
 * @n: Integer value to be added to the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *miranew_node, *miratemp;

	miranew_node = malloc(sizeof(listint_t));

	if (miranew_node == NULL)
		return (NULL);

	miranew_node->n = n;
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

