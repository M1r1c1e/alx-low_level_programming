#include "main.h"

/**
 * puts2 - printing every other character of a string
 * @str: string to be printed
 * Return: void
 */

void puts2(char *str)
{
	int u;

	for (u = 0; str[u] != '\0'; u++)
	{
		if (u % 2 == 0)
			_putchar(str[u]);
	}
	_putchar('\n');
}
