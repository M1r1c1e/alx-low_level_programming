#include "main.h"

/**
 * _pow_recursion - returning the value of x raised to the power y
 * @x: the value raised
 * @y: the power
 * Return: the result of the power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}

