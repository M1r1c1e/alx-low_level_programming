#include "lists.h"
#include <stdlib.h>

/**
 * list_len - Returning a number of elements in a list_t list.
 * @h: Points to the head of the list.
 *
 * Return: The number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	const list_t *miratemp = h;
	size_t miraelement_count = 0;

	while (miratemp != NULL)
	{
		miratemp = miratemp->next;
		miraelement_count++;
	}

	return (miraelement_count);
}
