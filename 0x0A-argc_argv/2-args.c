#include <stdio.h>

#include "main.h"


/**
 * main - printing all aguements recieved
 * @argc: sum total of arguments
 * @argv: array
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int rt;

	for (rt = 0; rt < argc; rt++)
	{
		printf("%s\n", argv[rt]);
	}
	return (0);
}
