#inxlude "main.h"

/**
  * leet - Encodes a string into 1337
  * @str: The string to encode
  *
  * Return: The encoded string
  */
char *leet(char *str)
{
	int a = 0, b = 0, p = 5;
	char x[5] = {'A', 'E', 'O', 'T', 'L'};
	char y[5] = {'4', '3', '0', '7', '1'};

	while (str[a])
	{
		b = 0;

		while (b < p)
		{
			if (str[a] == x[b] || str[a] - 32 == x[b])
			{
				str[a] = y[b];
			}

			b++;
		}

		a++;
	}

	return (str);
}

