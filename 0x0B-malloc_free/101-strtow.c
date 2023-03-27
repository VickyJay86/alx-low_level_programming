#include <stdlib.h>
#include "main.h"

/**
 * count_word -  counts the number of words in a string
 * @s: Input string
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int f, x, y;

	f = 0;
	y = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == ' ')
			f = 0;
		else if (f == 0)
		{
			f = 1;
			y++;
		}
	}

	return (y);
}

/**
 * **strtow - splits  strings into words
 * @str: Input string
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **arr, *t;
	int a, b = 0, l = 0, words, c = 0, st, end;

	while (*(str + l))
		l++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	arr = (char **) malloc(sizeof(char *) * (words + 1));
	if (arr == NULL)
		return (NULL);

	for (a = 0; a <= l; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (c)
			{
				end = a;
				t = (char *) malloc(sizeof(char) * (c + 1));
				if (t == NULL)
					return (NULL);
				while (st < end)
					*t++ = str[st++];
				*t = '\0';
				arr[b] = t - c;
				b++;
				c = 0;
			}
		}
		else if (c++ == 0)
			st = a;
	}

	arr[b] = NULL;

	return (arr);
}
