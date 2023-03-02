
#include "main.h"

/**
 * print_most_numbers - print numbers 0 - 9, except 2 and 4
 *
 * Return: 0 (success)
 */

void print_most_numbers(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		if (!(a == '2' || a == '4'))
			_putchar(a);
	}
	_putchar('\n');
}
