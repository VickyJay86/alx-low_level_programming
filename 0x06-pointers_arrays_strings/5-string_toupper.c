#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @s: Input string
 *
 * Return: s
 */
char *string_toupper(char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
	{
		if (s[x] >= 'a' && s[x] <= 'z')
			s[x] = s[x] - 32;
		x++;
	}
	return (s);
}


