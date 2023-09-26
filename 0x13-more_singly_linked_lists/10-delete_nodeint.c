#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deleting the node at index 
 * index of a listint_t linked list.
 * @head: Pointer to the pointer of the head of the list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if deletion succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *miracurrent, *miratemp;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		miratemp = *head;
		*head = miratemp->next;
		free(miratemp);
		return (1);
	}

	miracurrent = *head;

	for (i = 0; i < index - 1 && miracurrent != NULL; i++)
	{
		miracurrent = miracurrent->next;
	}

	if (miracurrent == NULL || miracurrent->next == NULL)
		return (-1);

	miratemp = miracurrent->next;
	miracurrent->next = miratemp->next;
	free(miratemp);

	return (1);
}

