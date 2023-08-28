#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Printing the sum of two digonal of a square matrix
 * @a: input
 * @size: input
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int f, amt, add, plus;

	f = 0;
	amt = 0;
	add = 0;
	plus = 0;
	while (f < (size * size))
	{
		amt = a[f];
		add = add + amt;
		f = f + size + 1;
	}
	f = size - 1;
	while (f < ((size * size) - 1))
	{
		amt = a[f];
		plus = plus + amt;
		f = f + (size - 1);
	}
	printf("%d, %d\n", add, plus);
}
