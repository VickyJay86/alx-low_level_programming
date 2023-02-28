#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: The string to print
 * return: 0 (success)
 */
void print_rev(char *s)
{
	int a = 0;
	int b;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	s--;
	for (b = a; b > 0; b--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

