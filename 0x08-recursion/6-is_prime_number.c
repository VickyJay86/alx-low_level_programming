#include "main.h"

/**
 * check - checks to see if number is prime
 * @a: First integer type
 * @b: Second integer type
 * Return: 1 if a is prime, 0 if not
 */
int check(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (check(a + 1, b));
}

/**
 * is_prime_number - states if number is prime
 * @n: input integer
 * Return: 1 if n is prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}
