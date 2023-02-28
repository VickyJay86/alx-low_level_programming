#include "main.h"
/**
 * puts2 - prints every other character of a string
 *
 * @str: input string
 *
 * Return: 0 (success)
 */
void puts2(char *str)
{
	int A;

	for (A = 0; str[A] != '\0'; A++)
	if (A % 2 == 0)
		_putchar(str[A]);
	_putchar('\n');
}
