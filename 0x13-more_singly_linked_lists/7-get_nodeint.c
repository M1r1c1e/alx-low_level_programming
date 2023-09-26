#include "lists.h"

/**
 * get_nodeint_at_index - Returning the nth node of a listint_t linked list.
 * @head: Pointing to the head of the list.
 * @index: Index of the node, starting at 0.
 *
 * Return: Pointer to the nth node, or NULL if it does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *miracurrent;
	unsigned int m_i;

	if (head == NULL)
		return (NULL);

	miracurrent = head;

	for (m_i = 0; m_i < index; m_i++)
	{
		if (miracurrent->next == NULL)
			return (NULL);

		miracurrent = miracurrent->next;
	}

	return (miracurrent);
}

