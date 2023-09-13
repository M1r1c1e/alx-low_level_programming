#include "function_pointers.h"

/**
 * int_index -the function that  searches for an integer.
 * @array: an array of numbers
 * @size: amount of array elements
 * @cmp: they pointer input
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))

{
	int val_num;

	if (array == NULL || size <= 0 || cmp == NULL)

		return (-1);

	for (val_num = 0; val_num < size; val_num++)
	{
		if (cmp(array[val_num]))
			return (val_num);
	}
	return (-1);

}

