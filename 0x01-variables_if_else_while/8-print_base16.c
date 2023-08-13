#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int w;
	char s;

	for (w = 0; w < 10; w++)
		putchar(w + '0');
	for (s = 'a'; s <= 'f'; s++)
		putchar(s);
	putchar('\n');
	return (0);
}

