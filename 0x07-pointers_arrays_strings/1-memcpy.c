#include "main.h"

/**
 * _memcpy - A function that copies memory area
 *
 * @n: Input number of bytes
 *
 * @src: bytes from memory area
 *
 * @dest: Memory area storage
 *
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		dest[a] = src[a];
		a++;
	}

	return (dest);
}
