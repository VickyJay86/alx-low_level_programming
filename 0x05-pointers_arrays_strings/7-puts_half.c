#include "main.h"
/**
 * puts_half - prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input char
 *
 * Return: 0 (success)
 */
void puts_half(char *str)
{
	int a = 0, n;

	while (str[a] != '\0')
		a++;
	if (a + 1 % 2 != '0')
		n = (a - 1) / 2;
	else
		n = (a / 2);
	n++;

	for (a = n; str[a] != '\0'; a++)
	_putchar(str[a]);
	_putchar('\n');
}
