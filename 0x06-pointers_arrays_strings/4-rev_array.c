#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 * @a: array
 * @n: number of element of an array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int s = 0;
	int e = n - 1;

	while (s < e)
	{
		int t = a[s];

		a[s] = a[e];
		a[e] = t;

		s++;
		e++;
	}
}


