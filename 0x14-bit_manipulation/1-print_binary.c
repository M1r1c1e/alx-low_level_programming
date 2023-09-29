#include "main.h"

/**
 * print_binary - printng the binary equivalent of a decimal number
 * @n: the number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, miracount = 0;
	unsigned long int miracurrent;

	for (i = 63; i >= 0; i--)
	{
		miracurrent = n >> i;

		if (miracurrent & 1)
		{
			_putchar('1');
			miracount++;
		}
		else if (miracount)
			_putchar('0');
	}

	if (!miracount)
		_putchar('0');
}

