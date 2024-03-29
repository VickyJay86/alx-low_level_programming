#include "main.h"

/**
  * _strncpy - Copies a string
  * @dest: Input destination value
  * @src: Input source value
  * @n: Input length value
  *
  * Return: char value
  */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (src[b])
	{
		b++;
	}

	while (a < n && src[a])
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
