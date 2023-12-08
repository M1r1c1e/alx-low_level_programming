#include "lists.h"

/**
 * delete_dnodeint_at_index - removing the node at index of a
 * dlistint_t linked list
 *
 * @head: the head of the list
 * @index: the index of the new node
 * Return: 1 if successful or -1 if it fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h12;
	dlistint_t *h2;
	unsigned int i;

	h12 = *head;

	if (h12 != NULL)
		while (h12->prev != NULL)
			h12 = h12->prev;

	i = 0;

	while (h12 != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = h12->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				h2->next = h12->next;

				if (h12->next != NULL)
					h12->next->prev = h2;
			}

			free(h12);
			return (1);
		}
		h2 = h12;
		h12 = h12->next;
		i++;
	}

	return (-1);
}
