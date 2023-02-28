#include "main.h"
#include <stdio.h>

/**
  * rev_string - Reverses a string
  * @str: input string
  *
  * Return: 0 (success)
  */
void rev_string(char *str)
{
	int a = 0;
	int b = 0;
	char *d = str;
	int c;

	while (*d != '\0')
	{
		d++;
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

