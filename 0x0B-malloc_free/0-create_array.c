#include "main.h"

#include <stdlib.h>

/**
 * create_array - creating an arrray of chars with an initial specific char
 * @size: amount of byte to allocate
 * @c: character asigned
 * Return: pointer should be returned to array, NULL if fail
 *
 */

char *create_array(unsigned int size, char c)
{
	char *gtr;
	unsigned int kt;


	gtr = malloc(sizeof(char) * size);

	if (size == 0 || gtr == NULL)

		return (NULL);

	for (kt = 0; kt < size; kt++)

		gtr[kt] = c;

	return (gtr);

}
