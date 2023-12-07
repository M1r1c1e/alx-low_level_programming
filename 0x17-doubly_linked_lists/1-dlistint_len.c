#include "lists.h"

/**
 * dlistint_len - returning the number of elements in
 * a double linked list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int incree

	incree = 0;

	if (h == NULL)
		return (incree);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		incree++;
		h = h->next;
	}

	return (incree);
}
