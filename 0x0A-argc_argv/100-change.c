#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - printing the minimum number of coins
 * @argc: total sum of arguments
 * @argv: array
 *
 * Return: 0, 1 (Error)
 */

int main(int argc, char *argv[])
{
	int nm, wt, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	nm = atoi(argv[1]);
	result = 0;

	if (nm < 0)
	{
		printf("0\n");
		return (0);
	}
	for (wt = 0; wt < 5 && nm >= 0; wt++)
	{
		while (nm >= coins[wt])
		{
			result++;
			nm -= coins[wt];
		}
	}
	printf("%d\n", result);

	return (0);

}







