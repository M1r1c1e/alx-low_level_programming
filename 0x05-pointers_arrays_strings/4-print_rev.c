#include "main.h"

/**
 * print_rev - printing string in reverse
 * @s: the string to be reversed
 * Return: void
 */

void print_rev(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
		length++;
	for (i = length - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
