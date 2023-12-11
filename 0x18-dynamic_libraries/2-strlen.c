#include "main.h"

/**
 * _strlen - finding the length of a string
 * @s: the string to be counted
 * Return: string length
 */

int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
		length++;
	return (length);
}
