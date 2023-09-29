#include "main.h"
/**
 * flip_bits - counting the number of bits to change
 * to get from one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, miracount = 0;
	unsigned long int miracurrent;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		miracurrent = exclusive >> i;

		if (miracurrent & 1)
			miracount++;
	}

	return (miracount);
}

