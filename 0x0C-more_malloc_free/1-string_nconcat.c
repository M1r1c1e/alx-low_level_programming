#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - returning the string full length
 * @s: character pointer
 * Return: Always 0.
 */
int _strlen(char *s)
{
	unsigned int ck;

	for (ck = 0; s[ck] != 0; ck++)
	{
	}
	return (ck);

}

/**
 * *string_nconcat - the function that concatenates two strings
 * @s1: type of string characters
 * @s2: type of string of characters
 * @n: input
 * Return: NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pin;
	unsigned int  siz, xyz, yyy;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	siz = (unsigned int)_strlen(s1);
	pin = malloc((siz + n + 1) * sizeof(char));
	if (pin == NULL)
		return (NULL);

	for (xyz = 0, yyy = 0; xyz < (siz + n); xyz++)
	{
		if (xyz < siz)
			*(pin + xyz) = *(s1 + xyz);
		else
		{
			*(pin + xyz) = *(s2 + yyy);
			yyy++;
		}
	}
	*(pin + xyz) = '\0';

	return (pin);
}
