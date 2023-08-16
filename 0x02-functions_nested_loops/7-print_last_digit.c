#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The number to be treated
 * Return: Value of the last digit of number
 */

int print_last_digit(int n)

{
	int end;

	end = n % 10;
	if (end < 0)
	{
	end = end * -1;
	}
	_putchar(end + '0');
	return (end);
}
