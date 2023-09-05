#include <stdlib.h>
#include "main.h"

void mywstr(char **, char *);
void cmyword(char **, char *, int, int, int);

/**
 * strtow - a function use to split a string to words.
 * @str: the string .
 * Return: splited words pointer.
 */

char **strtow(char *str)
{
	int kb, lag, when;
	char **woods;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
	{
		return (NULL);
	}


	kb = lag = when = 0;

	while (str[kb])

	{
		if (lag == 0 && str[kb] != ' ')
			lag = 1;

		if (kb > 0 && str[kb] == ' ' && str[kb - 1] != ' ')

		{
			lag = 0;
			when++;
		}

		kb++;
	}

	when += lag == 1 ? 1 : 0;

	if (when == 0)
	{
		return (NULL);
	}


	woods = (char **)malloc(sizeof(char *) * (when + 1));

	if (woods == NULL)
	{
		return (NULL);
	}

	mywstr(woods, str);
	woods[when] = NULL;
	return (woods);
}

/**
 * mywstr - converting words into strings.
 * @woods: the converted words.
 * @str: the string converted to.
 * Return: none
 */

void mywstr(char **woods, char *str)
{
	int kb, j, tart, wag;

	kb = j = wag = 0;

	while (str[kb])

	{
		if (wag == 0 && str[kb] != ' ')

		{
			tart = kb;
			wag = 1;
		}

		if (kb > 0 && str[kb] == ' ' && str[kb - 1] != ' ')

		{
			cmyword(woods, str, tart, kb, j);
			j++;
			wag = 0;
		}

		kb++;
	}

	if (wag == 1)
	{
		cmyword(woods, str, tart, kb, j);
	}

}

/**
 * cmyword - creating word from string.
 * @woods: the words to be inserted
 * @str: the string worked on.
 * @start: the begining.
 * @end: when its suppose to end.
 * @index: the point to inset a new word.
 */

void cmyword(char **woods, char *str, int start, int end, int index)
{
	int kb, j;

	kb = end - start;
	woods[index] = (char *)malloc(sizeof(char) * (kb + 1));

	for (j = 0; start < end; start++, j++)
	{
		woods[index][j] = str[start];
	}

	woods[index][j] = '\0';
}
