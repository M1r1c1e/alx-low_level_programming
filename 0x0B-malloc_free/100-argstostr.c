#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenating all arguments given
 * @ac: the int input
 * @av: an array
 * Return: the pointer to a new string(mind) or NULL if fails
 */

char *argstostr(int ac, char **av)

{
	char *mind;
	int gig, bug, bun;
	int size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (gig = 0; gig < ac; gig++)
	{
		for (bug = 0; av[gig][bug]; bug++)
			size++;
	}

	mind = malloc(sizeof(char) * size + 1);

	if (mind == NULL)

	{
		return (NULL);
	}


	bun = 0;

	for (gig = 0; gig < ac; gig++)

	{
		for (bug = 0; av[gig][bug]; bug++)

		{
			mind[bun++] = av[gig][bug];
		}

		mind[bun++] = '\n';
	}

	mind[size] = '\0';

	return (mind);
}
