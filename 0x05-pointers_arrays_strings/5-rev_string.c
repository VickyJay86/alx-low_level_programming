#include "main.h"
#include <stdio.h>

/**
  * rev_string - Reverses a string
  * @str: input string
  *
  * Return: 0 (success)
  */
void rev_string(char *str)
{
	char d = str[0];
	int counter = 0;
	int a;

	while (str[counter] != '\0')
	counter++;
	for (a = 0; a < counter; a++)
	{
		counter--;
		d = str[a];
		str[a] = str[counter];
		str[counter] = d;
	}
}

