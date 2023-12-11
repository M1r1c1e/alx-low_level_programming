#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Searching a string for any set of bytes
 * @s: string
 * @accept: string
 * Return: s or null if byte type is not found.
 */
char *_strpbrk(char *s, char *accept)
{
	int j, v;
	char *u;

	j = 0;
	while (s[j] != '\0')
	{
		v = 0;
		while (accept[v] != '\0')
		{
			if (accept[v] == s[j])
			{
				u = &s[j];
				return (u);
			}
			v++;
		}
		j++;
	}
	return (NULL);
}
