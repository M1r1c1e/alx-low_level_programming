#include "main.h"

#include <stdlib.h>

/**
 * str_concat - concatenating two strings
 * @s1: content in the new pointer
 * @s2: content
 * Return: s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *fall;

	int mg, sg;

	if (s1 == NULL)

		s1 = "";

	if (s2 == NULL)

		s2 = "";


	mg = sg = 0;

	while (s1[mg] != '\0')

		mg++;

	while (s2[sg] != '\0')

		sg++;

	fall = malloc(sizeof(char) * (mg + sg + 1));


	if (fall == NULL)

		return (NULL);

	mg = sg = 0;

	while (s1[mg] != '\0')

	{

		fall[mg] = s1[mg];

		mg++;

	}


	while (s2[sg] != '\0')

	{

		fall[mg] = s2[sg];

		mg++, sg++;

	}

	fall[mg] = '\0';

	return (fall);

}


