#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - the function that will allocate memory for the array, using malloc
 * @nmemb: type of element of array
 * @size: byte
 * Return: NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *puf = NULL;
	char *star;
	unsigned int xyz;

	if (nmemb <= 0 || size <= 0)
		return (puf);

	puf = malloc(nmemb * size);
	if (puf == 0)
		return (NULL);
	star = (char *)puf;
	for (xyz = 0; xyz < (nmemb * size); xyz++)
		*(star + xyz) = 0;

	return (star);
}
