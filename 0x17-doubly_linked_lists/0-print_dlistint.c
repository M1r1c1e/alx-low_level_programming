#include "lists.h"

/**
 * print_dlistint - Printing all the members in the dlistint_t list
 * @h: Pointer to the list head
 *
 * Return: The amount of nodes in the program list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t countL = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		countL++;
	}

	return (countL);
}
