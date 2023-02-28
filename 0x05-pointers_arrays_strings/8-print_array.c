#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @a: Array of integers
 * @n: Is the number of elements of the array to be printed
 * Return: 0 (success)
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < (n - 1); b++)
	{
		printf("%d, ", a[b]);
	}
		if (b == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}

