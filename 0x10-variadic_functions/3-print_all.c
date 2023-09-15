#include "variadic_functions.h"

/**
 * print_all - printing anything.
 * @format: an argument
 * Return: 0.
 */

void print_all(const char * const format, ...)
{
	int idx, fig;
	char *str;
	va_list mypx;

	idx = 0;

	va_start(mypx, format);
	while (format != NULL && format[idx] != '\0')
	{
		switch (format[idx])
		{
			case 'i':
				printf("%i", va_arg(mypx, int));
				fig = 0;
				break;
			case 's':
				str = va_arg(mypx, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				fig = 0;
				break;
			case 'c':
				printf("%c", va_arg(mypx, int));
				fig = 0;
				break;
			case 'f':
				printf("%f", va_arg(mypx, double));
				fig = 0;
				break;
			default:
				fig = 1;
				break;
		}
		if (fig == 0 && format[idx + 1] != '\0')
			printf(", ");
		idx++;
	}
	printf("\n");
	va_end(mypx);
}
