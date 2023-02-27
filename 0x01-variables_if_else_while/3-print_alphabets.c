#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int aA;

	for (aA = 'a'; aA <= 'z'; aA++)
		putchar(aA);
	for (aA = 'A'; aA <= 'Z'; aA++)
		putchar(aA);
	putchar('\n');
	return (0);
}

