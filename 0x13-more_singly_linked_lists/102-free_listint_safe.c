#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Freeing a listint_t linked list with loop handling.
 * @h: Pointer to the pointer of the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t mirasize = 0;
	listint_t *miracurrent, *miratemp;

	if (h == NULL || *h == NULL)
		return (0);

	miracurrent = *h;

	while (miracurrent != NULL)
	{
		mirasize++;
		miratemp = miracurrent;
		miracurrent = miracurrent->next;

		free(miratemp);

		if (miratemp <= miracurrent)
			break;
	}

	*h = NULL;
	return (mirasize);
}

