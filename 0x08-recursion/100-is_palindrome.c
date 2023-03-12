#include "main.h"

int pal_checker(char *s, int a, int b);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (pal_checker(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
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
 * pal_checker - checks the characters recursively for palindrome
 * @s: string to check
 * @a: iterator
 * @b: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int pal_checker(char *s, int a, int b)
{
	if (*(s + a) != *(s + b - 1))
		return (0);
	if (a >= b)
		return (1);
	return (pal_checker(s, a + 1, b - 1));
}

