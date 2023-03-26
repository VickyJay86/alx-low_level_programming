#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: char type pointer
 * @s2: char type pointer
 *
 * Return: concatenated s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int x, x2, y, z;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	x = 0;
	while (s1[x] != '\0')
		x++;
	x2 = 0;
	while (s2[x2] != '\0')
		x2++;

	p = malloc(sizeof(char) * x + x2 + 1);
	if (p == NULL)
		return (NULL);

	y = 0;
	while (s1[y] != '\0')
	{
		p[y] = s1[y];
		y++;
	}

	z = 0;
	while (s2[z] != '\0')
	{
		p[y] = s2[z];
		y++;
		z++;
	}
	p[y] = '\0';
	return (p);
}
