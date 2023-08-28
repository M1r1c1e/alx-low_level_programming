#include "main.h"
#include <stdio.h>

/**
 * set_string - Setting the value of a pointer to a char.
 * @s: string input
 * @to: string input
 * Return: Always 0
 */
void set_string(char **s, char *to)
{
	*s = to;
}
