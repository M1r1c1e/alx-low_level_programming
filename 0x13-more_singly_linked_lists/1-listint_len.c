#include "lists.h"

/**
 * listint_len - Returning the number of elements in a listint_t list.
 * @h: Points to the head of the list.
 *
 * Return: A number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t miracount = 0;

	while (h != NULL)
	{
		miracount++;
		h = h->next;
	}

	return (miracount);
}

