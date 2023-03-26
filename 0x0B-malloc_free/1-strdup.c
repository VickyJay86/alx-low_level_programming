#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: Input source string
 *
 * Return: 0 (success)
 */
char *_strdup(char *str)
{
	char *c;
	int y, l = 0;

	if (str == NULL)
		return (NULL);

	while (str[l] != '\0')
		l++;

	c = (char *)malloc((sizeof(char) * l) + 1);
	if (c == NULL)
		return (NULL);

	for (y = 0; y < l; y++)
		c[y] = str[y];
	c[l] = '\0';

	return (c);
}
