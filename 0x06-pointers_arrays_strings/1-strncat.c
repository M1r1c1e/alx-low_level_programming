#include "main.h"

/**
 * _strncat - concatenating two strings
 * @dest: input value
 * @src: input value
 * @n: input value
 * return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *real_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';

	return (real_dest);
}

