#include "main.h"

/**
  * rev_string - Reverses a string
  * @s: input string
  *
  * Return: 0 (success)
  */
void rev_string(char *s)
{
	int a, b, c;
	char *d;

	d = s;

	while (s[b] != '\0')
	{
		b++;
	}

	for (c = 1; c < b; c++)
	{
		d++;
	}

	for (a = 0; a < (b / 2); a++)
	{
		*d = s[a];
		s[a] = *d;
		d--;
	}
}
