#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: char type pointer 1st argument
 * @accept: char type pointer 2nd argument
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a]; a++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (accept[b] == s[a])
				break;
		}
		if (!accept[b])
			break;
	}
	return (a);
}
