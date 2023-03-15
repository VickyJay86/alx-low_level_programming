#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: input character
 * Return: 1 (success)
 * On error, return -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

