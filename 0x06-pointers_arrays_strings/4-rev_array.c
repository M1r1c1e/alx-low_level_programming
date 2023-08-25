#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 * @a: array
 * @n: number of element of an array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int s;

	for (s = 0; s < n--; s++)
	{
		int t = a[s];

		t = a[s];

		a[s] = a[n];

		a[n] = t;
	}
}


