#include "main.h"


/**
 * print_number - print numbers chars
 * @s: integer params
 * Return: 0
 */


void print_number(int s)

{

	unsigned int n1;


	n1 = s;


	if (s < 0)

	{

		_putchar('-');

		n1 = -s;

	}


	if (n1 / 10 != 0)

	{

		print_number(n1 / 10);

	}

	_putchar((n1 % 10) + '0');

}


