#include "3-calc.h"

#include <stdlib.h>

/**
 * get_op_func - Selecting the correct function to perform
 *               the operation asked by the user.
 * @s: The operator argument.
 *
 * Return: thepointer to the function corresponding to the operator.
 */

int (*get_op_func(char *s))(int, int)
{

	op_t ops[] = {

		{"+", op_add},

		{"-", op_sub},

		{"*", op_mul},

		{"/", op_div},

		{"%", op_mod},

		{NULL, NULL},

	};

	int kbs = 0;

	while (ops[kbs].op != NULL && *(ops[kbs].op) != *s)

		kbs++;

	return (ops[kbs].f);

}
