#include "3-calc.h"


int op_add(int a, int b);

int op_sub(int a, int b);

int op_mul(int a, int b);

int op_div(int a, int b);

int op_mod(int a, int b);


/**
 * op_add - addition of two numbers
 * @a: The first input value.
 * @b: The second input value
 *
 * Return: The addition of value a and b.
 */

int op_add(int a, int b)

{
	return (a + b);
}

/**
 * op_sub - printing out the difference of two value.
 * @a: The first value input.
 * @b: The second value input
 *
 * Return: difference of a and b.
 */

int op_sub(int a, int b)

{
	return (a - b);
}
/**
 * op_mul - printing out product of two numbers.
 * @a: The first value input.
 * @b: The second value input.
 *
 * Return: product of a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);

}

/**
 * op_div - printing out the result of dividing two numbers
 * @a: The first input value
 * @b: The second input value
 *
 * Return: a divided by b.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - printing out the remainder of two numbers division
 * @a: The first value input
 * @b: The second value input
 *
 * Return: The remainder gotten from dividing a by b.
 */

int op_mod(int a, int b)
{
	return (a % b);

}

