#include "main.h"

/**
 * puts_half - prnt half of the string
 * @str: void
 */

void puts_half(char *str)
{
	int j, n, length = 0;

	for (j = 0; str[j] != '\0'; j++)
		length++;
	n = (length - 1) / 2;
	for ( j = n + 1; str[j] != '\0'; j++)
		_putchar(str[j]);
	_putchar('\n');
}

