#include "main.h"
/**
 * _isupper - Checks foruppercase letters
 * @c: Input character
 *
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

