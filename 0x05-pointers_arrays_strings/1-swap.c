#include "main.h"

/**
 * swap_int - swaping two integers
 * @a: value 10
 * @b: value 20
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int g;

	g = *b;
	*b = *a;
	*a = g;
}
