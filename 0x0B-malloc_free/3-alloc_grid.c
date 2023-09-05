#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returning a pointer to a 2 dimensional array of integers.
 * @width: input
 * @height: input
 * Return: width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height)
{
	int **cat;
	int xt, y;


	if (width <= 0 || height <= 0)
		return (NULL);


	cat = malloc(sizeof(int *) * height);

	if (cat == NULL)
		return (NULL);

	for (xt = 0; xt < height; xt++)
	{
	cat[xt] = malloc(sizeof(int) * width);

	if (cat[xt] == NULL)
	{

	for (; xt >= 0; xt--)
		free(cat[xt]);
	free(cat);

	return (NULL);
	}

	}

	for (xt = 0; xt < height; xt++)
	{

	for (y = 0; y < width; y++)
		cat[xt][y] = 0;
	}

	return (cat);

}
