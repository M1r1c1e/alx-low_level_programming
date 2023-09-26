#include "lists.h"

/**
 * pop_listint - Deleting a head node of a listint_t linked list.
 * @head: Pointing to the pointer of the head of the list.
 *
 * Return: The head node’s data (n), or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *miratemp;
	int miradata;

	if (*head == NULL)
		return (0);

	miratemp = *head;
	miradata = miratemp->n;
	*head = miratemp->next;
	free(miratemp);

	return (miradata);
}

