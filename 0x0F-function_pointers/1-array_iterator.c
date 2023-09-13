#include "function_pointers.h"

#include <stdio.h>

/**
 * array_iterator - function execution of parameter on every array element.
 * @array: the array of characters
 * @size: the number of array characters
 * @action: pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{
	unsigned int alph;

	if (array == NULL || action == NULL)

		return;

	for (alph = 0; alph < size; alph++)
	{
		action(array[alph]);
	}

}
