#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Printing a listint_t linked list with loop handling.
 * @head: Pointer to head of the list.
 *
 * Return: The total of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *miraslow = head, *mirafast = head;

	while (miraslow != NULL && mirafast != NULL && mirafast->next != NULL)
	{
		printf("[%p] %d\n", (void *)miraslow, miraslow->n);
		count++;
		miraslow = miraslow->next;
		mirafast = mirafast->next->next;

		if (miraslow == mirafast)
		{
			printf("-> [%p] %d\n", (void *)miraslow, miraslow->n);
			exit(98);
		}
	}

	return (count);
}

