#include "main.h"
#include <stdio.h>

/**
 * print_array -  prints n elements of an array of integers
 * @a: array to be used
 * @n: number of element to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int r;

	for (r = 0; r < n; r++)
	{
		printf("%d", a[r]);
		if (r < n - 1)
			printf(", ");
	}
	printf("\n");
}
