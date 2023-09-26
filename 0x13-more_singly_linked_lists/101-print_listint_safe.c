#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list with loop handling.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	size_t count = 0;
	int loop_detected = 0;
	const listint_t *visited[10000];
	size_t i;

	for (i = 0; i < 10000; i++)
		visited[i] = NULL;

	while (current != NULL)
	{
		visited[count % 10000] = current;

		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		current = current->next;

		for (i = 0; i < count % 10000; i++)
		{
			if (visited[i] == current)
			{
				loop_detected = 1;
				break;
			}
		}

		if (loop_detected)
			break;
	}

	if (loop_detected)
	{
		printf("-> [%p] %d\n", (void *)current, current->n);
		exit(98);
	}

	return (count);
}

