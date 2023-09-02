#include "main.h"
#include <stdio.h>

/**
 * _memcpy - function that copies a memory area
 * @dest: destination pointer
 * @src: memory area
 * @n: the byte copied from one pointer to another
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int q;

	for (q = 0; q < n; q++)
	{
		dest[q] = src[q];
	}

	return (dest);
}
