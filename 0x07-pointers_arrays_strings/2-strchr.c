#include "main.h"
#include <stdio.h>

/**
 * _strchr - locating a character in a string
 * @s: string
 * @c:  character 
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}
