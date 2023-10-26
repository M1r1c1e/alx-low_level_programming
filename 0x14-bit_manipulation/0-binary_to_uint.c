#include "main.h"
/**
 * binary_to_uint - converting a binary number to unsigned int
 * @b: string contained the binary number
 *
 * Return: the number converted
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int mira_val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		mira_val = 2 * mira_val + (b[i] - '0');
	}

	return (mira_val);
}


