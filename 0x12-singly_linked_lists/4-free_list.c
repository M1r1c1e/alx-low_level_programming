#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Freeing a list_t list.
 * @head: Pointing to the head of the list.
 */

void free_list(list_t *head)
{
	list_t *miratemp;

	while (head != NULL)
	{
		miratemp = head;
		head = head->next;
		free(miratemp->str);
		free(miratemp);
	}
}

