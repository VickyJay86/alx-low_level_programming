#include "main.h"

/**
  * print_triangle - Prints a triangle, followed by new line
  * @size: The size of the triangle
  *
  * Return: 0 (success)
  */
void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x < size; x++)
		{
			for (y = size - x; y >= 1; y--)
			{
				_putchar(' ');
			}

			for (z = 1; z <= x; z++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
