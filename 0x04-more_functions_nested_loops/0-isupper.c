#include "main.h"

/**
 * _isupper - Checks for uppercase characters
 * @y: input char
 *
 * Return: 1 for uppercase letter and 0 any other
 */

int _isupper(int y)
{
	if (y >= 'A' && y <= 'Z')
		return (1);
	else
		return (0);
}

