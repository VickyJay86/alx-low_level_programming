#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 */
void print_alphabet_x10(void)
{
	char letter;
	int count = 0;

	while (count++ < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
		_putchar('\n');
	}
}
