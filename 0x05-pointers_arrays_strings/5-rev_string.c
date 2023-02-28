#include "main.h"

/**
  * rev_string - Reverses a string
  * @s: input string
  *
  * Return: 0 (success)
  */
void rev_string(char *s)
{
	int a = 0;
	int b = 0;
	char *s = str;
	int c;

	while (*s != '\0')
	{
		s++;
		a++;
	}
	b = a - 1;
	for (c = 0 ; c <= b ; c++)
	{
		if (c % 2 == 0)
	{
		_putchar(str[c]);
	}
	}
	_putchar('\n');
}

