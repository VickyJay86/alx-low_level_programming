#include <stdio.h>

/**
  * main - Prints the sum of Even Fibonacci numbers
  * not more than 4000000.
  *
  * Return: Always 0
  */
int main(void)
{
	int a = 0;
	unsigned long b = 1, c = 2, sum = c;

	while (c + b < 4000000)
	{
		c += b;

		if (c % 2 == 0)
			sum += c;

		b = c - b;

		++a;
	}

	printf("%ld\n", sum);
	return (0);
}