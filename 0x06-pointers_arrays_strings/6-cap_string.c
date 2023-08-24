#include "main.h"

/**
 * cap_string - capitalizing all words of a string
 * @str : the string to be capitalized
 *
 * Return: the pointer to the changed strings
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
			i++;
		if (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == ',' || str[i - 1] == ';' ||
		str[i - 1] == '.' || str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
		str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' || str[i - 1] == '}' ||
		i == 0)
			str[i] -= 32;
		i++;
	}

	return (str);
}

