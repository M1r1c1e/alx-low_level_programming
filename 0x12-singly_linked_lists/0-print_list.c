#include <stdio.h>
#include "lists.h"

/**
 * print_list - Printing all the elements of a list_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
	const list_t *miratemp = h;
	size_t listnode_count = 0;

	while (miratemp != NULL)
	{
		if (miratemp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", miratemp->len, miratemp->str);

		miratemp = miratemp->next;
		listnode_count++;
	}

	return (listnode_count);
}

