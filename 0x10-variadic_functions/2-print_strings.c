#include "variadic_functions.h"

/**
 * print_strings - printing a sting in a program
 * @n: integer inpust
 * @separator: string pointer
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list figlist;
	char *splitstr;
	int numero;

	if (n < 1)
	{
		printf("\n");
		return;
	}
	va_start(figlist, n);
	numero = 0;

	while (numero < (int) n)
	{
		splitstr = va_arg(figlist, char *);
		if (splitstr != NULL)
			printf("%s", splitstr);
		else
			printf("(nil)");
		if (separator != NULL && numero != (int) n - 1)
			printf("%s", separator);
		numero++;
	}
	printf("\n");
	va_end(figlist);
}
