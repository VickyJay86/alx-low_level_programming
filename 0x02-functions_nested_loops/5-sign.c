#include "main.h"

/**
 * print_sign - a function that prints the sign of a number
 * @n: the int to check
 * Return: 1 and prints + if n > 0
 * 0 prints '0' if n = 0
 * -1 prints '-' if n <  0
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('98');
	return (0);
	}
	else if (n < 0)
	{
	_putchar('-');
	}
	return (-1);
}


