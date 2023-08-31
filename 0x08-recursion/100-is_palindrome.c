#include "main.h"


int check_pal(char *s, int f, int range);

int _strlen_recursion(char *s);


/**
 * is_palindrome - to check if a string is a palindrome
 * @s: string
 *
 * Return: 1 string is a palindrome and 0 if not
 */

int is_palindrome(char *s)

{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}


/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)

{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));

}


/**
 * check_pal -inspects the characters recursively for palindrome
 * @s: string
 * @f: iterator
 * @range: length of the string
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */

int check_pal(char *s, int f, int range)

{
	if (*(s + f) != *(s + range - 1))
		return (0);
	if (f >= range)
		return (1);
	return (check_pal(s, f + 1, range - 1));

}


