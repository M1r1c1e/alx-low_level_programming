#include "main.h"


int actual_prime(int n, int k);


/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */

int is_prime_number(int n)

{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));

}


/**
 * actual_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @k: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */

int actual_prime(int n, int k)

{
	if (k == 1)
		return (1);
	if (n % k == 0 && k > 0)
		return (0);
	return (actual_prime(n, k - 1));

}
