#include <stdio.h>

#include "main.h"


/**
 * main - prints the number of argument
 * @argc: amount of arguments
 * @argv: array
 *
 * Return: Always 0
 */


int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
