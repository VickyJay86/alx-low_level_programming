
#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * argstostr - concatenates all the arguments of your program.
  * @ac: Input count
  * @av: Inputt  vector
  *
  * Return: 0 (success)
  */
char *argstostr(int ac, char **av)
{
	int b = 0, x = 0, y = 0, z = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (x < ac)
	{
		while (av[x][y])
		{
			b++;
			y++;
		}

		y = 0;
		x++;
	}

	s = malloc((sizeof(char) * b) + ac + 1);

	x = 0;
	while (av[x])
	{
		while (av[x][y])
		{
			s[z] = av[x][y];
			z++;
			y++;
		}

		s[z] = '\n';

		z = 0;
		z++;
		x++;
	}

	z++;
	s[z] = '\0';
	return (s);
}
