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

	for (n = 35; n < 45; n++)
	{
		putchar(n);
	}
	for (ab = 'a'; ab <= 'f'; ab++)
	{
		putchar(ab);
	}
	putchar('\n');
	return (0);
}

