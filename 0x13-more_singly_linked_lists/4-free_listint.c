#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Freeing a listint_t list.
 * @head: Pointing to the head of the list.
 */
void free_listint(listint_t *head)
{
	listint_t *miratemp;

	while (head != NULL)
	{
		miratemp = head;
		head = head->next;
		free(miratemp);
	}
}

