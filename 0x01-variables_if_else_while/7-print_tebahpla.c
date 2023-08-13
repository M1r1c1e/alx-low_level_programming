#include <stdio.h>

/**
 * main - main function
 *
 * Return: Always 0
 */

int main(void)
{
	char u;

	for (u = 'z'; u >= 'a'; u--)
		putchar(u);
	putchar('\n');
	return (0);
}
