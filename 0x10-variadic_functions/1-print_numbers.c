#include "variadic_functions.h"

/**
 * print_numbers - a function for printing numbers.
 * @n: int n input
 * @separator: pointer string
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list figlist;
	int numero = n;

	if (separator == NULL)
		separator = "";

	va_start(figlist, n);
	if (numero--)
		printf("%d", va_arg(figlist, int));
	while (numero-- > 0)
		printf("%s%d", separator, va_arg(figlist, int));
	printf("\n");
	va_end(figlist);
}
