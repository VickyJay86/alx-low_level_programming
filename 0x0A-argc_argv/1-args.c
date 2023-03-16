#include <stdio.h>

/**
 * main - prints the number of arguments passed to the program
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
