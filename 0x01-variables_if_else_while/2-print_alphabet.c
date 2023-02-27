#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ab;

	for (ab = 'a'; ab <= 'z'; ab++)
		putchar(ab);

	putchar('\n');

	return (0);
}
