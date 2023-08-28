#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard.
 * @a: string of characters
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
	int d, e;

	d = 0;
	while (d < 8)
	{
		e = 0;
		while (e < 8)
		{
			_putchar(a[d][e]);
			e++;
		}
		_putchar('\n');
		d++;
	}
}
