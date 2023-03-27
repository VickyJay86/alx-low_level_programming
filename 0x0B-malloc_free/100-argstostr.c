
#include "main.h"
#include <stdlib.h>

/**
  * argstostr - concatenates all the arguments of your program.
  * @ac: Input count
  * @av: Inputt  vector
  *
  * Return: 0 (success)
  */
char *argstostr(int ac, char **av)
{

	int b, x, y = 0, z = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (b = 0; b < ac; b++)
	{
		for (x = 0; av[b][x]; x++)
			z++;
	}
	z += ac;

	s = malloc(sizeof(char) * z + 1);
	if (s == NULL)
		return (NULL);
	for (b = 0; b < ac; b++)
	{
	for (x = 0; av[b][x]; x++)
	{
		s[y] = av[b][x];
		y++;
	}
	if (s[y] == '\0')
	{
		s[y++] = '\n';
	}
	}
	return (s);
}


