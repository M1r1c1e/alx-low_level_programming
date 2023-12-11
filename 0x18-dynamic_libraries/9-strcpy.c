#include "main.h"

/**
 * _strcpy - copies the string pointed
 * @dest: destination
 * @src: source
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int e;

	for (e = 0; src[e] != '\0'; e++)
		dest[e] = src[e];
	dest[e] = '\0';
	return (dest);
}
