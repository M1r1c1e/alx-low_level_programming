#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Freeing a listint_t list and sets the head to NULL.
 * @head: Pointing to the pointer of the head of the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *miracurrent, *miranext_node;

	if (head == NULL)
		return;

	miracurrent = *head;

	while (miracurrent != NULL)
	{
		miranext_node = miracurrent->next;
		free(miracurrent);
		miracurrent = miranext_node;
	}

	*head = NULL;
}

