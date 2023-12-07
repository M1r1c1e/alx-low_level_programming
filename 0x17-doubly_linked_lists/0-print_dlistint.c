#include "lists.h"

/**
 * print_dlistint - printing all the elements of a
 * dlistint_t list
 *
 * @h: list head
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int incree;

	incree = 0;

	if (h == NULL)
		return (incree);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		incree++;
		h = h->next;
	}

	return (incree);
}

