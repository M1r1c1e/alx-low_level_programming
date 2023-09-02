#include "main.h"

/**
 * _puts -the function that print a string
 * @str: the string to be printed
 * Return: void
 */

void _puts(char *str)
{
	int k;

	for (k = 0; str[k] != '\0'; k++)
		_putchar(str[k]);
	_putchar('\n');
}
