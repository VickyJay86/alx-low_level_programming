#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: The number of paramters passed to the function
 *
 * Return: 0 (success)
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int y;
	int sum = 0;
	va_list arg;

	if (n == 0)
		return (0);
	va_start(arg, n);
	for (y = 0; y < n; y++)
	{
		sum += va_arg(arg, int);
	}
	va_end(arg);
	return (sum);
}

