#include "lists.h"

/**
 * sum_listint - Returning the total of all the data (n)
 * of a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: Sum of all the data, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	listint_t *miracurrent = head;
	int mirasum = 0;

	while (miracurrent != NULL)
	{
		mirasum += miracurrent->n;
		miracurrent = miracurrent->next;
	}

	return (mirasum);
}

