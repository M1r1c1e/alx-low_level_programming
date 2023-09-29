#include "main.h"
/**
 * get_bit - returning the value of a bit at an index in a decimal number
 * @n: the search number
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int mira_bval;

	if (index > 63)
		return (-1);

	mira_bval = (n >> index) & 1;

	return (mira_bval);
}

