#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returning the sum of it parameters
 * @n: unsigned integer of the program
 * Return: sum of parameter
 */

int sum_them_all(const unsigned int n, ...)
{
	int add01;
	unsigned int fig;
	va_list numero;


	if (n == 0)
		return (0);

	va_start(numero, n);

	add01 = fig = 0;
	while (fig < n)
	{
		add01 = add01 + va_arg(numero, int);
		fig++;
	}
	va_end(numero);
	return (add01);
}
