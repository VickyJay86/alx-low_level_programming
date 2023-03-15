#include "main.h"

/**
  * _memset - Fill memory with a constant byte
  * @s: input memory area
  * @b: input the desired value
  * @n: bytes of the memory area pointed to by @s
  *
  * Return:  a pointer to the memory area s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
