
#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char ab;

	for (n = 0; n < 10; n++)
	{
		putchar((n % 10) + '0');
	}
	for (ab = 'a'; ab <= 'f'; ab++)
	{
		putchar(ab);
	}
	putchar('\n');
	return (0);
}

