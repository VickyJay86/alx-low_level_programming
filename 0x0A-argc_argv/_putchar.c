#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: Input char
 *
 * Return: 1 (success)
 * On error, return -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

