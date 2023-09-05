#include <stdio.h>

#include <stdlib.h>

#include "main.h"

/**
 * _strdup - returning a pointer to a newly allocated space in memory
 * @str: string of characters
 * Return: return null or pointer to duplicated string
 */

char *_strdup(char *str)
{
	char *spa;

	int zo, my = 0;


	if (str == NULL)

		return (NULL);

	zo = 0;

	while (str[zo] != '\0')

		zo++;


	spa = malloc(sizeof(char) * (zo + 1));


	if (spa == NULL)

		return (NULL);


	for (my = 0; str[my]; my++)

		spa[my] = str[my];


	return (spa);

}



