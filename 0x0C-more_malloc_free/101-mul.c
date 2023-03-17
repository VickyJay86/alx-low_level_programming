#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"

/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit, otherwise 1
 */
int is_digit(char *s)
{
	int a = 0;

	while (s[a])
	{
		if (s[a] < '0' || s[a] > '9')
			return (0);
		a++;
	}
	return (1);
}


/**
 * _strlen - returns the length of a string
 * @s: Input string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}


/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");

	exit(98);
}


/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *x, *y;

	int l1, l2, l, b, c, d1, d2, *result, a = 0;

	x = argv[1], y = argv[2];

	if (argc != 3 || !is_digit(x) || !is_digit(y))
		errors();

	l1 = _strlen(x);

	l2 = _strlen(y);

	l = l1 + l2 + 1;

	result = malloc(sizeof(int) * l);

	if (!result)
		return (1);

	for (b = 0; b <= l1 + l2; b++)
		result[b] = 0;

	for (l1 = l1 - 1; l1 >= 0; l1--)
	{
		d1 = x[l1] - '0';
		c = 0;

		for (l2 = _strlen(y) - 1; l2 >= 0; l2--)
		{
			d2 = y[l2] - '0';
			c += result[l1 + l2 + 1] + (d1 * d2);

			result[l1 + l2 + 1] = c % 10;
			c /= 10;
		}
		if (c > 0)
			result[l1 + l2 + 1] += c;
	}
	for (b = 0; b < l - 1; b++)
	{
		if (result[b])
			a = 1;
		if (a)
			_putchar(result[b] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
