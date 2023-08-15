#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet in lowercase
 *
 * Return:void
 */
void print_alphabet_x10(void);
{
	char o;

	for (int m = 0; m < 10; m++)
	{
		o = 'a';

	while (o < 'z')
	{
		_putchar(o);

		o++;

	}

	}

	_putchar('\n');
}
