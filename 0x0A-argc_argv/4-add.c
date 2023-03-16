#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: number of argument
 * @argv: array of argument
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int x, y, result;

	result = 0;
	if (argc > 1)
	{
		for (x = 1; x < argc; x++)
		{
			for (y = 0; argv[x][y] != '\0'; y++)
			{
				if (argv[x][y] >= '0' && argv[x][y] <= '9')
				{
					continue;
				} else
				{
					printf("Error\n");
					return (1);
				}
			}
			result += atoi(argv[x]);
		}
		printf("%d\n", result);
	} else
		printf("0\n");
	return (0);
}
