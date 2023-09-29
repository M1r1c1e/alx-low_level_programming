#include "main.h"
/**
 * get_endianness - checking if a machine is little or big endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int mira_i = 1;
	char *mira_c = (char *)&mira_i;

	return (*mira_c);
}

