#include "lists.h"

/**
 * get_dnodeint_at_index - returning the
 * nth node of a dlistint_t linked list
 *
 * @head: the list head
 * @index: index of the nth node of the list
 * Return: the nth node of the list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	i = 0;

	while (head != NULL)
	{
		if (i == index)
			break;
		head = head->next;
		i++;
	}

	return (head);
}
