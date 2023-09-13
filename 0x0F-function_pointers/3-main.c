#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Printing and performing simple operation
 * @argc: an argument
 * @argv: pointer array
 *
 * Return: Always 0.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;

	char *op_sign;

	if (argc != 4)

	{
		printf("Error\n");

		exit(98);

	}
	num1 = atoi(argv[1]);

	op_sign = argv[2];

	num2 = atoi(argv[3]);

	if (get_op_func(op_sign) == NULL || op_sign[1] != '\0')

	{

		printf("Error\n");

		exit(99);

	}
	if ((*op_sign == '/' && num2 == 0) ||

		(*op_sign == '%' && num2 == 0))
	{
		printf("Error\n");

		exit(100);
	}
	printf("%d\n", get_op_func(op_sign)(num1, num2));

	return (0);
}


