#include "main.h"

/**
 * print_line - prints a straight line
 * @n: number of times
 *
 * Return: 0 (success)
 */


void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
