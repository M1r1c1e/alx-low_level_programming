#include <stdio.h>

#include "main.h"


/**
 * _atoi - converting a string to an integer
 * @s: the converting string
 *
 * Return: the converted int from the string
 */

int _atoi(char *s)
{
	int u, v, n, len, f, dt;
	u = 0;
	v = 0;
	n = 0;
	len = 0;
	f = 0;
	dt = 0;

	while (s[len] != '\0')
		len++;
	while (u < len && f == 0)
	{
		if (s[u] == '-')
			++v;
		if (s[u] >= '0' && s[u] <= '9')
		{
			dt = s[u] - '0';
			if (v % 2)
				dt = -dt;
			n = n * 10 + dt;
			f = 1;
			if (s[u + 1] < '0' || s[u + 1] > '9')
				break;
			f = 0;
		}
		u++;
	}
	if (f == 0)
		return (0);
	return (n);
}


/**
 * main - multiplying two numbers
 * @argc: sum total of arguments
 * @argv: array
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int result, nm1, nm2;
	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	nm1 = _atoi(argv[1]);
	nm2 = _atoi(argv[2]);
	result = nm1 * nm2;
	printf("%d\n", result);
	return (0);
}
