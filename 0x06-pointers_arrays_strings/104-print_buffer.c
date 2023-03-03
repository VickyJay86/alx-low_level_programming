#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: 0 (success)
 */

void print_buffer(char *b, int size)
{
	int a, x, y;

	a = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (a < size)
	{
		x = size - a < 10 ? size - a : 10;
		printf("%08x: ", a);
		for (y = 0; y < 10; y++)
		{
			if (y < x)
				printf("%02x", *(b + a + y));
			else
				printf("  ");
			if (y % 2)
			{
				printf(" ");
			}
		}
		for (y = 0; y < x; y++)
		{
			int c = *(b + a + y);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		a += 10;
	}
}


