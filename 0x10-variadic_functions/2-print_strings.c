#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings followed by a new line.
 * @separator: A string that is used to separate strings
 * @n: The number of strings passed to the function
 * Return: 0 (success)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *s;
	unsigned int y;
	va_list string;

	va_start(string, n);
	if (separator == NULL)
		separator = "";

	for (y = 0; y < n; y++)
	{
		s = va_arg(string, char*);
		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (y < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
