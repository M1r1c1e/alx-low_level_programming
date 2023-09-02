#include <stdio.h>

#include "main.h"


/**
 * main - it prints its name
 * @argc: list of arguments
 * @argv: array of argument
 *
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);

}
