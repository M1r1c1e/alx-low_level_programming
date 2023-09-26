#include "lists.h"

/**
 * reverse_listint - Reversing a listint_t linked list.
 * @head: Pointer to the pointer of the head for the list.
 *
 * Return: Pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *miraprev = NULL, *miranext = NULL, *miracurrent = *head;

	while (miracurrent != NULL)
	{
		miranext = miracurrent->next;
		miracurrent->next = miraprev;
		miraprev = miracurrent;
		miracurrent = miranext;
	}

	*head = miraprev;
	return (*head);
}

