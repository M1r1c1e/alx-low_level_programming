#include "main.h"
#include <stdio.h>

/**
 * _strspn - getting the lenght of a prefix substring.
 * @s: consist of bytes from accept
 * @accept: contains bytes and its located in s
 * Return: return h
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int str;
	int h, y, k;

	h = 0;
	while (s[h] != '\0')
	{
		k = 0;
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[h] == accept[y])
			{
				k = 1;
			}
		}
		y = 0;
		if (k == 0)
			break;
		str++;
		h++;
	}
	return (h);
}
