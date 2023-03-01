#include "main.h"

/**
 * print_numbers - print the number 0-9
 * return: 0 (success)
 */

void print_numbers(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}

