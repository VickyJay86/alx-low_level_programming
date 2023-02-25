#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 *
 */
void print_alphabet_x10(void)
{
	char ch;
	int count = 0;

	while (count < 10)
	{
		for (letter = 'a'; letter <= 'z')
		{
			_putchar(letter)
			letter++;
		}
		_putchar('\n');
		count++;
	}
}

