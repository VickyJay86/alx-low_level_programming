#include "main.h"
#include <stdio.h>

/**
  * _isdigit - Checks for a digit (0 through 9).
  * @c: Input number
  *
  * Return: 1 for digit char and  0 for any other
  */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}

	return (0);
}
