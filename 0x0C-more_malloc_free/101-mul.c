#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _atoi_digit - convert a char to integer.
 * @xtr: character to convert.
 * Return: integer.
 **/

int _atoi_digit(char xtr)
{
	unsigned int es;

	if (xtr <= '9' && xtr >= '0')
		es = xtr - '0';
	return (es);
}

/**
 * _isNumber - Define if a string is a number.
 * @argv: Pointer to string.
 * Return: success (0).
 **/
int _isNumber(char *argv)
{
	int kb;

	for (kb = 0; argv[kb]; kb++)
		if (argv[kb] < 48 || argv[kb] > 57)
			return (1);
	return (0);
}

/**
 *_calloc - allocate array of size * nmemb.
 * @nmemb: number of elements.
 * @size: size of element.
 * Return: pointer to array.
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *aab;
	unsigned int kb;

	aab = malloc(size * nmemb);

	if (aab == NULL)
		return (NULL);

	for (kb = 0; kb < (size * nmemb); kb++)
		aab[kb] = '0';

	return (aab);
}

/**
 * mul_array - multiply two arrays.
 * @a1: first array.
 * @len1: length of array a1.
 * @a2:  char.
 * @a3: array for result.
 * @lena: length of array a3.
 * Return: pointer to array.
 **/

void *mul_array(char *a1, int len1, char a2, char *a3, int lena)
{
	int mul = 0, kb, kkk;

	kkk = lena;
	for (kb = len1 - 1; kb >= 0 ; kb--)
	{
		mul += (a1[kb] - '0') * (a2 - '0') + (a3[kkk] - '0');
		a3[kkk] = (mul % 10) + '0';
		mul /= 10;
		kkk--;
	}

	while (mul != 0)
	{
		mul += a3[kkk] - '0';
		a3[kkk] = (mul % 10) + '0';
		mul /= 10;
		kkk--;
	}

	return (a3);
}
/**
 * print_array - print all digits of array.
 * @nb: number of elements to print.
 * @a: array of elements.
 **/
void print_array(char *a, int nb)
{
	int kb = 0;

	while (a[kb] == '0' && (kb + 1) < nb)
	{
		kb++;
	}
	for (; kb < nb; kb++)
	{
		_putchar(a[kb]);
	}
	_putchar('\n');
}

/**
 *main - print the multiplication of 2 numbers.
 *@argc: array length.
 *@argv: array.
 *Return: 0.
 */

int main(int argc, char *argv[])
{
	int kb, c, len1, len2, lenres;
	char E[6] = {'E', 'r', 'r', 'o', 'r', '\n'};
	char *tabres;

	if (argc != 3 || _isNumber(argv[1]) == 1 || _isNumber(argv[2]) == 1)
	{
		for (kb = 0; kb < 6; kb++)
		{
			_putchar(E[kb]);
		}
		exit(98);
	}
	for (len1 = 0; argv[1][len1]; len1++)
		;
	for (len2 = 0; argv[2][len2]; len2++)
		;
	lenres = len1 + len2;
	tabres = _calloc(lenres, sizeof(int));
	if (tabres == NULL)
	{
		free(tabres);
		return (0);
	}
	for (kb = len2 - 1, c = 0; kb >= 0; kb--)
	{
		tabres = mul_array(argv[1], len1, argv[2][kb], tabres, (lenres - 1 - c));
		c++;
	}
	print_array(tabres, lenres);
	free(tabres);
	exit(EXIT_SUCCESS);
	return (0);
}
