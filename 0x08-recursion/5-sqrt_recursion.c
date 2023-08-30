#include "main.h"


int actual_sqrt_recursion(int n, int q);


/**
 * _sqrt_recursion - returning the natural square root of a number
 * @n: the value in which the square root is calculated on
 *
 * Return: the square root result
 */

int _sqrt_recursion(int n)

{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}


/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: the value in which the square root is calculated on
 * @q: iterator
 *
 * Return: the square root result
 */

int actual_sqrt_recursion(int n, int q)

{
	if (q * q > n)
		return (-1);
	if (q * q == n)
		return (q);
	return (actual_sqrt_recursion(n, q + 1));
}


