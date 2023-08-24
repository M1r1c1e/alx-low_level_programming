#include "main.h"

/**
 * string_toupper - changing all lower cases to uppercase
 * @str: pointer
 *
 * Return: str
 */

char *string_toupper(char *str)
{
	int w = 0;

	while (str[w] != '\0')
	{
		if (str[w] >= 'a' && str[w] <= 'z')
			str[w] = str[w] - 32;
		w++;
	}

	return (str);
}
