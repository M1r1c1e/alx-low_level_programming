#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc -  reallocating a memory block using malloc and free
 * @ptr: a pointer of memory previously allocated
 * @old_size: bytes
 * @new_size: bytes
 * Return: pur if not return NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int xxy;
	char *pur, *hs;

	if (new_size == old_size)
		return (ptr);
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		pur = malloc(new_size);
		if (pur == NULL)
			return (NULL);
		return (pur);
	}
	pur = malloc(new_size);
	if (pur == NULL)
		return (NULL);
	hs = ptr;
	for (xxy = 0; xxy < old_size; xxy++)
		*(pur + xxy) = *(hs + xxy);
	free(ptr);
	return (pur);
}
