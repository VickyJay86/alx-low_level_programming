#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints all of the arguments when specified
 * @format: specifies types of argument neccessary
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int x;
	int y;
	char *str;
	va_list list;

	va_start(list, format);
	x = 0;
	while (format != NULL && format[x] != '\0')
	{
		switch (format[x])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				y = 0;
				break;
			case 'i':
				printf("%i", va_arg(list, int));
				y = 0;
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				y = 0;
				break;
			case 's':
				str = va_arg(list, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				y = 0;
				break;
			default:
				y = 1;
				break;
		}
		if (format[x + 1] != '\0' && y == 0)
			printf(", ");
		x++;
	}
	printf("\n");
	va_end(list);
}
