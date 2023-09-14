#include <stdio.h>
#include <stdlib.h>


/**
 * main - printing its own opcodes function
 * @argc: size of arguments
 * @argv: array of characters
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int amt, siz;

	char *arr;

	if (argc != 2)
	{

		printf("Error\n");

		exit(1);

	}
	amt = atoi(argv[1]);

	if (amt < 0)
	{

		printf("Error\n");

		exit(2);

	}
	arr = (char *)main;


	for (siz = 0; siz < amt; siz++)
	{
		if (siz == amt - 1)
		{

		printf("%02hhx\n", arr[siz]);

			break;

		}
		printf("%02hhx ", arr[siz]);
	}

	return (0);

}


