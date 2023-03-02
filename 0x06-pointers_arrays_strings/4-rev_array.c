#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array of integers
 * @n: number of elements to swap
 *
 * Return: 0 (success)
 */
void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < n--; x++)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}

