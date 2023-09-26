#include "lists.h"

/**
 * find_listint_loop - Finding the loop in a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *miraslow = head, *mirafast = head;

	while (miraslow != NULL && mirafast != NULL && mirafast->next != NULL)
	{
		miraslow = miraslow->next;
		mirafast = mirafast->next->next;

		if (miraslow == mirafast)
		{
			miraslow = head;

			while (miraslow != mirafast)
			{
				miraslow = miraslow->next;
				mirafast = mirafast->next;
			}

			return (miraslow);
		}
	}

	return (NULL);
}

