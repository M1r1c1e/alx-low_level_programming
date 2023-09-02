#include "main.h"
#include <stdio.h>

/**
 * _strstr - locating a substring
 * @haystack: string
 * @needle: substring
 * Return: haystack or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *sun = haystack;
		char *pin = needle;

		while (*pin == *haystack && *pin != '\0' && *haystack != '\0')
		{
			haystack++;
			pin++;
		}
		if (*pin == '\0')
			return (sun);
		haystack = sun + 1;
	}
	return (NULL);
}
