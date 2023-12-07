#include "lists.h"

/**
 * print_dlistint - printing all the members of a
 * dlistint_t list
 *
 * @h:the  list head
 * Return: the number of nodes of the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int increse;

	increse = 0;

	if (h == NULL)
		return (increse);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		increse++;
		h = h->next;
	}

	return (increse);
}
