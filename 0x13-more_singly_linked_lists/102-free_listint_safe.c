#include "lists.h"

/**
 * free_listint_safe - Frees a linked list with loop handling
 * @h: Pointer to the pointer of the head of the list
 *
 * Return: Number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t lent = 0;
	int m_dif;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		m_dif = *h - (*h)->next;

		if (m_dif > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			lent++;
		}
		else
		{
			free(*h);
			*h = NULL;
			lent++;
			break;
		}
	}

	*h = NULL;

	return (lent);
}

