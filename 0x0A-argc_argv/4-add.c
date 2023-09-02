#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check if string contains digits
 * @str: str array
 *
 * Return: Always 0
 */

int check_num(char *str)

{
	unsigned int tally;

	tally = 0;

	while (tally < strlen(str))
	{
		if (!isdigit(str[tally]))
		{
			return (0);
		}
		tally++;
	}
	return (1);

}


/**
 * main - Print program name
 * @argc: tally arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */


int main(int argc, char *argv[])
{
	int tally;
	int str_to_int;
	int plus = 0;

	tally = 1;

	while (tally < argc)
	{
		if (check_num(argv[tally]))
		{
			str_to_int = atoi(argv[tally]);
			plus += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		tally++;
	}
	printf("%d\n", plus);
	return (0);
}

