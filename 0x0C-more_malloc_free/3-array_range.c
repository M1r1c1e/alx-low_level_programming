#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creating an array of integers
 * @min: type int minimum value
 * @max: type int maximum value
 * Return: NULL if malloc fails or return null if  min > max
 */
int *array_range(int min, int max)
{
	int *pur;
	int xyz;

	if (min > max)
		return (NULL);
	pur = malloc((max - min + 1) * sizeof(*pur));
	if (pur == NULL)
		return (NULL);

	for (xyz = 0; min <= max; xyz++, min++)
		*(pur + xyz) = min;

	return (pur);
}
